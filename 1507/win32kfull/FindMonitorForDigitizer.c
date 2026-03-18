/*
 * XREFs of FindMonitorForDigitizer @ 0x1C01CA390
 * Callers:
 *     ?GetPointerDeviceMonitor@@YAPEAUHMONITOR__@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C000F3E0 (-GetPointerDeviceMonitor@@YAPEAUHMONITOR__@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     EnsurePointerDeviceHasMonitor @ 0x1C00EF440 (EnsurePointerDeviceHasMonitor.c)
 *     CreatePointerDeviceInfo @ 0x1C01C7A40 (CreatePointerDeviceInfo.c)
 *     _SetDisplayMapping @ 0x1C01CD43C (_SetDisplayMapping.c)
 * Callees:
 *     FreeQDCActivePathsData @ 0x1C0100AA0 (FreeQDCActivePathsData.c)
 *     FindMonitorForDigitizerWithQDCData @ 0x1C01CA400 (FindMonitorForDigitizerWithQDCData.c)
 *     GetQDCActivePathsData @ 0x1C01CBC8C (GetQDCActivePathsData.c)
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
