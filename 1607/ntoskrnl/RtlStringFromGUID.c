/*
 * XREFs of RtlStringFromGUID @ 0x1404D011C
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x1401DCA94 (KsepEvntLogShimsApplied.c)
 *     PipHardwareConfigInit @ 0x14079930C (PipHardwareConfigInit.c)
 *     SepSecureBootSetRegistryKey @ 0x1407B9D80 (SepSecureBootSetRegistryKey.c)
 *     PiInitFirmwareResources @ 0x1407BD10C (PiInitFirmwareResources.c)
 *     BapdpRegisterFwUpdateResults @ 0x1407D1F6C (BapdpRegisterFwUpdateResults.c)
 *     RamdiskStart @ 0x1407D3390 (RamdiskStart.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringFromGUID(const GUID *const Guid, PUNICODE_STRING GuidString)
{
  return RtlStringFromGUIDEx((PGUID)Guid, GuidString, 1u);
}
