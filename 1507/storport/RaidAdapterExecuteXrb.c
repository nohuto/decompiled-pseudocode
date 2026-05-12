/*
 * XREFs of RaidAdapterExecuteXrb @ 0x1C000EF88
 * Callers:
 *     RaAdapterStartPowerIo @ 0x1C0007088 (RaAdapterStartPowerIo.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C000B640 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C000E438 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidPnPPassToMiniPort @ 0x1C000E6FC (RaidPnPPassToMiniPort.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C000EF40 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C0012530 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0022AA0 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0022EE8 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaUnitStartResetIo @ 0x1C00315DC (RaUnitStartResetIo.c)
 *     RaWmiPassToMiniPort @ 0x1C004EBFC (RaWmiPassToMiniPort.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C004F39C (RaUnitStorageDataSetManagementIoctl.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C0054040 (RaUnitStorageDiagnosticIoctl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAdapterExecuteXrb(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // r8d

  if ( !*(_BYTE *)(a1 + 4450) )
    return RaidAdapterPostScatterGatherExecute(a1, a2);
  v2 = *(_QWORD *)(a2 + 160);
  if ( *(_BYTE *)(v2 + 2) == 40 )
    v3 = *(_DWORD *)(v2 + 24);
  else
    v3 = *(_DWORD *)(v2 + 12);
  if ( *(_QWORD *)(a2 + 128) )
    return RaidAdapterScatterGatherExecuteBidirectionalRequest(a1, a2);
  if ( (v3 & 0xC0) == 0 )
    return RaidAdapterPostScatterGatherExecute(a1, a2);
  return RaidAdapterScatterGatherExecute();
}
