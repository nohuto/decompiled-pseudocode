/*
 * XREFs of VerifierKeRegisterNmiCallback @ 0x1406C09CC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PVOID __stdcall VerifierKeRegisterNmiCallback(PNMI_CALLBACK CallbackRoutine, PVOID Context)
{
  return pXdvKeRegisterNmiCallback(CallbackRoutine, Context);
}
