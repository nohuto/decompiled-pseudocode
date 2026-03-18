/*
 * XREFs of ?GetPointerDeviceMonitor@@YAPEAUHMONITOR__@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C00E4318
 * Callers:
 *     _GetPointerDeviceInfoProperties @ 0x1C00E4274 (_GetPointerDeviceInfoProperties.c)
 * Callees:
 *     FindMonitorForDigitizer @ 0x1C01C7750 (FindMonitorForDigitizer.c)
 */

HMONITOR __fastcall GetPointerDeviceMonitor(struct tagHID_POINTER_DEVICE_INFO *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rcx

  v1 = 0LL;
  if ( (unsigned int)(*((_DWORD *)a1 + 6) - 6) <= 1 )
  {
    v3 = *(_QWORD *)(GetDispInfo(a1) + 88);
    *((_DWORD *)a1 + 173) = 1;
  }
  else
  {
    v3 = *((_QWORD *)a1 + 35);
  }
  if ( (*((_DWORD *)a1 + 63) & 0x20) == 0 )
  {
    if ( v3 )
      return *(HMONITOR *)v3;
    else
      FindMonitorForDigitizer(a1);
  }
  return (HMONITOR)v1;
}
