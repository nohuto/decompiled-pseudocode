/*
 * XREFs of PpmResetIdlePolicy @ 0x140168B78
 * Callers:
 *     PpmApplyIdlePolicyChanges @ 0x14015D824 (PpmApplyIdlePolicyChanges.c)
 *     PpmInstallNewIdleStates @ 0x1401685F8 (PpmInstallNewIdleStates.c)
 * Callees:
 *     DbgPrint @ 0x140131E68 (DbgPrint.c)
 *     PpmScaleIdleStateValues @ 0x1401578F4 (PpmScaleIdleStateValues.c)
 *     PpmResetProcessorIdleAccounting @ 0x140168BC0 (PpmResetProcessorIdleAccounting.c)
 *     PpmApplyIdlePolicy @ 0x140168C50 (PpmApplyIdlePolicy.c)
 */

void __fastcall PpmResetIdlePolicy(_QWORD *a1)
{
  LARGE_INTEGER PerformanceCounter; // rax

  if ( *a1 )
  {
    PpmApplyIdlePolicy();
    PpmScaleIdleStateValues((__int64)a1);
    if ( (PoDebug & 0x80000) != 0 )
      DbgPrint("Resetting idle accounting information\n");
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    ((void (__fastcall *)(_QWORD, _QWORD))PpmResetProcessorIdleAccounting)(
      a1[1],
      (LARGE_INTEGER)PerformanceCounter.QuadPart);
  }
}
