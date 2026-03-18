/*
 * XREFs of ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VSURFREFDC@@@@SAXPEAX@Z @ 0x1C0280130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall UnexpectedThreadTerminationHandler<SURFREFDC>::OnUnexpectedThreadTerminationStatic(
        SURFREFDC *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  SURFREFDC::vUnlock(this, a2, a3, a4);
}
