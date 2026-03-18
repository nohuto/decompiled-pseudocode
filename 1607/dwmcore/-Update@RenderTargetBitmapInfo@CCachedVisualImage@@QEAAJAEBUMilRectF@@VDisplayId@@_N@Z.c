/*
 * XREFs of ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_N@Z @ 0x180144498
 * Callers:
 *     ?EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x18003322C (-EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@IIV-$TMilRect_@MUMilR.c)
 * Callees:
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000C8B8 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?GetBounds@CVisualTree@@QEAAJPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000C9F8 (-GetBounds@CVisualTree@@QEAAJPEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?IsEmpty@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18000D264 (-IsEmpty@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?CalculateViewboxToViewportMapping@CTileBrushUtils@@SAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0W4Enum@MilStretch@@W43MilHorizontalAlignment@@W43MilVerticalAlignment@@PEAVCMILMatrix@@@Z @ 0x180032C50 (-CalculateViewboxToViewportMapping@CTileBrushUtils@@SAXPEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?EnsureVisualTree@CCachedVisualImage@@AEAAJXZ @ 0x1800337F4 (-EnsureVisualTree@CCachedVisualImage@@AEAAJXZ.c)
 *     ?UpdateViewbox@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NAEBUMilRectF@@@Z @ 0x1800341A8 (-UpdateViewbox@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NAEBUMilRectF@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PrependTranslate@CMILMatrix@@QEAAXMMM@Z @ 0x180058E78 (-PrependTranslate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18005B70C (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DF@@@2PEAVCHwndRenderTarget@@@Z @ 0x18006C640 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEAV-$CMatrix@UPageIn.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18006CC40 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAPEAVCOcclusionContext@@@Z @ 0x18006D184 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18006D550 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x18006D600 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x18006E110 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800B8530 (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     ?GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z @ 0x1801098AC (-GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z.c)
 *     ?GetBounds@CRenderTargetBitmap@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801324B4 (-GetBounds@CRenderTargetBitmap@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?SetDisplayId@CRenderTargetBitmap@@QEAAXVDisplayId@@@Z @ 0x1801440E0 (-SetDisplayId@CRenderTargetBitmap@@QEAAXVDisplayId@@@Z.c)
 *     Template_ppffffdd @ 0x1801449AC (Template_ppffffdd.c)
 */

__int64 __fastcall CCachedVisualImage::RenderTargetBitmapInfo::Update(
        float *a1,
        const struct MilRectF *a2,
        __int64 a3,
        char a4)
{
  unsigned int v5; // ebx
  char v6; // r15
  __int64 v7; // rdx
  bool v8; // r8
  CCachedVisualImage *v9; // rcx
  char v10; // r13
  char v11; // r12
  int v12; // eax
  int v13; // edx
  __int64 v14; // r8
  float v15; // xmm2_4
  float v16; // xmm0_4
  int v17; // eax
  int v18; // eax
  CDrawingContext *v19; // rsi
  CCachedVisualImage *v20; // r10
  __int128 *v21; // rax
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  int v25; // eax
  __int128 v26; // xmm0
  int v27; // eax
  __int128 v28; // xmm1
  __int128 v29; // xmm2
  __int128 v30; // xmm3
  __int64 v31; // rcx
  int v32; // eax
  int Bounds; // eax
  bool IsEmpty; // al
  CCachedVisualImage *v35; // rdx
  int v36; // eax
  int v37; // eax
  int v38; // eax
  char v39; // al
  bool v40; // al
  float v42; // [rsp+60h] [rbp-A0h] BYREF
  float v43; // [rsp+64h] [rbp-9Ch] BYREF
  CDrawingContext *v44; // [rsp+68h] [rbp-98h] BYREF
  __int64 v45; // [rsp+70h] [rbp-90h] BYREF
  __int128 v46; // [rsp+80h] [rbp-80h] BYREF
  __int128 v47; // [rsp+90h] [rbp-70h]
  __int128 v48; // [rsp+A0h] [rbp-60h]
  __int128 v49; // [rsp+B0h] [rbp-50h]
  int v50; // [rsp+C0h] [rbp-40h]
  _OWORD v51[4]; // [rsp+D0h] [rbp-30h] BYREF
  int v52; // [rsp+110h] [rbp+10h]
  struct _D3DCOLORVALUE v53; // [rsp+120h] [rbp+20h] BYREF
  __int128 v54; // [rsp+130h] [rbp+30h] BYREF
  __int128 v55; // [rsp+140h] [rbp+40h]
  __int128 v56; // [rsp+150h] [rbp+50h]
  __int128 v57; // [rsp+160h] [rbp+60h]
  int v58; // [rsp+170h] [rbp+70h]

  v5 = 0;
  if ( !a4 || (v6 = 1, !*(_BYTE *)(*(_QWORD *)a1 + 369LL)) )
    v6 = 0;
  v44 = 0LL;
  CCachedVisualImage::RenderTargetBitmapInfo::UpdateViewbox((CCachedVisualImage::RenderTargetBitmapInfo *)a1, a2);
  if ( *((_BYTE *)a1 + 40) || v6 )
  {
    v9 = *(CCachedVisualImage **)a1;
    v10 = 0;
    v50 = 0;
    v11 = 0;
    v12 = CCachedVisualImage::EnsureVisualTree(v9, v7, v8);
    v5 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x279u);
      return v5;
    }
    CRenderTargetBitmap::GetBounds(*((_QWORD *)a1 + 1), &v53);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40) != 0 )
    {
      v14 = *(_QWORD *)a1 + 16LL;
      if ( !*(_QWORD *)a1 )
        LODWORD(v14) = 0;
      v15 = a1[9] - a1[7];
      v16 = a1[8] - a1[6];
      Template_ppffffdd(
        (int)(float)(v53.a - v53.g),
        v13,
        v14,
        *(_QWORD *)(*(_QWORD *)a1 + 192LL),
        *((_DWORD *)a1 + 6),
        *((_DWORD *)a1 + 7),
        SLOBYTE(v16),
        SLOBYTE(v15),
        (int)(float)(v53.b - v53.r),
        (int)(float)(v53.a - v53.g));
    }
    v17 = CVisualTree::PreCompute(*(CVisualTree **)(*(_QWORD *)a1 + 224LL));
    v5 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x28Bu);
      return v5;
    }
    v18 = CDrawingContext::Create(*(struct CComposition **)(*(_QWORD *)a1 + 32LL), &v44);
    v19 = v44;
    v5 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x291u);
    }
    else
    {
      CTileBrushUtils::CalculateViewboxToViewportMapping(&v53.r, a1 + 6, 2, 0, 0, (__int64)&v46);
      v20 = *(CCachedVisualImage **)a1;
      if ( *(_BYTE *)(*(_QWORD *)a1 + 370LL)
        && CVisual::GetEffectiveOffset(*(CVisual **)(*((_QWORD *)v20 + 28) + 24LL), &v43, &v42, (float *)&v44) )
      {
        CMILMatrix::PrependTranslate(
          (CMILMatrix *)&v46,
          COERCE_FLOAT(LODWORD(v43) ^ _xmm),
          COERCE_FLOAT(LODWORD(v42) ^ _xmm),
          0.0);
      }
      v21 = (__int128 *)*((_QWORD *)v20 + 27);
      if ( v21 )
      {
        v22 = v21[1];
        v54 = *v21;
        v23 = v21[2];
        v55 = v22;
        v24 = v21[3];
        v25 = *((_DWORD *)v21 + 16);
        v56 = v23;
        v58 = v25;
        v57 = v24;
        CMILMatrix::Multiply((CMILMatrix *)&v54, (const struct CMILMatrix *)&v46);
        v26 = v54;
        v27 = v58;
        v28 = v55;
        v29 = v56;
        v30 = v57;
        v46 = v54;
        v47 = v55;
      }
      else
      {
        v27 = v50;
        v30 = v49;
        v29 = v48;
        v28 = v47;
        v26 = v46;
      }
      v31 = *((_QWORD *)a1 + 1);
      v51[0] = v26;
      v51[1] = v28;
      v51[2] = v29;
      v51[3] = v30;
      v52 = v27;
      CRenderTargetBitmap::SetDisplayId(v31);
      v32 = CDrawingContext::BeginFrame(
              v19,
              *(struct IRenderTarget **)(*((_QWORD *)a1 + 1) + 128LL),
              (__int128 *)(*(_QWORD *)a1 + 376LL),
              0,
              (__int64)v51,
              0LL,
              0,
              0LL);
      v5 = v32;
      if ( v32 >= 0 )
      {
        Bounds = CVisualTree::GetBounds(*(CVisualTree **)(*(_QWORD *)a1 + 224LL), (__int64)&v54);
        v5 = Bounds;
        if ( Bounds < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, Bounds, 0x2C8u);
        }
        else
        {
          IsEmpty = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v54);
          v35 = *(CCachedVisualImage **)a1;
          if ( IsEmpty )
          {
            v36 = CDrawingContext::Clear((CD2DContext **)v19, (const struct _D3DCOLORVALUE *)((char *)v35 + 376));
            v5 = v36;
            if ( v36 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v36, 0x2CBu);
            goto LABEL_41;
          }
          if ( (*(_BYTE *)(*((_QWORD *)v35 + 24) + 152LL) & 0x10) != 0
            && (*(float *)&v46 < 0.40000001 || *((float *)&v47 + 1) < 0.40000001) )
          {
            v10 = 1;
          }
          v45 = 0LL;
          CDrawingContext::CalculateOcclusion(v19, *((struct CVisualTree **)v35 + 28), 1u, (__int64)&v53, 1, &v45);
          if ( (float)(a1[8] - a1[6]) <= (float)(v53.b - v53.r) && (float)(a1[9] - a1[7]) <= (float)(v53.a - v53.g) )
          {
LABEL_32:
            v38 = CDrawingContext::DrawVisualTree(
                    v19,
                    *(_QWORD *)(*(_QWORD *)a1 + 224LL),
                    &v53,
                    0LL,
                    0x7FFFFFFF,
                    1,
                    v11,
                    1,
                    v10,
                    1,
                    1);
            v5 = v38;
            if ( v38 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v38, 0x304u);
            }
            else
            {
              if ( !v6 )
                *(_BYTE *)(*(_QWORD *)a1 + 369LL) = *((_BYTE *)v19 + 6534);
              if ( !*((_BYTE *)v19 + 6536) )
                CRenderTargetBitmap::SetDisplayId(*((_QWORD *)a1 + 1));
              *((_BYTE *)a1 + 40) = v6 != 0;
            }
            goto LABEL_41;
          }
          *(_QWORD *)&v54 = 0x600000003LL;
          LODWORD(v55) = 1;
          v37 = CDrawingContext::PushRenderOptionsInternal(v19, 0LL, (const struct MilRenderOptions *)&v54, 1);
          v5 = v37;
          if ( v37 >= 0 )
          {
            v11 = 1;
            goto LABEL_32;
          }
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v37, 0x2F6u);
        }
LABEL_41:
        v39 = g_LockAndReadD2DTarget;
        if ( g_LockTilingTarget )
          v39 = 1;
        g_LockAndReadD2DTarget = v39;
        CDrawingContext::EndFrame(v19);
        v40 = g_LockAndReadD2DTarget;
        if ( g_LockTilingTarget )
          v40 = 0;
        g_LockAndReadD2DTarget = v40;
        goto LABEL_48;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, 0x2C2u);
    }
LABEL_48:
    if ( v19 )
      CMILCOMBase::InternalRelease((CDrawingContext *)((char *)v19 + 8));
  }
  return v5;
}
