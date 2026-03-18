/*
 * XREFs of ?GetDockedOrientationValue@@YAKXZ @ 0x1C01D0340
 * Callers:
 *     ?xxxApplyNativeOrientation@@YAXXZ @ 0x1C01D06F4 (-xxxApplyNativeOrientation@@YAXXZ.c)
 *     xxxAutoRotateScreen @ 0x1C01D0C4C (xxxAutoRotateScreen.c)
 * Callees:
 *     ?QueryDockedOrientationRegistrySetting@@YAJPEAK@Z @ 0x1C01D0524 (-QueryDockedOrientationRegistrySetting@@YAJPEAK@Z.c)
 */

__int64 GetDockedOrientationValue(void)
{
  __int64 result; // rax

  if ( dword_1C03216E0 )
    return dword_1C0323060;
  dword_1C0323060 = dword_1C0323048 != 0 ? 3 : 0;
  if ( (int)QueryDockedOrientationRegistrySetting(&dword_1C0323060) < 0 )
    return dword_1C0323060;
  result = dword_1C0323060;
  if ( dword_1C0323060 > 3 )
  {
    result = dword_1C0323048 != 0 ? 3 : 0;
    dword_1C0323060 = dword_1C0323048 != 0 ? 3 : 0;
  }
  dword_1C03216E0 = 1;
  return result;
}
