/*
 * XREFs of VerifierFsRtlRegisterUncProvider @ 0x140741E80
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
