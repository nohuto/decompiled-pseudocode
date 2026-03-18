/*
 * XREFs of FsRtlpPostStackOverflow @ 0x1401BA7A0
 * Callers:
 *     FsRtlPostPagingFileStackOverflow @ 0x1401BA728 (FsRtlPostPagingFileStackOverflow.c)
 *     FsRtlPostStackOverflow @ 0x1401BA730 (FsRtlPostStackOverflow.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     RtlRaiseStatus @ 0x1400F6738 (RtlRaiseStatus.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

LONG __fastcall FsRtlpPostStackOverflow(
        struct _LIST_ENTRY *a1,
        struct _LIST_ENTRY *a2,
        struct _LIST_ENTRY *a3,
        unsigned __int8 a4)
{
  struct _LIST_ENTRY *PoolWithTag; // rax

  PoolWithTag = (struct _LIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x73725346u);
  if ( !PoolWithTag )
  {
    if ( !a4 )
      RtlRaiseStatus(-1073741670);
    KeWaitForSingleObject(&StackOverflowFallbackSerialEvent, Executive, 0, 0, 0LL);
    PoolWithTag = (struct _LIST_ENTRY *)&StackOverflowFallback;
  }
  PoolWithTag[2].Blink = a1;
  PoolWithTag[3].Flink = a2;
  PoolWithTag[2].Flink = a3;
  PoolWithTag->Flink = 0LL;
  PoolWithTag[1].Flink = (struct _LIST_ENTRY *)FsRtlStackOverflowRead;
  PoolWithTag[1].Blink = PoolWithTag;
  return KeInsertQueue((PRKQUEUE)&FsRtlWorkerQueues + a4, PoolWithTag);
}
