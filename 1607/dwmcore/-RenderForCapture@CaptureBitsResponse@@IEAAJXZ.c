/*
 * XREFs of ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x180120B7C
 * Callers:
 *     ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x180009B4C (-GetBits@CaptureBitsResponse@@IEAAJXZ.c)
 * Callees:
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000C8B8 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x18000CD9C (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x18000CDD0 (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 *     ?Leave@CReadWriteLock@@QEAAXXZ @ 0x18001FF38 (-Leave@CReadWriteLock@@QEAAXXZ.c)
 *     ?EnterWrite@CReadWriteLock@@QEAAXXZ @ 0x18001FF70 (-EnterWrite@CReadWriteLock@@QEAAXXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ @ 0x18003AE80 (-GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x180058DFC (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x18005B548 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DF@@@2PEAVCHwndRenderTarget@@@Z @ 0x18006C640 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEAV-$CMatrix@UPageIn.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18006CC40 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAPEAVCOcclusionContext@@@Z @ 0x18006D184 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18006D550 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x18006D600 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800B8530 (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?ReadTexture@CDrawingContext@@QEAAJXZ @ 0x1801076EC (-ReadTexture@CDrawingContext@@QEAAJXZ.c)
 *     ?GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z @ 0x1801098AC (-GetEffectiveOffset@CVisual@@QEBA_NPEAM00@Z.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@PEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180111CC4 (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@PEAV-$CMatrix@UPageInPixels@CoordinateSpace@@.c)
 */

__int64 __fastcall CaptureBitsResponse::RenderForCapture(CaptureBitsResponse *this)
{
  CDrawingContext *v2; // rsi
  __int64 v3; // rcx
  CComposition *v4; // r14
  __m128i v5; // xmm0
  __m128i v6; // xmm1
  char v7; // r15
  float v8; // xmm2_4
  CVisualTree *v9; // rcx
  int v10; // ebx
  int v11; // eax
  int v12; // eax
  struct IRenderTarget *v13; // rdx
  int v14; // eax
  struct CVisualTree *v15; // rdx
  int v16; // eax
  int v17; // eax
  struct IRenderTargetDesktop *PrimaryDesktopRenderTargetNoRef; // rax
  CComposeTop *v19; // rax
  __m128i v20; // xmm0
  D3DVALUE v21; // xmm2_4
  float v22; // xmm1_4
  int v23; // eax
  CDrawingContext *v25; // [rsp+68h] [rbp-A0h] BYREF
  float v26; // [rsp+70h] [rbp-98h] BYREF
  float v27; // [rsp+74h] [rbp-94h] BYREF
  float v28[4]; // [rsp+78h] [rbp-90h] BYREF
  __int128 v29; // [rsp+88h] [rbp-80h] BYREF
  __int128 v30; // [rsp+98h] [rbp-70h]
  __int128 v31; // [rsp+A8h] [rbp-60h]
  __int128 v32; // [rsp+B8h] [rbp-50h]
  int v33; // [rsp+C8h] [rbp-40h]
  _OWORD v34[4]; // [rsp+D8h] [rbp-30h] BYREF
  int v35; // [rsp+118h] [rbp+10h]
  struct _D3DCOLORVALUE v36; // [rsp+128h] [rbp+20h] BYREF

  v2 = 0LL;
  v3 = *((_QWORD *)this + 3) + 16LL;
  v25 = 0LL;
  v4 = (CComposition *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  v36.r = 0.0;
  v36.g = 0.0;
  v29 = CMILMatrix::Identity;
  v30 = xmmword_1801EAD20;
  v31 = xmmword_1801EAD30;
  v5 = _mm_cvtsi32_si128(*((_DWORD *)this + 22));
  v32 = xmmword_1801EAD40;
  v6 = _mm_cvtsi32_si128(*((_DWORD *)this + 23));
  v33 = dword_1801EAD50;
  v7 = *(_BYTE *)(*((_QWORD *)this + 8) + 32LL);
  v36.b = _mm_cvtepi32_ps(v5).m128_f32[0] + 0.0;
  v36.a = _mm_cvtepi32_ps(v6).m128_f32[0] + 0.0;
  CComposition::ShowHideCursors(v4, 0);
  v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 24) - 1.0)) & _xmm);
  if ( v8 >= 0.0000011920929 )
    CMILMatrix::Scale((CMILMatrix *)&v29, *((float *)this + 24), *((float *)this + 24), 1.0);
  CMILMatrix::Translate((CMILMatrix *)&v29, (float)-*((_DWORD *)this + 20), (float)-*((_DWORD *)this + 21), 0.0);
  v9 = (CVisualTree *)*((_QWORD *)this + 8);
  if ( (*(_BYTE *)(*((_QWORD *)v9 + 3) + 152LL) & 0xF) != 0 )
  {
    if ( v7 )
    {
      CReadWriteLock::EnterWrite((RTL_SRWLOCK *)(*((_QWORD *)v9 + 2) + 576LL));
      v10 = CVisualTree::PreCompute(*((CVisualTree **)this + 8));
      CReadWriteLock::Leave((CReadWriteLock *)(*(_QWORD *)(*((_QWORD *)this + 8) + 16LL) + 576LL));
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x220u);
        goto LABEL_30;
      }
    }
    else
    {
      v11 = CVisualTree::PreCompute(v9);
      v10 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x224u);
        goto LABEL_30;
      }
    }
  }
  v12 = CDrawingContext::Create(v4, &v25);
  v10 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x228u);
    v2 = v25;
  }
  else
  {
    *((_BYTE *)v4 + 1240) = 1;
    if ( !v7 && CVisual::GetEffectiveOffset(*(CVisual **)(*((_QWORD *)this + 8) + 24LL), &v27, &v26, v28) )
      CMILMatrix::Translate(
        (CMILMatrix *)&v29,
        COERCE_FLOAT(LODWORD(v27) ^ _xmm),
        COERCE_FLOAT(LODWORD(v26) ^ _xmm),
        0.0);
    v13 = (struct IRenderTarget *)*((_QWORD *)this + 9);
    v2 = v25;
    v34[0] = v29;
    v34[1] = v30;
    v35 = v33;
    v34[2] = v31;
    v34[3] = v32;
    v14 = CDrawingContext::BeginFrame(v25, v13, (__int128 *)&stru_1801C74E0, 1, (__int64)v34, 0LL, 0, 0LL);
    v10 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x243u);
    }
    else
    {
      v15 = (struct CVisualTree *)*((_QWORD *)this + 8);
      v25 = 0LL;
      CDrawingContext::CalculateOcclusion(v2, v15, 1u, (__int64)&v36, 1, &v25);
      v16 = CDrawingContext::Clear((CD2DContext **)v2, &stru_1801C74E0);
      v10 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x253u);
      }
      else
      {
        v17 = CDrawingContext::DrawVisualTree(v2, *((_QWORD *)this + 8), &v36, 0LL, 0x7FFFFFFF, 0, 0, 1, 0, 0, 1);
        v10 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x25Eu);
        }
        else
        {
          if ( g_LockAndReadOffscreenTarget )
            CDrawingContext::ReadTexture(v2);
          if ( v7 )
          {
            PrimaryDesktopRenderTargetNoRef = CComposition::GetPrimaryDesktopRenderTargetNoRef(v4);
            if ( PrimaryDesktopRenderTargetNoRef )
            {
              v19 = (CComposeTop *)(*(__int64 (__fastcall **)(struct IRenderTargetDesktop *))(*(_QWORD *)PrimaryDesktopRenderTargetNoRef
                                                                                            + 200LL))(PrimaryDesktopRenderTargetNoRef);
              if ( v19 )
              {
                v20 = _mm_cvtsi32_si128(*((_DWORD *)this + 22));
                v21 = (float)*((int *)this + 21);
                v36.r = (float)*((int *)this + 20);
                v36.g = v21;
                v22 = (float)*((int *)this + 23);
                v36.b = _mm_cvtepi32_ps(v20).m128_f32[0] + v36.r;
                v36.a = v22 + v21;
                v23 = CComposeTop::FullRender(v19, (__int64)v2, (__int64)v34);
                v10 = v23;
                if ( v23 < 0 )
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x284u);
              }
            }
          }
        }
      }
      CDrawingContext::EndFrame(v2);
    }
    *((_BYTE *)v4 + 1240) = 0;
  }
LABEL_30:
  CComposition::RestoreCursors(v4);
  if ( v2 )
    CMILCOMBase::InternalRelease((CDrawingContext *)((char *)v2 + 8));
  return (unsigned int)v10;
}
