/*
 * XREFs of VfObjectContextInit @ 0x1406B8878
 * Callers:
 *     VfInitBootDriversLoaded @ 0x14074AA04 (VfInitBootDriversLoaded.c)
 * Callees:
 *     XdvExInitializePagedLookasideListInternal @ 0x1406B2618 (XdvExInitializePagedLookasideListInternal.c)
 */

__int64 VfObjectContextInit()
{
  pXdvExInitializeNPagedLookasideList(
    (unsigned int)&ViObjectContextTableLookaside,
    0,
    (unsigned int)VfUtilFreePoolCheckIRQL,
    512,
    24,
    1666147926,
    0,
    VfInitializedWithoutReboot,
    (__int64)ExInitializeNPagedLookasideListInternal);
  return (unsigned int)_InterlockedExchange(&ViObjectContextInitialized, 1);
}
