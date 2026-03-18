/*
 * XREFs of ?DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAVCGeometry2D@@PEAVIBitmapSource@@@Z @ 0x18013A318
 * Callers:
 *     ?DrawMesh2D@CHwDisplayRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAVCGeometry2D@@PEAVIBitmapSource@@@Z @ 0x180139130 (-DrawMesh2D@CHwDisplayRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextStat.c)
 *     ?DrawMesh2D@CHwTextureRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAVCGeometry2D@@PEAVIBitmapSource@@@Z @ 0x18013B020 (-DrawMesh2D@CHwTextureRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextStat.c)
 * Callees:
 *     ??1CMILBrushBitmapLocalSetterWrapper@@QEAA@XZ @ 0x180016178 (--1CMILBrushBitmapLocalSetterWrapper@@QEAA@XZ.c)
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180022B30 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180042CF0 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ @ 0x180083270 (--1-$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ.c)
 *     ?DeriveHWBrush@CHwSurfaceRenderTargetSharedData@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@PEAPEAVCHwBrush@@@Z @ 0x180083294 (-DeriveHWBrush@CHwSurfaceRenderTargetSharedData@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@PEAPEA.c)
 *     ?GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z @ 0x180084350 (-GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     Template_ffff @ 0x1800F4F28 (Template_ffff.c)
 *     ?GetMeshData@CGeometry2D@@QEAAJQEAPEBUMilVertexXYZDUV2@@PEAIQEAPEBI1@Z @ 0x18011C864 (-GetMeshData@CGeometry2D@@QEAAJQEAPEBUMilVertexXYZDUV2@@PEAIQEAPEBI1@Z.c)
 *     ??0CMILBrushBitmapLocalSetterWrapper@@QEAA@PEAVCMILBrushBitmap@@PEAVIBitmapSource@@W4Enum@MilBitmapWrapMode@@PEBVCBaseMatrix@@W4XSpaceDefinition@@@Z @ 0x18013A1F4 (--0CMILBrushBitmapLocalSetterWrapper@@QEAA@PEAVCMILBrushBitmap@@PEAVIBitmapSource@@W4Enum@MilBit.c)
 *     ?GetScratchDrawBitmapBrushNoAddRef@CHwSurfaceRenderTargetSharedData@@QEAAJPEAPEAVCMILBrushBitmap@@@Z @ 0x18013BA34 (-GetScratchDrawBitmapBrushNoAddRef@CHwSurfaceRenderTargetSharedData@@QEAAJPEAPEAVCMILBrushBitmap.c)
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
  int v8; // edi
  __int64 v9; // r13
  __int64 v10; // r14
  struct CContextState *v11; // rax
  __int64 v12; // rcx
  int ScratchDrawBitmapBrushNoAddRef; // eax
  int v14; // eax
  int v15; // eax
  struct CMILBrushBitmap *v16; // rdi
  __int64 v17; // rax
  struct CMILBrush *v18; // rdx
  int D2DBrush; // eax
  __int64 v20; // rax
  CD2DContext **v21; // rdi
  __int64 (__fastcall *v22)(CHwSurfaceRenderTarget *); // rbx
  unsigned int v23; // eax
  unsigned int v24; // r15d
  __int64 v25; // r12
  __int64 v26; // rdi
  __int64 v27; // rax
  unsigned int *v28; // rdx
  _OWORD *v29; // rcx
  struct MilVertexXYZDUV2 *v30; // r8
  __int64 v31; // rax
  struct ID2DContext *v32; // r12
  __int64 v33; // rsi
  __m128 v34; // xmm6
  __int64 (__fastcall *v35)(__int64); // rbx
  int v36; // edi
  float v37; // xmm0_4
  float v38; // xmm9_4
  float v39; // xmm7_4
  float v40; // xmm8_4
  float v41; // xmm6_4
  float v42; // xmm10_4
  float v43; // xmm11_4
  int v44; // ebx
  __int64 *v45; // rdx
  __int64 *v46; // r8
  __int64 v47; // r9
  _QWORD *v48; // rcx
  _QWORD *v49; // rax
  unsigned int v51; // [rsp+28h] [rbp-E0h]
  __int64 v52; // [rsp+48h] [rbp-C0h] BYREF
  struct CMILBrushBitmap *v53; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v54; // [rsp+58h] [rbp-B0h] BYREF
  struct CContextState *v55; // [rsp+60h] [rbp-A8h]
  unsigned int v56[2]; // [rsp+68h] [rbp-A0h] BYREF
  struct CHwBrush *v57; // [rsp+70h] [rbp-98h] BYREF
  __int64 v58; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v59; // [rsp+80h] [rbp-88h] BYREF
  __int64 v60; // [rsp+88h] [rbp-80h] BYREF
  CD2DContext *v61; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v62[24]; // [rsp+98h] [rbp-70h] BYREF
  unsigned int *v63; // [rsp+B0h] [rbp-58h] BYREF
  const struct ID2DContextOwner *v64; // [rsp+B8h] [rbp-50h]
  struct ID2DContext *v65; // [rsp+C0h] [rbp-48h]
  __int64 v66; // [rsp+C8h] [rbp-40h] BYREF
  struct CHwBrush *v67; // [rsp+D0h] [rbp-38h] BYREF
  float v68; // [rsp+D8h] [rbp-30h]
  float v69; // [rsp+DCh] [rbp-2Ch]
  unsigned __int64 v70; // [rsp+E0h] [rbp-28h]
  struct MilVertexXYZDUV2 *v71[2]; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v72; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD v73[2]; // [rsp+108h] [rbp+0h] BYREF
  __int128 v74; // [rsp+118h] [rbp+10h]
  __int64 v75; // [rsp+128h] [rbp+20h]
  int v76; // [rsp+130h] [rbp+28h]
  int v77; // [rsp+134h] [rbp+2Ch]
  __int128 v78; // [rsp+138h] [rbp+30h]
  __int64 v79; // [rsp+148h] [rbp+40h]
  _OWORD v80[4]; // [rsp+158h] [rbp+50h] BYREF

  v6 = *((_QWORD *)this + 20);
  v8 = 0;
  v57 = 0LL;
  v9 = 0LL;
  v58 = 0LL;
  v60 = 0LL;
  v54 = 0LL;
  ++*(_DWORD *)(v6 + 512);
  v55 = a4;
  v64 = a3;
  v65 = a2;
  LODWORD(v52) = 0;
  v53 = 0LL;
  v61 = 0LL;
  v66 = v6;
  *(_DWORD *)(v6 + 516) = GetCurrentThreadId();
  v10 = *((_QWORD *)this + 20);
  v11 = v55;
  ++*(_DWORD *)(v10 + 904);
  *((_BYTE *)v11 + 64) = 1;
  if ( (*(unsigned __int8 (__fastcall **)(CHwSurfaceRenderTarget *))(*(_QWORD *)this + 192LL))(this) )
  {
    *(_DWORD *)(*((_QWORD *)this + 20) + 496LL) = 0;
    if ( EventEnabled(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_ETWGUID_DRAWEVENT) )
    {
      (*(void (__fastcall **)(struct CGeometry2D *, struct MilVertexXYZDUV2 **))(*(_QWORD *)a5 + 112LL))(a5, v71);
      CBaseMatrix::Transform2DBounds(
        (struct CContextState *)((char *)v55 + 204),
        (const struct MilRectF *)v71,
        (struct MilRectF *)&v67);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_ffff(v12, &EVTDESC_ETWGUID_DRAWEVENT, *(float *)&v67, *((float *)&v67 + 1), SLOBYTE(v68), SLOBYTE(v69));
    }
    ScratchDrawBitmapBrushNoAddRef = CHwSurfaceRenderTargetSharedData::GetScratchDrawBitmapBrushNoAddRef(
                                       (CHwSurfaceRenderTargetSharedData *)(*((_QWORD *)this + 20) + 416LL),
                                       &v53);
    LODWORD(v52) = ScratchDrawBitmapBrushNoAddRef;
    v8 = ScratchDrawBitmapBrushNoAddRef;
    if ( ScratchDrawBitmapBrushNoAddRef < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, ScratchDrawBitmapBrushNoAddRef, 0x262u);
      goto LABEL_42;
    }
    memset(v62, 0, sizeof(v62));
    v14 = (*(__int64 (__fastcall **)(struct IBitmapSource *, _BYTE *))(*(_QWORD *)a6 + 24LL))(a6, v62);
    LODWORD(v52) = v14;
    v8 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x26Au);
      goto LABEL_42;
    }
    *(_DWORD *)&v62[4] = (*(__int64 (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)a6 + 32LL))(a6);
    v15 = (*(__int64 (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)a6 + 40LL))(a6);
    v16 = v53;
    *(_DWORD *)&v62[8] = v15;
    CMILBrushBitmapLocalSetterWrapper::CMILBrushBitmapLocalSetterWrapper((__int64 *)&v53, (__int64)v53, a6);
    v79 = 0LL;
    v73[0] = v55;
    v73[1] = &IdentityMatrix;
    v76 = *((_DWORD *)this + 28);
    v17 = *(_QWORD *)a5;
    v74 = *(_OWORD *)v62;
    v75 = *(_QWORD *)&v62[16];
    v77 = 1;
    (*(void (__fastcall **)(struct CGeometry2D *, __int128 *))(v17 + 120))(a5, &v72);
    v78 = v72;
    if ( v16 )
      v18 = (struct CMILBrushBitmap *)((char *)v16 + 24);
    else
      v18 = 0LL;
    D2DBrush = CHwSurfaceRenderTargetSharedData::DeriveHWBrush(
                 (CHwSurfaceRenderTargetSharedData *)(*((_QWORD *)this + 20) + 416LL),
                 v18,
                 (const struct CHwBrushContext *)v73,
                 &v57);
    LODWORD(v52) = D2DBrush;
    v8 = D2DBrush;
    if ( D2DBrush >= 0 )
    {
      v20 = *(_QWORD *)this;
      v21 = (CD2DContext **)v57;
      v71[0] = 0LL;
      v59 = 0;
      v22 = *(__int64 (__fastcall **)(CHwSurfaceRenderTarget *))(v20 + 40);
      v63 = 0LL;
      v56[0] = 0;
      v67 = v57;
      v23 = v22(this);
      D2DBrush = CHwBitmapBrush::GetD2DBrush(v21, 1.0, v23, &v61);
      LODWORD(v52) = D2DBrush;
      v8 = D2DBrush;
      if ( D2DBrush >= 0 )
      {
        D2DBrush = (**(__int64 (__fastcall ***)(CD2DContext *, GUID *, __int64 *))v61)(
                     v61,
                     &GUID_2cd906aa_12e2_11dc_9fed_001143a055f9,
                     &v58);
        LODWORD(v52) = D2DBrush;
        v8 = D2DBrush;
        if ( D2DBrush >= 0 )
        {
          (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v58 + 120LL))(v58, &v60);
          D2DBrush = CGeometry2D::GetMeshData(a5, v71, &v59, (const unsigned int **const)&v63, v56);
          LODWORD(v52) = D2DBrush;
          v8 = D2DBrush;
          if ( D2DBrush >= 0 )
          {
            v24 = v56[0];
            v25 = v56[0];
            v26 = 32LL * v56[0];
            if ( !is_mul_ok(v56[0], 0x20uLL) )
              v26 = -1LL;
            v27 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                    WPF::g_pProcessHeap,
                    v26);
            v9 = v27;
            if ( !v27 )
            {
              v8 = -2147024882;
              LODWORD(v52) = -2147024882;
              MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x2ACu);
LABEL_41:
              CMILBrushBitmapLocalSetterWrapper::~CMILBrushBitmapLocalSetterWrapper((CMILBrushBitmapLocalSetterWrapper *)&v53);
              goto LABEL_42;
            }
            if ( v24 )
            {
              v28 = v63;
              v29 = (_OWORD *)v27;
              v30 = v71[0];
              do
              {
                v31 = *v28++;
                v31 *= 32LL;
                *v29 = *(_OWORD *)((char *)v30 + v31);
                v29 += 2;
                *(v29 - 1) = *(_OWORD *)((char *)v30 + v31 + 16);
                --v25;
              }
              while ( v25 );
            }
            v32 = v65;
            D2DBrush = (*(__int64 (__fastcall **)(struct ID2DContext *, __int64, __int64 *))(*(_QWORD *)v65 + 232LL))(
                         v65,
                         6LL,
                         &v54);
            LODWORD(v52) = D2DBrush;
            v8 = D2DBrush;
            if ( D2DBrush >= 0 )
            {
              v80[0] = _xmm;
              v80[1] = _xmm;
              v80[2] = _xmm;
              v33 = *((_QWORD *)v67 + 2);
              v80[3] = _xmm;
              v34 = *(__m128 *)(v33 + 44);
              v35 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 56LL);
              v70 = *(_QWORD *)(v33 + 60);
              v36 = *(_DWORD *)(v35(v33) + 140);
              v37 = (float)*(int *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 56LL))(v33) + 136);
              v38 = v34.m128_f32[0] * v37;
              v39 = _mm_shuffle_ps(v34, v34, 85).m128_f32[0] * (float)v36;
              v40 = _mm_shuffle_ps(v34, v34, 170).m128_f32[0] * v37;
              v41 = _mm_shuffle_ps(v34, v34, 255).m128_f32[0] * (float)v36;
              v42 = *(float *)&v70 * v37;
              v43 = *((float *)&v70 + 1) * (float)v36;
              D2DBrush = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _OWORD *, int))(*(_QWORD *)v54 + 72LL))(
                           v54,
                           0LL,
                           0LL,
                           v80,
                           64);
              LODWORD(v52) = D2DBrush;
              v8 = D2DBrush;
              if ( D2DBrush >= 0 )
              {
                v67 = (struct CHwBrush *)__PAIR64__(LODWORD(v39), LODWORD(v38));
                v68 = v40;
                v69 = v41;
                v70 = __PAIR64__(LODWORD(v43), LODWORD(v42));
                D2DBrush = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, struct CHwBrush **, int))(*(_QWORD *)v54 + 72LL))(
                             v54,
                             1LL,
                             0LL,
                             &v67,
                             24);
                LODWORD(v52) = D2DBrush;
                v8 = D2DBrush;
                if ( D2DBrush >= 0 )
                {
                  (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v54 + 112LL))(
                    v54,
                    0LL,
                    v60,
                    1LL);
                  D2DBrush = (*(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, __int64, unsigned int))(*(_QWORD *)v54 + 64LL))(
                               v54,
                               L"vertices",
                               0LL,
                               v9,
                               32 * v24);
                  LODWORD(v52) = D2DBrush;
                  v8 = D2DBrush;
                  if ( D2DBrush >= 0 )
                  {
                    v44 = 0;
                    if ( *((_DWORD *)v55 + 50) == 2 )
                      v44 = 12;
                    D2DBrush = (*(__int64 (__fastcall **)(struct ID2DContext *, const struct ID2DContextOwner *, __int64, _QWORD, _QWORD, int, int))(*(_QWORD *)v32 + 96LL))(
                                 v32,
                                 v64,
                                 v54,
                                 0LL,
                                 0LL,
                                 1,
                                 v44);
                    LODWORD(v52) = D2DBrush;
                    v8 = D2DBrush;
                    if ( D2DBrush >= 0 )
                      goto LABEL_41;
                    v51 = 740;
                  }
                  else
                  {
                    v51 = 731;
                  }
                }
                else
                {
                  v51 = 719;
                }
              }
              else
              {
                v51 = 714;
              }
            }
            else
            {
              v51 = 694;
            }
          }
          else
          {
            v51 = 681;
          }
        }
        else
        {
          v51 = 670;
        }
      }
      else
      {
        v51 = 665;
      }
    }
    else
    {
      v51 = 650;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DBrush, v51);
    goto LABEL_41;
  }
LABEL_42:
  *((_BYTE *)v55 + 64) = 0;
  TranslateDXGIorD3DErrorInContext(v8, 0, &v52);
  if ( v57 )
  {
    (*(void (__fastcall **)(struct CHwBrush *))(*(_QWORD *)v57 + 24LL))(v57);
    if ( v57 )
      (*(void (__fastcall **)(struct CHwBrush *))(*(_QWORD *)v57 + 8LL))(v57);
  }
  if ( v58 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
  if ( v60 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
  if ( v54 )
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v54 + 112LL))(v54, 0LL, 0LL, 1LL);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    v9);
  v45 = *(__int64 **)(v10 + 984);
  v46 = (__int64 *)(v10 + 976);
  while ( v45 != v46 && *((_DWORD *)v45 + 8) == *(_DWORD *)(v10 + 904) )
  {
    *((_DWORD *)v45 + 8) = 0;
    v45 = (__int64 *)v45[1];
  }
  v47 = *v45;
  if ( (__int64 *)*v45 != v46 )
  {
    v48 = *(_QWORD **)(v10 + 984);
    *v45 = (__int64)v46;
    v49 = *(_QWORD **)(v10 + 968);
    *(_QWORD *)(v10 + 984) = v45;
    *v49 = v47;
    *(_QWORD *)(v47 + 8) = v49;
    *(_QWORD *)(v10 + 968) = v48;
    *v48 = v10 + 960;
  }
  --*(_DWORD *)(v10 + 904);
  CGuard<CD3DDeviceLevel1>::~CGuard<CD3DDeviceLevel1>(&v66);
  return (unsigned int)v52;
}
