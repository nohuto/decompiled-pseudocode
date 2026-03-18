/*
 * XREFs of VerifierCmRegisterCallbackEx @ 0x1406C0328
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierCmRegisterCallbackEx(
        PEX_CALLBACK_FUNCTION Function,
        PCUNICODE_STRING Altitude,
        PVOID Driver,
        PVOID Context,
        PLARGE_INTEGER Cookie,
        PVOID Reserved)
{
  return pXdvCmRegisterCallbackEx(Function, Altitude, Driver, Context, Cookie, Reserved);
}
