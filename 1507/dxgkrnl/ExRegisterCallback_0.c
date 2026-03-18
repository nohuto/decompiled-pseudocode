/*
 * XREFs of ExRegisterCallback_0 @ 0x1C000FFA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PVOID __stdcall ExRegisterCallback_0(
        PCALLBACK_OBJECT CallbackObject,
        PCALLBACK_FUNCTION CallbackFunction,
        PVOID CallbackContext)
{
  return ExRegisterCallback(CallbackObject, CallbackFunction, CallbackContext);
}
