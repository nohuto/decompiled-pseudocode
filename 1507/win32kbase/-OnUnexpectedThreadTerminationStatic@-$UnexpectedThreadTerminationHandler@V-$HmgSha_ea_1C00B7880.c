/*
 * XREFs of ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@V?$HmgShareLockResult@VBRUSH@@@@@@SAXPEAX@Z @ 0x1C00B7880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall UnexpectedThreadTerminationHandler<HmgShareLockResult<BRUSH>>::OnUnexpectedThreadTerminationStatic(
        struct HOBJ__ ***a1)
{
  HmgShareLockResult<BRUSH>::CleanupRoutine(a1);
}
