/*
 * XREFs of PpmParkReportParkedCore @ 0x14020DE44
 * Callers:
 *     PpmPerfAction @ 0x1400D6560 (PpmPerfAction.c)
 * Callees:
 *     KeTransitionProcessorParkState @ 0x1401DBAA4 (KeTransitionProcessorParkState.c)
 *     PpmEventCoreParkingStateChange @ 0x14020BAC4 (PpmEventCoreParkingStateChange.c)
 */

void __fastcall PpmParkReportParkedCore(__int64 a1)
{
  __int64 v2; // rax
  __int16 v3; // [rsp+20h] [rbp-8h]

  KeTransitionProcessorParkState(a1);
  v2 = *(unsigned int *)(a1 + 36);
  *(_BYTE *)(a1 + 24218) = 1;
  _InterlockedOr64(
    &qword_1402F8928[(unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v2] >> 6],
    1LL << (KiProcessorIndexToNumberMappingTable[v2] & 0x3F));
  _disable();
  LODWORD(v2) = *(_DWORD *)(a1 + 23296);
  *(_DWORD *)(a1 + 11556) = 0;
  *(_DWORD *)(a1 + 11552) = v2;
  if ( (v3 & 0x200) != 0 )
    _enable();
  PpmEventCoreParkingStateChange(a1, 1);
}
