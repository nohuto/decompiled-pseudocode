/*
 * XREFs of ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@_N@Z @ 0x18005BC9C
 * Callers:
 *     ?GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x18005B850 (-GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?SetMonitorSpecificContent@CHwTextureRenderTarget@@UEAA_N_N@Z @ 0x18002C810 (-SetMonitorSpecificContent@CHwTextureRenderTarget@@UEAA_N_N@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DE@@@2PEAVCHwndRenderTarget@@@Z @ 0x180044090 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEAV-$CMatrix@UPageIn.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x180044630 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAVCOverlayContext@@PEAPEAVCOcclusionContext@@@Z @ 0x180044B58 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x180044FA0 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x180045060 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x180045EE0 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?CalculateViewboxToViewportMapping@CTileBrushUtils@@SAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0W4Enum@MilStretch@@W43MilHorizontalAlignment@@W43MilVerticalAlignment@@PEAVCMILMatrix@@@Z @ 0x18005A6C4 (-CalculateViewboxToViewportMapping@CTileBrushUtils@@SAXPEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?EnsureVisualTree@CCachedVisualImage@@AEAAJXZ @ 0x18005B374 (-EnsureVisualTree@CCachedVisualImage@@AEAAJXZ.c)
 *     ?UpdateViewbox@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NAEBUMilRectF@@@Z @ 0x18005C118 (-UpdateViewbox@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NAEBUMilRectF@@@Z.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180076884 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?GetBounds@CVisualTree@@QEAAJPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800769A0 (-GetBounds@CVisualTree@@QEAAJPEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800A9264 (-IsEmpty@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@.c)
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800AD4F0 (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z @ 0x1800F7A40 (-GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z.c)
 *     Template_ppffffdd @ 0x180127330 (Template_ppffffdd.c)
 */

__int64 __fastcall CCachedVisualImage::RenderTargetBitmapInfo::Update(
        CCachedVisualImage::RenderTargetBitmapInfo *this,
        const struct MilRectF *a2,
        char a3)
{
  unsigned int v4; // ebx
  char v5; // r15
  char v7; // r13
  char v8; // r12
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // eax
  CDrawingContext *v13; // rdi
  __int64 v14; // r11
  struct IRenderTarget *v15; // rdx
  int v16; // eax
  int Bounds; // eax
  char IsEmpty; // al
  __int64 v19; // rdx
  int v20; // eax
  BOOL v21; // eax
  __int64 v22; // rdx
  CHwTextureRenderTarget *v23; // r12
  char v24; // r14
  char (__fastcall *v25)(CHwTextureRenderTarget *, char); // r13
  int v26; // eax
  int v27; // eax
  int v28; // eax
  __int64 v29; // r8
  float v30; // xmm2_4
  float v31; // xmm0_4
  float v32[2]; // [rsp+68h] [rbp-A0h] BYREF
  CDrawingContext *v33; // [rsp+70h] [rbp-98h] BYREF
  COcclusionContext *v34; // [rsp+78h] [rbp-90h] BYREF
  __int128 v35; // [rsp+80h] [rbp-88h] BYREF
  __int128 v36; // [rsp+98h] [rbp-70h] BYREF
  __int128 v37; // [rsp+A8h] [rbp-60h]
  __int128 v38; // [rsp+B8h] [rbp-50h]
  __int128 v39; // [rsp+C8h] [rbp-40h]
  _DWORD v40[12]; // [rsp+D8h] [rbp-30h] BYREF
  _OWORD v41[4]; // [rsp+108h] [rbp+0h] BYREF

  v4 = 0;
  if ( !a3 || (v5 = 1, !*(_BYTE *)(*(_QWORD *)this + 281LL)) )
    v5 = 0;
  v33 = 0LL;
  CCachedVisualImage::RenderTargetBitmapInfo::UpdateViewbox(this, a2);
  if ( *((_BYTE *)this + 40) || v5 )
  {
    v7 = 0;
    v8 = 0;
    v9 = CCachedVisualImage::EnsureVisualTree(*(CCachedVisualImage **)this);
    v4 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x26Eu);
      return v4;
    }
    (*(void (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 1) + 64LL))(*((_QWORD *)this + 1), &v35);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40) != 0 )
    {
      v29 = *(_QWORD *)this + 16LL;
      if ( !*(_QWORD *)this )
        LODWORD(v29) = 0;
      v30 = *((float *)this + 9) - *((float *)this + 7);
      v31 = *((float *)this + 8) - *((float *)this + 6);
      Template_ppffffdd(
        (int)(float)(*((float *)&v35 + 3) - *((float *)&v35 + 1)),
        v10,
        v29,
        *(_QWORD *)(*(_QWORD *)this + 112LL),
        *((_DWORD *)this + 6),
        *((_DWORD *)this + 7),
        SLOBYTE(v31),
        SLOBYTE(v30),
        (int)(float)(*((float *)&v35 + 2) - *(float *)&v35),
        (int)(float)(*((float *)&v35 + 3) - *((float *)&v35 + 1)));
    }
    v11 = CVisualTree::PreCompute(*(CVisualTree **)(*(_QWORD *)this + 136LL));
    v4 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x280u);
      return v4;
    }
    v12 = CDrawingContext::Create(*(struct CComposition **)(*(_QWORD *)this + 32LL), &v33);
    v13 = v33;
    v4 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x286u);
    }
    else
    {
      CTileBrushUtils::CalculateViewboxToViewportMapping((float *)&v35, (float *)this + 6, 2, 0, 0, &v36);
      v14 = *(_QWORD *)this;
      if ( *(_BYTE *)(*(_QWORD *)this + 282LL)
        && CVisual::GetEffectiveOffset(*(CVisual **)(*(_QWORD *)(v14 + 136) + 24LL), &v32[1], v32, (float *)&v33) )
      {
        *(float *)&v39 = *(float *)&v39 - (float)((float)(*(float *)&v36 * v32[1]) + (float)(*(float *)&v37 * v32[0]));
        *((float *)&v39 + 1) = *((float *)&v39 + 1)
                             - (float)((float)(*((float *)&v36 + 1) * v32[1]) + (float)(*((float *)&v37 + 1) * v32[0]));
        *((float *)&v39 + 3) = *((float *)&v39 + 3)
                             - (float)((float)(*((float *)&v36 + 3) * v32[1]) + (float)(*((float *)&v37 + 3) * v32[0]));
      }
      v15 = (struct IRenderTarget *)*((_QWORD *)this + 1);
      v41[0] = v36;
      v41[1] = v37;
      v41[2] = v38;
      v41[3] = v39;
      v16 = CDrawingContext::BeginFrame(v13, v15, (_OWORD *)(v14 + 288), 0, (struct D2DMatrix *)v41, 0LL, 0, 0LL);
      v4 = v16;
      if ( v16 >= 0 )
      {
        Bounds = CVisualTree::GetBounds(*(CVisualTree **)(*(_QWORD *)this + 136LL));
        v4 = Bounds;
        if ( Bounds < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, Bounds, 0x2B3u);
        }
        else
        {
          IsEmpty = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(v40);
          v19 = *(_QWORD *)this;
          if ( IsEmpty )
          {
            v28 = CDrawingContext::Clear(
                    (struct ID2D1PrivateCompositorRenderer ***)v13,
                    (const struct _D3DCOLORVALUE *)(v19 + 288));
            v4 = v28;
            if ( v28 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0x2B6u);
            goto LABEL_26;
          }
          if ( (*(_BYTE *)(*(_QWORD *)(v19 + 112) + 72LL) & 0x10) != 0
            && (*(float *)&v36 < 0.40000001 || *((float *)&v37 + 1) < 0.40000001) )
          {
            v7 = 1;
          }
          v34 = 0LL;
          CDrawingContext::CalculateOcclusion(
            (struct CComposition **)v13,
            *(struct CVisualTree **)(v19 + 136),
            1u,
            (__int64)&v35,
            1,
            0LL,
            &v34);
          if ( (float)(*((float *)this + 8) - *((float *)this + 6)) <= (float)(*((float *)&v35 + 2) - *(float *)&v35)
            && (float)(*((float *)this + 9) - *((float *)this + 7)) <= (float)(*((float *)&v35 + 3)
                                                                             - *((float *)&v35 + 1)) )
          {
            goto LABEL_20;
          }
          v40[0] = 3;
          v40[1] = 6;
          v40[4] = 1;
          v20 = CDrawingContext::PushRenderOptionsInternal(v13, 0LL, (const struct MilRenderOptions *)v40, 1);
          v4 = v20;
          if ( v20 >= 0 )
          {
            v8 = 1;
LABEL_20:
            v21 = CDrawingContext::DrawVisualTree(
                    v13,
                    *(_QWORD *)(*(_QWORD *)this + 136LL),
                    &v35,
                    0LL,
                    0x7FFFFFFF,
                    1,
                    v8,
                    1,
                    v7,
                    1,
                    1);
            v4 = v21;
            if ( v21 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x2F0u);
            }
            else
            {
              if ( !v5 )
                *(_BYTE *)(*(_QWORD *)this + 281LL) = *((_BYTE *)v13 + 5970);
              v23 = (CHwTextureRenderTarget *)*((_QWORD *)this + 1);
              v24 = *((_BYTE *)v13 + 5972);
              *((_BYTE *)this + 41) = v24;
              v25 = *(char (__fastcall **)(CHwTextureRenderTarget *, char))(*(_QWORD *)v23 + 192LL);
              if ( v25 == CHwTextureRenderTarget::SetMonitorSpecificContent )
              {
                CHwTextureRenderTarget::SetMonitorSpecificContent(v23, v24);
              }
              else
              {
                LOBYTE(v22) = v24;
                v25(v23, v22);
              }
              *((_BYTE *)this + 40) = v5 != 0;
            }
            goto LABEL_26;
          }
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x2E2u);
        }
LABEL_26:
        v26 = g_LockAndReadD2DTarget;
        if ( g_LockTilingTarget )
          v26 = 1;
        g_LockAndReadD2DTarget = v26;
        CDrawingContext::EndFrame(v13);
        v27 = g_LockAndReadD2DTarget;
        if ( g_LockTilingTarget )
          v27 = 0;
        g_LockAndReadD2DTarget = v27;
        goto LABEL_31;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x2ADu);
    }
LABEL_31:
    if ( v13 )
      CMILCOMBase::InternalRelease((CDrawingContext *)((char *)v13 + 8));
  }
  return v4;
}
