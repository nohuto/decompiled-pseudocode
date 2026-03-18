/*
 * XREFs of rimConvertCoordinatesWithRounding @ 0x1C00D4454
 * Callers:
 *     RIMUpdatePointerDeviceScalingInfo @ 0x1C000855C (RIMUpdatePointerDeviceScalingInfo.c)
 *     RIMConvertPointCoordinates @ 0x1C00D3868 (RIMConvertPointCoordinates.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall rimConvertCoordinatesWithRounding(int a1, int a2, int a3, int a4, int a5, _DWORD *a6)
{
  int v6; // edx
  __int64 v7; // r11
  unsigned int v8; // r8d
  __int64 v9; // r10
  __int64 v10; // rax
  __int64 v11; // rcx

  v6 = a2 - a1;
  v7 = a3;
  v8 = 0;
  v9 = (a4 - (int)v7) * (__int64)(a5 - a1);
  if ( v9 <= 0 )
    v10 = 2 * v9 - v6;
  else
    v10 = v6 + 2 * v9;
  v11 = v7 + v10 / (2LL * v6);
  if ( (unsigned __int64)(v11 + 0x80000000LL) > 0xFFFFFFFF )
  {
    *a6 = -1;
  }
  else
  {
    *a6 = v11;
    if ( (int)v11 >= a4 )
      *a6 = a4 - 1;
    return 1;
  }
  return v8;
}
