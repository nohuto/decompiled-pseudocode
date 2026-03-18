/*
 * XREFs of MiTrimSingleWsle @ 0x1400E4694
 * Callers:
 *     MiReplaceWorkingSetEntryLarge @ 0x1400E42B4 (MiReplaceWorkingSetEntryLarge.c)
 * Callees:
 *     MiRemoveSingleWsle @ 0x1400E47D4 (MiRemoveSingleWsle.c)
 *     MiDemoteCombinedPte @ 0x14012836C (MiDemoteCombinedPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiTrimSingleWsle(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v5; // rbx
  unsigned __int64 v6; // rbx
  __int64 v7; // rbx
  unsigned __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 result; // rax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 184);
  v5 = *(_QWORD *)(a2 * *(unsigned int *)(v2 + 64) + *(_QWORD *)(v2 + 496));
  if ( (v5 & 0x800000000000LL) != 0 )
    v6 = v5 | 0xFFFF000000000000uLL;
  else
    v6 = v5 & 0xFFFFFFFFFFFFLL;
  v7 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = MI_READ_PTE_LOCK_FREE(v7);
  v8 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v11) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v9 = *(_QWORD *)(v8 + 8);
  if ( v9 >= 0 )
    MiDemoteCombinedPte(v7, v9 | 0x8000000000000000uLL);
  if ( (*(_QWORD *)(v8 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && (*(_QWORD *)(v8 + 40) & 0x200000000000000LL) == 0
    || (*(_BYTE *)(a1 + 216) & 7) != 0 && *(_WORD *)(v8 + 32) > 1u
    || (unsigned int)MiRemoveSingleWsle(a1, a2) != 1 )
  {
    return 0LL;
  }
  result = 1LL;
  *(_QWORD *)(v2 + 24) = a2 + 1;
  return result;
}
