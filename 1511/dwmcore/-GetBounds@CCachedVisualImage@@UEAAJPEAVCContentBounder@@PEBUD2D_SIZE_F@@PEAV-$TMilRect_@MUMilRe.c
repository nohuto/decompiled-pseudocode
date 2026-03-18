/*
 * XREFs of ?GetBounds@CCachedVisualImage@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005B3C0
 * Callers:
 *     ?GetContentBounds@CImageLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001B240 (-GetContentBounds@CImageLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAV-$TMilRect_@MUMilRec.c)
 *     ?ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapSource@@@Z @ 0x18003770C (-ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBV-$CMatrix@UBaseSampling@C.c)
 *     ?GetCurrentSize@CCachedVisualImage@@IEAAXPEAI0@Z @ 0x18005AB90 (-GetCurrentSize@CCachedVisualImage@@IEAAXPEAI0@Z.c)
 *     ?GetBitmapSourceForBounds@CCachedVisualImage@@QEAAJPEAPEAVIBitmapSource@@@Z @ 0x18005AC78 (-GetBitmapSourceForBounds@CCachedVisualImage@@QEAAJPEAPEAVIBitmapSource@@@Z.c)
 *     ?Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z @ 0x18005B684 (-Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?GetBounds@CCachedVisualImage@@W7EAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800BD620 (-GetBounds@CCachedVisualImage@@W7EAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilR.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?EnsureVisualTree@CCachedVisualImage@@AEAAJXZ @ 0x18005B374 (-EnsureVisualTree@CCachedVisualImage@@AEAAJXZ.c)
 *     ?GetBounds@CVisualTree@@QEAAJPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800769A0 (-GetBounds@CVisualTree@@QEAAJPEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOfType@?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DB@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800ABEA0 (-IsOfType@-$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DB@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@?$TValueResource@UMilSizeD@@UMILCMD_SIZERESOURCE@@$0DC@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AC030 (-IsOfType@-$TValueResource@UMilSizeD@@UMILCMD_SIZERESOURCE@@$0DC@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z @ 0x1800F7A40 (-GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z.c)
 */

__int64 __fastcall CCachedVisualImage::GetBounds(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  __int64 v7; // rsi
  __int64 (__fastcall *v8)(__int64, __int64); // r14
  char v9; // al
  double v10; // xmm0_8
  double v11; // xmm1_8
  __int64 v13; // rsi
  __int64 (__fastcall *v14)(__int64, __int64); // rdi
  char v15; // al
  int Bounds; // eax
  int v17; // r9d
  float v18; // xmm3_4
  float v19; // xmm0_4
  float v20; // xmm2_4
  unsigned int v21; // [rsp+20h] [rbp-40h]
  float v22; // [rsp+30h] [rbp-30h] BYREF
  float v23; // [rsp+34h] [rbp-2Ch] BYREF
  float v24; // [rsp+38h] [rbp-28h] BYREF
  __int128 v25; // [rsp+40h] [rbp-20h]

  v4 = 0;
  if ( *(_BYTE *)(a1 + 275) )
  {
    *(_OWORD *)a4 = *(_OWORD *)(a1 + 296);
    return v4;
  }
  if ( !*(_BYTE *)(a1 + 276) )
  {
    v7 = *(_QWORD *)(a1 + 96);
    v25 = *(_OWORD *)(a1 + 80);
    if ( v7 )
    {
      v8 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 48LL);
      if ( v8 == TValueResource<MilSizeD,MILCMD_SIZERESOURCE,50>::IsOfType )
        v9 = TValueResource<MilSizeD,MILCMD_SIZERESOURCE,50>::IsOfType(v7, 50LL);
      else
        v9 = v8(v7, 50LL);
      if ( !v9 )
      {
        v4 = -2147024809;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x32u);
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x68u);
        v21 = 314;
LABEL_34:
        v17 = -2147024809;
        goto LABEL_35;
      }
      v25 = *(_OWORD *)(v7 + 40);
    }
    v10 = *(double *)&v25;
    v4 = 0;
    if ( *(double *)&v25 != 0.0 )
    {
      v11 = *((double *)&v25 + 1);
LABEL_10:
      *(_DWORD *)a4 = 0;
      *(_DWORD *)(a4 + 4) = 0;
      *(float *)(a4 + 8) = v10;
      *(float *)(a4 + 12) = v11;
      return v4;
    }
    v11 = *((double *)&v25 + 1);
    if ( *((double *)&v25 + 1) != 0.0 )
      goto LABEL_10;
    v13 = *(_QWORD *)(a1 + 72);
    v25 = *(_OWORD *)(a1 + 56);
    if ( !v13 )
    {
LABEL_14:
      v4 = 0;
      v10 = (float)(*((float *)&v25 + 2) - *(float *)&v25);
      v11 = (float)(*((float *)&v25 + 3) - *((float *)&v25 + 1));
      goto LABEL_10;
    }
    v14 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 48LL);
    if ( v14 == TValueResource<MilRectF,MILCMD_RECTRESOURCE,49>::IsOfType )
      v15 = TValueResource<MilRectF,MILCMD_RECTRESOURCE,49>::IsOfType(v13, 49LL);
    else
      v15 = v14(v13, 49LL);
    if ( v15 )
    {
      v25 = *(_OWORD *)(v13 + 40);
      goto LABEL_14;
    }
    v4 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x32u);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x68u);
    v21 = 325;
    goto LABEL_34;
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
    v21 = 284;
LABEL_24:
    v17 = Bounds;
LABEL_35:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, v21);
    return v4;
  }
  Bounds = CVisualTree::GetBounds(*(CVisualTree **)(a1 + 128));
  v4 = Bounds;
  if ( Bounds < 0 )
  {
    v21 = 286;
    goto LABEL_24;
  }
  *(_OWORD *)a4 = v25;
  if ( *(_BYTE *)(a1 + 274) && CVisual::GetEffectiveOffset(*(CVisual **)(a1 + 104), &v22, &v23, &v24) )
  {
    v18 = COERCE_FLOAT(LODWORD(v23) ^ _xmm) + *(float *)(a4 + 12);
    v19 = COERCE_FLOAT(LODWORD(v22) ^ _xmm) + *(float *)a4;
    v20 = COERCE_FLOAT(LODWORD(v22) ^ _xmm) + *(float *)(a4 + 8);
    *(float *)(a4 + 4) = COERCE_FLOAT(LODWORD(v23) ^ _xmm) + *(float *)(a4 + 4);
    *(float *)(a4 + 12) = v18;
    *(float *)a4 = v19;
    *(float *)(a4 + 8) = v20;
  }
  return v4;
}
