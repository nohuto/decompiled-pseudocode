/*
 * XREFs of ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VSURFREFDC@@@@SAXPEAX@Z @ 0x1C027DF80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall UnexpectedThreadTerminationHandler<SURFREFDC>::OnUnexpectedThreadTerminationStatic(SURFREFDC *a1)
{
  SURFREFDC::vUnlock(a1);
}
