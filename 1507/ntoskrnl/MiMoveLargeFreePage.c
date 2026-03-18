/*
 * XREFs of MiMoveLargeFreePage @ 0x14022D110
 * Callers:
 *     MiReturnPartitionPagesToParent @ 0x14021D9D8 (MiReturnPartitionPagesToParent.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiInsertLargePageInNodeList @ 0x1400FFD48 (MiInsertLargePageInNodeList.c)
 *     MiTryUnlinkNodeLargePage @ 0x140159228 (MiTryUnlinkNodeLargePage.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall MiMoveLargeFreePage(__int64 a1, __int16 *a2, __int16 *a3)
{
  unsigned __int64 v4; // r14
  __int64 v7; // rbx
  int v8; // r8d
  __int16 v9; // r9
  unsigned __int8 CurrentIrql; // di
  unsigned int v11; // esi
  __int16 v12; // cx
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rbx
  unsigned __int8 v15; // r13
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // r13
  unsigned int v18; // ebp
  unsigned __int8 v19; // [rsp+20h] [rbp-48h]
  int v20; // [rsp+70h] [rbp+8h]

  v4 = a1 & 0xFFFFFFFFFFFFFE00uLL;
  v20 = MiTryUnlinkNodeLargePage(a1 & 0xFFFFFFFFFFFFFE00uLL);
  if ( v20 > 1 )
    return 0LL;
  v7 = 48 * v4 - 0x58000000000LL;
  if ( MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v7 + 40)) >> 8) & 0x3FF) != a2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v11 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v11 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v11);
      }
      while ( (*(_QWORD *)(v7 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) );
      v8 = v20;
    }
    MiInsertLargePageInNodeList(v4, 0x200uLL, v8);
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
    return 0LL;
  }
  v12 = *a3;
  v13 = 48 * v4 - 0x58000000000LL;
  v14 = v7 + 24528;
  v15 = KeGetCurrentIrql();
  v19 = v15;
  __writecr8(2uLL);
  if ( v14 >= v13 )
  {
    v16 = v14 + 24;
    v17 = (unsigned __int64)(unsigned __int16)(v9 & v12) << 40;
    do
    {
      v18 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v16, 0x3FuLL) )
      {
        do
        {
          if ( (++v18 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v18);
        }
        while ( (*(_QWORD *)v16 & 0x8000000000000000uLL) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)v16, 0x3FuLL) );
        v8 = v20;
      }
      *(_QWORD *)(v16 + 16) = v17 | *(_QWORD *)(v16 + 16) & 0xFFFC00FFFFFFFFFFuLL;
      if ( v14 == v13 )
        MiInsertLargePageInNodeList(v4, 0x200uLL, v8);
      _InterlockedAnd64((volatile signed __int64 *)v16, 0x7FFFFFFFFFFFFFFFuLL);
      v8 = v20;
      v14 -= 48LL;
      v16 -= 48LL;
    }
    while ( v14 >= v13 );
    v15 = v19;
  }
  __writecr8(v15);
  return 1LL;
}
