/*
 * XREFs of PpmHvGetRuntimesForProcessor @ 0x14020D550
 * Callers:
 *     PpmUpdatePerformanceFeedback @ 0x1400D9860 (PpmUpdatePerformanceFeedback.c)
 * Callees:
 *     HvlGetPpmStatsForProcessor @ 0x1401BEF18 (HvlGetPpmStatsForProcessor.c)
 */

__int64 __fastcall PpmHvGetRuntimesForProcessor(struct _KPRCB *a1, _QWORD *a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  result = HvlGetPpmStatsForProcessor(a1, &v5, a3);
  *a2 = v5;
  return result;
}
