/*
 * XREFs of VfLookasideInitializeInternalNPagedList @ 0x1407325D8
 * Callers:
 *     VfInitBootDriversLoaded @ 0x1407CBEA0 (VfInitBootDriversLoaded.c)
 * Callees:
 *     XdvExInitializePagedLookasideListInternal @ 0x140732628 (XdvExInitializePagedLookasideListInternal.c)
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
