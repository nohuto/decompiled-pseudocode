/*
 * XREFs of EnsurePointerDeviceHasMonitor @ 0x1C0117D60
 * Callers:
 *     _GetPointerDeviceRects @ 0x1C0117E98 (_GetPointerDeviceRects.c)
 *     xxxProcessPointerDeviceInput @ 0x1C01CF3C8 (xxxProcessPointerDeviceInput.c)
 *     xxxProcessPTPDeviceInput @ 0x1C01D1AB4 (xxxProcessPTPDeviceInput.c)
 * Callees:
 *     FindMonitorForDigitizer @ 0x1C01CBF70 (FindMonitorForDigitizer.c)
 */

__int64 __fastcall EnsurePointerDeviceHasMonitor(__int64 a1)
{
  unsigned int v2; // ebx
  bool v3; // zf

  GetDispInfo();
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
