/*
 * XREFs of PsGetServerSiloServiceSessionId @ 0x1400860B0
 * Callers:
 *     IopParseDevice @ 0x14043F7C0 (IopParseDevice.c)
 *     NtQueryInformationJobObject @ 0x140465EA0 (NtQueryInformationJobObject.c)
 *     PsIsServiceSession @ 0x1404873C8 (PsIsServiceSession.c)
 *     SeGetTokenDeviceMap @ 0x1404885C0 (SeGetTokenDeviceMap.c)
 *     PnpNotifyDeviceClassChange @ 0x1404891B8 (PnpNotifyDeviceClassChange.c)
 *     PnpNotifyTargetDeviceChange @ 0x14048A58C (PnpNotifyTargetDeviceChange.c)
 *     SeQuerySessionIdTokenEx @ 0x1404DD050 (SeQuerySessionIdTokenEx.c)
 *     IoRegisterPlugPlayNotification @ 0x14052A9FC (IoRegisterPlugPlayNotification.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14054A1B4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x14067EFD8 (PspTerminateSiloSubsystemProcesses.c)
 *     SepCopyClientTokenAndSetSilo @ 0x14068D15C (SepCopyClientTokenAndSetSilo.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140076730 (PsGetServerSiloGlobals.c)
 */

__int64 __fastcall PsGetServerSiloServiceSessionId(__int64 a1)
{
  return *((unsigned int *)PsGetServerSiloGlobals(a1) + 252);
}
