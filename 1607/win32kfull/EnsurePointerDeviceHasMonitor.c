/*
 * XREFs of EnsurePointerDeviceHasMonitor @ 0x1C00E3CC0
 * Callers:
 *     _GetPointerDeviceRects @ 0x1C00E3B58 (_GetPointerDeviceRects.c)
 * Callees:
 *     FindMonitorForDigitizer @ 0x1C01C7750 (FindMonitorForDigitizer.c)
 */

__int64 __fastcall EnsurePointerDeviceHasMonitor(__int64 a1)
{
  unsigned int v2; // ebx
  bool v3; // zf

  GetDispInfo(a1);
  v2 = 0;
  v3 = *(_QWORD *)(a1 + 280) == 0LL;
  if ( !*(_QWORD *)(a1 + 280) )
  {
    FindMonitorForDigitizer((struct tagHID_POINTER_DEVICE_INFO *)a1);
    v3 = *(_QWORD *)(a1 + 280) == 0LL;
  }
  LOBYTE(v2) = !v3;
  return v2;
}
