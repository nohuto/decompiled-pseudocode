/*
 * XREFs of ?UnregisterWinSqmProvider@@YAKXZ @ 0x1C006F7F4
 * Callers:
 *     WinSqmEndSession @ 0x1C006F750 (WinSqmEndSession.c)
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
  v1 = _InterlockedCompareExchange64(&qword_1C011E640, 170LL, 221LL);
  switch ( v1 )
  {
    case 221LL:
      v2 = EtwUnregister(*(REGHANDLE *)&WPP_MAIN_CB.AlignmentRequirement);
      LODWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) = 0;
      *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement = 0LL;
      _InterlockedExchange64(&qword_1C011E640, v2 != 0 ? 238LL : 221LL);
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
        v4 = _InterlockedExchange64(&qword_1C011E640, qword_1C011E640);
        if ( v4 != 170 )
          break;
        ++v0;
      }
      while ( v0 < 10 );
      if ( v0 == 10 )
        v4 = _InterlockedCompareExchange64(&qword_1C011E640, 136LL, 170LL);
      return v4 != 153 ? 0x5B4 : 0;
    default:
      return 1460;
  }
  return v2;
}
