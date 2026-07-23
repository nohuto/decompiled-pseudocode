/*
 * XREFs of MiMoveValidWsle @ 0x1400FCC4C
 * Callers:
 *     MiMoveWorkingFreeToTail @ 0x1400FBD94 (MiMoveWorkingFreeToTail.c)
 *     MiRemoveWorkingSetPages @ 0x1400FC4D0 (MiRemoveWorkingSetPages.c)
 * Callees:
 *     MiGetSharedWorkingSetList @ 0x140046BF0 (MiGetSharedWorkingSetList.c)
 *     MiUpdateWsleHash @ 0x140048900 (MiUpdateWsleHash.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiInsertWsle @ 0x1400DFF30 (MiInsertWsle.c)
 *     MiRemoveEntryWsle @ 0x1400E0420 (MiRemoveEntryWsle.c)
 *     MiWriteValidPteVolatile @ 0x1400FCE74 (MiWriteValidPteVolatile.c)
 *     MiReplaceWsleHash @ 0x1400FCEC4 (MiReplaceWsleHash.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiDemoteCombinedPte @ 0x1401F95DC (MiDemoteCombinedPte.c)
 */

ULONG_PTR __fastcall MiMoveValidWsle(__int64 BugCheckParameter2, __int64 a2, unsigned __int64 a3)
{
  int *v4; // rsi
  ULONG_PTR *SharedWorkingSetList; // r14
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 *v8; // r12
  __int64 v9; // rbx
  unsigned __int64 *v10; // r13
  __int64 v11; // rbp
  unsigned __int64 v12; // rbp
  __int64 v13; // rbp
  unsigned __int64 *v14; // r15
  unsigned __int16 v15; // r9
  int *v16; // rax
  unsigned __int16 v17; // cx
  int *v18; // r8
  __int64 v19; // r8
  unsigned __int64 v20; // rax
  ULONG_PTR v21; // rax
  __int64 v22; // rbx
  ULONG_PTR result; // rax

  v4 = (int *)BugCheckParameter2;
  SharedWorkingSetList = MiGetSharedWorkingSetList(BugCheckParameter2);
  v8 = (__int64 *)(SharedWorkingSetList[10] + v6 * *((unsigned int *)SharedWorkingSetList + 8));
  v9 = *v8;
  v10 = (unsigned __int64 *)(SharedWorkingSetList[10] + v7 * *((unsigned int *)SharedWorkingSetList + 8));
  v11 = *v8;
  if ( (*v8 & 0x800000000000LL) != 0 )
    v12 = v11 | 0xFFFF000000000000uLL;
  else
    v12 = v11 & 0xFFFFFFFFFFFFLL;
  v13 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v14 = (unsigned __int64 *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v13) >> 12) & 0xFFFFFFFFFLL)
                           - 0x58000000000LL);
  if ( (v4[46] & 7) == 2 )
  {
    MiPartitionIdToPointer(*((_WORD *)v4 + 82));
    v16 = MiPartitionIdToPointer(v15);
    if ( v18 != v16 )
      v4 = MiPartitionIdToPointer(v17) + 1648;
  }
  v19 = v14[1];
  if ( v19 >= 0 )
  {
    MiDemoteCombinedPte(v4, v13, v19 | 0x8000000000000000uLL);
    v9 = *v8;
  }
  MiRemoveEntryWsle((__int64)v4, v8);
  *(_QWORD *)(a3 * *((unsigned int *)SharedWorkingSetList + 8) + SharedWorkingSetList[10]) = v9;
  MiInsertWsle((__int64)v4, v10, 1);
  v20 = *v10;
  if ( (*v10 & 8) == 0 )
  {
    if ( (v20 & 4) != 0 )
    {
      v22 = a2;
      MiReplaceWsleHash((ULONG_PTR)v4);
      goto LABEL_20;
    }
    goto LABEL_14;
  }
  if ( (v14[5] & 0x200000000000000LL) != 0 )
  {
    v20 &= ~8uLL;
    *(_QWORD *)(a3 * *((unsigned int *)SharedWorkingSetList + 8) + SharedWorkingSetList[10]) = v20;
LABEL_14:
    if ( (v20 & 0x800000000000LL) != 0 )
      v21 = v20 | 0xFFFF000000000000uLL;
    else
      v21 = v20 & 0xFFFFFFFFFFFFLL;
    MiUpdateWsleHash(v21, a3, (ULONG_PTR)v4, 0);
    goto LABEL_18;
  }
  *v14 = a3;
LABEL_18:
  v22 = a2;
LABEL_20:
  MiWriteValidPteVolatile(v13, a3 | 0x80000000);
  result = SharedWorkingSetList[10];
  *(_QWORD *)(v22 * *((unsigned int *)SharedWorkingSetList + 8) + result) = 0LL;
  return result;
}
