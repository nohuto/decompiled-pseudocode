/*
 * XREFs of ?GetBounds@CGdiSpriteBitmap@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007EAA0
 * Callers:
 *     ?GetTransform@CGdiSpriteBitmap@@UEAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007E9F0 (-GetTransform@CGdiSpriteBitmap@@UEAA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSi.c)
 *     ?GetBounds@CGdiSpriteBitmap@@W7EAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009A6F0 (-GetBounds@CGdiSpriteBitmap@@W7EAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRec.c)
 *     ?GetBounds@CGdiSpriteBitmap@@WEA@EAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009A700 (-GetBounds@CGdiSpriteBitmap@@WEA@EAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilR.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CGdiSpriteBitmap::GetBounds(__int64 a1, __int64 a2, __int64 a3, float *a4)
{
  float v4; // xmm1_4
  int v5; // eax
  float v6; // xmm0_4
  int v7; // eax

  if ( *(_QWORD *)(a1 + 160) )
  {
    v4 = (float)*(int *)(a1 + 120);
    *a4 = v4;
    a4[1] = (float)*(int *)(a1 + 128);
    v5 = *(_DWORD *)(a1 + 48) - *(_DWORD *)(a1 + 124);
    if ( v4 <= (float)v5 )
      v4 = (float)v5;
    v6 = a4[1];
    a4[2] = v4;
    v7 = *(_DWORD *)(a1 + 52) - *(_DWORD *)(a1 + 132);
    if ( v6 <= (float)v7 )
      v6 = (float)v7;
    a4[3] = v6;
  }
  else
  {
    *(_QWORD *)a4 = 0LL;
    a4[2] = (float)*(int *)(a1 + 48);
    a4[3] = (float)*(int *)(a1 + 52);
  }
  return 0LL;
}
