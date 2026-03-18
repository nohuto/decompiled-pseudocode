/*
 * XREFs of VfLookasideInitializeInternalNPagedList @ 0x1406B25C8
 * Callers:
 *     VfInitBootDriversLoaded @ 0x14074AA04 (VfInitBootDriversLoaded.c)
 * Callees:
 *     XdvExInitializePagedLookasideListInternal @ 0x1406B2618 (XdvExInitializePagedLookasideListInternal.c)
 */

__int64 __fastcall VfLookasideInitializeInternalNPagedList(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int16 a7)
{
  return pXdvExInitializeNPagedLookasideList(
           a1,
           a2,
           a3,
           512,
           a5,
           a6,
           a7,
           VfInitializedWithoutReboot,
           (__int64)ExInitializeNPagedLookasideListInternal);
}
