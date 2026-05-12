/*
 * XREFs of RaidSrbStatusToNtStatus @ 0x1C00036EC
 * Callers:
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0003028 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitStartIo @ 0x1C0004940 (RaUnitStartIo.c)
 *     RaUnitAsyncError @ 0x1C000C3A0 (RaUnitAsyncError.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C001162C (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidBusEnumeratorProcessInquiry @ 0x1C0014060 (RaidBusEnumeratorProcessInquiry.c)
 *     RaidBusEnumeratorProcessSupportedPages @ 0x1C00140A0 (RaidBusEnumeratorProcessSupportedPages.c)
 *     RaidBusEnumeratorProcessDeviceId @ 0x1C0014100 (RaidBusEnumeratorProcessDeviceId.c)
 *     RaidBusEnumeratorProcessSerialNumber @ 0x1C00144C0 (RaidBusEnumeratorProcessSerialNumber.c)
 *     RaidBusEnumeratorProcess1667DeviceInquiry @ 0x1C00145B0 (RaidBusEnumeratorProcess1667DeviceInquiry.c)
 *     RaidPnPPassToMiniPort @ 0x1C00166FC (RaidPnPPassToMiniPort.c)
 *     RaidBusEnumeratorProcessAtaInformation @ 0x1C0017620 (RaidBusEnumeratorProcessAtaInformation.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C00184CC (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C0028520 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C00289EC (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0028E54 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidCancelIrp @ 0x1C0034368 (RaidCancelIrp.c)
 *     RaidUnitCompleteResetRequest @ 0x1C0037150 (RaidUnitCompleteResetRequest.c)
 *     RaWmiPassToMiniPort @ 0x1C005B544 (RaWmiPassToMiniPort.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C005B9CC (RaUnitStorageDataSetManagementIoctl.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C005F2E0 (RaUnitStorageDiagnosticIoctl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidSrbStatusToNtStatus(char a1)
{
  unsigned int v1; // edx
  unsigned int v3; // edx
  unsigned int v4; // edx
  unsigned int v5; // edx
  unsigned int v6; // edx
  unsigned int v7; // edx

  v1 = a1 & 0x3F;
  if ( v1 <= 0x11 )
  {
    if ( v1 == 17 )
      return 3221225664LL;
    v3 = v1 - 1;
    if ( !v3 )
      return 0LL;
    v4 = v3 - 4;
    if ( !v4 )
      return 2147483665LL;
    v5 = v4 - 3;
    if ( !v5 )
      return 3221225664LL;
    v6 = v5 - 1;
    if ( !v6 )
      return 3221225653LL;
    v7 = v6 - 1;
    if ( !v7 )
      return 3221225629LL;
    if ( v7 == 1 )
      return 3221225653LL;
    return 3221225861LL;
  }
  switch ( v1 )
  {
    case 0x12u:
      return 2147483653LL;
    case 0x15u:
      return 3221225488LL;
    case 0x16u:
      return 3221225473LL;
  }
  if ( (a1 & 0x3Fu) <= 0x1F )
    return 3221225861LL;
  if ( (a1 & 0x3Fu) <= 0x21 )
    return 3221225664LL;
  if ( v1 == 34 )
    return 3221225488LL;
  if ( v1 != 56 )
    return 3221225861LL;
  return 3221226762LL;
}
