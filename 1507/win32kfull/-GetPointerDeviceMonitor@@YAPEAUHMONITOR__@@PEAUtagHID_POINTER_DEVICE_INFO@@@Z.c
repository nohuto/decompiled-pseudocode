/*
 * XREFs of ?GetPointerDeviceMonitor@@YAPEAUHMONITOR__@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C000F3E0
 * Callers:
 *     _GetPointerDeviceInfoProperties @ 0x1C000F038 (_GetPointerDeviceInfoProperties.c)
 * Callees:
 *     FindMonitorForDigitizer @ 0x1C01CA390 (FindMonitorForDigitizer.c)
 */

HMONITOR __fastcall GetPointerDeviceMonitor(struct tagHID_POINTER_DEVICE_INFO *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rcx

  v1 = 0LL;
  if ( (unsigned int)(*((_DWORD *)a1 + 6) - 7) <= 1 )
  {
    v3 = *(_QWORD *)(GetDispInfo() + 88);
    *((_DWORD *)a1 + 177) = 1;
  }
  else
  {
    v3 = *((_QWORD *)a1 + 33);
  }
  if ( (*((_DWORD *)a1 + 59) & 8) == 0 )
  {
    if ( v3 )
      return *(HMONITOR *)v3;
    else
      FindMonitorForDigitizer(a1);
  }
  return (HMONITOR)v1;
}
