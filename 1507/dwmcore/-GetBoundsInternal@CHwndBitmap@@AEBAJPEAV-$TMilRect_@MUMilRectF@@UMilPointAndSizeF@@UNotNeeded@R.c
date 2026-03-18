/*
 * XREFs of ?GetBoundsInternal@CHwndBitmap@@AEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180011FB0
 * Callers:
 *     ?GetBounds@CHwndBitmap@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180012050 (-GetBounds@CHwndBitmap@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?HitTest@CHwndBitmap@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18010AEB0 (-HitTest@CHwndBitmap@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ?IsValidVisual@CHwndBitmap@@AEBA_NXZ @ 0x1800120B4 (-IsValidVisual@CHwndBitmap@@AEBA_NXZ.c)
 *     ?GetBounds@CVisualTree@@QEAAJPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180041100 (-GetBounds@CVisualTree@@QEAAJPEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z @ 0x1800DCD90 (-GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z.c)
 */

__int64 __fastcall CHwndBitmap::GetBoundsInternal(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  int Bounds; // eax
  float v8; // [rsp+30h] [rbp-30h] BYREF
  float v9; // [rsp+34h] [rbp-2Ch] BYREF
  float v10; // [rsp+38h] [rbp-28h] BYREF
  float v11[6]; // [rsp+40h] [rbp-20h] BYREF

  v4 = 0;
  if ( CHwndBitmap::IsValidVisual((CHwndBitmap *)a1) && (v5 = *(_QWORD *)(a1 + 456)) != 0 )
  {
    Bounds = CVisualTree::GetBounds(v5, v11);
    v4 = Bounds;
    if ( Bounds < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Bounds, 0x95u);
    }
    else
    {
      if ( *(_BYTE *)(a1 + 464) && CVisual::GetEffectiveOffset(*(CVisual **)(a1 + 448), &v8, &v9, &v10) )
      {
        v11[1] = v11[1] + COERCE_FLOAT(LODWORD(v9) ^ _xmm);
        v11[0] = v11[0] + COERCE_FLOAT(LODWORD(v8) ^ _xmm);
        v11[3] = v11[3] + COERCE_FLOAT(LODWORD(v9) ^ _xmm);
        v11[2] = v11[2] + COERCE_FLOAT(LODWORD(v8) ^ _xmm);
      }
      *(_OWORD *)a2 = *(_OWORD *)v11;
    }
  }
  else
  {
    *(_DWORD *)(a2 + 12) = 0;
    *(_DWORD *)(a2 + 8) = 0;
    *(_DWORD *)(a2 + 4) = 0;
    *(_DWORD *)a2 = 0;
  }
  return v4;
}
