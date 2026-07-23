/*
 * XREFs of PpmResetIdlePolicy @ 0x1401461C4
 * Callers:
 *     PpmInstallNewIdleStates @ 0x140145C68 (PpmInstallNewIdleStates.c)
 *     PpmApplyIdlePolicyChanges @ 0x1401FF4E8 (PpmApplyIdlePolicyChanges.c)
 * Callees:
 *     PpmScaleIdleStateValues @ 0x14012FC20 (PpmScaleIdleStateValues.c)
 *     PpmResetProcessorIdleAccounting @ 0x1401461FC (PpmResetProcessorIdleAccounting.c)
 *     PpmApplyIdlePolicy @ 0x1401462C8 (PpmApplyIdlePolicy.c)
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
