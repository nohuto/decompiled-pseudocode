/*
 * XREFs of PpmPerfQueueAction @ 0x14012FC4C
 * Callers:
 *     PpmParkUnblockIdle @ 0x1400D30AC (PpmParkUnblockIdle.c)
 *     PpmParkReportParkedCores @ 0x1400D30F0 (PpmParkReportParkedCores.c)
 *     PpmParkReportUnparkedCores @ 0x1400D3134 (PpmParkReportUnparkedCores.c)
 *     PpmPerfApplyProcessorStates @ 0x14012F730 (PpmPerfApplyProcessorStates.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1400D6160 (KiInsertQueueDpc.c)
 */

__int64 __fastcall PpmPerfQueueAction(__int64 a1, char a2)
{
  __int64 result; // rax

  _m_prefetchw((const void *)(a1 + 24144));
  result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(a1 + 24144), 1 << a2);
  if ( !(_DWORD)result )
    return KiInsertQueueDpc(a1 + 24080, 0LL, 0LL, 0LL, 0);
  return result;
}
