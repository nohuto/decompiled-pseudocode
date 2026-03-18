/*
 * XREFs of KiGetHeteroCpuPolicyThread @ 0x1401C97D4
 * Callers:
 *     KiUpdateRunTime @ 0x140045DB0 (KiUpdateRunTime.c)
 *     KeClockInterruptNotify @ 0x140046990 (KeClockInterruptNotify.c)
 *     KiQuantumEnd @ 0x14007AAB0 (KiQuantumEnd.c)
 *     KiHeteroChooseTargetProcessor @ 0x1401C97F0 (KiHeteroChooseTargetProcessor.c)
 * Callees:
 *     KiConvertDynamicHeteroPolicy @ 0x1401C96E4 (KiConvertDynamicHeteroPolicy.c)
 */

__int64 __fastcall KiGetHeteroCpuPolicyThread(__int64 a1, struct _KPRCB *a2)
{
  __int64 result; // rax

  result = *(unsigned __int8 *)(a1 + 125);
  if ( *(unsigned __int8 *)(a1 + 125) >= 5u )
    return KiConvertDynamicHeteroPolicy(a1, (__int64)a2, a2);
  return result;
}
