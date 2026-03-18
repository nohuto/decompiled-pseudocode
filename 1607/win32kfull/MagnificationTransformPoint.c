/*
 * XREFs of MagnificationTransformPoint @ 0x1C01FAFBC
 * Callers:
 *     ApplyMagInputTransform @ 0x1C01C3270 (ApplyMagInputTransform.c)
 *     TransformForInputMagnification @ 0x1C01C3680 (TransformForInputMagnification.c)
 *     ?GetMouseCoord@@YAXJJK_K0PEAUtagPOINT@@PEAU_SUBPIXELS@@HHH@Z @ 0x1C01CF6B4 (-GetMouseCoord@@YAXJJK_K0PEAUtagPOINT@@PEAU_SUBPIXELS@@HHH@Z.c)
 *     ?MagnifyScreenLocation@@YAXPEAUtagPOINT@@@Z @ 0x1C01E80FC (-MagnifyScreenLocation@@YAXPEAUtagPOINT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall MagnificationTransformPoint(__int128 *a1, int *a2)
{
  int v2; // r9d
  int v4; // r11d
  int v5; // r10d
  int v6; // edx
  int v7; // eax
  int v8; // eax
  __int128 v9; // [rsp+0h] [rbp-28h]
  __int128 v10; // [rsp+10h] [rbp-18h]

  if ( a1 )
  {
    v2 = *((_DWORD *)a1 + 10);
    v4 = *((_DWORD *)a1 + 11);
    v9 = *a1;
    v10 = a1[1];
    if ( v2 )
    {
      if ( v4 )
      {
        v5 = v9 + (((*a2 - (int)v10) << 8) + v2 / 2) / v2;
        v6 = (((a2[1] - DWORD1(v10)) << 8) + v4 / 2) / v4 + DWORD1(v9);
        v7 = DWORD2(v9) - 1;
        if ( v5 < DWORD2(v9) - 1 )
          v7 = v5;
        *a2 = v7;
        v8 = HIDWORD(v9) - 1;
        if ( v6 < HIDWORD(v9) - 1 )
          v8 = v6;
        a2[1] = v8;
      }
    }
  }
}
