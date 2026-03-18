/*
 * XREFs of VerifierExRegisterCallback @ 0x1406C03F8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PVOID __stdcall VerifierExRegisterCallback(
        PCALLBACK_OBJECT CallbackObject,
        PCALLBACK_FUNCTION CallbackFunction,
        PVOID CallbackContext)
{
  return pXdvExRegisterCallback(CallbackObject, CallbackFunction, CallbackContext);
}
