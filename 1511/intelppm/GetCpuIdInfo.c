/*
 * XREFs of GetCpuIdInfo @ 0x1C0002980
 * Callers:
 *     IsPerformanceEnergyBiasSupported @ 0x1C0001DD8 (IsPerformanceEnergyBiasSupported.c)
 *     IsHwpNativeInterruptSupported @ 0x1C0001E3C (IsHwpNativeInterruptSupported.c)
 *     IsHwpSupported @ 0x1C0001EB0 (IsHwpSupported.c)
 *     IsNonwrappingACountMCountSupported @ 0x1C0001F14 (IsNonwrappingACountMCountSupported.c)
 *     ValidatePStateCapability @ 0x1C00021E0 (ValidatePStateCapability.c)
 *     IsProcSpeedStepCapable @ 0x1C0003BF0 (IsProcSpeedStepCapable.c)
 *     InitMonitorMWaitSupport @ 0x1C00163B0 (InitMonitorMWaitSupport.c)
 *     IsMonitorMWaitSupported @ 0x1C0016458 (IsMonitorMWaitSupported.c)
 *     GetProcessorArchitectureIndex @ 0x1C0018CF0 (GetProcessorArchitectureIndex.c)
 *     InitEnergyCountersMsrEx @ 0x1C0018FCC (InitEnergyCountersMsrEx.c)
 *     ProbeFixedFunctionCounters @ 0x1C0019084 (ProbeFixedFunctionCounters.c)
 *     InitDriver @ 0x1C00235B8 (InitDriver.c)
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
