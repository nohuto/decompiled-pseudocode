/*
 * XREFs of EnsurePointerDeviceHasMonitor @ 0x1C00EF440
 * Callers:
 *     _GetPointerDeviceRects @ 0x1C00EF164 (_GetPointerDeviceRects.c)
 *     xxxProcessPointerDeviceInput @ 0x1C01CD7D8 (xxxProcessPointerDeviceInput.c)
 *     xxxProcessPTPDeviceInput @ 0x1C01CFE54 (xxxProcessPTPDeviceInput.c)
 * Callees:
 *     FindMonitorForDigitizer @ 0x1C01CA390 (FindMonitorForDigitizer.c)
 */

__int64 __fastcall EnsurePointerDeviceHasMonitor(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  bool v5; // zf

  GetDispInfo(a1, a2, a3);
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 264) == 0LL;
  if ( !*(_QWORD *)(a1 + 264) )
  {
    FindMonitorForDigitizer((struct tagHID_POINTER_DEVICE_INFO *)a1);
    v5 = *(_QWORD *)(a1 + 264) == 0LL;
  }
  LOBYTE(v4) = !v5;
  return v4;
}
