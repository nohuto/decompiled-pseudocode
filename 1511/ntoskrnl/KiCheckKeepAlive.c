/*
 * XREFs of KiCheckKeepAlive @ 0x1400E255C
 * Callers:
 *     KeAccumulateTicks @ 0x140048FA0 (KeAccumulateTicks.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140076CC0 (KeAddProcessorAffinityEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x14007C640 (KeRemoveProcessorAffinityEx.c)
 */

char __fastcall KiCheckKeepAlive(int a1)
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
