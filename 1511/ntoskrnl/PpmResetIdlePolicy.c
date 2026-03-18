/*
 * XREFs of PpmResetIdlePolicy @ 0x140139D8C
 * Callers:
 *     PpmApplyIdlePolicyChanges @ 0x14012F9C8 (PpmApplyIdlePolicyChanges.c)
 *     PpmInstallNewIdleStates @ 0x140139824 (PpmInstallNewIdleStates.c)
 * Callees:
 *     PpmScaleIdleStateValues @ 0x1401244B0 (PpmScaleIdleStateValues.c)
 *     PpmResetProcessorIdleAccounting @ 0x140139DC4 (PpmResetProcessorIdleAccounting.c)
 *     PpmApplyIdlePolicy @ 0x140139E90 (PpmApplyIdlePolicy.c)
 */

__int64 __fastcall PpmResetIdlePolicy(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)a1 )
  {
    PpmApplyIdlePolicy();
    PpmScaleIdleStateValues(a1);
    KeQueryPerformanceCounter(0LL);
    return PpmResetProcessorIdleAccounting(*(void **)(a1 + 8));
  }
  return result;
}
