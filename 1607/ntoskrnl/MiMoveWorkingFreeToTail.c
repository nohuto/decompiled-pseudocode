/*
 * XREFs of MiMoveWorkingFreeToTail @ 0x1400FE014
 * Callers:
 *     MiConvertToLinkedWsles @ 0x1400A1844 (MiConvertToLinkedWsles.c)
 * Callees:
 *     MiGetSharedWorkingSetList @ 0x140047070 (MiGetSharedWorkingSetList.c)
 *     MiReleaseWsle @ 0x1400E2430 (MiReleaseWsle.c)
 *     MiPopFreeWsle @ 0x1400FEE10 (MiPopFreeWsle.c)
 *     MiMoveValidWsle @ 0x1400FEECC (MiMoveValidWsle.c)
 *     MiGetAggregateWorkingSetSize @ 0x1400FF208 (MiGetAggregateWorkingSetSize.c)
 */

char __fastcall MiMoveWorkingFreeToTail(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR *SharedWorkingSetList; // rbx
  ULONG_PTR v3; // r14
  __int64 AggregateWorkingSetSize; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // rdi
  ULONG_PTR v7; // rbp
  unsigned __int64 v8; // rdx
  _BYTE *v9; // rcx
  ULONG_PTR i; // rbx

  SharedWorkingSetList = MiGetSharedWorkingSetList(BugCheckParameter2);
  v3 = SharedWorkingSetList[10];
  AggregateWorkingSetSize = MiGetAggregateWorkingSetSize();
  v6 = AggregateWorkingSetSize;
  if ( (*(_BYTE *)(v5 + 184) & 7) != 0 )
    v6 = AggregateWorkingSetSize + 1;
  v7 = SharedWorkingSetList[3];
  while ( *SharedWorkingSetList != 0xFFFFFFFFFLL )
  {
    v8 = MiPopFreeWsle(BugCheckParameter2);
    if ( v8 < v6 )
    {
      if ( v7 >= v6 )
      {
        v9 = (_BYTE *)(v3 + v7 * *((unsigned int *)SharedWorkingSetList + 8));
        do
        {
          if ( (*v9 & 1) != 0 )
            break;
          --v7;
          v9 -= *((unsigned int *)SharedWorkingSetList + 8);
        }
        while ( v7 >= v6 );
      }
      LOBYTE(AggregateWorkingSetSize) = MiMoveValidWsle(BugCheckParameter2);
    }
    else
    {
      AggregateWorkingSetSize = SharedWorkingSetList[10];
      *(_QWORD *)(v8 * *((unsigned int *)SharedWorkingSetList + 8) + AggregateWorkingSetSize) = 0LL;
    }
  }
  for ( i = SharedWorkingSetList[3]; i >= v6; --i )
    LOBYTE(AggregateWorkingSetSize) = MiReleaseWsle(i, BugCheckParameter2, 0LL, 0);
  return AggregateWorkingSetSize;
}
