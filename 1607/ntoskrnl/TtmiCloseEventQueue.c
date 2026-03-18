/*
 * XREFs of TtmiCloseEventQueue @ 0x140679E18
 * Callers:
 *     TtmiWriteEventToAllQueues @ 0x140678DF0 (TtmiWriteEventToAllQueues.c)
 * Callees:
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     TtmpAcquireQueueLock @ 0x14067A280 (TtmpAcquireQueueLock.c)
 */

__int64 __fastcall TtmiCloseEventQueue(__int64 a1)
{
  __int64 **v2; // rbx
  __int64 *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  TtmpAcquireQueueLock();
  *(_BYTE *)(a1 + 168) = 0;
  v2 = (__int64 **)(a1 + 152);
  while ( *v2 != (__int64 *)v2 )
  {
    v3 = *v2;
    v4 = **v2;
    if ( (__int64 **)(*v2)[1] != v2 || *(__int64 **)(v4 + 8) != v3 )
      __fastfail(3u);
    *v2 = (__int64 *)v4;
    *(_QWORD *)(v4 + 8) = v2;
    ExFreePoolWithTag(v3, 0x716D7454u);
  }
  KeSetEvent((PRKEVENT)(a1 + 128), 0, 0);
  ExReleaseResourceLite((PERESOURCE)(a1 + 24));
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v5, v6, v7);
}
