/*
 * XREFs of ?ResultFromKnownLastError@@YAJXZ @ 0x18009DBE8
 * Callers:
 *     ?_SetTimeToNextFrame@CAnimationClock@@AEAAJPEBT_LARGE_INTEGER@@PEAT2@@Z @ 0x180005420 (-_SetTimeToNextFrame@CAnimationClock@@AEAAJPEBT_LARGE_INTEGER@@PEAT2@@Z.c)
 *     ?_initimpl@CImmersiveOrPrimaryMonitor@@CAJPEAUHMONITOR__@@QEAUSCALINGINFO@@@Z @ 0x18003E288 (-_initimpl@CImmersiveOrPrimaryMonitor@@CAJPEAUHMONITOR__@@QEAUSCALINGINFO@@@Z.c)
 * Callees:
 *     <none>
 */

signed int ResultFromKnownLastError(void)
{
  signed int result; // eax

  result = GetLastError();
  if ( result > 0 )
    result = (unsigned __int16)result | 0x80070000;
  if ( result >= 0 )
    return -2147467259;
  return result;
}
