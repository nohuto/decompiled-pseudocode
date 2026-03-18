/*
 * XREFs of ValidateHwndIAM @ 0x1C007896C
 * Callers:
 *     ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C0074F18 (-ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C0078590 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C00789B0 (IAMThreadAccessGranted.c)
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
