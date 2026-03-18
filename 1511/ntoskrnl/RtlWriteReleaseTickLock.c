/*
 * XREFs of RtlWriteReleaseTickLock @ 0x1400DE3CC
 * Callers:
 *     KiCalibrateTimeAdjustment @ 0x14039FC48 (KiCalibrateTimeAdjustment.c)
 *     KiConfigureCpuSetSchedulingInformation @ 0x1403A8E4C (KiConfigureCpuSetSchedulingInformation.c)
 *     KiCreateCpuSetForProcessor @ 0x1403A9BF0 (KiCreateCpuSetForProcessor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlWriteReleaseTickLock(__int64 *a1)
{
  __int64 result; // rax

  result = *a1 + 1;
  *a1 = result;
  return result;
}
