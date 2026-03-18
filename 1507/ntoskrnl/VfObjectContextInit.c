/*
 * XREFs of VfObjectContextInit @ 0x140738D9C
 * Callers:
 *     VfInitBootDriversLoaded @ 0x1407CBEA0 (VfInitBootDriversLoaded.c)
 * Callees:
 *     XdvExInitializePagedLookasideListInternal @ 0x140732628 (XdvExInitializePagedLookasideListInternal.c)
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
