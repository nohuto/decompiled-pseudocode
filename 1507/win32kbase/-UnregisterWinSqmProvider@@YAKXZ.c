/*
 * XREFs of ?UnregisterWinSqmProvider@@YAKXZ @ 0x1C006B9E4
 * Callers:
 *     WinSqmEndSession @ 0x1C006B940 (WinSqmEndSession.c)
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
  v1 = _InterlockedCompareExchange64(&qword_1C0104230, 170LL, 221LL);
  switch ( v1 )
  {
    case 221LL:
      v2 = EtwUnregister(RegHandle);
      dword_1C01001A0 = 0;
      RegHandle = 0LL;
      _InterlockedExchange64(&qword_1C0104230, v2 != 0 ? 238LL : 221LL);
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
        v4 = _InterlockedExchange64(&qword_1C0104230, qword_1C0104230);
        if ( v4 != 170 )
          break;
        ++v0;
      }
      while ( v0 < 10 );
      if ( v0 == 10 )
        v4 = _InterlockedCompareExchange64(&qword_1C0104230, 136LL, 170LL);
      return v4 != 153 ? 0x5B4 : 0;
    default:
      return 1460;
  }
  return v2;
}
