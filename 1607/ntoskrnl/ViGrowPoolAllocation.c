/*
 * XREFs of ViGrowPoolAllocation @ 0x140702610
 * Callers:
 *     VeAllocatePoolWithTagPriority @ 0x140701D78 (VeAllocatePoolWithTagPriority.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x14007E210 (ExAllocatePoolWithTagPriority.c)
 *     KeZeroSinglePage @ 0x140161E10 (KeZeroSinglePage.c)
 *     RtlpInterlockedPopEntrySList @ 0x140166E00 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140166E40 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall ViGrowPoolAllocation(union _SLIST_HEADER *a1)
{
  struct _SLIST_ENTRY *PoolWithTagPriority; // rax
  struct _SLIST_ENTRY *v3; // rbx
  union _SLIST_HEADER *v5; // rsi
  __int64 v6; // rdi

  PoolWithTagPriority = (struct _SLIST_ENTRY *)ExAllocatePoolWithTagPriority(
                                                 (POOL_TYPE)640,
                                                 0x1000uLL,
                                                 0x70706556u,
                                                 HighPoolPriority);
  v3 = PoolWithTagPriority;
  if ( !PoolWithTagPriority )
    return RtlpInterlockedPopEntrySList(a1 + 4);
  KeZeroSinglePage(PoolWithTagPriority);
  *((_QWORD *)&v3->Next + 1) = a1;
  v3[1].Next = (_SLIST_ENTRY *)556929861;
  RtlpInterlockedPushEntrySList(a1 + 3, v3);
  v5 = a1 + 4;
  v6 = 126LL;
  do
  {
    v3 += 2;
    v3[1].Next = (_SLIST_ENTRY *)1;
    RtlpInterlockedPushEntrySList(v5, v3);
    --v6;
  }
  while ( v6 );
  v3[3].Next = (_SLIST_ENTRY *)1;
  return v3 + 2;
}
