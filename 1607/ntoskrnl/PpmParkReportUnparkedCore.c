/*
 * XREFs of PpmParkReportUnparkedCore @ 0x14020E098
 * Callers:
 *     PpmPerfAction @ 0x1400D86C0 (PpmPerfAction.c)
 * Callees:
 *     KeTransitionProcessorParkState @ 0x1401DBC78 (KeTransitionProcessorParkState.c)
 *     PpmEventCoreParkingStateChange @ 0x14020BC98 (PpmEventCoreParkingStateChange.c)
 */

_BYTE *__fastcall PpmParkReportUnparkedCore(__int64 a1)
{
  __int64 v2; // rax
  _BYTE *result; // rax

  KeTransitionProcessorParkState(a1);
  v2 = *(unsigned int *)(a1 + 36);
  *(_BYTE *)(a1 + 24218) = 0;
  _InterlockedAnd64(
    &qword_1402F8928[(unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v2] >> 6],
    ~(1LL << (KiProcessorIndexToNumberMappingTable[v2] & 0x3F)));
  PpmEventCoreParkingStateChange(a1, 0);
  result = *(_BYTE **)(a1 + 23808);
  if ( result )
  {
    if ( *result == 1 )
      *(_BYTE *)(a1 + 23869) = 1;
  }
  return result;
}
