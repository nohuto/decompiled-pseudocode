/*
 * XREFs of ?DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAVCGeometry2D@@PEAVIBitmapSource@@@Z @ 0x1800BAC7C
 * Callers:
 *     ?DrawMesh2D@CHwDisplayRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAVCGeometry2D@@PEAVIBitmapSource@@@Z @ 0x18017A470 (-DrawMesh2D@CHwDisplayRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextStat.c)
 *     ?DrawMesh2D@CHwTextureRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAVCGeometry2D@@PEAVIBitmapSource@@@Z @ 0x18017B820 (-DrawMesh2D@CHwTextureRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextStat.c)
 * Callees:
 *     ??1CMILBrushBitmapLocalSetterWrapper@@QEAA@XZ @ 0x1800226EC (--1CMILBrushBitmapLocalSetterWrapper@@QEAA@XZ.c)
 *     ?DeriveHWBrush@CHwSurfaceRenderTargetSharedData@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@PEAPEAVCHwBrush@@@Z @ 0x18002F720 (-DeriveHWBrush@CHwSurfaceRenderTargetSharedData@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@PEAPEA.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059E20 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18007BBC0 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?ExitUseContext@CD3DResourceManager@@QEAAXI@Z @ 0x18009F1A8 (-ExitUseContext@CD3DResourceManager@@QEAAXI@Z.c)
 *     ?GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z @ 0x1800AB1B0 (-GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetMeshData@CGeometry2D@@QEAAJQEAPEBUMilVertexXYZDUV2@@PEAIQEAPEBI1@Z @ 0x18010DE20 (-GetMeshData@CGeometry2D@@QEAAJQEAPEBUMilVertexXYZDUV2@@PEAIQEAPEBI1@Z.c)
 *     ?GetScratchDrawBitmapBrushNoAddRef@CHwSurfaceRenderTargetSharedData@@QEAAJPEAPEAVCMILBrushBitmap@@@Z @ 0x180110810 (-GetScratchDrawBitmapBrushNoAddRef@CHwSurfaceRenderTargetSharedData@@QEAAJPEAPEAVCMILBrushBitmap.c)
 *     ??0CMILBrushBitmapLocalSetterWrapper@@QEAA@PEAVCMILBrushBitmap@@PEAVIBitmapSource@@W4Enum@MilBitmapWrapMode@@PEBVCMILMatrix@@W4XSpaceDefinition@@@Z @ 0x180110E94 (--0CMILBrushBitmapLocalSetterWrapper@@QEAA@PEAVCMILBrushBitmap@@PEAVIBitmapSource@@W4Enum@MilBit.c)
 *     Template_ffff @ 0x180125254 (Template_ffff.c)
 */

__int64 __fastcall CHwSurfaceRenderTarget::DrawMesh2D(
        CHwSurfaceRenderTarget *this,
        struct ID2DContext *a2,
        const struct ID2DContextOwner *a3,
        struct CContextState *a4,
        struct CGeometry2D *a5,
        struct IBitmapSource *a6)
{
  int v6; // ebx
  __int64 v7; // r12
  __int64 v10; // rax
  int v11; // eax
  CD3DResourceManager *v12; // rsi
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  int ScratchDrawBitmapBrushNoAddRef; // eax
  int v17; // eax
  int v18; // eax
  struct CMILBrushBitmap *v19; // rbx
  __int64 v20; // rax
  void (__fastcall *v21)(struct CGeometry2D *, __int128 *); // rax
  struct CMILBrush *v22; // rdx
  int D2DBrush; // eax
  __int64 v24; // rax
  struct CHwBrush *v25; // rbx
  __int64 (__fastcall *v26)(CHwSurfaceRenderTarget *); // rax
  unsigned int v27; // eax
  unsigned int v28; // r14d
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned int *v32; // rdx
  _OWORD *v33; // rcx
  struct MilVertexXYZDUV2 *v34; // r8
  __int64 v35; // rax
  struct ID2DContext *v36; // r15
  __int64 v37; // rdi
  __m128 v38; // xmm6
  __int64 (__fastcall *v39)(__int64); // rax
  float v40; // xmm3_4
  float v41; // xmm2_4
  __int64 (__fastcall *v42)(__int64, _QWORD, _QWORD, _OWORD *, int); // rax
  int v43; // eax
  int v44; // r8d
  int v45; // r9d
  unsigned int v47; // [rsp+28h] [rbp-E0h]
  __int64 v48; // [rsp+48h] [rbp-C0h] BYREF
  struct CMILBrushBitmap *v49; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v50; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v51[2]; // [rsp+60h] [rbp-A8h] BYREF
  struct CHwBrush *v52; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v53[2]; // [rsp+70h] [rbp-98h] BYREF
  _DWORD *v54; // [rsp+78h] [rbp-90h] BYREF
  __int64 v55; // [rsp+80h] [rbp-88h] BYREF
  __int64 v56; // [rsp+88h] [rbp-80h] BYREF
  __int64 (__fastcall ***v57)(_QWORD, GUID *, __int64 *); // [rsp+90h] [rbp-78h] BYREF
  unsigned int *v58; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v59[24]; // [rsp+A0h] [rbp-68h] BYREF
  struct ID2DContext *v60; // [rsp+B8h] [rbp-50h]
  const struct ID2DContextOwner *v61; // [rsp+C0h] [rbp-48h]
  __int128 v62; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v63; // [rsp+D8h] [rbp-30h]
  struct MilVertexXYZDUV2 *v64[2]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v65; // [rsp+F0h] [rbp-18h]
  __int128 v66; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD v67[2]; // [rsp+108h] [rbp+0h] BYREF
  __int128 v68; // [rsp+118h] [rbp+10h]
  __int64 v69; // [rsp+128h] [rbp+20h]
  int v70; // [rsp+130h] [rbp+28h]
  int v71; // [rsp+134h] [rbp+2Ch]
  __int128 v72; // [rsp+138h] [rbp+30h]
  __int64 v73; // [rsp+148h] [rbp+40h]
  _OWORD v74[4]; // [rsp+158h] [rbp+50h] BYREF

  v6 = 0;
  LODWORD(v48) = 0;
  v7 = 0LL;
  v52 = 0LL;
  v49 = 0LL;
  v55 = 0LL;
  v57 = 0LL;
  v56 = 0LL;
  v50 = 0LL;
  *((_BYTE *)a4 + 68) = 1;
  v10 = *(_QWORD *)this;
  v61 = a3;
  v60 = a2;
  if ( (*(unsigned __int8 (__fastcall **)(CHwSurfaceRenderTarget *))(v10 + 208))(this) )
  {
    v11 = (*(__int64 (__fastcall **)(CHwSurfaceRenderTarget *, _DWORD **))(*(_QWORD *)this + 216LL))(this, &v54);
    LODWORD(v48) = v11;
    v6 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x250u);
      goto LABEL_46;
    }
    v12 = (CD3DResourceManager *)(v54 + 220);
    ++v54[222];
    if ( EventEnabled(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_ETWGUID_DRAWEVENT) )
    {
      (*(void (__fastcall **)(struct CGeometry2D *, struct MilVertexXYZDUV2 **))(*(_QWORD *)a5 + 128LL))(a5, v64);
      CMILMatrix::Transform2DBoundsHelper<0>((__int64)a4 + 212, (__int64)v64, (float *)&v62);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_ffff(v13, (unsigned int)&EVTDESC_ETWGUID_DRAWEVENT, v14, v15, SBYTE8(v62), SBYTE12(v62));
    }
    ScratchDrawBitmapBrushNoAddRef = CHwSurfaceRenderTargetSharedData::GetScratchDrawBitmapBrushNoAddRef(
                                       (CHwSurfaceRenderTargetSharedData *)(v54 + 108),
                                       &v49);
    LODWORD(v48) = ScratchDrawBitmapBrushNoAddRef;
    v6 = ScratchDrawBitmapBrushNoAddRef;
    if ( ScratchDrawBitmapBrushNoAddRef < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, ScratchDrawBitmapBrushNoAddRef, 0x25Du);
      goto LABEL_44;
    }
    memset(v59, 0, sizeof(v59));
    v17 = (*(__int64 (__fastcall **)(struct IBitmapSource *, _BYTE *))(*(_QWORD *)a6 + 24LL))(a6, v59);
    LODWORD(v48) = v17;
    v6 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x265u);
      goto LABEL_44;
    }
    *(_DWORD *)&v59[4] = (*(__int64 (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)a6 + 32LL))(a6);
    v18 = (*(__int64 (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)a6 + 40LL))(a6);
    v19 = v49;
    *(_DWORD *)&v59[8] = v18;
    CMILBrushBitmapLocalSetterWrapper::CMILBrushBitmapLocalSetterWrapper(&v49, v49, a6);
    v73 = 0LL;
    v67[1] = &CMILMatrix::Identity;
    v70 = *((_DWORD *)this + 29);
    v20 = *(_QWORD *)a5;
    v67[0] = a4;
    v68 = *(_OWORD *)v59;
    v69 = *(_QWORD *)&v59[16];
    v21 = *(void (__fastcall **)(struct CGeometry2D *, __int128 *))(v20 + 136);
    v71 = 1;
    v21(a5, &v66);
    v72 = v66;
    if ( v19 )
      v22 = (struct CMILBrushBitmap *)((char *)v19 + 24);
    else
      v22 = 0LL;
    D2DBrush = CHwSurfaceRenderTargetSharedData::DeriveHWBrush(
                 (CHwSurfaceRenderTargetSharedData *)(v54 + 108),
                 v22,
                 (const struct CHwBrushContext *)v67,
                 &v52);
    LODWORD(v48) = D2DBrush;
    v6 = D2DBrush;
    if ( D2DBrush < 0 )
    {
      v47 = 644;
    }
    else
    {
      v24 = *(_QWORD *)this;
      v25 = v52;
      v64[0] = 0LL;
      v53[0] = 0;
      v26 = *(__int64 (__fastcall **)(CHwSurfaceRenderTarget *))(v24 + 40);
      v58 = 0LL;
      v51[0] = 0;
      *(_QWORD *)&v62 = v52;
      v27 = v26(this);
      D2DBrush = CHwBitmapBrush::GetD2DBrush((__int64)v25, 1.0, v27, &v57);
      LODWORD(v48) = D2DBrush;
      v6 = D2DBrush;
      if ( D2DBrush < 0 )
      {
        v47 = 657;
      }
      else
      {
        D2DBrush = (**v57)(v57, &GUID_2cd906aa_12e2_11dc_9fed_001143a055f9, &v55);
        LODWORD(v48) = D2DBrush;
        v6 = D2DBrush;
        if ( D2DBrush < 0 )
        {
          v47 = 660;
        }
        else
        {
          (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v55 + 120LL))(v55, &v56);
          D2DBrush = CGeometry2D::GetMeshData(a5, v64, v53, (const unsigned int **const)&v58, v51);
          LODWORD(v48) = D2DBrush;
          v6 = D2DBrush;
          if ( D2DBrush < 0 )
          {
            v47 = 667;
          }
          else
          {
            v28 = v51[0];
            v29 = v51[0];
            v30 = 32LL * v51[0];
            if ( !is_mul_ok(v51[0], 0x20uLL) )
              v30 = -1LL;
            v31 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                    WPF::g_pProcessHeap,
                    v30);
            v7 = v31;
            if ( !v31 )
            {
              v6 = -2147024882;
              LODWORD(v48) = -2147024882;
              MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x29Eu);
LABEL_41:
              CMILBrushBitmapLocalSetterWrapper::~CMILBrushBitmapLocalSetterWrapper((CMILBrushBitmapLocalSetterWrapper *)&v49);
LABEL_44:
              CD3DResourceManager::ExitUseContext(v12);
              goto LABEL_46;
            }
            if ( v28 )
            {
              v32 = v58;
              v33 = (_OWORD *)v31;
              v34 = v64[0];
              do
              {
                v35 = *v32++;
                v35 *= 32LL;
                *v33 = *(_OWORD *)((char *)v34 + v35);
                v33 += 2;
                *(v33 - 1) = *(_OWORD *)((char *)v34 + v35 + 16);
                --v29;
              }
              while ( v29 );
            }
            v36 = v60;
            D2DBrush = (*(__int64 (__fastcall **)(struct ID2DContext *, __int64, __int64 *))(*(_QWORD *)v60 + 240LL))(
                         v60,
                         6LL,
                         &v50);
            LODWORD(v48) = D2DBrush;
            v6 = D2DBrush;
            if ( D2DBrush < 0 )
            {
              v47 = 678;
            }
            else
            {
              v74[0] = _xmm;
              v74[1] = _xmm;
              v74[2] = _xmm;
              v37 = *(_QWORD *)(v62 + 16);
              v74[3] = _xmm;
              v38 = *(__m128 *)(v37 + 44);
              v39 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v37 + 56LL);
              v65 = *(_QWORD *)(v37 + 60);
              v40 = (float)*(int *)(v39(v37) + 140);
              v41 = (float)*(int *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v37 + 56LL))(v37) + 136);
              v42 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _OWORD *, int))(*(_QWORD *)v50 + 72LL);
              *((float *)&v62 + 1) = _mm_shuffle_ps(v38, v38, 85).m128_f32[0] * v40;
              *(float *)&v62 = v38.m128_f32[0] * v41;
              *((float *)&v62 + 2) = _mm_shuffle_ps(v38, v38, 170).m128_f32[0] * v41;
              *(float *)&v63 = *(float *)&v65 * v41;
              *((float *)&v63 + 1) = *((float *)&v65 + 1) * v40;
              *((float *)&v62 + 3) = _mm_shuffle_ps(v38, v38, 255).m128_f32[0] * v40;
              v43 = v42(v50, 0LL, 0LL, v74, 64);
              LODWORD(v48) = v43;
              v6 = v43;
              if ( v43 < 0 )
              {
                v47 = 694;
                goto LABEL_33;
              }
              *(_OWORD *)v64 = v62;
              v65 = v63;
              D2DBrush = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, struct MilVertexXYZDUV2 **, int))(*(_QWORD *)v50 + 72LL))(
                           v50,
                           1LL,
                           0LL,
                           v64,
                           24);
              LODWORD(v48) = D2DBrush;
              v6 = D2DBrush;
              if ( D2DBrush >= 0 )
              {
                (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v50 + 112LL))(v50, 0LL, v56, 1LL);
                v43 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, __int64, unsigned int))(*(_QWORD *)v50 + 64LL))(
                        v50,
                        L"vertices",
                        0LL,
                        v7,
                        32 * v28);
                v44 = 0;
                LODWORD(v48) = v43;
                v6 = v43;
                if ( v43 >= 0 )
                {
                  if ( *((_DWORD *)a4 + 52) == 2 )
                    v44 = 12;
                  D2DBrush = (*(__int64 (__fastcall **)(struct ID2DContext *, const struct ID2DContextOwner *, __int64, _QWORD, _QWORD, int, int))(*(_QWORD *)v36 + 96LL))(
                               v36,
                               v61,
                               v50,
                               0LL,
                               0LL,
                               1,
                               v44);
                  LODWORD(v48) = D2DBrush;
                  v6 = D2DBrush;
                  if ( D2DBrush >= 0 )
                    goto LABEL_41;
                  v47 = 711;
                  goto LABEL_39;
                }
                v47 = 704;
LABEL_33:
                v45 = v43;
LABEL_40:
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v45, v47);
                goto LABEL_41;
              }
              v47 = 697;
            }
          }
        }
      }
    }
LABEL_39:
    v45 = D2DBrush;
    goto LABEL_40;
  }
LABEL_46:
  *((_BYTE *)a4 + 68) = 0;
  TranslateDXGIorD3DErrorInContext(v6, 0, (int *)&v48);
  if ( v52 )
  {
    (*(void (__fastcall **)(struct CHwBrush *))(*(_QWORD *)v52 + 24LL))(v52);
    if ( v52 )
      (*(void (__fastcall **)(struct CHwBrush *))(*(_QWORD *)v52 + 8LL))(v52);
  }
  if ( v55 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
  if ( v56 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
  if ( v50 )
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v50 + 112LL))(v50, 0LL, 0LL, 1LL);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    v7);
  return (unsigned int)v48;
}
