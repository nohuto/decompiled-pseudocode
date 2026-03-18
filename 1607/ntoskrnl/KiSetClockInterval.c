/*
 * XREFs of KiSetClockInterval @ 0x14009DEE4
 * Callers:
 *     ExpUpdateTimerConfigurationWorker @ 0x14009DDD0 (ExpUpdateTimerConfigurationWorker.c)
 *     KiCheckForTimerExpiration @ 0x1400DC7F0 (KiCheckForTimerExpiration.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x140031320 (RtlRbRemoveNode.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x14009DF80 (KiSetClockIntervalToMinimumRequested.c)
 *     RtlRbInsertNodeEx @ 0x1400ECEC0 (RtlRbInsertNodeEx.c)
 */

__int64 __fastcall KiSetClockInterval(unsigned int a1, char a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 result; // rax

  v3 = a3;
  if ( *(_BYTE *)(a3 + 24) )
    RtlRbRemoveNode((unsigned __int64 *)&KiClockIntervalRequests, (unsigned __int64 *)a3);
  *(_DWORD *)(v3 + 28) = a1;
  LOBYTE(a3) = 0;
  v6 = KiClockIntervalRequests;
  if ( KiClockIntervalRequests )
  {
    while ( 1 )
    {
      if ( a1 >= *(_DWORD *)(v6 + 28) )
      {
        v7 = *(_QWORD *)(v6 + 8);
        if ( !v7 )
        {
          LOBYTE(a3) = 1;
          break;
        }
      }
      else
      {
        v7 = *(_QWORD *)v6;
        if ( !*(_QWORD *)v6 )
        {
          LOBYTE(a3) = 0;
          break;
        }
      }
      v6 = v7;
    }
  }
  RtlRbInsertNodeEx(&KiClockIntervalRequests, v6, a3, v3);
  *(_BYTE *)(v3 + 24) = 1;
  result = KiSetClockIntervalToMinimumRequested();
  if ( a2 )
    KeNonHrTimeIncrement = a1;
  return result;
}
