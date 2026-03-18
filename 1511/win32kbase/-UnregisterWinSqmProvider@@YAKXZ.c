/*
 * XREFs of ?UnregisterWinSqmProvider@@YAKXZ @ 0x1C0062834
 * Callers:
 *     WinSqmEndSession @ 0x1C0062790 (WinSqmEndSession.c)
 * Callees:
 *     <none>
 */

__int64 UnregisterWinSqmProvider(void)
{
  int v0; // ebx
  signed __int64 v1; // rax
  unsigned int v2; // edx
  __int64 v4; // rax
  union _LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  Interval.QuadPart = 0LL;
  v1 = _InterlockedCompareExchange64(&qword_1C01071F0, 170LL, 221LL);
  switch ( v1 )
  {
    case 221LL:
      v2 = EtwUnregister((REGHANDLE)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink);
      *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type = 0;
      WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink = 0LL;
      _InterlockedExchange64(&qword_1C01071F0, v2 != 0 ? 238LL : 221LL);
      break;
    case 153LL:
      return 0;
    case 119LL:
      return 1359;
    case 170LL:
      Interval.QuadPart = -1000000LL;
      do
      {
        KeDelayExecutionThread(1, 0, &Interval);
        v4 = _InterlockedExchange64(&qword_1C01071F0, qword_1C01071F0);
        if ( v4 != 170 )
          break;
        ++v0;
      }
      while ( v0 < 10 );
      if ( v0 == 10 )
        v4 = _InterlockedCompareExchange64(&qword_1C01071F0, 136LL, 170LL);
      return v4 != 153 ? 0x5B4 : 0;
    default:
      return 1460;
  }
  return v2;
}
