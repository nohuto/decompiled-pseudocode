/*
 * XREFs of PsGetServerSiloServiceSessionId @ 0x140007F34
 * Callers:
 *     PnpNotifyTargetDeviceChange @ 0x1403F0314 (PnpNotifyTargetDeviceChange.c)
 *     PnpNotifyDeviceClassChange @ 0x1403F0E40 (PnpNotifyDeviceClassChange.c)
 *     IopParseDevice @ 0x1404408F0 (IopParseDevice.c)
 *     NtQueryInformationJobObject @ 0x140466FD0 (NtQueryInformationJobObject.c)
 *     SeGetTokenDeviceMap @ 0x1404CABA0 (SeGetTokenDeviceMap.c)
 *     SeQuerySessionIdTokenEx @ 0x1404FA0C4 (SeQuerySessionIdTokenEx.c)
 *     PsIsServiceSession @ 0x14051DDD4 (PsIsServiceSession.c)
 *     IoRegisterPlugPlayNotification @ 0x14052BB14 (IoRegisterPlugPlayNotification.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140549C74 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x14067EEF4 (PspTerminateSiloSubsystemProcesses.c)
 *     SepCopyClientTokenAndSetSilo @ 0x14068D078 (SepCopyClientTokenAndSetSilo.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x1400766B0 (PsGetServerSiloGlobals.c)
 */

__int64 PsGetServerSiloServiceSessionId()
{
  return *(unsigned int *)(PsGetServerSiloGlobals() + 1008);
}
