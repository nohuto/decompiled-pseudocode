/*
 * XREFs of KiCheckKeepAlive @ 0x14009E100
 * Callers:
 *     KeAccumulateTicks @ 0x1400DA260 (KeAccumulateTicks.c)
 * Callees:
 *     KeRemoveProcessorAffinityEx @ 0x140030B3C (KeRemoveProcessorAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x1400D1E28 (KeAddProcessorAffinityEx.c)
 */

char __fastcall KiCheckKeepAlive(unsigned int a1)
{
  char v2; // di
  unsigned int v3; // r8d

  v2 = 0;
  v3 = KiProcessorIndexToNumberMappingTable[a1];
  if ( ((*(_QWORD *)&KiClockCheckPending[4 * ((unsigned __int64)v3 >> 6) + 4] >> (KiProcessorIndexToNumberMappingTable[a1] & 0x3F)) & 1) != 0 )
  {
    if ( ((*((_QWORD *)&KiClockCheckReady + ((unsigned __int64)v3 >> 6) + 1) >> (v3 & 0x3F)) & 1) != 0 )
    {
      KeRemoveProcessorAffinityEx((unsigned __int16 *)&KiClockCheckReady, a1);
      KeRemoveProcessorAffinityEx((unsigned __int16 *)KiClockCheckPending, a1);
      return 1;
    }
    else
    {
      KeAddProcessorAffinityEx(&KiClockCheckReady, a1);
    }
  }
  return v2;
}
