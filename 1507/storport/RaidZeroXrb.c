/*
 * XREFs of RaidZeroXrb @ 0x1C000F074
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C0002480 (RaidUnitCompleteRequest.c)
 *     RaAdapterStartPowerIo @ 0x1C0007088 (RaAdapterStartPowerIo.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C000B640 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidUnitAllocateResources @ 0x1C000E10C (RaidUnitAllocateResources.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C000E438 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidPnPPassToMiniPort @ 0x1C000E6FC (RaidPnPPassToMiniPort.c)
 *     StorRemoveIoGatewayItem @ 0x1C0010B48 (StorRemoveIoGatewayItem.c)
 *     StorNextIoGatewayItem @ 0x1C0010CD4 (StorNextIoGatewayItem.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C0012530 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0022AA0 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0022EE8 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidUnitSubmitResetRequest @ 0x1C0034010 (RaidUnitSubmitResetRequest.c)
 *     RaWmiPassToMiniPort @ 0x1C004EBFC (RaWmiPassToMiniPort.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C004F39C (RaUnitStorageDataSetManagementIoctl.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C0054040 (RaUnitStorageDiagnosticIoctl.c)
 * Callees:
 *     memset @ 0x1C0013300 (memset.c)
 */

__int64 __fastcall RaidZeroXrb(__int64 a1, __int64 a2, unsigned int a3, void *a4)
{
  __int64 result; // rax

  *(_BYTE *)(a1 + 16) &= 0x9Cu;
  *(_DWORD *)a1 = 523124044;
  result = 0xFFFFLL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_WORD *)(a1 + 18) = -1;
  *(_BYTE *)(a1 + 20) = -1;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 680) = 0LL;
  *(_QWORD *)(a1 + 688) = 0LL;
  *(_QWORD *)(a1 + 696) = 0LL;
  *(_QWORD *)(a1 + 704) = 0LL;
  *(_DWORD *)(a1 + 728) = a3;
  *(_QWORD *)(a1 + 744) = a4;
  if ( a4 )
    result = (__int64)memset(a4, 0, a3);
  *(_BYTE *)(a1 + 16) &= ~0x80u;
  *(_BYTE *)(a1 + 17) &= 0xF0u;
  *(_QWORD *)(a1 + 752) = 0LL;
  *(_DWORD *)(a1 + 732) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  return result;
}
