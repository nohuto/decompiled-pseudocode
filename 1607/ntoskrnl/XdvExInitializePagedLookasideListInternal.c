/*
 * XREFs of XdvExInitializePagedLookasideListInternal @ 0x1406FE394
 * Callers:
 *     VfLookasideInitializeInternalNPagedList @ 0x1406FE344 (VfLookasideInitializeInternalNPagedList.c)
 *     VfInitVerifierComponents @ 0x140703330 (VfInitVerifierComponents.c)
 *     VfObjectContextInit @ 0x140704934 (VfObjectContextInit.c)
 *     VfHalVerifierInitialize @ 0x140707BAC (VfHalVerifierInitialize.c)
 *     VfDeadlockInitialize @ 0x140713DF4 (VfDeadlockInitialize.c)
 *     VfWdInit @ 0x140716D78 (VfWdInit.c)
 *     VerifierExInitializeNPagedLookasideList @ 0x140717390 (VerifierExInitializeNPagedLookasideList.c)
 *     VerifierExInitializePagedLookasideList @ 0x14071749C (VerifierExInitializePagedLookasideList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XdvExInitializePagedLookasideListInternal(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        __int16 a7,
        int a8,
        __int64 (*a9)(void))
{
  return a9();
}
