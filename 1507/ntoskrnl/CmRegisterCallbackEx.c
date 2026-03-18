/*
 * XREFs of CmRegisterCallbackEx @ 0x140652630
 * Callers:
 *     EtwpRegTraceEnableCallback @ 0x1406E786C (EtwpRegTraceEnableCallback.c)
 *     VerifierCmRegisterCallbackEx @ 0x140741B1C (VerifierCmRegisterCallbackEx.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall CmRegisterCallbackEx(
        PEX_CALLBACK_FUNCTION Function,
        PCUNICODE_STRING Altitude,
        PVOID Driver,
        PVOID Context,
        PLARGE_INTEGER Cookie,
        PVOID Reserved)
{
  if ( !Driver )
    return -1073741583;
  if ( Reserved )
    return -1073741580;
  return CmpRegisterCallbackInternal((__int64)Function, (__int64)Context, (const void **)Altitude, 0, Cookie);
}
