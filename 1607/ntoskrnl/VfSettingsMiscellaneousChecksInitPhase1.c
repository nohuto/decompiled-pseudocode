/*
 * XREFs of VfSettingsMiscellaneousChecksInitPhase1 @ 0x140716810
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x140703204 (VfInitSystemNoRebootNeeded.c)
 *     VerifierInitSystem @ 0x1407B9E08 (VerifierInitSystem.c)
 * Callees:
 *     ViSettingsEnableKernelHandleChecking @ 0x140716830 (ViSettingsEnableKernelHandleChecking.c)
 */

__int64 VfSettingsMiscellaneousChecksInitPhase1()
{
  __int64 result; // rax

  if ( (MmVerifierData & 0x800) != 0 )
    return ViSettingsEnableKernelHandleChecking(1LL);
  return result;
}
