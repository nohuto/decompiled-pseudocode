/*
 * XREFs of ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x18010A4B4
 * Callers:
 *     ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x1800A533C (-GetBits@CaptureBitsResponse@@IEAAJXZ.c)
 * Callees:
 *     ?Leave@CReadWriteLock@@QEAAXXZ @ 0x18001CD0C (-Leave@CReadWriteLock@@QEAAXXZ.c)
 *     ?EnterWrite@CReadWriteLock@@QEAAXXZ @ 0x18001CD44 (-EnterWrite@CReadWriteLock@@QEAAXXZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DE@@@2PEAVCHwndRenderTarget@@@Z @ 0x180044090 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEAV-$CMatrix@UPageIn.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x180044630 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAVCOverlayContext@@PEAPEAVCOcclusionContext@@@Z @ 0x180044B58 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x180044FA0 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x180045060 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     MatrixAppendScale2D @ 0x180068D90 (MatrixAppendScale2D.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180076884 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ @ 0x180094744 (-GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ.c)
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x1800947D4 (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x180094814 (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800AD4F0 (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z @ 0x1800F7A40 (-GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@PEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@@Z @ 0x1800FCD48 (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@PEAV-$CMatrix@UPageInPixels@CoordinateSpace@@.c)
 *     ?ReadTexture@CDrawingContext@@QEAAJXZ @ 0x18010E108 (-ReadTexture@CDrawingContext@@QEAAJXZ.c)
 */

__int64 __fastcall CaptureBitsResponse::RenderForCapture(CaptureBitsResponse *this)
{
  __int64 v1; // rdi
  CDrawingContext *v3; // rsi
  __int64 v4; // rax
  __m128i v5; // xmm0
  float v6; // xmm6_4
  __m128i v7; // xmm1
  CComposition *v8; // r15
  __int64 v9; // rax
  float v10; // xmm7_4
  char v11; // bl
  CVisualTree *v12; // rcx
  float v13; // xmm7_4
  float v14; // xmm0_4
  bool v15; // zf
  float v16; // xmm6_4
  int v17; // edi
  int v18; // eax
  int v19; // eax
  struct IRenderTarget *v20; // rdx
  int v21; // eax
  struct CVisualTree *v22; // rdx
  int v23; // eax
  BOOL v24; // eax
  struct IRenderTargetDesktop *PrimaryDesktopRenderTargetNoRef; // rax
  CComposeTop *v26; // rax
  int v27; // eax
  CDrawingContext *v29; // [rsp+68h] [rbp-A0h] BYREF
  float v30; // [rsp+70h] [rbp-98h] BYREF
  float v31; // [rsp+74h] [rbp-94h] BYREF
  float v32[2]; // [rsp+78h] [rbp-90h] BYREF
  COcclusionContext *v33; // [rsp+80h] [rbp-88h] BYREF
  __int128 v34; // [rsp+88h] [rbp-80h] BYREF
  __int128 v35; // [rsp+98h] [rbp-70h] BYREF
  __int128 v36; // [rsp+A8h] [rbp-60h]
  __int128 v37; // [rsp+B8h] [rbp-50h]
  __int128 v38; // [rsp+C8h] [rbp-40h]
  _OWORD v39[4]; // [rsp+D8h] [rbp-30h] BYREF

  v1 = *((_QWORD *)this + 3);
  v3 = 0LL;
  v29 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v1 + 16) + 8LL))(v1 + 16);
  v5 = _mm_cvtsi32_si128(*((_DWORD *)this + 22));
  v6 = 0.0;
  v7 = _mm_cvtsi32_si128(*((_DWORD *)this + 23));
  v8 = (CComposition *)v4;
  v9 = *((_QWORD *)this + 8);
  v10 = 0.0;
  *((_QWORD *)&v38 + 1) = 0x3F80000000000000LL;
  *(_QWORD *)&v37 = 0LL;
  v36 = 0x3F80000000000000uLL;
  v11 = *(_BYTE *)(v9 + 32);
  *(_QWORD *)&v34 = 0LL;
  *((_QWORD *)&v37 + 1) = 1065353216LL;
  v35 = 0x3F800000uLL;
  *(_QWORD *)&v38 = 0LL;
  *((float *)&v34 + 2) = _mm_cvtepi32_ps(v5).m128_f32[0] + 0.0;
  *((float *)&v34 + 3) = _mm_cvtepi32_ps(v7).m128_f32[0] + 0.0;
  CComposition::ShowHideCursors(v8, 0);
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 24) - 1.0)) & _xmm) >= 0.0000011920929 )
  {
    MatrixAppendScale2D((struct D2DMatrix *)&v35, *((float *)this + 24), *((float *)this + 24));
    v6 = *((float *)&v38 + 1);
    v10 = *(float *)&v38;
  }
  v12 = (CVisualTree *)*((_QWORD *)this + 8);
  v13 = v10 + (float)-*((_DWORD *)this + 20);
  v14 = (float)-*((_DWORD *)this + 21);
  v15 = (*(_BYTE *)(*((_QWORD *)v12 + 3) + 72LL) & 0xF) == 0;
  *(float *)&v38 = v13;
  v16 = v6 + v14;
  *((float *)&v38 + 1) = v16;
  if ( !v15 )
  {
    if ( v11 )
    {
      CReadWriteLock::EnterWrite((RTL_SRWLOCK *)(*((_QWORD *)v12 + 2) + 568LL));
      v17 = CVisualTree::PreCompute(*((CVisualTree **)this + 8), 0LL);
      CReadWriteLock::Leave((CReadWriteLock *)(*(_QWORD *)(*((_QWORD *)this + 8) + 16LL) + 568LL));
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x220u);
        goto LABEL_30;
      }
    }
    else
    {
      v18 = CVisualTree::PreCompute(v12, 0LL);
      v17 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x224u);
        goto LABEL_30;
      }
    }
  }
  v19 = CDrawingContext::Create(v8, &v29);
  v17 = v19;
  if ( v19 >= 0 )
  {
    *((_BYTE *)v8 + 1136) = 1;
    if ( !v11 && CVisual::GetEffectiveOffset(*(CVisual **)(*((_QWORD *)this + 8) + 24LL), v32, &v31, &v30) )
    {
      *(float *)&v38 = v13 + COERCE_FLOAT(LODWORD(v32[0]) ^ _xmm);
      *((float *)&v38 + 1) = v16 + COERCE_FLOAT(LODWORD(v31) ^ _xmm);
    }
    v3 = v29;
    v20 = (struct IRenderTarget *)*((_QWORD *)this + 9);
    v39[0] = v35;
    v39[1] = v36;
    v39[2] = v37;
    v39[3] = v38;
    v21 = CDrawingContext::BeginFrame(v29, v20, &stru_180183A40, 1, (struct D2DMatrix *)v39, 0LL, 0, 0LL);
    v17 = v21;
    if ( v21 >= 0 )
    {
      v22 = (struct CVisualTree *)*((_QWORD *)this + 8);
      v33 = 0LL;
      CDrawingContext::CalculateOcclusion((struct CComposition **)v3, v22, 1u, (__int64)&v34, 1, 0LL, &v33);
      v23 = CDrawingContext::Clear((struct ID2D1PrivateCompositorRenderer ***)v3, &stru_180183A40);
      v17 = v23;
      if ( v23 >= 0 )
      {
        v24 = CDrawingContext::DrawVisualTree(v3, *((_QWORD *)this + 8), &v34, 0LL, 0x7FFFFFFF, 0, 0, 1, 0, 0, 1);
        v17 = v24;
        if ( v24 >= 0 )
        {
          if ( g_LockAndReadOffscreenTarget )
            CDrawingContext::ReadTexture(v3);
          if ( v11 )
          {
            PrimaryDesktopRenderTargetNoRef = CComposition::GetPrimaryDesktopRenderTargetNoRef(v8);
            if ( PrimaryDesktopRenderTargetNoRef )
            {
              v26 = (CComposeTop *)(*(__int64 (__fastcall **)(struct IRenderTargetDesktop *))(*(_QWORD *)PrimaryDesktopRenderTargetNoRef
                                                                                            + 208LL))(PrimaryDesktopRenderTargetNoRef);
              if ( v26 )
              {
                v27 = CComposeTop::FullRender(v26, (__int64)v3, (__int64)v39, (struct MilRectF *)&v34);
                v17 = v27;
                if ( v27 < 0 )
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0x280u);
              }
            }
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0x25Fu);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x254u);
      }
      CDrawingContext::EndFrame(v3);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x243u);
    }
    *((_BYTE *)v8 + 1136) = 0;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x228u);
    v3 = v29;
  }
LABEL_30:
  CComposition::RestoreCursors(v8);
  if ( v3 && _InterlockedExchangeAdd((volatile signed __int32 *)v3 + 4, 0xFFFFFFFF) == 1 )
  {
    --*((_DWORD *)v3 + 4);
    (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v3 + 1) + 24LL))((__int64)v3 + 8, 1LL);
  }
  return (unsigned int)v17;
}
