/*
 * XREFs of XdvExInitializePagedLookasideListInternal @ 0x1406B2618
 * Callers:
 *     VfLookasideInitializeInternalNPagedList @ 0x1406B25C8 (VfLookasideInitializeInternalNPagedList.c)
 *     VfInitVerifierComponents @ 0x1406B6B50 (VfInitVerifierComponents.c)
 *     VfObjectContextInit @ 0x1406B8878 (VfObjectContextInit.c)
 *     VfHalVerifierInitialize @ 0x1406BBB08 (VfHalVerifierInitialize.c)
 *     VfWdInit @ 0x1406C83D0 (VfWdInit.c)
 *     VerifierExInitializeNPagedLookasideList @ 0x1406C89E8 (VerifierExInitializeNPagedLookasideList.c)
 *     VerifierExInitializePagedLookasideList @ 0x1406C8AF4 (VerifierExInitializePagedLookasideList.c)
 *     VfDeadlockInitialize @ 0x1406CC018 (VfDeadlockInitialize.c)
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
