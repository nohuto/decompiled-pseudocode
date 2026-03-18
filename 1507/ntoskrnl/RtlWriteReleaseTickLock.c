/*
 * XREFs of RtlWriteReleaseTickLock @ 0x140139F44
 * Callers:
 *     KiCalibrateTimeAdjustment @ 0x1403F283C (KiCalibrateTimeAdjustment.c)
 *     KiCreateCpuSetForProcessor @ 0x1403F9A50 (KiCreateCpuSetForProcessor.c)
 *     KiConfigureCpuSetSchedulingInformation @ 0x1403FA4A8 (KiConfigureCpuSetSchedulingInformation.c)
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
