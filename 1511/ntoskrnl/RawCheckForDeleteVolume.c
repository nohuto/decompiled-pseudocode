/*
 * XREFs of RawCheckForDeleteVolume @ 0x1401F6170
 * Callers:
 *     RawScanDeletedList @ 0x140491E64 (RawScanDeletedList.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     IoAcquireVpbSpinLock @ 0x1400D0DAC (IoAcquireVpbSpinLock.c)
 *     RawDeleteVcb @ 0x1404940E4 (RawDeleteVcb.c)
 *     RawCleanupVcb @ 0x140494130 (RawCleanupVcb.c)
 */

char __fastcall RawCheckForDeleteVolume(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader)
{
  char v1; // di
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  UCHAR Irql; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( !LODWORD(AdvancedHeader[1].Resource) )
  {
    IoAcquireVpbSpinLock(&Irql);
    if ( *((_DWORD *)AdvancedHeader[1].FileContextSupportPointer + 7) )
    {
      KeReleaseQueuedSpinLock(9uLL, Irql);
    }
    else
    {
      KeReleaseQueuedSpinLock(9uLL, Irql);
      Flink = AdvancedHeader[1].FilterContexts.Flink;
      Blink = AdvancedHeader[1].FilterContexts.Blink;
      if ( Flink->Blink != &AdvancedHeader[1].FilterContexts || Blink->Flink != &AdvancedHeader[1].FilterContexts )
        __fastfail(3u);
      Blink->Flink = Flink;
      Flink->Blink = Blink;
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)&AdvancedHeader[2].PagingIoResource);
      RawCleanupVcb(AdvancedHeader);
      RawDeleteVcb(AdvancedHeader);
      return 1;
    }
  }
  return v1;
}
