/*
 * XREFs of RECTFromSIZERECT @ 0x1C006F9A8
 * Callers:
 *     xxxCheckFullScreen @ 0x1C0056A5C (xxxCheckFullScreen.c)
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     ?ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z @ 0x1C01C3D78 (-ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RECTFromSIZERECT(_DWORD *a1, _DWORD *a2)
{
  unsigned int v3; // r8d
  bool v4; // sf
  int v5; // r11d
  int v6; // edx
  int v7; // edx
  _BOOL8 result; // rax
  unsigned int v9; // eax

  *a1 = *a2;
  a1[1] = a2[1];
  v3 = 0x80000000;
  v4 = a2[2] + *a2 < 0;
  v5 = a2[2] + *a2;
  a1[2] = v5;
  if ( v4 != (int)*a2 < 0 && v5 < 0 != (int)a2[2] < 0 )
  {
    v9 = 0x80000000;
    if ( v5 < 0 )
      v9 = 0x7FFFFFFF;
    a1[2] = v9;
  }
  v6 = a2[1];
  v4 = a2[3] + v6 < 0;
  v7 = a2[3] + v6;
  a1[3] = v7;
  result = (int)a2[1] < 0;
  if ( v4 != result )
  {
    result = (int)a2[3] < 0;
    if ( v7 < 0 != result )
    {
      if ( v7 < 0 )
        v3 = 0x7FFFFFFF;
      a1[3] = v3;
    }
  }
  return result;
}
