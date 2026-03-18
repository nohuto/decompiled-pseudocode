/*
 * XREFs of ?DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAVCGeometry2D@@PEAVIBitmapSource@@@Z @ 0x1800B6E30
 * Callers:
 *     ?DrawMesh2D@CHwDisplayRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAVCGeometry2D@@PEAVIBitmapSource@@@Z @ 0x180149DA0 (-DrawMesh2D@CHwDisplayRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextStat.c)
 *     ?DrawMesh2D@CHwTextureRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAVCGeometry2D@@PEAVIBitmapSource@@@Z @ 0x18014B1B0 (-DrawMesh2D@CHwTextureRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextStat.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?ExitUseContext@CD3DResourceManager@@QEAAXI@Z @ 0x180027F24 (-ExitUseContext@CD3DResourceManager@@QEAAXI@Z.c)
 *     ?DeriveHWBrush@CHwSurfaceRenderTargetSharedData@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@PEAPEAVCHwBrush@@@Z @ 0x18002BBB8 (-DeriveHWBrush@CHwSurfaceRenderTargetSharedData@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@PEAPEA.c)
 *     ?GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z @ 0x18002BF80 (-GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z.c)
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180047C60 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180074880 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1CMILBrushBitmapLocalSetterWrapper@@QEAA@XZ @ 0x1800ACCBC (--1CMILBrushBitmapLocalSetterWrapper@@QEAA@XZ.c)
 *     ??1?$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ @ 0x1800AF990 (--1-$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?GetMeshData@CGeometry2D@@QEAAJQEAPEBUMilVertexXYZDUV2@@PEAIQEAPEBI1@Z @ 0x1800F8D80 (-GetMeshData@CGeometry2D@@QEAAJQEAPEBUMilVertexXYZDUV2@@PEAIQEAPEBI1@Z.c)
 *     ?GetScratchDrawBitmapBrushNoAddRef@CHwSurfaceRenderTargetSharedData@@QEAAJPEAPEAVCMILBrushBitmap@@@Z @ 0x1800FBCB0 (-GetScratchDrawBitmapBrushNoAddRef@CHwSurfaceRenderTargetSharedData@@QEAAJPEAPEAVCMILBrushBitmap.c)
 *     ??0CMILBrushBitmapLocalSetterWrapper@@QEAA@PEAVCMILBrushBitmap@@PEAVIBitmapSource@@W4Enum@MilBitmapWrapMode@@PEBVCBaseMatrix@@W4XSpaceDefinition@@@Z @ 0x1800FC110 (--0CMILBrushBitmapLocalSetterWrapper@@QEAA@PEAVCMILBrushBitmap@@PEAVIBitmapSource@@W4Enum@MilBit.c)
 *     Template_ffff @ 0x18010EC0C (Template_ffff.c)
 */

__int64 __fastcall CHwSurfaceRenderTarget::DrawMesh2D(
        CHwSurfaceRenderTarget *this,
        struct ID2DContext *a2,
        const struct ID2DContextOwner *a3,
        struct CContextState *a4,
        struct CGeometry2D *a5,
        struct IBitmapSource *a6)
{
  __int64 v6; // rbx
  int v9; // edi
  __int64 v10; // r12
  __int64 v11; // rax
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  int ScratchDrawBitmapBrushNoAddRef; // eax
  int v16; // eax
  int v17; // eax
  struct CMILBrushBitmap *v18; // rdi
  __int64 v19; // rax
  void (__fastcall *v20)(struct CGeometry2D *, __int128 *); // rbx
  struct CMILBrush *v21; // rdx
  int D2DBrush; // eax
  __int64 v23; // rax
  CD2DContext **v24; // rdi
  __int64 (__fastcall *v25)(CHwSurfaceRenderTarget *); // rbx
  unsigned int v26; // eax
  unsigned int v27; // r14d
  __int64 v28; // r15
  __int64 v29; // rdi
  __int64 v30; // rax
  unsigned int *v31; // rdx
  _OWORD *v32; // rcx
  struct MilVertexXYZDUV2 *v33; // r8
  __int64 v34; // rax
  struct ID2DContext *v35; // r15
  __int64 v36; // rsi
  __m128 v37; // xmm6
  __int64 (__fastcall *v38)(__int64); // rbx
  int v39; // edi
  float v40; // xmm0_4
  float v41; // xmm9_4
  float v42; // xmm7_4
  float v43; // xmm8_4
  float v44; // xmm6_4
  float v45; // xmm10_4
  float v46; // xmm11_4
  int v47; // ebx
  unsigned int v49; // [rsp+28h] [rbp-E0h]
  __int64 v50; // [rsp+48h] [rbp-C0h] BYREF
  struct CMILBrushBitmap *v51; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v52; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v53[2]; // [rsp+60h] [rbp-A8h] BYREF
  struct CHwBrush *v54; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v55; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v56[2]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v57; // [rsp+80h] [rbp-88h] BYREF
  unsigned int *v58; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v59[24]; // [rsp+90h] [rbp-78h] BYREF
  CD2DContext *v60; // [rsp+A8h] [rbp-60h] BYREF
  CD3DResourceManager *v61; // [rsp+B0h] [rbp-58h]
  __int64 v62; // [rsp+B8h] [rbp-50h] BYREF
  struct ID2DContext *v63; // [rsp+C0h] [rbp-48h]
  const struct ID2DContextOwner *v64; // [rsp+C8h] [rbp-40h]
  struct CHwBrush *v65; // [rsp+D0h] [rbp-38h] BYREF
  float v66; // [rsp+D8h] [rbp-30h]
  float v67; // [rsp+DCh] [rbp-2Ch]
  unsigned __int64 v68; // [rsp+E0h] [rbp-28h]
  struct MilVertexXYZDUV2 *v69[2]; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v70; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD v71[2]; // [rsp+108h] [rbp+0h] BYREF
  __int128 v72; // [rsp+118h] [rbp+10h]
  __int64 v73; // [rsp+128h] [rbp+20h]
  int v74; // [rsp+130h] [rbp+28h]
  int v75; // [rsp+134h] [rbp+2Ch]
  __int128 v76; // [rsp+138h] [rbp+30h]
  __int64 v77; // [rsp+148h] [rbp+40h]
  _OWORD v78[4]; // [rsp+158h] [rbp+50h] BYREF

  v6 = *((_QWORD *)this + 20);
  v54 = 0LL;
  v9 = 0;
  v55 = 0LL;
  v10 = 0LL;
  v57 = 0LL;
  v52 = 0LL;
  ++*(_DWORD *)(v6 + 504);
  v64 = a3;
  v63 = a2;
  LODWORD(v50) = 0;
  v51 = 0LL;
  v60 = 0LL;
  v62 = v6;
  *(_DWORD *)(v6 + 508) = GetCurrentThreadId();
  v11 = *((_QWORD *)this + 20);
  v61 = (CD3DResourceManager *)(v11 + 848);
  ++*(_DWORD *)(v11 + 856);
  *((_BYTE *)a4 + 64) = 1;
  if ( (*(unsigned __int8 (__fastcall **)(CHwSurfaceRenderTarget *))(*(_QWORD *)this + 192LL))(this) )
  {
    *(_DWORD *)(*((_QWORD *)this + 20) + 488LL) = 0;
    if ( EventEnabled(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_ETWGUID_DRAWEVENT) )
    {
      (*(void (__fastcall **)(struct CGeometry2D *, struct MilVertexXYZDUV2 **))(*(_QWORD *)a5 + 120LL))(a5, v69);
      CBaseMatrix::Transform2DBounds(
        (struct CContextState *)((char *)a4 + 204),
        (const struct MilRectF *)v69,
        (struct MilRectF *)&v65);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_ffff(v12, (unsigned int)&EVTDESC_ETWGUID_DRAWEVENT, v13, v14, SLOBYTE(v66), SLOBYTE(v67));
    }
    ScratchDrawBitmapBrushNoAddRef = CHwSurfaceRenderTargetSharedData::GetScratchDrawBitmapBrushNoAddRef(
                                       (CHwSurfaceRenderTargetSharedData *)(*((_QWORD *)this + 20) + 408LL),
                                       &v51);
    LODWORD(v50) = ScratchDrawBitmapBrushNoAddRef;
    v9 = ScratchDrawBitmapBrushNoAddRef;
    if ( ScratchDrawBitmapBrushNoAddRef < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, ScratchDrawBitmapBrushNoAddRef, 0x262u);
      goto LABEL_42;
    }
    memset(v59, 0, sizeof(v59));
    v16 = (*(__int64 (__fastcall **)(struct IBitmapSource *, _BYTE *))(*(_QWORD *)a6 + 24LL))(a6, v59);
    LODWORD(v50) = v16;
    v9 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x26Au);
      goto LABEL_42;
    }
    *(_DWORD *)&v59[4] = (*(__int64 (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)a6 + 32LL))(a6);
    v17 = (*(__int64 (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)a6 + 40LL))(a6);
    v18 = v51;
    *(_DWORD *)&v59[8] = v17;
    CMILBrushBitmapLocalSetterWrapper::CMILBrushBitmapLocalSetterWrapper(&v51, v51, a6);
    v77 = 0LL;
    v71[1] = &IdentityMatrix;
    v74 = *((_DWORD *)this + 28);
    v19 = *(_QWORD *)a5;
    v71[0] = a4;
    v72 = *(_OWORD *)v59;
    v73 = *(_QWORD *)&v59[16];
    v20 = *(void (__fastcall **)(struct CGeometry2D *, __int128 *))(v19 + 128);
    v75 = 1;
    v20(a5, &v70);
    v76 = v70;
    if ( v18 )
      v21 = (struct CMILBrushBitmap *)((char *)v18 + 24);
    else
      v21 = 0LL;
    D2DBrush = CHwSurfaceRenderTargetSharedData::DeriveHWBrush(
                 (CHwSurfaceRenderTargetSharedData *)(*((_QWORD *)this + 20) + 408LL),
                 v21,
                 (const struct CHwBrushContext *)v71,
                 &v54);
    LODWORD(v50) = D2DBrush;
    v9 = D2DBrush;
    if ( D2DBrush >= 0 )
    {
      v23 = *(_QWORD *)this;
      v24 = (CD2DContext **)v54;
      v69[0] = 0LL;
      v56[0] = 0;
      v25 = *(__int64 (__fastcall **)(CHwSurfaceRenderTarget *))(v23 + 40);
      v58 = 0LL;
      v53[0] = 0;
      v65 = v54;
      v26 = v25(this);
      D2DBrush = CHwBitmapBrush::GetD2DBrush(v24, 1.0, v26, &v60);
      LODWORD(v50) = D2DBrush;
      v9 = D2DBrush;
      if ( D2DBrush >= 0 )
      {
        D2DBrush = (**(__int64 (__fastcall ***)(CD2DContext *, GUID *, __int64 *))v60)(
                     v60,
                     &GUID_2cd906aa_12e2_11dc_9fed_001143a055f9,
                     &v55);
        LODWORD(v50) = D2DBrush;
        v9 = D2DBrush;
        if ( D2DBrush >= 0 )
        {
          (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v55 + 120LL))(v55, &v57);
          D2DBrush = CGeometry2D::GetMeshData(a5, v69, v56, (const unsigned int **const)&v58, v53);
          LODWORD(v50) = D2DBrush;
          v9 = D2DBrush;
          if ( D2DBrush >= 0 )
          {
            v27 = v53[0];
            v28 = v53[0];
            v29 = 32LL * v53[0];
            if ( !is_mul_ok(v53[0], 0x20uLL) )
              v29 = -1LL;
            v30 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                    WPF::g_pProcessHeap,
                    v29);
            v10 = v30;
            if ( !v30 )
            {
              v9 = -2147024882;
              LODWORD(v50) = -2147024882;
              MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x2ACu);
LABEL_41:
              CMILBrushBitmapLocalSetterWrapper::~CMILBrushBitmapLocalSetterWrapper((CMILBrushBitmapLocalSetterWrapper *)&v51);
              goto LABEL_42;
            }
            if ( v27 )
            {
              v31 = v58;
              v32 = (_OWORD *)v30;
              v33 = v69[0];
              do
              {
                v34 = *v31++;
                v34 *= 32LL;
                *v32 = *(_OWORD *)((char *)v33 + v34);
                v32 += 2;
                *(v32 - 1) = *(_OWORD *)((char *)v33 + v34 + 16);
                --v28;
              }
              while ( v28 );
            }
            v35 = v63;
            D2DBrush = (*(__int64 (__fastcall **)(struct ID2DContext *, __int64, __int64 *))(*(_QWORD *)v63 + 232LL))(
                         v63,
                         6LL,
                         &v52);
            LODWORD(v50) = D2DBrush;
            v9 = D2DBrush;
            if ( D2DBrush >= 0 )
            {
              v78[0] = _xmm;
              v78[1] = _xmm;
              v78[2] = _xmm;
              v36 = *((_QWORD *)v65 + 2);
              v78[3] = _xmm;
              v37 = *(__m128 *)(v36 + 44);
              v38 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v36 + 56LL);
              v68 = *(_QWORD *)(v36 + 60);
              v39 = *(_DWORD *)(v38(v36) + 140);
              v40 = (float)*(int *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v36 + 56LL))(v36) + 136);
              v41 = v37.m128_f32[0] * v40;
              v42 = _mm_shuffle_ps(v37, v37, 85).m128_f32[0] * (float)v39;
              v43 = _mm_shuffle_ps(v37, v37, 170).m128_f32[0] * v40;
              v44 = _mm_shuffle_ps(v37, v37, 255).m128_f32[0] * (float)v39;
              v45 = *(float *)&v68 * v40;
              v46 = *((float *)&v68 + 1) * (float)v39;
              D2DBrush = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _OWORD *, int))(*(_QWORD *)v52 + 72LL))(
                           v52,
                           0LL,
                           0LL,
                           v78,
                           64);
              LODWORD(v50) = D2DBrush;
              v9 = D2DBrush;
              if ( D2DBrush >= 0 )
              {
                v65 = (struct CHwBrush *)__PAIR64__(LODWORD(v42), LODWORD(v41));
                v66 = v43;
                v67 = v44;
                v68 = __PAIR64__(LODWORD(v46), LODWORD(v45));
                D2DBrush = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, struct CHwBrush **, int))(*(_QWORD *)v52 + 72LL))(
                             v52,
                             1LL,
                             0LL,
                             &v65,
                             24);
                LODWORD(v50) = D2DBrush;
                v9 = D2DBrush;
                if ( D2DBrush >= 0 )
                {
                  (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v52 + 112LL))(
                    v52,
                    0LL,
                    v57,
                    1LL);
                  D2DBrush = (*(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, __int64, unsigned int))(*(_QWORD *)v52 + 64LL))(
                               v52,
                               L"vertices",
                               0LL,
                               v10,
                               32 * v27);
                  LODWORD(v50) = D2DBrush;
                  v9 = D2DBrush;
                  if ( D2DBrush >= 0 )
                  {
                    v47 = 0;
                    if ( *((_DWORD *)a4 + 50) == 2 )
                      v47 = 12;
                    D2DBrush = (*(__int64 (__fastcall **)(struct ID2DContext *, const struct ID2DContextOwner *, __int64, _QWORD, _QWORD, int, int))(*(_QWORD *)v35 + 96LL))(
                                 v35,
                                 v64,
                                 v52,
                                 0LL,
                                 0LL,
                                 1,
                                 v47);
                    LODWORD(v50) = D2DBrush;
                    v9 = D2DBrush;
                    if ( D2DBrush >= 0 )
                      goto LABEL_41;
                    v49 = 740;
                  }
                  else
                  {
                    v49 = 731;
                  }
                }
                else
                {
                  v49 = 719;
                }
              }
              else
              {
                v49 = 714;
              }
            }
            else
            {
              v49 = 694;
            }
          }
          else
          {
            v49 = 681;
          }
        }
        else
        {
          v49 = 670;
        }
      }
      else
      {
        v49 = 665;
      }
    }
    else
    {
      v49 = 650;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DBrush, v49);
    goto LABEL_41;
  }
LABEL_42:
  *((_BYTE *)a4 + 64) = 0;
  TranslateDXGIorD3DErrorInContext(v9, 0, &v50);
  if ( v54 )
  {
    (*(void (__fastcall **)(struct CHwBrush *))(*(_QWORD *)v54 + 24LL))(v54);
    if ( v54 )
      (*(void (__fastcall **)(struct CHwBrush *))(*(_QWORD *)v54 + 8LL))(v54);
  }
  if ( v55 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
  if ( v57 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
  if ( v52 )
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v52 + 112LL))(v52, 0LL, 0LL, 1LL);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    v10);
  CD3DResourceManager::ExitUseContext(v61);
  CGuard<CD3DDeviceLevel1>::~CGuard<CD3DDeviceLevel1>(&v62);
  return (unsigned int)v50;
}
