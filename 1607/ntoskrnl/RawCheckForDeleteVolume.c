/*
 * XREFs of RawCheckForDeleteVolume @ 0x1402102E8
 * Callers:
 *     RawScanDeletedList @ 0x1404D14A0 (RawScanDeletedList.c)
 * Callees:
 *     IoAcquireVpbSpinLock @ 0x1400076FC (IoAcquireVpbSpinLock.c)
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     RawCleanupVcb @ 0x1403EFAA4 (RawCleanupVcb.c)
 *     RawDeleteVcb @ 0x140473FE4 (RawDeleteVcb.c)
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
