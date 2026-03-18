/*
 * XREFs of NtConnectPort @ 0x140481D68
 * Callers:
 *     IopConnectLinkTrackingPort @ 0x1405F758C (IopConnectLinkTrackingPort.c)
 * Callees:
 *     NtSecureConnectPort @ 0x140481DB0 (NtSecureConnectPort.c)
 */

NTSTATUS __stdcall NtConnectPort(
        PHANDLE PortHandle,
        PUNICODE_STRING PortName,
        PSECURITY_QUALITY_OF_SERVICE SecurityQos,
        PPORT_VIEW ClientView,
        PREMOTE_PORT_VIEW ServerView,
        PULONG MaxMessageLength,
        PVOID ConnectionInformation,
        PULONG ConnectionInformationLength)
{
  return NtSecureConnectPort(
           PortHandle,
           PortName,
           SecurityQos,
           ClientView,
           0LL,
           ServerView,
           MaxMessageLength,
           ConnectionInformation,
           ConnectionInformationLength);
}
