/*
 * XREFs of CmRegisterCallbackEx @ 0x140551610
 * Callers:
 *     VRegSetup @ 0x140551B90 (VRegSetup.c)
 *     EtwpRegTraceEnableCallback @ 0x1406A50E4 (EtwpRegTraceEnableCallback.c)
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
  return CmpRegisterCallbackInternal(Function, (PCUNICODE_STRING)Context, (PVOID)Altitude, 0LL, Cookie, 0LL);
}
