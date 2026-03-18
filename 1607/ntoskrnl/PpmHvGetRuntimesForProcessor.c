/*
 * XREFs of PpmHvGetRuntimesForProcessor @ 0x14020D724
 * Callers:
 *     PpmUpdatePerformanceFeedback @ 0x1400DB9C0 (PpmUpdatePerformanceFeedback.c)
 * Callees:
 *     HvlGetPpmStatsForProcessor @ 0x1401BF034 (HvlGetPpmStatsForProcessor.c)
 */

__int64 __fastcall PpmHvGetRuntimesForProcessor(struct _KPRCB *a1, _QWORD *a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  result = HvlGetPpmStatsForProcessor(a1, &v5, a3);
  *a2 = v5;
  return result;
}
