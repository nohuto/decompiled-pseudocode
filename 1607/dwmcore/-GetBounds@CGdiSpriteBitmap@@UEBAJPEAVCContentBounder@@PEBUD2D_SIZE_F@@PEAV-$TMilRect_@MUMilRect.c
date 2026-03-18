/*
 * XREFs of ?GetBounds@CGdiSpriteBitmap@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002AC30
 * Callers:
 *     ?GetTransform@CGdiSpriteBitmap@@UEAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002AB70 (-GetTransform@CGdiSpriteBitmap@@UEAA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSi.c)
 *     ?GetBounds@CGdiSpriteBitmap@@W7EBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C03F0 (-GetBounds@CGdiSpriteBitmap@@W7EBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRec.c)
 *     ?GetBounds@CGdiSpriteBitmap@@WII@EBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C0400 (-GetBounds@CGdiSpriteBitmap@@WII@EBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilR.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CGdiSpriteBitmap::GetBounds(__int64 a1, __int64 a2, __int64 a3, float *a4)
{
  float v4; // xmm1_4
  float v5; // xmm2_4

  if ( *(_QWORD *)(a1 + 232) )
  {
    v4 = (float)*(int *)(a1 + 192);
    *a4 = v4;
    v5 = (float)*(int *)(a1 + 200);
    a4[1] = v5;
    a4[2] = fmaxf(v4, (float)(*(_DWORD *)(a1 + 120) - *(_DWORD *)(a1 + 196)));
    a4[3] = fmaxf(v5, (float)(*(_DWORD *)(a1 + 124) - *(_DWORD *)(a1 + 204)));
  }
  else
  {
    *(_QWORD *)a4 = 0LL;
    a4[2] = (float)*(int *)(a1 + 120);
    a4[3] = (float)*(int *)(a1 + 124);
  }
  return 0LL;
}
