/*
 * XREFs of ValidateHwndIAM @ 0x1C008284C
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C0082470 (NtUserSetWindowCompositionAttribute.c)
 *     ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C008504C (-ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C0082890 (IAMThreadAccessGranted.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 ValidateHwndIAM()
{
  _BYTE *v0; // r8
  __int64 v1; // r9

  if ( (unsigned int)IAMThreadAccessGranted(gptiCurrent) )
    *v0 = 0;
  return ValidateHwnd(v1);
}
