/*
 * XREFs of VfSettingsMiscellaneousChecksInitPhase1 @ 0x14074A870
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x140736CF8 (VfInitSystemNoRebootNeeded.c)
 *     VerifierInitSystem @ 0x1407E507C (VerifierInitSystem.c)
 * Callees:
 *     ViSettingsEnableKernelHandleChecking @ 0x14074A890 (ViSettingsEnableKernelHandleChecking.c)
 */

__int64 VfSettingsMiscellaneousChecksInitPhase1()
{
  __int64 result; // rax

  if ( (MmVerifierData & 0x800) != 0 )
    return ViSettingsEnableKernelHandleChecking(1LL);
  return result;
}
