/*
 * XREFs of KiSetClockInterval @ 0x140032C70
 * Callers:
 *     KeAccumulateTicks @ 0x140048FA0 (KeAccumulateTicks.c)
 *     ExpUpdateTimerConfigurationWorker @ 0x1400EC220 (ExpUpdateTimerConfigurationWorker.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x1400339F0 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x140034FA0 (RtlRbInsertNodeEx.c)
 */

__int64 __fastcall KiSetClockInterval(unsigned int a1, __int64 a2, __int64 a3)
{
  char v3; // bl
  __int64 v6; // rdx
  __int64 v7; // rax

  v3 = 0;
  if ( *(_BYTE *)(a2 + 24) )
    RtlRbRemoveNode(&KiClockIntervalRequests, a2);
  *(_DWORD *)(a2 + 28) = a1;
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
          v3 = 1;
          break;
        }
      }
      else
      {
        v7 = *(_QWORD *)v6;
        if ( !*(_QWORD *)v6 )
          break;
      }
      v6 = v7;
    }
  }
  LOBYTE(a3) = v3;
  RtlRbInsertNodeEx(&KiClockIntervalRequests, v6, a3, a2);
  *(_BYTE *)(a2 + 24) = 1;
  return KiSetClockIntervalToMinimumRequested();
}
