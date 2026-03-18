/*
 * XREFs of ObpRefillWorkItemFreeList @ 0x1406681BC
 * Callers:
 *     ObpPushRefDerefInfo @ 0x140667F70 (ObpPushRefDerefInfo.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140166E40 (RtlpInterlockedPushEntrySList.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

struct _SLIST_ENTRY *ObpRefillWorkItemFreeList()
{
  __int64 v0; // rbx
  struct _SLIST_ENTRY *result; // rax

  v0 = 100LL;
  do
  {
    result = (struct _SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xB0uLL, 0x7452624Fu);
    if ( result )
      result = RtlpInterlockedPushEntrySList(&ObpWorkItemFreeList, result);
    --v0;
  }
  while ( v0 );
  return result;
}
