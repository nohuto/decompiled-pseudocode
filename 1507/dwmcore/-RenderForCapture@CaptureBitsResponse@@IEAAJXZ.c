/*
 * XREFs of ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x1800F0774
 * Callers:
 *     ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x180061DCC (-GetBits@CaptureBitsResponse@@IEAAJXZ.c)
 * Callees:
 *     ?Leave@CReadWriteLock@@QEAAXXZ @ 0x18000F834 (-Leave@CReadWriteLock@@QEAAXXZ.c)
 *     MatrixAppendScale2D @ 0x1800139C8 (MatrixAppendScale2D.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEAU_D3DCOLORVALUE@@_NPEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DA@@@2PEAVCHwndRenderTarget@@@Z @ 0x18002EA00 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEAU_D3DCOLORVALUE@@_NPEAV-$CMatrix@UPageIn.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18002EDE0 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAVCOverlayContext@@PEAPEAVCOcclusionContext@@@Z @ 0x18002F32C (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x18002F750 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800404F0 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800569F8 (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Push@?$CWatermarkStack@PEAUMilVisualRenderParameter@@$07$01$03@@QEAAJAEBQEAUMilVisualRenderParameter@@@Z @ 0x18005FD10 (-Push@-$CWatermarkStack@PEAUMilVisualRenderParameter@@$07$01$03@@QEAAJAEBQEAUMilVisualRenderPara.c)
 *     ?PopRenderParameter@CComposition@@QEAAJW4Enum@MilVisualRenderParameterType@@@Z @ 0x180067ED4 (-PopRenderParameter@CComposition@@QEAAJW4Enum@MilVisualRenderParameterType@@@Z.c)
 *     ?GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ @ 0x180067F00 (-GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z @ 0x1800DCD90 (-GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z.c)
 *     ?EnterWrite@CReadWriteLock@@QEAAXXZ @ 0x1800E2940 (-EnterWrite@CReadWriteLock@@QEAAXXZ.c)
 *     ?ReadTexture@CDrawingContext@@QEAAJXZ @ 0x1800F4424 (-ReadTexture@CDrawingContext@@QEAAJXZ.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@PEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180119DC4 (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@PEAV-$CMatrix@UPageInPixels@CoordinateSpace@@.c)
 */

__int64 __fastcall CaptureBitsResponse::RenderForCapture(CaptureBitsResponse *this)
{
  __int64 v1; // rdi
  __int64 v3; // rax
  float v4; // xmm6_4
  __m128i v5; // xmm1
  unsigned int *v6; // r15
  __int64 v7; // rax
  float v8; // xmm7_4
  char v9; // bl
  float v10; // xmm0_4
  float v11; // xmm0_4
  struct CVisualTree *v12; // rcx
  float v13; // xmm7_4
  float v14; // xmm0_4
  bool v15; // zf
  float v16; // xmm6_4
  unsigned int v17; // edi
  int v18; // eax
  int v19; // eax
  CDrawingContext *v20; // rsi
  int v21; // eax
  struct IRenderTarget *v22; // rdx
  int v23; // eax
  struct CVisualTree *v24; // rdx
  int v25; // eax
  struct IRenderTargetDesktop *PrimaryDesktopRenderTargetNoRef; // rax
  __int64 v27; // rax
  int v28; // eax
  CDrawingContext *v30; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v31[3]; // [rsp+70h] [rbp-98h] BYREF
  float v32[4]; // [rsp+88h] [rbp-80h] BYREF
  __int128 v33; // [rsp+98h] [rbp-70h] BYREF
  __int128 v34; // [rsp+A8h] [rbp-60h]
  __int128 v35; // [rsp+B8h] [rbp-50h]
  __int128 v36; // [rsp+C8h] [rbp-40h]
  _DWORD v37[8]; // [rsp+D8h] [rbp-30h] BYREF
  _OWORD v38[4]; // [rsp+F8h] [rbp-10h] BYREF

  v1 = *((_QWORD *)this + 3);
  v30 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v1 + 16) + 8LL))(v1 + 16);
  v4 = 0.0;
  v5 = _mm_cvtsi32_si128(*((_DWORD *)this + 23));
  v6 = (unsigned int *)v3;
  v7 = *((_QWORD *)this + 8);
  v8 = 0.0;
  *(_QWORD *)&v35 = 0LL;
  v34 = 0x3F80000000000000uLL;
  v32[0] = 0.0;
  v32[1] = 0.0;
  v9 = *(_BYTE *)(v7 + 32);
  *(_OWORD *)&v31[1] = _xmm;
  HIDWORD(v36) = 1065353216;
  v10 = (float)*((int *)this + 22);
  *((_QWORD *)&v35 + 1) = 1065353216LL;
  v33 = 0x3F800000uLL;
  *(_QWORD *)((char *)&v36 + 4) = 0LL;
  LODWORD(v36) = 0;
  v32[2] = v10 + 0.0;
  v11 = *((float *)this + 24);
  v32[3] = _mm_cvtepi32_ps(v5).m128_f32[0] + 0.0;
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v11 - 1.0)) & _xmm) >= 0.0000011920929 )
  {
    MatrixAppendScale2D((struct D2DMatrix *)&v33, *((float *)this + 24), *((float *)this + 24));
    v4 = *((float *)&v36 + 1);
    v8 = *(float *)&v36;
  }
  v12 = (struct CVisualTree *)*((_QWORD *)this + 8);
  v13 = v8 + (float)-*((_DWORD *)this + 20);
  v14 = (float)-*((_DWORD *)this + 21);
  v15 = (*(_BYTE *)(*((_QWORD *)v12 + 3) + 88LL) & 0xF) == 0;
  *(float *)&v36 = v13;
  v16 = v4 + v14;
  *((float *)&v36 + 1) = v16;
  if ( !v15 )
  {
    if ( v9 )
    {
      CReadWriteLock::EnterWrite((RTL_SRWLOCK *)(*((_QWORD *)v12 + 2) + 568LL));
      v17 = CVisualTree::PreCompute(*((struct CVisualTree **)this + 8), 0LL);
      CReadWriteLock::Leave((CReadWriteLock *)(*(_QWORD *)(*((_QWORD *)this + 8) + 16LL) + 568LL));
      if ( (v17 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x1FEu);
        return v17;
      }
    }
    else
    {
      v18 = CVisualTree::PreCompute(v12, 0LL);
      v17 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x202u);
        return v17;
      }
    }
  }
  v19 = CDrawingContext::Create((struct CComposition *)v6, &v30);
  v20 = v30;
  v17 = v19;
  if ( v19 >= 0 )
  {
    v37[0] = 0;
    v30 = (CDrawingContext *)v37;
    v37[1] = 1;
    v21 = CWatermarkStack<MilVisualRenderParameter *,8,2,4>::Push(v6 + 216, &v30);
    v17 = v21;
    if ( v21 >= 0 )
    {
      if ( !v9
        && CVisual::GetEffectiveOffset(
             *(CVisual **)(*((_QWORD *)this + 8) + 24LL),
             (float *)v31 + 1,
             (float *)v31,
             (float *)&v30) )
      {
        *(float *)&v36 = v13 + COERCE_FLOAT(HIDWORD(v31[0]) ^ _xmm);
        *((float *)&v36 + 1) = v16 + COERCE_FLOAT(LODWORD(v31[0]) ^ _xmm);
      }
      v22 = (struct IRenderTarget *)*((_QWORD *)this + 9);
      v38[0] = v33;
      v38[1] = v34;
      v38[2] = v35;
      v38[3] = v36;
      v23 = CDrawingContext::BeginFrame(v20, v22, &v31[1], 1, (struct D2DMatrix *)v38, 0LL, 0, 0LL);
      v17 = v23;
      if ( v23 >= 0 )
      {
        v24 = (struct CVisualTree *)*((_QWORD *)this + 8);
        v30 = 0LL;
        CDrawingContext::CalculateOcclusion(
          (struct CComposition **)v20,
          v24,
          1u,
          (const struct MilRectF *)v32,
          1,
          0LL,
          (__int64 *)&v30);
        v25 = CDrawingContext::DrawVisualTree(v20, *((_QWORD *)this + 8), v32, 0LL, 0x7FFFFFFF, 1, 0, 1, 0, 1, 1);
        v17 = v25;
        if ( v25 >= 0 )
        {
          if ( g_LockAndReadOffscreenTarget )
            CDrawingContext::ReadTexture(v20);
          if ( v9 )
          {
            PrimaryDesktopRenderTargetNoRef = CComposition::GetPrimaryDesktopRenderTargetNoRef((CComposition *)v6);
            if ( PrimaryDesktopRenderTargetNoRef )
            {
              v27 = (*(__int64 (__fastcall **)(struct IRenderTargetDesktop *))(*(_QWORD *)PrimaryDesktopRenderTargetNoRef
                                                                             + 216LL))(PrimaryDesktopRenderTargetNoRef);
              if ( v27 )
              {
                v28 = CComposeTop::FullRender(v27, v20, v38, v32);
                v17 = v28;
                if ( v28 < 0 )
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0x25Cu);
              }
            }
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0x23Cu);
        }
        CDrawingContext::EndFrame(v20);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x224u);
      }
      CComposition::PopRenderParameter((__int64)v6, 0);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x20Fu);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x206u);
  }
  if ( v20 )
    CMILCOMBase::InternalRelease((CDrawingContext *)((char *)v20 + 8));
  return v17;
}
