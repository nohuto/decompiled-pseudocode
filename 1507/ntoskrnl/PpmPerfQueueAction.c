/*
 * XREFs of PpmPerfQueueAction @ 0x140157980
 * Callers:
 *     PpmParkReportUnparkedCores @ 0x1400E8FB8 (PpmParkReportUnparkedCores.c)
 *     PpmParkReportParkedCores @ 0x1400E9000 (PpmParkReportParkedCores.c)
 *     PpmPerfApplyProcessorStates @ 0x140157238 (PpmPerfApplyProcessorStates.c)
 *     PpmParkUnblockIdle @ 0x140242948 (PpmParkUnblockIdle.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1400A48A0 (KiInsertQueueDpc.c)
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
