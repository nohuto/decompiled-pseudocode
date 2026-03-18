/*
 * XREFs of ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x180109210
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ @ 0x18008E710 (-ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??0CSystemMemoryBitmap@@QEAA@XZ @ 0x180027364 (--0CSystemMemoryBitmap@@QEAA@XZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DE@@@2PEAVCHwndRenderTarget@@@Z @ 0x180044090 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEAV-$CMatrix@UPageIn.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x180044630 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x180044FA0 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x180045060 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180046380 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x180048704 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18006EE14 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z @ 0x18006F8B8 (-GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x18006F924 (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NAEBU_GUID@@U_LUID@@VDisplayId@@4PEAPEAVIRenderTargetBitmap@@@Z @ 0x180071430 (-CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U-$T.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800AD4F0 (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?GetPixelInfo@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAUPixelFormatInfo@@@Z @ 0x180109174 (-GetPixelInfo@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAUPixelFormatInfo@@@Z.c)
 *     ?HrInit@CSystemMemoryBitmap@@QEAAJIIPEBUPixelFormatInfo@@_N@Z @ 0x180151CC8 (-HrInit@CSystemMemoryBitmap@@QEAAJIIPEBUPixelFormatInfo@@_N@Z.c)
 */

__int64 __fastcall CDebugVisualRenderer::RenderVisual(struct CComposition *a1, struct CVisual *a2)
{
  struct ID2D1PrivateCompositorRenderer ***v3; // r14
  CDisplaySet *v4; // r15
  struct CDisplay *v5; // r13
  CSystemMemoryBitmap *v6; // rsi
  int v7; // edi
  int VisualTree; // eax
  CDisplayManager *v9; // rcx
  int CurrentDisplaySet; // eax
  int PrimaryDisplay; // eax
  struct CVisualTree *v12; // rbx
  __int64 v13; // rax
  __m128 v14; // xmm0
  __int64 v15; // xmm1_8
  float v16; // xmm7_4
  int PixelInfo; // eax
  __int64 v18; // rax
  struct _LUID v19; // rcx
  int v20; // eax
  int v21; // eax
  CSystemMemoryBitmap *v22; // rax
  unsigned int v24; // [rsp+28h] [rbp-E0h]
  int v25; // [rsp+58h] [rbp-B0h]
  __int64 v26; // [rsp+78h] [rbp-90h] BYREF
  __int64 v27; // [rsp+80h] [rbp-88h] BYREF
  struct CDisplay *v28; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v29; // [rsp+90h] [rbp-78h] BYREF
  CDrawingContext *v30; // [rsp+98h] [rbp-70h] BYREF
  unsigned int v31; // [rsp+A0h] [rbp-68h] BYREF
  struct CVisualTree *v32; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v33; // [rsp+B0h] [rbp-58h] BYREF
  int v34; // [rsp+B4h] [rbp-54h] BYREF
  unsigned int v35; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v36; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v37; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v38[3]; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v39; // [rsp+E8h] [rbp-20h] BYREF
  _DWORD v40[2]; // [rsp+F8h] [rbp-10h] BYREF
  unsigned int v41; // [rsp+100h] [rbp-8h]
  unsigned int v42; // [rsp+104h] [rbp-4h]
  CDisplaySet *v43; // [rsp+108h] [rbp+0h] BYREF
  int v44; // [rsp+110h] [rbp+8h]
  __int64 v45; // [rsp+118h] [rbp+10h]
  _DWORD v46[12]; // [rsp+128h] [rbp+20h] BYREF
  float v47; // [rsp+158h] [rbp+50h]
  float v48; // [rsp+15Ch] [rbp+54h]
  int v49; // [rsp+160h] [rbp+58h]
  int v50; // [rsp+164h] [rbp+5Ch]
  struct _D3DCOLORVALUE v51; // [rsp+168h] [rbp+60h] BYREF

  v49 = 0;
  v48 = 0.0;
  v3 = 0LL;
  v47 = 0.0;
  v4 = 0LL;
  v46[11] = 0;
  v5 = 0LL;
  v46[9] = 0;
  v6 = 0LL;
  v46[8] = 0;
  v46[7] = 0;
  v46[6] = 0;
  v46[4] = 0;
  v46[3] = 0;
  v46[2] = 0;
  v46[1] = 0;
  v50 = 1065353216;
  v46[10] = 1065353216;
  v46[5] = 1065353216;
  v46[0] = 1065353216;
  v32 = 0LL;
  v30 = 0LL;
  v43 = 0LL;
  v28 = 0LL;
  v27 = 0LL;
  v26 = 0LL;
  if ( !CDebugVisualRenderer::s_pVisual )
  {
    v7 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x87u);
    goto LABEL_49;
  }
  v36 = 1LL;
  VisualTree = CVisual::GetVisualTree(CDebugVisualRenderer::s_pVisual, &v32);
  v7 = VisualTree;
  if ( VisualTree < 0 )
  {
    v24 = 143;
    goto LABEL_45;
  }
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(v9, &v43);
  v7 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, CurrentDisplaySet, 0x91u);
    v4 = v43;
    goto LABEL_48;
  }
  v4 = v43;
  PrimaryDisplay = CDisplaySet::GetPrimaryDisplay(v43, &v28);
  v7 = PrimaryDisplay;
  if ( PrimaryDisplay < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, PrimaryDisplay, 0x93u);
LABEL_12:
    v5 = v28;
    goto LABEL_48;
  }
  v12 = v32;
  v13 = *((_QWORD *)v32 + 3);
  v14 = *(__m128 *)(v13 + 140);
  v15 = *(_QWORD *)(v13 + 156);
  *(_QWORD *)&v39 = 0LL;
  v45 = v15;
  v16 = _mm_shuffle_ps(v14, v14, 85).m128_f32[0];
  *((float *)&v39 + 2) = _mm_shuffle_ps(v14, v14, 170).m128_f32[0] - v14.m128_f32[0];
  *((float *)&v39 + 3) = _mm_shuffle_ps(v14, v14, 255).m128_f32[0] - v16;
  PixelInfo = CDebugVisualRenderer::GetPixelInfo(a1, (struct PixelFormatInfo *)v38);
  v7 = PixelInfo;
  if ( PixelInfo < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, PixelInfo, 0x9Cu);
    goto LABEL_12;
  }
  v5 = v28;
  v18 = *((_QWORD *)v28 + 17);
  v19 = (struct _LUID)*((_QWORD *)v28 + 29);
  v43 = (CDisplaySet *)"DWM Rendertarget (debugger visualization)";
  v25 = *(_DWORD *)(v18 + 244);
  v44 = 41;
  VisualTree = CD3DDeviceManager::CreateRenderTargetBitmap(
                 (__int64)&qword_1801A3D78,
                 (__int64)&v43,
                 (int)(float)((float)(*((float *)&v39 + 2) - *(float *)&v39) + 0.5),
                 (int)(float)((float)(*((float *)&v39 + 3) - *((float *)&v39 + 1)) + 0.5),
                 v36,
                 0,
                 (__int64)v38,
                 1,
                 (struct _GUID *)((char *)a1 + 252),
                 v19,
                 v25,
                 0,
                 (struct CD3DDeviceLevel1 *)&v27);
  v7 = VisualTree;
  if ( VisualTree < 0 )
  {
    v24 = 169;
    goto LABEL_45;
  }
  v20 = CDrawingContext::Create(a1, &v30);
  v7 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0xABu);
    v3 = (struct ID2D1PrivateCompositorRenderer ***)v30;
    goto LABEL_48;
  }
  v3 = (struct ID2D1PrivateCompositorRenderer ***)v30;
  VisualTree = CDrawingContext::BeginFrame(v30, (struct IRenderTarget *)v27, 0LL, 0, 0LL, 0LL, 0, 0LL);
  v7 = VisualTree;
  if ( VisualTree < 0 )
  {
    v24 = 176;
    goto LABEL_45;
  }
  *(_QWORD *)&v51.r = 0LL;
  *(_QWORD *)&v51.b = 0LL;
  v21 = CDrawingContext::Clear(v3, &v51);
  v7 = v21;
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0xB8u);
    goto LABEL_48;
  }
  v47 = COERCE_FLOAT(v14.m128_i32[0] ^ _xmm) + 0.0;
  v48 = COERCE_FLOAT(LODWORD(v16) ^ _xmm) + 0.0;
  VisualTree = CDrawingContext::PushTransformInternal((CDrawingContext *)v3, 0LL, (const struct CMILMatrix *)v46, 0, 1);
  v7 = VisualTree;
  if ( VisualTree < 0 )
  {
    v24 = 188;
    goto LABEL_45;
  }
  VisualTree = CDrawingContext::DrawVisualTree((CDrawingContext *)v3, (__int64)v12, &v39, 0LL, 0, 1, 1, 0, 1, 0, 0);
  v7 = VisualTree;
  if ( VisualTree < 0 )
  {
    v24 = 197;
    goto LABEL_45;
  }
  VisualTree = CDrawingContext::EndFrame((CDrawingContext *)v3);
  v7 = VisualTree;
  if ( VisualTree < 0 )
  {
    v24 = 199;
    goto LABEL_45;
  }
  v40[0] = 0;
  v40[1] = 0;
  v41 = (int)(float)(*((float *)&v39 + 2) - *(float *)&v39);
  v42 = (int)(float)(*((float *)&v39 + 3) - *((float *)&v39 + 1));
  v22 = (CSystemMemoryBitmap *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                          + 8LL))(
                                 WPF::g_pProcessHeap,
                                 280LL);
  if ( v22 )
    v6 = CSystemMemoryBitmap::CSystemMemoryBitmap(v22);
  if ( v6 )
  {
    (*(void (__fastcall **)(CSystemMemoryBitmap *))(*(_QWORD *)v6 + 8LL))(v6);
    v38[0] = 0x100000057LL;
    VisualTree = CSystemMemoryBitmap::HrInit(v6, v41, v42, (const struct PixelFormatInfo *)v38, 1);
    v7 = VisualTree;
    if ( VisualTree >= 0 )
    {
      VisualTree = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, _QWORD, _DWORD))(*(_QWORD *)v27 + 96LL))(
                     v27,
                     &v39,
                     (__int64)v6 + 24,
                     0LL,
                     0);
      v7 = VisualTree;
      if ( VisualTree >= 0 )
      {
        VisualTree = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, __int64 *))(*((_QWORD *)v6 + 3) + 24LL))(
                       (__int64)v6 + 24,
                       v40,
                       1LL,
                       &v26);
        v7 = VisualTree;
        if ( VisualTree >= 0 )
        {
          VisualTree = (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned int *))(*(_QWORD *)v26 + 56LL))(
                         v26,
                         &v29,
                         &v35);
          v7 = VisualTree;
          if ( VisualTree >= 0 )
          {
            VisualTree = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v26 + 64LL))(v26, &v33);
            v7 = VisualTree;
            if ( VisualTree >= 0 )
            {
              VisualTree = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v26 + 24LL))(v26, &v34);
              v7 = VisualTree;
              if ( VisualTree >= 0 )
              {
                VisualTree = (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned __int64 *))(*(_QWORD *)v26 + 72LL))(
                               v26,
                               &v31,
                               &v37);
                v7 = VisualTree;
                if ( VisualTree >= 0 )
                {
                  CDebugVisualRenderer::s_uResultWidth = v29;
                  CDebugVisualRenderer::s_uResultHeight = v35;
                  CDebugVisualRenderer::s_uResultStride = v33;
                  CDebugVisualRenderer::s_uResultPixelFormat = v34;
                  CDebugVisualRenderer::s_uResultBufferSize = v31;
                  CDebugVisualRenderer::s_pResultData = v37;
                  goto LABEL_48;
                }
                v24 = 244;
              }
              else
              {
                v24 = 242;
              }
            }
            else
            {
              v24 = 240;
            }
          }
          else
          {
            v24 = 238;
          }
        }
        else
        {
          v24 = 229;
        }
      }
      else
      {
        v24 = 224;
      }
    }
    else
    {
      v24 = 222;
    }
LABEL_45:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, VisualTree, v24);
LABEL_48:
    if ( v7 >= 0 )
      goto LABEL_50;
    goto LABEL_49;
  }
  v7 = -2147024882;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xD3u);
LABEL_49:
  CDebugVisualRenderer::s_uResultWidth = 0LL;
  CDebugVisualRenderer::s_uResultHeight = 0LL;
  CDebugVisualRenderer::s_uResultStride = 0LL;
  CDebugVisualRenderer::s_uResultPixelFormat = 0LL;
  CDebugVisualRenderer::s_uResultBufferSize = 0LL;
  CDebugVisualRenderer::s_pResultData = 0LL;
LABEL_50:
  if ( v26 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    v26 = 0LL;
  }
  if ( v6 )
    (*(void (__fastcall **)(CSystemMemoryBitmap *))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v27 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    v27 = 0LL;
  }
  if ( v3 )
    CMILCOMBase::InternalRelease((CMILCOMBase *)(v3 + 1));
  if ( v4 )
    CDisplaySet::Release(v4);
  if ( v5 )
    CMILRefCountBase::Release(v5);
  if ( v32 )
    CMILRefCountBase::Release(v32);
  return (unsigned int)v7;
}
