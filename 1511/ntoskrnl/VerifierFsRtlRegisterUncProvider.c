/*
 * XREFs of VerifierFsRtlRegisterUncProvider @ 0x1406C068C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierFsRtlRegisterUncProvider(
        PHANDLE MupHandle,
        PCUNICODE_STRING RedirectorDeviceName,
        BOOLEAN MailslotsSupported)
{
  return pXdvFsRtlRegisterUncProvider(MupHandle, RedirectorDeviceName, MailslotsSupported);
}
