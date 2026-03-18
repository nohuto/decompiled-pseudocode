/*
 * XREFs of ?GetRotatedDisplayRectAtOrigin@CDisplay@@QEBA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@XZ @ 0x180034CEC
 * Callers:
 *     ?GetClippedDeviceBounds@CHwDisplayRenderTarget@@UEAAXPEAUMilRectF@@@Z @ 0x18008FAB0 (-GetClippedDeviceBounds@CHwDisplayRenderTarget@@UEAAXPEAUMilRectF@@@Z.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CDisplay::GetRotatedDisplayRectAtOrigin(_DWORD *a1, _DWORD *a2)
{
  int v3; // eax
  int v4; // edx
  int v5; // ecx

  if ( ((a1[73] - 1) & 0xFFFFFFFD) != 0 )
  {
    *a2 = a1[27];
    a2[1] = a1[26];
    a2[2] = a1[29];
    a2[3] = a1[28];
  }
  else
  {
    *(_OWORD *)a2 = *(_OWORD *)(a1 + 26);
  }
  v3 = *a2;
  v4 = a2[1];
  v5 = -*a2;
  a2[2] -= *a2;
  *a2 = v5 + v3;
  a2[3] -= v4;
  a2[1] = 0;
  return a2;
}
