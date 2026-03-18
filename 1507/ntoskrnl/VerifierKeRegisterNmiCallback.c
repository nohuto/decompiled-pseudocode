/*
 * XREFs of VerifierKeRegisterNmiCallback @ 0x1407421C4
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
