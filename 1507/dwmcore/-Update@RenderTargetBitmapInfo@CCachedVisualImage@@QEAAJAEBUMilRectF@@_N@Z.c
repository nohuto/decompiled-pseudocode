/*
 * XREFs of ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@_N@Z @ 0x180053DA4
 * Callers:
 *     ?GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180053790 (-GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 * Callees:
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEAU_D3DCOLORVALUE@@_NPEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DA@@@2PEAVCHwndRenderTarget@@@Z @ 0x18002EA00 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEAU_D3DCOLORVALUE@@_NPEAV-$CMatrix@UPageIn.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18002EDE0 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18002F290 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAVCOverlayContext@@PEAPEAVCOcclusionContext@@@Z @ 0x18002F32C (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x18002F750 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x180030040 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800404F0 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?GetBounds@CVisualTree@@QEAAJPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180041100 (-GetBounds@CVisualTree@@QEAAJPEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?CalculateViewboxToViewportMapping@CTileBrushUtils@@SAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0W4Enum@MilStretch@@W43MilHorizontalAlignment@@W43MilVerticalAlignment@@PEAVCMILMatrix@@@Z @ 0x180052764 (-CalculateViewboxToViewportMapping@CTileBrushUtils@@SAXPEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?EnsureVisualTree@CCachedVisualImage@@AEAAJXZ @ 0x180053254 (-EnsureVisualTree@CCachedVisualImage@@AEAAJXZ.c)
 *     ?UpdateViewbox@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NAEBUMilRectF@@@Z @ 0x180054208 (-UpdateViewbox@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NAEBUMilRectF@@@Z.c)
 *     ?IsEmpty@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800569B4 (-IsEmpty@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@.c)
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800569F8 (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z @ 0x1800DCD90 (-GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z.c)
 *     Template_ppffffdd @ 0x18010BB20 (Template_ppffffdd.c)
 */

__int64 __fastcall CCachedVisualImage::RenderTargetBitmapInfo::Update(
        CCachedVisualImage::RenderTargetBitmapInfo *this,
        const struct MilRectF *a2,
        char a3)
{
  unsigned int v4; // r14d
  char v5; // r12
  char v7; // si
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int v11; // eax
  CDrawingContext *v12; // r13
  __int64 v13; // r11
  struct IRenderTarget *v14; // rdx
  int v15; // eax
  int Bounds; // eax
  char IsEmpty; // al
  __int64 v18; // rdx
  char v19; // di
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rdi
  char v23; // si
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  __int64 v28; // r8
  float v29; // xmm2_4
  float v30; // xmm0_4
  float v31; // [rsp+6Ch] [rbp-9Ch] BYREF
  float v32[2]; // [rsp+70h] [rbp-98h] BYREF
  CDrawingContext *v33; // [rsp+78h] [rbp-90h] BYREF
  __int64 v34; // [rsp+80h] [rbp-88h] BYREF
  float v35; // [rsp+88h] [rbp-80h] BYREF
  float v36; // [rsp+8Ch] [rbp-7Ch]
  float v37; // [rsp+90h] [rbp-78h]
  float v38; // [rsp+94h] [rbp-74h]
  __int128 v39; // [rsp+98h] [rbp-70h] BYREF
  __int128 v40; // [rsp+A8h] [rbp-60h]
  __int128 v41; // [rsp+B8h] [rbp-50h]
  __int128 v42; // [rsp+C8h] [rbp-40h]
  _DWORD v43[12]; // [rsp+D8h] [rbp-30h] BYREF
  _OWORD v44[4]; // [rsp+108h] [rbp+0h] BYREF

  v4 = 0;
  if ( !a3 || (v5 = 1, !*(_BYTE *)(*(_QWORD *)this + 281LL)) )
    v5 = 0;
  v33 = 0LL;
  CCachedVisualImage::RenderTargetBitmapInfo::UpdateViewbox(this, a2);
  if ( *((_BYTE *)this + 40) || v5 )
  {
    v7 = 0;
    v8 = CCachedVisualImage::EnsureVisualTree(*(CCachedVisualImage **)this);
    v4 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x279u);
      return v4;
    }
    (*(void (__fastcall **)(_QWORD, float *))(**((_QWORD **)this + 1) + 64LL))(*((_QWORD *)this + 1), &v35);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40) != 0 )
    {
      v28 = *(_QWORD *)this + 16LL;
      if ( !*(_QWORD *)this )
        LODWORD(v28) = 0;
      v29 = *((float *)this + 9) - *((float *)this + 7);
      v30 = *((float *)this + 8) - *((float *)this + 6);
      Template_ppffffdd(
        (int)(float)(v38 - v36),
        v9,
        v28,
        *(_QWORD *)(*(_QWORD *)this + 112LL),
        *((_DWORD *)this + 6),
        *((_DWORD *)this + 7),
        SLOBYTE(v30),
        SLOBYTE(v29),
        (int)(float)(v37 - v35),
        (int)(float)(v38 - v36));
    }
    v10 = CVisualTree::PreCompute(*(struct CVisualTree **)(*(_QWORD *)this + 136LL), 0LL);
    v4 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x28Bu);
      return v4;
    }
    v11 = CDrawingContext::Create(*(struct CComposition **)(*(_QWORD *)this + 32LL), &v33);
    v12 = v33;
    v4 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x291u);
    }
    else
    {
      CTileBrushUtils::CalculateViewboxToViewportMapping(&v35, (float *)this + 6, 2, 0, 0, &v39);
      v13 = *(_QWORD *)this;
      if ( *(_BYTE *)(*(_QWORD *)this + 282LL)
        && CVisual::GetEffectiveOffset(*(CVisual **)(*(_QWORD *)(v13 + 136) + 24LL), &v31, v32, (float *)&v33) )
      {
        *(float *)&v42 = *(float *)&v42 - (float)((float)(*(float *)&v39 * v31) + (float)(*(float *)&v40 * v32[0]));
        *((float *)&v42 + 1) = *((float *)&v42 + 1)
                             - (float)((float)(*((float *)&v39 + 1) * v31) + (float)(*((float *)&v40 + 1) * v32[0]));
        *((float *)&v42 + 3) = *((float *)&v42 + 3)
                             - (float)((float)(*((float *)&v39 + 3) * v31) + (float)(*((float *)&v40 + 3) * v32[0]));
      }
      v14 = (struct IRenderTarget *)*((_QWORD *)this + 1);
      v44[0] = v39;
      v44[1] = v40;
      v44[2] = v41;
      v44[3] = v42;
      v15 = CDrawingContext::BeginFrame(v12, v14, (_OWORD *)(v13 + 288), 0, (struct D2DMatrix *)v44, 0LL, 0, 0LL);
      v4 = v15;
      if ( v15 >= 0 )
      {
        Bounds = CVisualTree::GetBounds(*(struct CVisualTree **)(*(_QWORD *)this + 136LL), (__int64)v43);
        v4 = Bounds;
        if ( Bounds < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, Bounds, 0x2BEu);
        }
        else
        {
          IsEmpty = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(v43);
          v18 = *(_QWORD *)this;
          if ( IsEmpty )
          {
            v26 = CDrawingContext::Clear(v12, (const struct _D3DCOLORVALUE *)(v18 + 288));
            v4 = v26;
            if ( v26 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x2C1u);
            goto LABEL_22;
          }
          v19 = (*(_BYTE *)(*(_QWORD *)(v18 + 112) + 88LL) & 0x10) != 0
             && (*(float *)&v39 < 0.40000001 || *((float *)&v40 + 1) < 0.40000001);
          v34 = 0LL;
          CDrawingContext::CalculateOcclusion(
            (struct CComposition **)v12,
            *(struct CVisualTree **)(v18 + 136),
            1u,
            (const struct MilRectF *)&v35,
            1,
            0LL,
            &v34);
          if ( (float)(*((float *)this + 8) - *((float *)this + 6)) <= (float)(v37 - v35)
            && (float)(*((float *)this + 9) - *((float *)this + 7)) <= (float)(v38 - v36) )
          {
            goto LABEL_18;
          }
          v43[0] = 17;
          v43[1] = 6;
          v43[4] = 1;
          v27 = CDrawingContext::PushRenderOptionsInternal(v12, 0LL, (const struct MilRenderOptions *)v43, 1);
          v4 = v27;
          if ( v27 >= 0 )
          {
            v7 = 1;
LABEL_18:
            v20 = CDrawingContext::DrawVisualTree(
                    v12,
                    *(_QWORD *)(*(_QWORD *)this + 136LL),
                    &v35,
                    0LL,
                    0x7FFFFFFF,
                    1,
                    v7,
                    1,
                    v19,
                    1,
                    1);
            v4 = v20;
            if ( v20 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x2FBu);
            }
            else
            {
              if ( !v5 )
                *(_BYTE *)(*(_QWORD *)this + 281LL) = *((_BYTE *)v12 + 5938);
              v22 = *((_QWORD *)this + 1);
              v23 = *((_BYTE *)v12 + 5940);
              *((_BYTE *)this + 41) = v23;
              LOBYTE(v21) = v23;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 192LL))(v22, v21);
              *((_BYTE *)this + 40) = v5 != 0;
            }
            goto LABEL_22;
          }
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0x2EDu);
        }
LABEL_22:
        v24 = g_LockAndReadD2DTarget;
        if ( g_LockTilingTarget )
          v24 = 1;
        g_LockAndReadD2DTarget = v24;
        CDrawingContext::EndFrame(v12);
        v25 = g_LockAndReadD2DTarget;
        if ( g_LockTilingTarget )
          v25 = 0;
        g_LockAndReadD2DTarget = v25;
        goto LABEL_27;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x2B8u);
    }
LABEL_27:
    if ( v12 )
      CMILCOMBase::InternalRelease((CDrawingContext *)((char *)v12 + 8));
  }
  return v4;
}
