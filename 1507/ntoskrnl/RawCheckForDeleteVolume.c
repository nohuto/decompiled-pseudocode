/*
 * XREFs of RawCheckForDeleteVolume @ 0x140244E14
 * Callers:
 *     RawScanDeletedList @ 0x14040E17C (RawScanDeletedList.c)
 * Callees:
 *     IoAcquireVpbSpinLock @ 0x140006BC8 (IoAcquireVpbSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     RawDeleteVcb @ 0x14040E054 (RawDeleteVcb.c)
 *     RawCleanupVcb @ 0x14040E0A0 (RawCleanupVcb.c)
 */

char __fastcall RawCheckForDeleteVolume(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader)
{
  char v1; // di
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  unsigned __int8 v5; // di
  signed __int32 v6; // eax
  KIRQL OldIrql; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( !LODWORD(AdvancedHeader[1].Resource) )
  {
    IoAcquireVpbSpinLock(&OldIrql);
    if ( *((_DWORD *)AdvancedHeader[1].FileContextSupportPointer + 7) )
    {
      KeReleaseQueuedSpinLock(9uLL, OldIrql);
    }
    else
    {
      KeReleaseQueuedSpinLock(9uLL, OldIrql);
      Flink = AdvancedHeader[1].FilterContexts.Flink;
      Blink = AdvancedHeader[1].FilterContexts.Blink;
      if ( Flink->Blink != &AdvancedHeader[1].FilterContexts || Blink->Flink != &AdvancedHeader[1].FilterContexts )
        __fastfail(3u);
      Blink->Flink = Flink;
      Flink->Blink = Blink;
      AdvancedHeader[2].AllocationSize.QuadPart = 0LL;
      v5 = (unsigned __int8)AdvancedHeader[2].FilterContexts.Blink;
      v6 = _InterlockedCompareExchange((volatile signed __int32 *)&AdvancedHeader[2].PagingIoResource, 1, 0);
      if ( v6 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)&AdvancedHeader[2].PagingIoResource, v6);
      __writecr8(v5);
      KeAbPostRelease((ULONG_PTR)&AdvancedHeader[2].PagingIoResource);
      RawCleanupVcb(AdvancedHeader);
      RawDeleteVcb(AdvancedHeader);
      return 1;
    }
  }
  return v1;
}
