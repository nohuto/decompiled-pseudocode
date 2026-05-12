/*
 * XREFs of RaidSrbStatusToNtStatus @ 0x1C00110F8
 * Callers:
 *     RaUnitStartIo @ 0x1C0004AC0 (RaUnitStartIo.c)
 *     RaidBusEnumeratorProcessAtaInformation @ 0x1C0009780 (RaidBusEnumeratorProcessAtaInformation.c)
 *     RaidBusEnumeratorProcessDeviceId @ 0x1C000CCF0 (RaidBusEnumeratorProcessDeviceId.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C000D8A8 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0010744 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitAsyncError @ 0x1C0010D24 (RaUnitAsyncError.c)
 *     RaidBusEnumeratorProcess1667DeviceInquiry @ 0x1C0013A80 (RaidBusEnumeratorProcess1667DeviceInquiry.c)
 *     RaidBusEnumeratorProcessSerialNumber @ 0x1C0013BB0 (RaidBusEnumeratorProcessSerialNumber.c)
 *     RaidBusEnumeratorProcessSupportedPages @ 0x1C0013CA0 (RaidBusEnumeratorProcessSupportedPages.c)
 *     RaidBusEnumeratorProcessInquiry @ 0x1C0014360 (RaidBusEnumeratorProcessInquiry.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C0014630 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidCancelIrp @ 0x1C0031048 (RaidCancelIrp.c)
 *     RaidUnitCompleteResetRequest @ 0x1C0033F70 (RaidUnitCompleteResetRequest.c)
 *     RaWmiPassToMiniPort @ 0x1C00529B0 (RaWmiPassToMiniPort.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C00530FC (RaUnitStorageDataSetManagementIoctl.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C0057F80 (RaUnitStorageDiagnosticIoctl.c)
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
  if ( v1 == 18 )
    return 2147483653LL;
  if ( v1 != 21 )
  {
    if ( v1 == 22 )
      return 3221225473LL;
    if ( (a1 & 0x3Fu) <= 0x1F )
      return 3221225861LL;
    if ( (a1 & 0x3Fu) <= 0x21 )
      return 3221225664LL;
    if ( v1 != 34 )
    {
      if ( v1 == 56 )
        return 3221226762LL;
      return 3221225861LL;
    }
  }
  return 3221225488LL;
}
