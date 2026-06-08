/*
 * XREFs of GetCpuIdInfo @ 0x1C0002A20
 * Callers:
 *     IsNonwrappingACountMCountSupported @ 0x1C0001774 (IsNonwrappingACountMCountSupported.c)
 *     IsPerformanceEnergyBiasSupported @ 0x1C00017E0 (IsPerformanceEnergyBiasSupported.c)
 *     IsHwpNativeInterruptSupported @ 0x1C0001840 (IsHwpNativeInterruptSupported.c)
 *     IsHwpSupported @ 0x1C00018B0 (IsHwpSupported.c)
 *     ValidatePStateCapability @ 0x1C0002030 (ValidatePStateCapability.c)
 *     IsProcSpeedStepCapable @ 0x1C0003DAC (IsProcSpeedStepCapable.c)
 *     InitMonitorMWaitSupport @ 0x1C00149D0 (InitMonitorMWaitSupport.c)
 *     IsMonitorMWaitSupported @ 0x1C0014A78 (IsMonitorMWaitSupported.c)
 *     GetProcessorArchitectureIndex @ 0x1C0019C34 (GetProcessorArchitectureIndex.c)
 *     InitEnergyCountersMsrEx @ 0x1C0019F0C (InitEnergyCountersMsrEx.c)
 *     ProbeFixedFunctionCounters @ 0x1C0019FC4 (ProbeFixedFunctionCounters.c)
 *     InitDriver @ 0x1C0024A18 (InitDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetCpuIdInfo(unsigned int a1, _DWORD *a2)
{
  __int64 result; // rax

  _RAX = a1;
  __asm { cpuid }
  *a2 = result;
  a2[1] = _RBX;
  a2[2] = _RCX;
  a2[3] = _RDX;
  return result;
}
