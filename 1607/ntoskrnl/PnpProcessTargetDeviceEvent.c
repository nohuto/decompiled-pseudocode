/*
 * XREFs of PnpProcessTargetDeviceEvent @ 0x14048A17C
 * Callers:
 *     PnpDeviceEventWorker @ 0x14048B32C (PnpDeviceEventWorker.c)
 * Callees:
 *     Template_z @ 0x1401CDE1C (Template_z.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140484DD0 (PnpProcessQueryRemoveAndEject.c)
 *     PnpCompareGuid @ 0x14048A570 (PnpCompareGuid.c)
 *     PiUEventNotifyUserMode @ 0x14048D5A4 (PiUEventNotifyUserMode.c)
 *     PiPnpRtlEndOperation @ 0x1404E440C (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1404E46CC (PiPnpRtlBeginOperation.c)
 */

__int64 __fastcall PnpProcessTargetDeviceEvent(__int64 *a1)
{
  __int64 v1; // rbx
  unsigned int v3; // edi
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v9; // rcx
  __int64 v10; // r8
  PVOID P; // [rsp+40h] [rbp+8h] BYREF

  v1 = *a1;
  P = 0LL;
  v3 = 0;
  v4 = *(_QWORD *)(v1 + 144);
  if ( v4 )
    v5 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL);
  else
    v5 = 0LL;
  PiPnpRtlBeginOperation(&P);
  if ( (unsigned __int8)PnpCompareGuid(v1 + 104, &GUID_DEVICE_QUERY_AND_REMOVE)
    || (unsigned __int8)PnpCompareGuid(v1 + 104, &GUID_DEVICE_EJECT) )
  {
    if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x2000000) != 0 )
      Template_z(v6, &KMPnPEvt_DeviceRemoval_Start, v7, *(const wchar_t **)(v5 + 48));
    v3 = PnpProcessQueryRemoveAndEject(a1);
    if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x2000000) != 0 )
      Template_z(v9, &KMPnPEvt_DeviceRemoval_Stop, v10, *(const wchar_t **)(v5 + 48));
  }
  else if ( (unsigned __int8)PnpCompareGuid(v1 + 104, &GUID_DEVICE_ARRIVAL) )
  {
    PiUEventNotifyUserMode(v1);
  }
  else if ( (unsigned __int8)PnpCompareGuid(v1 + 104, &GUID_DEVICE_NOOP) )
  {
    v3 = 0;
  }
  if ( P )
    PiPnpRtlEndOperation(P);
  return v3;
}
