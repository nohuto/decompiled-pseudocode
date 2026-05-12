/*
 * XREFs of RaidAllocateSrb @ 0x1C0003B2C
 * Callers:
 *     RaUnitAtaPassThroughIoctl @ 0x1C0001000 (RaUnitAtaPassThroughIoctl.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C000B640 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidBusEnumeratorAllocateUnitResources @ 0x1C000CD3C (RaidBusEnumeratorAllocateUnitResources.c)
 *     RaidBusEnumeratorAllocateReportLunsResources @ 0x1C000D184 (RaidBusEnumeratorAllocateReportLunsResources.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C000E438 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidPnPPassToMiniPort @ 0x1C000E6FC (RaidPnPPassToMiniPort.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C0012530 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0022AA0 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0022EE8 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidUnitAbortSrb @ 0x1C0032448 (RaidUnitAbortSrb.c)
 *     RaidUnitLogSenseTemperatureSrb @ 0x1C0032D08 (RaidUnitLogSenseTemperatureSrb.c)
 *     RaidUnitResetTarget @ 0x1C003346C (RaidUnitResetTarget.c)
 *     RaidUnitResetUnit @ 0x1C00336F4 (RaidUnitResetUnit.c)
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1C00339DC (RaidUnitSendSrbIoControlSynchronously.c)
 *     RaidUnitSendSrbProtocolCommandSynchronously @ 0x1C0033BB4 (RaidUnitSendSrbProtocolCommandSynchronously.c)
 *     RaWmiPassToMiniPort @ 0x1C004EBFC (RaWmiPassToMiniPort.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C004F39C (RaUnitStorageDataSetManagementIoctl.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C0054040 (RaUnitStorageDiagnosticIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0003BAC (RaidAllocatePool.c)
 *     memset @ 0x1C0013300 (memset.c)
 */

_BYTE *__fastcall RaidAllocateSrb(__int64 a1, unsigned int a2, char a3, char a4)
{
  _BYTE *v4; // rdi
  _BYTE *Pool; // rax
  unsigned int v8; // esi
  int v9; // ebp
  _BYTE *v10; // rax

  v4 = 0LL;
  if ( a3 != 1 )
  {
    Pool = (_BYTE *)RaidAllocatePool(512LL, 88LL, 1918067026LL, a1);
    v4 = Pool;
    if ( Pool )
      memset(Pool, 0, 0x58uLL);
    return v4;
  }
  if ( a2 > 0x13 )
  {
    if ( a2 != 23 )
    {
      if ( a2 == 32 )
        goto LABEL_20;
      if ( a2 != 37 )
      {
        if ( a2 <= 0x25 || a2 > 0x27 )
          return v4;
        goto LABEL_20;
      }
    }
    v8 = 168;
    goto LABEL_22;
  }
  if ( a2 == 19 )
  {
LABEL_20:
    v8 = 144;
    v9 = 0;
LABEL_23:
    v10 = (_BYTE *)RaidAllocatePool(512LL, v8, 1918067026LL, a1);
    v4 = v10;
    if ( v10 )
    {
      memset(v10, 0, v8);
      v4[2] = 40;
      *(_WORD *)v4 = 8;
      *((_DWORD *)v4 + 2) = 1397899864;
      *((_DWORD *)v4 + 3) = 1;
      *((_DWORD *)v4 + 4) = v8;
      *((_DWORD *)v4 + 5) = a2;
      *((_WORD *)v4 + 18) = 2;
      *((_DWORD *)v4 + 13) = 128;
      *((_DWORD *)v4 + 14) = v9;
      *((_WORD *)v4 + 64) = 1;
      *((_DWORD *)v4 + 33) = 4;
      if ( v9 )
        *((_DWORD *)v4 + 30) = 144;
    }
    return v4;
  }
  if ( a2 )
  {
    if ( a2 != 2 && a2 != 9 && a2 != 16 )
      return v4;
    goto LABEL_20;
  }
  if ( (a4 & 1) != 0 )
  {
    v8 = 184;
LABEL_22:
    v9 = 1;
    goto LABEL_23;
  }
  return 0LL;
}
