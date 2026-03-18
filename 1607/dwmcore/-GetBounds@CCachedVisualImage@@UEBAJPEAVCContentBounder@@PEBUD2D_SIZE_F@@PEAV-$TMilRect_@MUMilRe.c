/*
 * XREFs of ?GetBounds@CCachedVisualImage@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180033840
 * Callers:
 *     ?GetContentBounds@CImageLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001D6E0 (-GetContentBounds@CImageLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAV-$TMilRect_@MUMilRec.c)
 *     ?GetCurrentSize@CCachedVisualImage@@QEBAXPEAI0@Z @ 0x180032ED0 (-GetCurrentSize@CCachedVisualImage@@QEBAXPEAI0@Z.c)
 *     ?GetBitmapSourceForBounds@CCachedVisualImage@@QEAAJPEAPEAVIBitmapSource@@@Z @ 0x180033118 (-GetBitmapSourceForBounds@CCachedVisualImage@@QEAAJPEAPEAVIBitmapSource@@@Z.c)
 *     ?Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z @ 0x180033B34 (-Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapSource@@@Z @ 0x180064584 (-ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBV-$CMatrix@UBaseSampling@C.c)
 *     ?GetBounds@CCachedVisualImage@@W7EBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C0640 (-GetBounds@CCachedVisualImage@@W7EBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilR.c)
 * Callees:
 *     ?GetBounds@CVisualTree@@QEAAJPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000C9F8 (-GetBounds@CVisualTree@@QEAAJPEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?IsOfType@?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DC@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18001D960 (-IsOfType@-$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DC@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@?$TValueResource@UMilSizeD@@UMILCMD_SIZERESOURCE@@$0DD@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18001D9F0 (-IsOfType@-$TValueResource@UMilSizeD@@UMILCMD_SIZERESOURCE@@$0DD@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?EnsureVisualTree@CCachedVisualImage@@AEAAJXZ @ 0x1800337F4 (-EnsureVisualTree@CCachedVisualImage@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z @ 0x1801098AC (-GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z.c)
 */

__int64 __fastcall CCachedVisualImage::GetBounds(__int64 a1, __int64 a2, bool a3, __int64 a4)
{
  unsigned int v4; // esi
  _OWORD *v7; // r14
  double v8; // xmm0_8
  double v9; // xmm1_8
  bool (__fastcall *v11)(__int64, int); // rax
  bool v12; // al
  _OWORD *v13; // r14
  bool (__fastcall *v14)(__int64, int); // rax
  bool v15; // al
  int Bounds; // eax
  float v17; // xmm3_4
  float v18; // xmm0_4
  float v19; // xmm2_4
  int v20; // r9d
  unsigned int v21; // [rsp+20h] [rbp-40h]
  float v22; // [rsp+30h] [rbp-30h] BYREF
  float v23; // [rsp+34h] [rbp-2Ch] BYREF
  float v24; // [rsp+38h] [rbp-28h] BYREF
  __int128 v25; // [rsp+40h] [rbp-20h] BYREF

  v4 = 0;
  if ( *(_BYTE *)(a1 + 363) )
  {
    *(_OWORD *)a4 = *(_OWORD *)(a1 + 384);
    return v4;
  }
  if ( !*(_BYTE *)(a1 + 364) )
  {
    v7 = *(_OWORD **)(a1 + 176);
    v25 = *(_OWORD *)(a1 + 160);
    if ( v7 )
    {
      v11 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v7 + 48LL);
      if ( v11 == TValueResource<MilSizeD,MILCMD_SIZERESOURCE,51>::IsOfType )
        v12 = TValueResource<MilSizeD,MILCMD_SIZERESOURCE,51>::IsOfType((__int64)v7, 51);
      else
        v12 = v11((__int64)v7, 51);
      if ( !v12 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x32u);
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x68u);
        v21 = 316;
LABEL_31:
        v4 = -2147024809;
        v20 = -2147024809;
        goto LABEL_32;
      }
      v25 = v7[7];
    }
    v8 = *(double *)&v25;
    if ( *(double *)&v25 != 0.0 )
    {
      v9 = *((double *)&v25 + 1);
LABEL_6:
      *(_DWORD *)a4 = 0;
      *(_DWORD *)(a4 + 4) = 0;
      *(float *)(a4 + 8) = v8;
      *(float *)(a4 + 12) = v9;
      return v4;
    }
    v9 = *((double *)&v25 + 1);
    if ( *((double *)&v25 + 1) != 0.0 )
      goto LABEL_6;
    v13 = *(_OWORD **)(a1 + 152);
    v25 = *(_OWORD *)(a1 + 136);
    if ( !v13 )
    {
LABEL_14:
      v8 = (float)(*((float *)&v25 + 2) - *(float *)&v25);
      v9 = (float)(*((float *)&v25 + 3) - *((float *)&v25 + 1));
      goto LABEL_6;
    }
    v14 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v13 + 48LL);
    if ( v14 == TValueResource<MilRectF,MILCMD_RECTRESOURCE,50>::IsOfType )
      v15 = TValueResource<MilRectF,MILCMD_RECTRESOURCE,50>::IsOfType((__int64)v13, 50);
    else
      v15 = v14((__int64)v13, 50);
    if ( v15 )
    {
      v25 = v13[7];
      goto LABEL_14;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x32u);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x68u);
    v21 = 327;
    goto LABEL_31;
  }
  if ( !*(_QWORD *)(a1 + 184) )
  {
    *(_DWORD *)(a4 + 12) = 0;
    *(_DWORD *)(a4 + 8) = 0;
    *(_DWORD *)(a4 + 4) = 0;
    *(_DWORD *)a4 = 0;
    return v4;
  }
  Bounds = CCachedVisualImage::EnsureVisualTree((CCachedVisualImage *)(a1 - 8), a2, a3);
  v4 = Bounds;
  if ( Bounds < 0 )
  {
    v21 = 286;
    goto LABEL_29;
  }
  Bounds = CVisualTree::GetBounds(*(CVisualTree **)(a1 + 216), (__int64)&v25);
  v4 = Bounds;
  if ( Bounds < 0 )
  {
    v21 = 288;
LABEL_29:
    v20 = Bounds;
LABEL_32:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, v21);
    return v4;
  }
  *(_OWORD *)a4 = v25;
  if ( *(_BYTE *)(a1 + 362) && CVisual::GetEffectiveOffset(*(CVisual **)(a1 + 184), &v23, &v22, &v24) )
  {
    v17 = COERCE_FLOAT(LODWORD(v22) ^ _xmm) + *(float *)(a4 + 12);
    v18 = COERCE_FLOAT(LODWORD(v23) ^ _xmm) + *(float *)a4;
    v19 = COERCE_FLOAT(LODWORD(v23) ^ _xmm) + *(float *)(a4 + 8);
    *(float *)(a4 + 4) = COERCE_FLOAT(LODWORD(v22) ^ _xmm) + *(float *)(a4 + 4);
    *(float *)(a4 + 12) = v17;
    *(float *)a4 = v18;
    *(float *)(a4 + 8) = v19;
  }
  return v4;
}
