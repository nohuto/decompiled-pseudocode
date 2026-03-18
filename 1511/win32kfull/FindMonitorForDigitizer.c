/*
 * XREFs of FindMonitorForDigitizer @ 0x1C01CBF70
 * Callers:
 *     EnsurePointerDeviceHasMonitor @ 0x1C0117D60 (EnsurePointerDeviceHasMonitor.c)
 *     ?GetPointerDeviceMonitor@@YAPEAUHMONITOR__@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C011DA44 (-GetPointerDeviceMonitor@@YAPEAUHMONITOR__@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     CreatePointerDeviceInfo @ 0x1C01C9610 (CreatePointerDeviceInfo.c)
 *     _SetDisplayMapping @ 0x1C01CF020 (_SetDisplayMapping.c)
 * Callees:
 *     FreeQDCActivePathsData @ 0x1C0111570 (FreeQDCActivePathsData.c)
 *     FindMonitorForDigitizerWithQDCData @ 0x1C01CBFE0 (FindMonitorForDigitizerWithQDCData.c)
 *     GetQDCActivePathsData @ 0x1C01CD86C (GetQDCActivePathsData.c)
 */

__int64 __fastcall FindMonitorForDigitizer(struct tagHID_POINTER_DEVICE_INFO *a1, __int64 a2)
{
  _BYTE *v3; // rbx
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = v5;
  if ( (int)GetQDCActivePathsData(v5, a2) < 0 )
    v3 = 0LL;
  FindMonitorForDigitizerWithQDCData(a1);
  return FreeQDCActivePathsData((__int64)v3);
}
