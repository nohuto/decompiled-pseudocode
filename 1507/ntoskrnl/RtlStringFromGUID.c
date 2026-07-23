/*
 * XREFs of RtlStringFromGUID @ 0x140557AF4
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x14020C348 (KsepEvntLogShimsApplied.c)
 *     VerifierRtlStringFromGUID @ 0x140752DA4 (VerifierRtlStringFromGUID.c)
 *     PipHardwareConfigInit @ 0x1407B6A40 (PipHardwareConfigInit.c)
 *     SepSecureBootSetRegistryKey @ 0x1407DD218 (SepSecureBootSetRegistryKey.c)
 *     PiInitFirmwareResources @ 0x1407E8CF8 (PiInitFirmwareResources.c)
 *     BapdpRegisterFwUpdateResults @ 0x1407FC4E0 (BapdpRegisterFwUpdateResults.c)
 *     RamdiskStart @ 0x1407FD3A8 (RamdiskStart.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringFromGUID(const GUID *const Guid, PUNICODE_STRING GuidString)
{
  return RtlStringFromGUIDEx((PGUID)Guid, GuidString, 1u);
}
