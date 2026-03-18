/*
 * XREFs of MiMoveLargeFreePage @ 0x1401E1834
 * Callers:
 *     MiReturnPartitionPagesToParent @ 0x1401D98E4 (MiReturnPartitionPagesToParent.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiTryUnlinkNodeLargePage @ 0x140019BFC (MiTryUnlinkNodeLargePage.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiInsertLargePageInNodeList @ 0x1400C02B4 (MiInsertLargePageInNodeList.c)
 */

__int64 __fastcall MiMoveLargeFreePage(__int64 a1, int *a2, __int16 *a3)
{
  unsigned __int64 v4; // rsi
  int v6; // r15d
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int64 v11; // rbx
  __int16 v12; // ax
  unsigned __int64 v13; // rbp
  unsigned __int8 CurrentIrql; // r12
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rbx

  v4 = a1 & 0xFFFFFFFFFFFFFE00uLL;
  v6 = MiTryUnlinkNodeLargePage(a1 & 0xFFFFFFFFFFFFFE00uLL);
  if ( v6 > 1 )
    return 0LL;
  v8 = 48 * v4 - 0x58000000000LL;
  if ( MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v8 + 40)) >> 8) & 0x3FF) != a2 )
  {
    v11 = (unsigned __int8)MiLockPageInline(48 * v4 - 0x58000000000LL);
    MiInsertLargePageInNodeList(v4, 0x200uLL, v6);
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v11);
    return 0LL;
  }
  v12 = *a3;
  v13 = 48 * v4 - 0x58000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v15 = v8 + 24528;
  if ( v15 >= v13 )
  {
    v16 = (unsigned __int64)(unsigned __int16)(v10 & v12) << 40;
    do
    {
      MiLockPageAtDpcInline(v15, v9, v10);
      *(_QWORD *)(v15 + 40) = v16 | *(_QWORD *)(v15 + 40) & 0xFFFC00FFFFFFFFFFuLL;
      if ( v15 == v13 )
        MiInsertLargePageInNodeList(v4, 0x200uLL, v6);
      _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v15 -= 48LL;
    }
    while ( v15 >= v13 );
  }
  __writecr8(CurrentIrql);
  return 1LL;
}
