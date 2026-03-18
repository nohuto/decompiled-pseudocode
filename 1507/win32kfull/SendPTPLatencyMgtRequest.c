/*
 * XREFs of SendPTPLatencyMgtRequest @ 0x1C01301A0
 * Callers:
 *     xxxUserPowerStateCalloutWorker @ 0x1C012FB50 (xxxUserPowerStateCalloutWorker.c)
 * Callees:
 *     SendPTPLatencyMgtDeviceRequest @ 0x1C01D3B98 (SendPTPLatencyMgtDeviceRequest.c)
 */

__int64 __fastcall SendPTPLatencyMgtRequest(unsigned int a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 i; // rbx

  EtwTraceTouchPadLatencyModeSwitchStart();
  EnterDeviceInfoListCrit_(v2);
  for ( i = gpDeviceInfoList; i; i = *(_QWORD *)(i + 56) )
  {
    if ( *(_DWORD *)(i + 316) && *(_DWORD *)(*(_QWORD *)(i + 416) + 24LL) == 8 )
      SendPTPLatencyMgtDeviceRequest(i, *(_QWORD *)(i + 400), a1);
  }
  LeaveDeviceInfoListCrit_(v3);
  return EtwTraceTouchPadLatencyModeSwitchStop();
}
