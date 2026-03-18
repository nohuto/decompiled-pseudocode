/*
 * XREFs of MiMoveValidWsle @ 0x1400B8B14
 * Callers:
 *     MiRemoveWorkingSetPages @ 0x1400B94A0 (MiRemoveWorkingSetPages.c)
 *     MiMoveWorkingFreeToTail @ 0x1400E8DE8 (MiMoveWorkingFreeToTail.c)
 * Callees:
 *     MiUpdateWsleHash @ 0x14005A900 (MiUpdateWsleHash.c)
 *     MiInsertWsle @ 0x1400B7450 (MiInsertWsle.c)
 *     MiRemoveEntryWsle @ 0x1400B7840 (MiRemoveEntryWsle.c)
 *     MI_WRITE_VALID_PTE_VOLATILE @ 0x1400B8CFC (MI_WRITE_VALID_PTE_VOLATILE.c)
 *     MiReplaceWsleHash @ 0x1400E5794 (MiReplaceWsleHash.c)
 *     MiDemoteCombinedPte @ 0x14012836C (MiDemoteCombinedPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiMoveValidWsle(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rbp
  __int64 v6; // rax
  __int64 *v7; // r14
  __int64 v8; // rbx
  unsigned __int64 *v9; // r15
  __int64 v10; // rsi
  unsigned __int64 v11; // rsi
  __int64 v12; // rsi
  unsigned __int64 *v13; // r12
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  ULONG_PTR v16; // rcx
  __int64 v17; // rbx
  __int64 result; // rax

  v3 = *(_QWORD *)(BugCheckParameter2 + 184);
  v6 = *(_QWORD *)(v3 + 496);
  v7 = (__int64 *)(v6 + a2 * *(unsigned int *)(v3 + 64));
  v8 = *v7;
  v9 = (unsigned __int64 *)(v6 + a3 * *(unsigned int *)(v3 + 64));
  v10 = *v7;
  if ( (*v7 & 0x800000000000LL) != 0 )
    v11 = v10 | 0xFFFF000000000000uLL;
  else
    v11 = v10 & 0xFFFFFFFFFFFFLL;
  v12 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = (unsigned __int64 *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v12) >> 12) & 0xFFFFFFFFFLL)
                           - 0x58000000000LL);
  v14 = v13[1];
  if ( v14 >= 0 )
  {
    MiDemoteCombinedPte(v12, v14 | 0x8000000000000000uLL);
    v8 = *v7;
  }
  MiRemoveEntryWsle(v3, v7);
  *(_QWORD *)(a3 * *(unsigned int *)(v3 + 64) + *(_QWORD *)(v3 + 496)) = v8;
  MiInsertWsle(v3, v9, 1);
  v15 = *v9;
  if ( (*v9 & 8) == 0 )
  {
    if ( (v15 & 4) != 0 )
    {
      v17 = a2;
      MiReplaceWsleHash(BugCheckParameter2);
      goto LABEL_17;
    }
    goto LABEL_11;
  }
  if ( (v13[5] & 0x200000000000000LL) != 0 )
  {
    v15 &= ~8uLL;
    *(_QWORD *)(a3 * *(unsigned int *)(v3 + 64) + *(_QWORD *)(v3 + 496)) = v15;
LABEL_11:
    if ( (v15 & 0x800000000000LL) != 0 )
      v16 = v15 | 0xFFFF000000000000uLL;
    else
      v16 = v15 & 0xFFFFFFFFFFFFLL;
    MiUpdateWsleHash(v16, a3, BugCheckParameter2, 0);
    goto LABEL_15;
  }
  *v13 = a3;
LABEL_15:
  v17 = a2;
LABEL_17:
  MI_WRITE_VALID_PTE_VOLATILE(v12, a3 | 0x80000000);
  result = *(_QWORD *)(v3 + 496);
  *(_QWORD *)(v17 * *(unsigned int *)(v3 + 64) + result) = 0LL;
  return result;
}
