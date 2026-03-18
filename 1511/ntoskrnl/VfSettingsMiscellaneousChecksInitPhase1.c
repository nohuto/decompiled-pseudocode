/*
 * XREFs of VfSettingsMiscellaneousChecksInitPhase1 @ 0x1406C7E6C
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x1406B6A08 (VfInitSystemNoRebootNeeded.c)
 *     VerifierInitSystem @ 0x14076F860 (VerifierInitSystem.c)
 * Callees:
 *     ViSettingsEnableKernelHandleChecking @ 0x1406C7E8C (ViSettingsEnableKernelHandleChecking.c)
 */

__int64 VfSettingsMiscellaneousChecksInitPhase1()
{
  __int64 result; // rax

  if ( (MmVerifierData & 0x800) != 0 )
    return ViSettingsEnableKernelHandleChecking(1LL);
  return result;
}
