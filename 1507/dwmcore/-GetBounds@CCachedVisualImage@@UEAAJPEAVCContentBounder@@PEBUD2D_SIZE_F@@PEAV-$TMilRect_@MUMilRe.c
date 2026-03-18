/*
 * XREFs of ?GetBounds@CCachedVisualImage@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800532E0
 * Callers:
 *     ?ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapSource@@@Z @ 0x180023350 (-ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBV-$CMatrix@UBaseSampling@C.c)
 *     ?GetCurrentSize@CCachedVisualImage@@IEAAXPEAI0@Z @ 0x180052A30 (-GetCurrentSize@CCachedVisualImage@@IEAAXPEAI0@Z.c)
 *     ?GetBitmapSourceForBounds@CCachedVisualImage@@QEAAJPEAPEAVIBitmapSource@@@Z @ 0x180052B18 (-GetBitmapSourceForBounds@CCachedVisualImage@@QEAAJPEAPEAVIBitmapSource@@@Z.c)
 *     ?Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z @ 0x1800535A4 (-Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?GetBounds@CCachedVisualImage@@W7EAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009A9D0 (-GetBounds@CCachedVisualImage@@W7EAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilR.c)
 * Callees:
 *     ?GetBounds@CVisualTree@@QEAAJPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180041100 (-GetBounds@CVisualTree@@QEAAJPEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?EnsureVisualTree@CCachedVisualImage@@AEAAJXZ @ 0x180053254 (-EnsureVisualTree@CCachedVisualImage@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z @ 0x1800DCD90 (-GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z.c)
 */

__int64 __fastcall CCachedVisualImage::GetBounds(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v7; // r14
  double v8; // xmm0_8
  double v9; // xmm1_8
  __int64 v10; // r14
  int Bounds; // eax
  int v13; // r9d
  float v14; // xmm3_4
  float v15; // xmm0_4
  float v16; // xmm2_4
  unsigned int v17; // [rsp+20h] [rbp-40h]
  float v18; // [rsp+30h] [rbp-30h] BYREF
  float v19; // [rsp+34h] [rbp-2Ch] BYREF
  float v20; // [rsp+38h] [rbp-28h] BYREF
  __int128 v21; // [rsp+40h] [rbp-20h] BYREF

  v4 = 0;
  if ( *(_BYTE *)(a1 + 275) )
  {
    *(_OWORD *)a4 = *(_OWORD *)(a1 + 296);
    return v4;
  }
  if ( !*(_BYTE *)(a1 + 276) )
  {
    v7 = *(_QWORD *)(a1 + 96);
    v21 = *(_OWORD *)(a1 + 80);
    if ( v7 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 48LL))(v7, 46LL) )
      {
        v4 = -2147024809;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x32u);
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x68u);
        v17 = 314;
LABEL_28:
        v13 = -2147024809;
        goto LABEL_29;
      }
      v21 = *(_OWORD *)(v7 + 40);
    }
    v8 = *(double *)&v21;
    v4 = 0;
    if ( *(double *)&v21 != 0.0 )
    {
      v9 = *((double *)&v21 + 1);
      goto LABEL_8;
    }
    v9 = *((double *)&v21 + 1);
    if ( *((double *)&v21 + 1) != 0.0 )
    {
LABEL_8:
      *(_DWORD *)a4 = 0;
      *(_DWORD *)(a4 + 4) = 0;
      *(float *)(a4 + 8) = v8;
      *(float *)(a4 + 12) = v9;
      return v4;
    }
    v10 = *(_QWORD *)(a1 + 72);
    v21 = *(_OWORD *)(a1 + 56);
    if ( !v10 )
    {
LABEL_7:
      v4 = 0;
      v8 = (float)(*((float *)&v21 + 2) - *(float *)&v21);
      v9 = (float)(*((float *)&v21 + 3) - *((float *)&v21 + 1));
      goto LABEL_8;
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 48LL))(v10, 45LL) )
    {
      v21 = *(_OWORD *)(v10 + 40);
      goto LABEL_7;
    }
    v4 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x32u);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x68u);
    v17 = 325;
    goto LABEL_28;
  }
  if ( !*(_QWORD *)(a1 + 104) )
  {
    *(_DWORD *)(a4 + 12) = 0;
    *(_DWORD *)(a4 + 8) = 0;
    *(_DWORD *)(a4 + 4) = 0;
    *(_DWORD *)a4 = 0;
    return v4;
  }
  Bounds = CCachedVisualImage::EnsureVisualTree((CCachedVisualImage *)(a1 - 8));
  v4 = Bounds;
  if ( Bounds < 0 )
  {
    v17 = 284;
LABEL_20:
    v13 = Bounds;
LABEL_29:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, v17);
    return v4;
  }
  Bounds = CVisualTree::GetBounds(*(struct CVisualTree **)(a1 + 128), (__int64)&v21);
  v4 = Bounds;
  if ( Bounds < 0 )
  {
    v17 = 286;
    goto LABEL_20;
  }
  *(_OWORD *)a4 = v21;
  if ( *(_BYTE *)(a1 + 274) && CVisual::GetEffectiveOffset(*(CVisual **)(a1 + 104), &v18, &v19, &v20) )
  {
    v14 = COERCE_FLOAT(LODWORD(v19) ^ _xmm) + *(float *)(a4 + 12);
    v15 = COERCE_FLOAT(LODWORD(v18) ^ _xmm) + *(float *)a4;
    v16 = COERCE_FLOAT(LODWORD(v18) ^ _xmm) + *(float *)(a4 + 8);
    *(float *)(a4 + 4) = COERCE_FLOAT(LODWORD(v19) ^ _xmm) + *(float *)(a4 + 4);
    *(float *)(a4 + 12) = v14;
    *(float *)a4 = v15;
    *(float *)(a4 + 8) = v16;
  }
  return v4;
}
