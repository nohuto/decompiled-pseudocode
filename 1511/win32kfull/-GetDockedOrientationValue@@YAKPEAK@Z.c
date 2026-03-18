/*
 * XREFs of ?GetDockedOrientationValue@@YAKPEAK@Z @ 0x1C01D1F8C
 * Callers:
 *     ?xxxApplyNativeOrientation@@YAXXZ @ 0x1C01D22C0 (-xxxApplyNativeOrientation@@YAXXZ.c)
 *     xxxAutoRotateScreen @ 0x1C01D2848 (xxxAutoRotateScreen.c)
 * Callees:
 *     ?QueryDockedOrientationRegistrySetting@@YAJPEAK0@Z @ 0x1C01D217C (-QueryDockedOrientationRegistrySetting@@YAJPEAK0@Z.c)
 */

__int64 __fastcall GetDockedOrientationValue(unsigned int *a1)
{
  __int64 result; // rax

  if ( dword_1C032F184 )
    return dword_1C0323D94;
  dword_1C0323D90 = 0;
  dword_1C0323D94 = dword_1C0323D78 != 0 ? 3 : 0;
  if ( (int)QueryDockedOrientationRegistrySetting(&dword_1C0323D90, &dword_1C0323D94) < 0 )
    return dword_1C0323D94;
  result = dword_1C0323D94;
  if ( dword_1C0323D94 > 3 )
  {
    result = dword_1C0323D78 != 0 ? 3 : 0;
    dword_1C0323D94 = dword_1C0323D78 != 0 ? 3 : 0;
  }
  dword_1C032F184 = 1;
  return result;
}
