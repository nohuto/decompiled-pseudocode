/*
 * XREFs of XdvExInitializePagedLookasideListInternal @ 0x140732628
 * Callers:
 *     VfLookasideInitializeInternalNPagedList @ 0x1407325D8 (VfLookasideInitializeInternalNPagedList.c)
 *     VfInitVerifierComponents @ 0x140736E40 (VfInitVerifierComponents.c)
 *     VfObjectContextInit @ 0x140738D9C (VfObjectContextInit.c)
 *     VfHalVerifierInitialize @ 0x14073C4EC (VfHalVerifierInitialize.c)
 *     VfWdInit @ 0x14074AE94 (VfWdInit.c)
 *     VerifierExInitializeNPagedLookasideList @ 0x14074B574 (VerifierExInitializeNPagedLookasideList.c)
 *     VerifierExInitializePagedLookasideList @ 0x14074B680 (VerifierExInitializePagedLookasideList.c)
 *     VfDeadlockInitialize @ 0x14074F8A4 (VfDeadlockInitialize.c)
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
