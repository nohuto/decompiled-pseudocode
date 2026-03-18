/*
 * XREFs of ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x18011FA60
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ @ 0x180044A60 (-ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NAEBU_GUID@@U_LUID@@VDisplayId@@444PEAPEAVIRenderTargetBitmap@@@Z @ 0x180034F70 (-CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U-$T.c)
 *     ?GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z @ 0x1800364D4 (-GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x18003653C (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180038AF8 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x18004F7EC (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x18005B548 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DF@@@2PEAVCHwndRenderTarget@@@Z @ 0x18006C640 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEAV-$CMatrix@UPageIn.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18006CC40 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18006D550 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x18006D600 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18006E5B0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??0CSystemMemoryBitmap@@QEAA@XZ @ 0x1800A1868 (--0CSystemMemoryBitmap@@QEAA@XZ.c)
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800B8530 (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetPixelInfo@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAUPixelFormatInfo@@@Z @ 0x18011F9D4 (-GetPixelInfo@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAUPixelFormatInfo@@@Z.c)
 *     ?HrInit@CSystemMemoryBitmap@@QEAAJIIPEBUPixelFormatInfo@@_N@Z @ 0x180182234 (-HrInit@CSystemMemoryBitmap@@QEAAJIIPEBUPixelFormatInfo@@_N@Z.c)
 */

__int64 __fastcall CDebugVisualRenderer::RenderVisual(struct CComposition *a1, struct CVisual *a2)
{
  struct CVisualTree *v3; // r14
  CD2DContext **v4; // rsi
  CDisplaySet *v5; // r12
  struct CDisplay *v6; // r15
  CSystemMemoryBitmap *v7; // rdi
  unsigned int v8; // ebx
  int v9; // r9d
  __int64 v10; // rdx
  __int64 v11; // r8
  int VisualTree; // eax
  CDisplayManager *v13; // rcx
  int CurrentDisplaySet; // eax
  int PrimaryDisplay; // eax
  __int64 v16; // rax
  __m128 v17; // xmm0
  __int64 v18; // xmm1_8
  float v19; // xmm7_4
  int PixelInfo; // eax
  int RenderTargetBitmap; // eax
  int v22; // eax
  CSystemMemoryBitmap *v23; // rax
  unsigned int v25; // [rsp+28h] [rbp-E0h]
  struct _LUID v26; // [rsp+50h] [rbp-B8h]
  unsigned int v27; // [rsp+58h] [rbp-B0h]
  __int64 v28; // [rsp+88h] [rbp-80h] BYREF
  struct CVisualTree *v29; // [rsp+90h] [rbp-78h] BYREF
  struct IRenderTarget *v30; // [rsp+98h] [rbp-70h] BYREF
  struct CDisplay *v31; // [rsp+A0h] [rbp-68h] BYREF
  CDrawingContext *v32; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v33; // [rsp+B0h] [rbp-58h]
  _BYTE v34[4]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v35[4]; // [rsp+BCh] [rbp-4Ch] BYREF
  _BYTE v36[4]; // [rsp+C0h] [rbp-48h] BYREF
  _BYTE v37[4]; // [rsp+C4h] [rbp-44h] BYREF
  _BYTE v38[8]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v39[3]; // [rsp+D0h] [rbp-38h] BYREF
  _BYTE v40[16]; // [rsp+E8h] [rbp-20h] BYREF
  _OWORD v41[4]; // [rsp+F8h] [rbp-10h] BYREF
  int v42; // [rsp+138h] [rbp+30h]
  struct _D3DCOLORVALUE v43; // [rsp+148h] [rbp+40h] BYREF
  _DWORD v44[2]; // [rsp+158h] [rbp+50h] BYREF
  unsigned int v45; // [rsp+160h] [rbp+58h]
  unsigned int v46; // [rsp+164h] [rbp+5Ch]
  CDisplaySet *v47; // [rsp+168h] [rbp+60h] BYREF
  int v48; // [rsp+170h] [rbp+68h]
  __int64 v49; // [rsp+178h] [rbp+70h]
  struct _D3DCOLORVALUE v50; // [rsp+180h] [rbp+78h] BYREF

  v42 = dword_1801EAD50;
  v41[0] = CMILMatrix::Identity;
  v3 = 0LL;
  v4 = 0LL;
  v41[1] = xmmword_1801EAD20;
  v5 = 0LL;
  v6 = 0LL;
  v41[2] = xmmword_1801EAD30;
  v7 = 0LL;
  v41[3] = xmmword_1801EAD40;
  v29 = 0LL;
  v32 = 0LL;
  v47 = 0LL;
  v31 = 0LL;
  v30 = 0LL;
  v28 = 0LL;
  if ( !CDebugVisualRenderer::s_pVisual )
  {
    v8 = -2147467259;
    v25 = 135;
LABEL_3:
    v9 = v8;
LABEL_4:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, v25);
    goto LABEL_47;
  }
  v33 = 1LL;
  VisualTree = CVisual::GetVisualTree(CDebugVisualRenderer::s_pVisual, &v29);
  v8 = VisualTree;
  if ( VisualTree < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, VisualTree, 0x8Fu);
    goto LABEL_46;
  }
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(v13, &v47);
  v8 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, CurrentDisplaySet, 0x91u);
    v5 = v47;
    goto LABEL_46;
  }
  v5 = v47;
  PrimaryDisplay = CDisplaySet::GetPrimaryDisplay(v47, &v31);
  v8 = PrimaryDisplay;
  if ( PrimaryDisplay < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, PrimaryDisplay, 0x93u);
    v6 = v31;
LABEL_46:
    v3 = v29;
    goto LABEL_47;
  }
  v3 = v29;
  v16 = *((_QWORD *)v29 + 3);
  v17 = *(__m128 *)(v16 + 200);
  v18 = *(_QWORD *)(v16 + 216);
  v43.r = 0.0;
  v43.g = 0.0;
  v49 = v18;
  v19 = _mm_shuffle_ps(v17, v17, 85).m128_f32[0];
  v43.b = _mm_shuffle_ps(v17, v17, 170).m128_f32[0] - v17.m128_f32[0];
  v43.a = _mm_shuffle_ps(v17, v17, 255).m128_f32[0] - v19;
  PixelInfo = CDebugVisualRenderer::GetPixelInfo(a1, (struct PixelFormatInfo *)v39);
  v8 = PixelInfo;
  if ( PixelInfo < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, PixelInfo, 0x9Cu);
    v6 = v31;
  }
  else
  {
    v6 = v31;
    v27 = *(_DWORD *)(*((_QWORD *)v31 + 17) + 244LL);
    v26 = (struct _LUID)*((_QWORD *)v31 + 29);
    v47 = (CDisplaySet *)"DWM Rendertarget (debugger visualization)";
    v48 = 41;
    RenderTargetBitmap = CD3DDeviceManager::CreateRenderTargetBitmap(
                           (__int64)&qword_1801F0018,
                           (__int64)&v47,
                           (int)(float)((float)(v43.b - v43.r) + 0.5),
                           (int)(float)((float)(v43.a - v43.g) + 0.5),
                           v33,
                           0,
                           (struct PixelFormatInfo *)v39,
                           1,
                           (struct _GUID *)((char *)a1 + 252),
                           v26,
                           v27,
                           0,
                           0,
                           1,
                           (void **)&v30);
    v8 = RenderTargetBitmap;
    if ( RenderTargetBitmap < 0 )
    {
      v25 = 171;
      goto LABEL_41;
    }
    v22 = CDrawingContext::Create(a1, &v32);
    v8 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0xADu);
      v4 = (CD2DContext **)v32;
    }
    else
    {
      v4 = (CD2DContext **)v32;
      RenderTargetBitmap = CDrawingContext::BeginFrame(v32, v30, 0LL, 0, 0LL, 0LL, 0, 0LL);
      v8 = RenderTargetBitmap;
      if ( RenderTargetBitmap < 0 )
      {
        v25 = 178;
        goto LABEL_41;
      }
      *(_QWORD *)&v50.r = 0LL;
      *(_QWORD *)&v50.b = 0LL;
      RenderTargetBitmap = CDrawingContext::Clear(v4, &v50);
      v8 = RenderTargetBitmap;
      if ( RenderTargetBitmap < 0 )
      {
        v25 = 186;
        goto LABEL_41;
      }
      CMILMatrix::Translate(
        (CMILMatrix *)v41,
        COERCE_FLOAT(v17.m128_i32[0] ^ _xmm),
        COERCE_FLOAT(LODWORD(v19) ^ _xmm),
        0.0);
      RenderTargetBitmap = CDrawingContext::PushTransformInternal(
                             (CDrawingContext *)v4,
                             0LL,
                             (const struct CMILMatrix *)v41,
                             0,
                             1);
      v8 = RenderTargetBitmap;
      if ( RenderTargetBitmap < 0 )
      {
        v25 = 190;
        goto LABEL_41;
      }
      RenderTargetBitmap = CDrawingContext::DrawVisualTree(
                             (CDrawingContext *)v4,
                             (__int64)v3,
                             &v43,
                             0LL,
                             0,
                             1,
                             1,
                             0,
                             1,
                             0,
                             0);
      v8 = RenderTargetBitmap;
      if ( RenderTargetBitmap < 0 )
      {
        v25 = 199;
        goto LABEL_41;
      }
      RenderTargetBitmap = CDrawingContext::EndFrame((CDrawingContext *)v4);
      v8 = RenderTargetBitmap;
      if ( RenderTargetBitmap < 0 )
      {
        v25 = 201;
        goto LABEL_41;
      }
      v44[0] = 0;
      v44[1] = 0;
      v45 = (int)(float)(v43.b - v43.r);
      v46 = (int)(float)(v43.a - v43.g);
      v23 = (CSystemMemoryBitmap *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                              + 8LL))(
                                     WPF::g_pProcessHeap,
                                     280LL);
      if ( v23 )
        v7 = CSystemMemoryBitmap::CSystemMemoryBitmap(v23);
      if ( !v7 )
      {
        v8 = -2147024882;
        v25 = 213;
        goto LABEL_3;
      }
      (*(void (__fastcall **)(CSystemMemoryBitmap *))(*(_QWORD *)v7 + 8LL))(v7);
      v39[0] = 0x100000057LL;
      RenderTargetBitmap = CSystemMemoryBitmap::HrInit(v7, v45, v46, (const struct PixelFormatInfo *)v39, 1);
      v8 = RenderTargetBitmap;
      if ( RenderTargetBitmap < 0 )
      {
        v25 = 224;
        goto LABEL_41;
      }
      RenderTargetBitmap = (*(__int64 (__fastcall **)(struct IRenderTarget *, struct _D3DCOLORVALUE *, __int64, _QWORD, _DWORD))(*(_QWORD *)v30 + 96LL))(
                             v30,
                             &v43,
                             (__int64)v7 + 24,
                             0LL,
                             0);
      v8 = RenderTargetBitmap;
      if ( RenderTargetBitmap < 0 )
      {
        v25 = 226;
        goto LABEL_41;
      }
      RenderTargetBitmap = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, __int64 *))(*((_QWORD *)v7 + 3) + 24LL))(
                             (__int64)v7 + 24,
                             v44,
                             1LL,
                             &v28);
      v8 = RenderTargetBitmap;
      if ( RenderTargetBitmap < 0 )
      {
        v25 = 231;
        goto LABEL_41;
      }
      RenderTargetBitmap = (*(__int64 (__fastcall **)(__int64, _BYTE *, _BYTE *))(*(_QWORD *)v28 + 56LL))(v28, v35, v34);
      v8 = RenderTargetBitmap;
      if ( RenderTargetBitmap < 0 )
      {
        v25 = 240;
        goto LABEL_41;
      }
      RenderTargetBitmap = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v28 + 64LL))(v28, v36);
      v8 = RenderTargetBitmap;
      if ( RenderTargetBitmap < 0 )
      {
        v25 = 242;
        goto LABEL_41;
      }
      RenderTargetBitmap = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v28 + 24LL))(v28, v37);
      v8 = RenderTargetBitmap;
      if ( RenderTargetBitmap < 0 )
      {
        v25 = 244;
        goto LABEL_41;
      }
      RenderTargetBitmap = (*(__int64 (__fastcall **)(__int64, _BYTE *, _BYTE *))(*(_QWORD *)v28 + 72LL))(v28, v38, v40);
      v8 = RenderTargetBitmap;
      if ( RenderTargetBitmap < 0 )
      {
        v25 = 246;
LABEL_41:
        v9 = RenderTargetBitmap;
        goto LABEL_4;
      }
    }
  }
LABEL_47:
  if ( v28 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    v28 = 0LL;
  }
  if ( v7 )
    (*(void (__fastcall **)(CSystemMemoryBitmap *))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v30 )
  {
    (*(void (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)v30 + 16LL))(v30);
    v30 = 0LL;
  }
  if ( v4 )
    CMILCOMBase::InternalRelease((CMILCOMBase *)(v4 + 1));
  if ( v5 )
    CDisplaySet::Release(v5, v10, v11);
  if ( v6 )
    (*(void (__fastcall **)(struct CDisplay *))(*(_QWORD *)v6 + 8LL))(v6);
  if ( v3 )
    CMILRefCountBase::Release(v3);
  return v8;
}
