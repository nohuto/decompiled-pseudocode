/*
 * XREFs of RaSrbSetMiniportContext @ 0x1C0002F38
 * Callers:
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0003028 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidPowerPassToMiniPort @ 0x1C000AA40 (RaidPowerPassToMiniPort.c)
 *     RaAdapterStartPowerIo @ 0x1C000AB9C (RaAdapterStartPowerIo.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C001162C (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidPnPPassToMiniPort @ 0x1C00166FC (RaidPnPPassToMiniPort.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C0028520 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C00289EC (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0028E54 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaWmiPassToMiniPort @ 0x1C005B544 (RaWmiPassToMiniPort.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C005B9CC (RaUnitStorageDataSetManagementIoctl.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C005F2E0 (RaUnitStorageDiagnosticIoctl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaSrbSetMiniportContext(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = (unsigned int)(*(_DWORD *)(a1 + 444) + 7);
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    if ( (result & 0xFFFFFFF8) != 0 )
      *(_QWORD *)(a2 + 104) = a3;
  }
  else if ( (result & 0xFFFFFFF8) != 0 )
  {
    *(_QWORD *)(a2 + 56) = a3;
  }
  return result;
}
