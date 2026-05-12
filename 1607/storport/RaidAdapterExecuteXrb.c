/*
 * XREFs of RaidAdapterExecuteXrb @ 0x1C0003924
 * Callers:
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0003028 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C00038DC (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaAdapterStartPowerIo @ 0x1C000AB9C (RaAdapterStartPowerIo.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C001162C (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidPnPPassToMiniPort @ 0x1C00166FC (RaidPnPPassToMiniPort.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C00184CC (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C0028520 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C00289EC (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0028E54 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaUnitStartResetIo @ 0x1C0035FD4 (RaUnitStartResetIo.c)
 *     RaWmiPassToMiniPort @ 0x1C005B544 (RaWmiPassToMiniPort.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C005B9CC (RaUnitStorageDataSetManagementIoctl.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C005F2E0 (RaUnitStorageDiagnosticIoctl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAdapterExecuteXrb(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r8

  if ( !*(_BYTE *)(a1 + 4450) )
    return RaidAdapterPostScatterGatherExecute();
  v2 = *(_QWORD *)(a2 + 168);
  if ( *(_BYTE *)(v2 + 2) == 40 )
    v3 = *(unsigned int *)(v2 + 24);
  else
    v3 = *(unsigned int *)(v2 + 12);
  if ( *(_QWORD *)(a2 + 136) )
    return RaidAdapterScatterGatherExecuteBidirectionalRequest(a1, a2, v3);
  if ( (v3 & 0xC0) == 0 )
    return RaidAdapterPostScatterGatherExecute();
  return RaidAdapterScatterGatherExecute(a1, a2);
}
