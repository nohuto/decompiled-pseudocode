/*
 * XREFs of RaUnitStorageQueryPropertyIoctl @ 0x1C0057000
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0001D30 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0007190 (RaidCompleteRequestEx.c)
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 *     Template_pq @ 0x1C002A68C (Template_pq.c)
 *     RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl @ 0x1C00363A0 (RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl @ 0x1C00364E0 (RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceTemperaturePropertyIoctl @ 0x1C00366A4 (RaUnitStorageQueryDeviceTemperaturePropertyIoctl.c)
 *     RaUnitStorageQueryDevicePropertyIoctl @ 0x1C0057108 (RaUnitStorageQueryDevicePropertyIoctl.c)
 *     RaUnitStorageQueryDeviceIdPropertyIoctl @ 0x1C005BC90 (RaUnitStorageQueryDeviceIdPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl @ 0x1C005C008 (RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl.c)
 *     RaUnitStorageQueryDevicePowerPropertyIoctl @ 0x1C005C090 (RaUnitStorageQueryDevicePowerPropertyIoctl.c)
 */

NTSTATUS __fastcall RaUnitStorageQueryPropertyIoctl(__int64 a1, __int64 a2)
{
  int v4; // eax
  __int64 v5; // rcx
  int v7; // [rsp+20h] [rbp-38h]
  GUID v8; // [rsp+30h] [rbp-28h] BYREF

  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL) < 8u )
  {
    *(_QWORD *)(a2 + 56) = 0LL;
    return RaidCompleteRequestEx((PIRP)a2, 0, 0xC00000EF);
  }
  else
  {
    v4 = **(_DWORD **)(a2 + 24);
    if ( v4 )
    {
      switch ( v4 )
      {
        case 2:
          return RaUnitStorageQueryDeviceIdPropertyIoctl(a1);
        case 48:
          return RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl(a1);
        case 12:
          return RaUnitStorageQueryDevicePowerPropertyIoctl(a1);
        case 50:
          return RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl(a1, (IRP *)a2);
        case 52:
          return RaUnitStorageQueryDeviceTemperaturePropertyIoctl(a1, (IRP *)a2);
        case 54:
          return RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl(a1, (IRP *)a2);
        default:
          if ( StorEtwLoggingEnabled )
          {
            v8.Data1 = 0;
            *(_QWORD *)&v8.Data2 = 0LL;
            *(_DWORD *)&v8.Data4[4] = 0;
            IoGetActivityIdIrp(a2, &v8);
            if ( (Microsoft_Windows_StorPortEnableBits & 0x80000) != 0 )
            {
              v7 = *(_DWORD *)(a2 + 48);
              Template_pq(v5, &EventNonReadWriteRequestComplete, &v8, a2, v7);
            }
          }
          ++*(_BYTE *)(a2 + 67);
          *(_QWORD *)(a2 + 184) += 72LL;
          return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 8LL), (PIRP)a2);
      }
    }
    else
    {
      return RaUnitStorageQueryDevicePropertyIoctl(a1);
    }
  }
}
