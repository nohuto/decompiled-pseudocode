/*
 * XREFs of fsg_GetContourData @ 0x1C00B0F3C
 * Callers:
 *     fs_ContourScan @ 0x1C00AF620 (fs_ContourScan.c)
 * Callees:
 *     scl_ScaleDownFromSubPixelOverscale @ 0x1C00B14EC (scl_ScaleDownFromSubPixelOverscale.c)
 */

_WORD *__fastcall fsg_GetContourData(
        __int64 a1,
        int a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6,
        _QWORD *a7,
        _QWORD *a8,
        _WORD *a9)
{
  __int64 v9; // r11
  _WORD *result; // rax
  __int64 v12; // r11

  v9 = *(_QWORD *)(a1 + 16);
  *a3 = *(_QWORD *)v9;
  *a4 = *(_QWORD *)(v9 + 8);
  *a5 = *(_QWORD *)(v9 + 56);
  *a6 = *(_QWORD *)(v9 + 64);
  *a7 = *(_QWORD *)(v9 + 48);
  *a8 = *(_QWORD *)(v9 + 88);
  result = a9;
  *a9 = *(_WORD *)(v9 + 80);
  if ( a2 )
  {
    result = (_WORD *)scl_ScaleDownFromSubPixelOverscale(v9);
    *a3 = *(_QWORD *)(v12 + 16);
  }
  return result;
}
