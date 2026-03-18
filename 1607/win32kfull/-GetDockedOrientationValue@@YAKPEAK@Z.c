/*
 * XREFs of ?GetDockedOrientationValue@@YAKPEAK@Z @ 0x1C01C9748
 * Callers:
 *     ?xxxApplyNativeOrientation@@YAXXZ @ 0x1C01C9B60 (-xxxApplyNativeOrientation@@YAXXZ.c)
 *     xxxAutoRotateScreen @ 0x1C01CA304 (xxxAutoRotateScreen.c)
 * Callees:
 *     ?QueryDockedOrientationRegistrySetting@@YAJPEAK0@Z @ 0x1C01C9A28 (-QueryDockedOrientationRegistrySetting@@YAJPEAK0@Z.c)
 */

__int64 __fastcall GetDockedOrientationValue(unsigned int *a1)
{
  __int64 result; // rax

  if ( dword_1C0334608 )
    return dword_1C0329494;
  dword_1C0329490 = 0;
  dword_1C0329494 = dword_1C0329478 != 0 ? 3 : 0;
  if ( (int)QueryDockedOrientationRegistrySetting(&dword_1C0329490, &dword_1C0329494) < 0 )
    return dword_1C0329494;
  result = dword_1C0329494;
  if ( dword_1C0329494 > 3 )
  {
    result = dword_1C0329478 != 0 ? 3 : 0;
    dword_1C0329494 = dword_1C0329478 != 0 ? 3 : 0;
  }
  dword_1C0334608 = 1;
  return result;
}
