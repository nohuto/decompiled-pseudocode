/*
 * XREFs of GetCpuIdInfo @ 0x1C0002210
 * Callers:
 *     IsPerformanceEnergyBiasSupported @ 0x1C0001B4C (IsPerformanceEnergyBiasSupported.c)
 *     IsHwpNativeInterruptSupported @ 0x1C0001BB0 (IsHwpNativeInterruptSupported.c)
 *     IsHwpSupported @ 0x1C0001C20 (IsHwpSupported.c)
 *     IsNonwrappingACountMCountSupported @ 0x1C0001C84 (IsNonwrappingACountMCountSupported.c)
 *     ValidatePStateCapability @ 0x1C0001FD0 (ValidatePStateCapability.c)
 *     IsProcSpeedStepCapable @ 0x1C0003100 (IsProcSpeedStepCapable.c)
 *     InitMonitorMWaitSupport @ 0x1C0016300 (InitMonitorMWaitSupport.c)
 *     IsMonitorMWaitSupported @ 0x1C00163A8 (IsMonitorMWaitSupported.c)
 *     IsEnergySupportedAtomProcessor @ 0x1C0018DC8 (IsEnergySupportedAtomProcessor.c)
 *     IsEnergySupportedCoreProcessor @ 0x1C0018E48 (IsEnergySupportedCoreProcessor.c)
 *     InitDriver @ 0x1C00225C4 (InitDriver.c)
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
