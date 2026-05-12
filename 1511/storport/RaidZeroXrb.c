/*
 * XREFs of RaidZeroXrb @ 0x1C0011444
 * Callers:
 *     StorRemoveIoGatewayItem @ 0x1C0002850 (StorRemoveIoGatewayItem.c)
 *     RaAdapterStartPowerIo @ 0x1C0008DE8 (RaAdapterStartPowerIo.c)
 *     StorSubmitIoGatewayItem @ 0x1C0009F7C (StorSubmitIoGatewayItem.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C000D8A8 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidUnitAllocateResources @ 0x1C001037C (RaidUnitAllocateResources.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0010744 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidPnPPassToMiniPort @ 0x1C0010A08 (RaidPnPPassToMiniPort.c)
 *     StorNextIoGatewayItem @ 0x1C001322C (StorNextIoGatewayItem.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C0014630 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0024FE0 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0025428 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidUnitSubmitResetRequest @ 0x1C0035A50 (RaidUnitSubmitResetRequest.c)
 *     RaWmiPassToMiniPort @ 0x1C00529B0 (RaWmiPassToMiniPort.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C00530FC (RaUnitStorageDataSetManagementIoctl.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C0057F80 (RaUnitStorageDiagnosticIoctl.c)
 * Callees:
 *     memset @ 0x1C0015EC0 (memset.c)
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
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_QWORD *)(a1 + 224) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 696) = 0LL;
  *(_QWORD *)(a1 + 704) = 0LL;
  *(_QWORD *)(a1 + 712) = 0LL;
  *(_QWORD *)(a1 + 720) = 0LL;
  *(_DWORD *)(a1 + 744) = a3;
  *(_QWORD *)(a1 + 760) = a4;
  if ( a4 )
    result = (__int64)memset(a4, 0, a3);
  *(_BYTE *)(a1 + 16) &= ~0x80u;
  *(_BYTE *)(a1 + 17) &= 0xF0u;
  *(_QWORD *)(a1 + 768) = 0LL;
  *(_DWORD *)(a1 + 748) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  return result;
}
