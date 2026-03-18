/*
 * XREFs of PpmResetIdlePolicy @ 0x140145C54
 * Callers:
 *     PpmInstallNewIdleStates @ 0x1401456F8 (PpmInstallNewIdleStates.c)
 *     PpmApplyIdlePolicyChanges @ 0x1401FF6BC (PpmApplyIdlePolicyChanges.c)
 * Callees:
 *     PpmScaleIdleStateValues @ 0x14012F6B0 (PpmScaleIdleStateValues.c)
 *     PpmResetProcessorIdleAccounting @ 0x140145C8C (PpmResetProcessorIdleAccounting.c)
 *     PpmApplyIdlePolicy @ 0x140145D58 (PpmApplyIdlePolicy.c)
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
