/*
 * XREFs of ?FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C0069DBC
 * Callers:
 *     ?_CleanupPointer@FxObject@@SAPEAUFX_POOL_HEADER@@PEAU_FX_DRIVER_GLOBALS@@PEAV1@@Z @ 0x1C0004440 (-_CleanupPointer@FxObject@@SAPEAUFX_POOL_HEADER@@PEAU_FX_DRIVER_GLOBALS@@PEAV1@@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0004490 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??_GFxIoContext@@UEAAPEAXI@Z @ 0x1C0004740 (--_GFxIoContext@@UEAAPEAXI@Z.c)
 *     ??_GFxRequest@@UEAAPEAXI@Z @ 0x1C00085D0 (--_GFxRequest@@UEAAPEAXI@Z.c)
 *     ?SelfDestruct@FxRequestFromLookaside@@MEAAXXZ @ 0x1C00086B0 (-SelfDestruct@FxRequestFromLookaside@@MEAAXXZ.c)
 *     ??_GFxRegKey@@UEAAPEAXI@Z @ 0x1C0008C30 (--_GFxRegKey@@UEAAPEAXI@Z.c)
 *     ??_GFxMemoryBuffer@@MEAAPEAXI@Z @ 0x1C000DA30 (--_GFxMemoryBuffer@@MEAAPEAXI@Z.c)
 *     ??_EFxFileObject@@UEAAPEAXI@Z @ 0x1C000DEA0 (--_EFxFileObject@@UEAAPEAXI@Z.c)
 *     FxIoTargetSendIoctl @ 0x1C0019F50 (FxIoTargetSendIoctl.c)
 *     ??_GFxString@@UEAAPEAXI@Z @ 0x1C00280E0 (--_GFxString@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxPoolRemoveNonPagedAllocateTracker(FX_POOL_TRACKER *Tracker)
{
  KIRQL v2; // al
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *Blink; // rcx

  v2 = KeAcquireSpinLockRaiseToDpc(&Tracker->Pool->NonPagedLock.m_Lock);
  Flink = Tracker->Link.Flink;
  Blink = Tracker->Link.Blink;
  if ( (FX_POOL_TRACKER *)Tracker->Link.Flink->Blink != Tracker || (FX_POOL_TRACKER *)Blink->Flink != Tracker )
    __fastfail(3u);
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  Tracker->Pool->NonPagedBytes -= Tracker->Size;
  --Tracker->Pool->NonPagedAllocations;
  KeReleaseSpinLock(&Tracker->Pool->NonPagedLock.m_Lock, v2);
}
