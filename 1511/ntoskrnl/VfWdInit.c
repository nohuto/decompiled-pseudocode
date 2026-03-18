/*
 * XREFs of VfWdInit @ 0x1406C83D0
 * Callers:
 *     VfInitVerifierComponents @ 0x1406B6B50 (VfInitVerifierComponents.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x14002C018 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x140093330 (KeInitializeDpc.c)
 *     XdvExInitializePagedLookasideListInternal @ 0x1406B2618 (XdvExInitializePagedLookasideListInternal.c)
 *     VfWdSetCancelTimeout @ 0x1406C848C (VfWdSetCancelTimeout.c)
 */

__int64 VfWdInit()
{
  __int64 result; // rax

  if ( !VfSafeMode )
  {
    VfWdIrpListLock = 0LL;
    qword_1406E01A0 = (__int64)&VfWdIrpListHead;
    VfWdIrpListHead = (__int64)&VfWdIrpListHead;
    pXdvExInitializeNPagedLookasideList(
      (unsigned int)&ViWdIrpLookasideList,
      0,
      (unsigned int)VfUtilFreePoolDispatchLevel,
      512,
      32,
      1683449430,
      16,
      VfInitializedWithoutReboot,
      (__int64)ExInitializeNPagedLookasideListInternal);
    KeInitializeTimerEx(&ViWdIrpTimer, NotificationTimer);
    KeInitializeDpc(&ViWdIrpTimerDpc, ViWdIrpTimerDpcRoutine, 0LL);
    VfWdSetCancelTimeout((unsigned int)VfWdIrpTimeoutMsec);
    return (unsigned int)_InterlockedExchange(&ViWdInitialized, 1);
  }
  return result;
}
