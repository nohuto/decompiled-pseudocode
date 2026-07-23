/*
 * XREFs of RtlStringFromGUID @ 0x1404C2A1C
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x1401CCFE4 (KsepEvntLogShimsApplied.c)
 *     VerifierRtlStringFromGUID @ 0x1406CF2D8 (VerifierRtlStringFromGUID.c)
 *     PipHardwareConfigInit @ 0x14074F610 (PipHardwareConfigInit.c)
 *     SepSecureBootSetRegistryKey @ 0x140768EFC (SepSecureBootSetRegistryKey.c)
 *     PiInitFirmwareResources @ 0x1407721FC (PiInitFirmwareResources.c)
 *     BapdpRegisterFwUpdateResults @ 0x140786314 (BapdpRegisterFwUpdateResults.c)
 *     RamdiskStart @ 0x1407871F0 (RamdiskStart.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringFromGUID(const GUID *const Guid, PUNICODE_STRING GuidString)
{
  return RtlStringFromGUIDEx((PGUID)Guid, GuidString, 1u);
}
