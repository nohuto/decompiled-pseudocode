/*
 * XREFs of MiTrimSingleWsle @ 0x1400FEF74
 * Callers:
 *     MiReplaceWorkingSetEntryLarge @ 0x1400FEB54 (MiReplaceWorkingSetEntryLarge.c)
 * Callees:
 *     MiGetSharedWorkingSetList @ 0x140046BF0 (MiGetSharedWorkingSetList.c)
 *     MiRemoveSingleWsle @ 0x1400FF0BC (MiRemoveSingleWsle.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiDemoteCombinedPte @ 0x1401F95DC (MiDemoteCombinedPte.c)
 */

__int64 __fastcall MiTrimSingleWsle(__int64 a1, __int64 a2)
{
  ULONG_PTR *SharedWorkingSetList; // rax
  __int64 v5; // rdx
  __int64 v6; // r9
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rdi
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 result; // rax
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF

  SharedWorkingSetList = MiGetSharedWorkingSetList(a1);
  v6 = *(_QWORD *)(v5 * *((unsigned int *)SharedWorkingSetList + 8) + SharedWorkingSetList[10]);
  if ( (v6 & 0x800000000000LL) != 0 )
    v7 = v6 | 0xFFFF000000000000uLL;
  else
    v7 = v6 & 0xFFFFFFFFFFFFLL;
  v12 = MI_READ_PTE_LOCK_FREE(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v8 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v12) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v10 = *(_QWORD *)(v8 + 8);
  if ( v10 >= 0 )
    MiDemoteCombinedPte(a1, v9, v10 | 0x8000000000000000uLL);
  if ( (*(_QWORD *)(v8 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && (*(_QWORD *)(v8 + 40) & 0x200000000000000LL) == 0
    || (*(_BYTE *)(a1 + 184) & 7) != 0 && *(_WORD *)(v8 + 32) > 1u
    || (unsigned int)MiRemoveSingleWsle(a1, a2) != 1 )
  {
    return 0LL;
  }
  result = 1LL;
  **(_QWORD **)(a1 + 16) = a2 + 1;
  return result;
}
