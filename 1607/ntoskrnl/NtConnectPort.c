/*
 * XREFs of NtConnectPort @ 0x1404B2004
 * Callers:
 *     IopConnectLinkTrackingPort @ 0x140621294 (IopConnectLinkTrackingPort.c)
 * Callees:
 *     NtSecureConnectPort @ 0x1404B204C (NtSecureConnectPort.c)
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
