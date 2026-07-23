/*
 * XREFs of MiMoveLargeFreePage @ 0x1401FB980
 * Callers:
 *     MiTransferPartitionPageRun @ 0x1401F1E84 (MiTransferPartitionPageRun.c)
 * Callees:
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiTryUnlinkNodeLargePage @ 0x1400899E0 (MiTryUnlinkNodeLargePage.c)
 *     MiInsertLargePageInNodeList @ 0x1401FB978 (MiInsertLargePageInNodeList.c)
 */

__int64 __fastcall MiMoveLargeFreePage(__int64 a1, unsigned int a2, int *a3, __int16 *a4)
{
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // r14
  int v8; // r13d
  unsigned __int64 v10; // rdi
  __int16 v11; // r8
  unsigned __int64 v12; // rbx
  __int16 v13; // cx
  unsigned __int8 CurrentIrql; // r12
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rsi

  v6 = MiLargePageSizes[a2];
  v7 = a1 & ~(v6 - 1);
  v8 = MiTryUnlinkNodeLargePage(v7, a2);
  if ( v8 > 1 )
    return 0LL;
  v10 = 48 * v7 - 0x58000000000LL;
  if ( MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v10 + 40)) >> 8) & 0x3FF) != a3 )
  {
    v12 = (unsigned __int8)MiLockPageInline(48 * v7 - 0x58000000000LL);
    MiInsertLargePageInNodeList(v7, v6, v8);
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v12);
    return 0LL;
  }
  v13 = *a4;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v15 = v10 + 48 * v6 - 48;
  if ( v15 >= v10 )
  {
    v16 = (unsigned __int64)(unsigned __int16)(v11 & v13) << 40;
    do
    {
      MiLockPageAtDpcInline(v15);
      *(_QWORD *)(v15 + 40) = v16 | *(_QWORD *)(v15 + 40) & 0xFFFC00FFFFFFFFFFuLL;
      if ( v15 == v10 )
        MiInsertLargePageInNodeList(v7, v6, v8);
      _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v15 -= 48LL;
    }
    while ( v15 >= v10 );
  }
  __writecr8(CurrentIrql);
  return 1LL;
}
