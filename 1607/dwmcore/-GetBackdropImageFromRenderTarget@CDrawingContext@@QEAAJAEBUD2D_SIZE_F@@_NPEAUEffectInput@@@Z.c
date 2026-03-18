/*
 * XREFs of ?GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@_NPEAUEffectInput@@@Z @ 0x180123628
 * Callers:
 *     ?RenderSubgraphs@CEffectBrush@@QEAAJPEAVCDrawingContext@@_KPEAVCVisual@@AEBUCCommonDrawListCacheParameters@@_NPEAVCDrawListCache@@@Z @ 0x18013D4E8 (-RenderSubgraphs@CEffectBrush@@QEAAJPEAVCDrawingContext@@_KPEAVCVisual@@AEBUCCommonDrawListCache.c)
 * Callees:
 *     ?GetScratchRenderTargetBitmap@CD3DDeviceManager@@QEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NAEBU_GUID@@U_LUID@@VDisplayId@@44PEAPEAVIRenderTargetBitmap@@@Z @ 0x180013FD4 (-GetScratchRenderTargetBitmap@CD3DDeviceManager@@QEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@.c)
 *     ?GetTopByReference@CBaseMatrixStack@@IEBAPEBVCMILMatrix@@XZ @ 0x1800253C8 (-GetTopByReference@CBaseMatrixStack@@IEBAPEBVCMILMatrix@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059E20 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?CanUseSwapChainBuffersAsShaderInput@CD3DDeviceLevel1@@QEBA_NXZ @ 0x1800809D4 (-CanUseSwapChainBuffersAsShaderInput@CD3DDeviceLevel1@@QEBA_NXZ.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180098510 (-GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800BF5DE (ceilf_0.c)
 *     floorf_0 @ 0x1800BF60E (floorf_0.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800C0DCC (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x180123580 (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 *     ?GetStockTransparentImageNoRef@CDrawingContext@@QEAAJPEAPEAVIImageSource@@@Z @ 0x180123F34 (-GetStockTransparentImageNoRef@CDrawingContext@@QEAAJPEAPEAVIImageSource@@@Z.c)
 *     ?CreateSingleAdapter@CRenderTargetImageSource@@SAJPEAVIRenderTarget@@PEAPEAV1@@Z @ 0x180131B38 (-CreateSingleAdapter@CRenderTargetImageSource@@SAJPEAVIRenderTarget@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CDrawingContext::GetBackdropImageFromRenderTarget(
        CDrawingContext *this,
        const struct D2D_SIZE_F *a2,
        char a3,
        struct EffectInput *a4)
{
  struct IImageSource *v4; // r13
  FLOAT height; // xmm1_4
  const struct CMILMatrix *TopByReference; // rax
  float v11; // xmm0_4
  float v12; // xmm8_4
  float v13; // xmm7_4
  float v14; // xmm6_4
  int SingleAdapter; // eax
  unsigned int v16; // ebx
  struct IRenderTarget *v17; // r14
  CD3DDeviceLevel1 *v18; // rax
  bool v19; // bl
  const struct CMILMatrix *v20; // rax
  int v21; // xmm1_4
  float v22; // xmm0_4
  float v23; // xmm1_4
  int v24; // xmm0_4
  float v25; // xmm1_4
  int v26; // xmm0_4
  int v27; // xmm1_4
  float *v28; // rax
  __int128 v29; // xmm0
  int v30; // eax
  __int64 v31; // rsi
  unsigned int v32; // ebx
  struct _LUID v33; // rdi
  __int64 v34; // rax
  char v35; // al
  int v36; // edi
  int v37; // esi
  int v38; // eax
  float *v39; // rax
  float *v40; // rax
  float *v41; // rax
  struct IImageSource *v42; // rdi
  float *v43; // rax
  int StockTransparentImageNoRef; // eax
  unsigned int v46; // [rsp+28h] [rbp-E0h]
  __int64 v47; // [rsp+40h] [rbp-C8h]
  struct _GUID *v48; // [rsp+48h] [rbp-C0h]
  struct _LUID v49; // [rsp+50h] [rbp-B8h]
  struct IImageSource *v50; // [rsp+78h] [rbp-90h] BYREF
  struct IRenderTarget *v51; // [rsp+80h] [rbp-88h] BYREF
  __int64 v52; // [rsp+88h] [rbp-80h] BYREF
  int v53; // [rsp+90h] [rbp-78h]
  __int64 v54; // [rsp+98h] [rbp-70h] BYREF
  float v55[9]; // [rsp+A0h] [rbp-68h] BYREF
  float v56[9]; // [rsp+C4h] [rbp-44h] BYREF
  int X; // [rsp+E8h] [rbp-20h] BYREF
  int v58; // [rsp+ECh] [rbp-1Ch]
  int v59; // [rsp+F0h] [rbp-18h]
  int v60; // [rsp+F4h] [rbp-14h]
  __int64 v61; // [rsp+F8h] [rbp-10h] BYREF
  float width; // [rsp+100h] [rbp-8h]
  float v63; // [rsp+104h] [rbp-4h]
  __int128 v64; // [rsp+108h] [rbp+0h] BYREF
  __int64 v65; // [rsp+118h] [rbp+10h] BYREF
  __int64 v66; // [rsp+120h] [rbp+18h]
  __int64 v67; // [rsp+128h] [rbp+20h]
  struct CRenderTargetImageSource *v68[2]; // [rsp+130h] [rbp+28h] BYREF
  int v69; // [rsp+140h] [rbp+38h]
  int v70; // [rsp+144h] [rbp+3Ch]
  const char *v71; // [rsp+148h] [rbp+40h] BYREF
  int v72; // [rsp+150h] [rbp+48h]
  float v73; // [rsp+154h] [rbp+4Ch]
  float v74; // [rsp+158h] [rbp+50h]
  float v75; // [rsp+15Ch] [rbp+54h]
  int v76; // [rsp+160h] [rbp+58h]
  int v77; // [rsp+164h] [rbp+5Ch]
  int v78; // [rsp+168h] [rbp+60h]

  v54 = 0LL;
  v4 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v50 = 0LL;
  memset_0(a4, 0, 0x48uLL);
  v61 = 0LL;
  *((_BYTE *)a4 + 8) = 1;
  height = a2->height;
  width = a2->width;
  v63 = height;
  TopByReference = CBaseMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 536));
  CMILMatrix::Transform2DBoundsHelper<0>((__int64)TopByReference, (__int64)&v61, (float *)&X);
  CScopedClipStack::GetTopGpuClipInScope((__int64 *)this + 114, 1, (__int64)&v61);
  v11 = *(float *)&v61;
  v12 = *((float *)&v61 + 1);
  v13 = width;
  v14 = v63;
  if ( *(float *)&X > *(float *)&v61 )
    v11 = *(float *)&X;
  if ( *(float *)&v58 > *((float *)&v61 + 1) )
    v12 = *(float *)&v58;
  if ( width > *(float *)&v59 )
    v13 = *(float *)&v59;
  if ( v63 > *(float *)&v60 )
    v14 = *(float *)&v60;
  if ( v13 > v11 && v14 > v12 )
  {
    *(_WORD *)((char *)a4 + 65) = 257;
    X = (int)floorf_0(v11);
    v58 = (int)floorf_0(v12);
    v59 = (int)ceilf_0(v13);
    v60 = (int)ceilf_0(v14);
    SingleAdapter = CDrawingContext::FlushD2D(this);
    v16 = SingleAdapter;
    if ( SingleAdapter < 0 )
    {
      v46 = 3270;
    }
    else
    {
      v17 = (struct IRenderTarget *)*((_QWORD *)this + 54);
      if ( !a3 )
      {
        if ( (**(int (__fastcall ***)(_QWORD, GUID *, __int64 *))v17)(
               *((_QWORD *)this + 54),
               &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
               &v61) < 0
          || (v18 = (CD3DDeviceLevel1 *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 57) + 176LL))(*((_QWORD *)this + 57)),
              v19 = CD3DDeviceLevel1::CanUseSwapChainBuffersAsShaderInput(v18) == 0,
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v61 + 16LL))(v61),
              !v19) )
        {
          (*(void (__fastcall **)(struct IRenderTarget *, __int128 *))(*(_QWORD *)v17 + 72LL))(v17, &v64);
          HIDWORD(v65) = 0;
          LODWORD(v66) = 0;
          *(float *)&v65 = 1.0 / (float)SDWORD2(v64);
          *((float *)&v66 + 1) = 1.0 / (float)SHIDWORD(v64);
          *(float *)&v67 = 0.0 - (float)(*(float *)&v65 * 0.0);
          *((float *)&v67 + 1) = 0.0 - (float)(*((float *)&v66 + 1) * 0.0);
          v20 = CBaseMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 536));
          v21 = *((_DWORD *)v20 + 1);
          LODWORD(v71) = *(_DWORD *)v20;
          v72 = *((_DWORD *)v20 + 3);
          v22 = *((float *)v20 + 5);
          HIDWORD(v71) = v21;
          v23 = *((float *)v20 + 4);
          v74 = v22;
          v24 = *((_DWORD *)v20 + 12);
          v73 = v23;
          v25 = *((float *)v20 + 7);
          v76 = v24;
          v26 = *((_DWORD *)v20 + 15);
          v75 = v25;
          v27 = *((_DWORD *)v20 + 13);
          v78 = v26;
          v77 = v27;
          v28 = Matrix3x3::operator*((float *)&v71, v55, (float *)&v65);
          *(_OWORD *)((char *)a4 + 12) = *(_OWORD *)v28;
          *(_OWORD *)((char *)a4 + 28) = *((_OWORD *)v28 + 1);
          *((float *)a4 + 11) = v28[8];
          *(float *)&v64 = (float)X;
          *((float *)&v64 + 1) = (float)v58;
          *((float *)&v64 + 2) = (float)v59;
          *((float *)&v64 + 3) = (float)v60;
          v29 = v64;
LABEL_24:
          *((_OWORD *)a4 + 3) = v29;
          SingleAdapter = CRenderTargetImageSource::CreateSingleAdapter(v17, v68);
          v16 = SingleAdapter;
          if ( SingleAdapter >= 0 )
          {
            v42 = v68[0];
LABEL_39:
            *(_QWORD *)a4 = v42;
            goto LABEL_41;
          }
          v46 = 3379;
          goto LABEL_33;
        }
      }
      v65 = 0LL;
      v66 = 0LL;
      v67 = 0LL;
      SingleAdapter = (*(__int64 (__fastcall **)(struct IRenderTarget *, __int64 *))(*(_QWORD *)v17 + 24LL))(v17, &v65);
      v16 = SingleAdapter;
      if ( SingleAdapter < 0 )
      {
        v46 = 3287;
      }
      else
      {
        HIDWORD(v65) = (*(__int64 (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)v17 + 32LL))(v17);
        v30 = (*(__int64 (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)v17 + 40LL))(v17);
        v31 = *((_QWORD *)this + 3);
        v67 = 0LL;
        v32 = *((_DWORD *)this + 118);
        v33 = (struct _LUID)*((_QWORD *)this + 58);
        LODWORD(v66) = v30;
        LODWORD(v50) = v59 - X;
        v53 = v60 - v58;
        v71 = "Backdrop effect input";
        v34 = *(_QWORD *)v17;
        v68[0] = (struct CRenderTargetImageSource *)1;
        v72 = 21;
        v35 = (*(__int64 (__fastcall **)(struct IRenderTarget *))(v34 + 168))(v17);
        v49 = v33;
        v36 = (int)v50;
        v48 = (struct _GUID *)(v31 + 252);
        v37 = v53;
        SingleAdapter = CD3DDeviceManager::GetScratchRenderTargetBitmap(
                          (CD3DDeviceManager *)&g_D3DDeviceManager,
                          (__int64)&v71,
                          (unsigned int)v50,
                          v53,
                          (__int64)v68[0],
                          0,
                          (struct PixelFormatInfo *)&v65,
                          v47,
                          v48,
                          v49,
                          v32,
                          v35,
                          0,
                          (void **)&v51);
        v16 = SingleAdapter;
        if ( SingleAdapter < 0 )
        {
          v46 = 3313;
        }
        else
        {
          SingleAdapter = (*(__int64 (__fastcall **)(struct IRenderTarget *, __int64 *))(*(_QWORD *)v17 + 112LL))(
                            v17,
                            &v54);
          v16 = SingleAdapter;
          if ( SingleAdapter < 0 )
          {
            v46 = 3316;
          }
          else
          {
            v38 = (*(__int64 (__fastcall **)(struct IRenderTarget *, __int64 *))(*(_QWORD *)v51 + 112LL))(v51, &v52);
            v16 = v38;
            if ( v38 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v38, 0xCF5u);
              goto LABEL_41;
            }
            SingleAdapter = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, int *))(*(_QWORD *)v52 + 64LL))(
                              v52,
                              0LL,
                              v54,
                              &X);
            v16 = SingleAdapter;
            if ( SingleAdapter >= 0 )
            {
              if ( g_LockAndReadBackdropTexture )
                (*(void (__fastcall **)(struct IRenderTarget *, _QWORD, char *))(*(_QWORD *)v51 + 176LL))(
                  v51,
                  *((_QWORD *)this + 57),
                  (char *)this + 128);
              v17 = v51;
              (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v52 + 32LL))(v52, &v64);
              HIDWORD(v71) = 0;
              v72 = 0;
              v73 = 1.0 / *((float *)&v64 + 1);
              *(float *)&v71 = 1.0 / *(float *)&v64;
              v75 = 0.0 - (float)((float)(1.0 / *((float *)&v64 + 1)) * 0.0);
              v74 = 0.0 - (float)((float)(1.0 / *(float *)&v64) * 0.0);
              v70 = COERCE_UNSIGNED_INT((float)v58) ^ _xmm;
              v69 = COERCE_UNSIGNED_INT((float)X) ^ _xmm;
              *(_OWORD *)v68 = _xmm;
              v39 = (float *)CBaseMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 536));
              v55[0] = *v39;
              v55[1] = v39[1];
              v55[2] = v39[3];
              v55[3] = v39[4];
              v55[4] = v39[5];
              v55[5] = v39[7];
              v55[6] = v39[12];
              v55[7] = v39[13];
              v55[8] = v39[15];
              v40 = Matrix3x3::operator*(v55, v56, (float *)v68);
              v41 = Matrix3x3::operator*(v40, v55, (float *)&v71);
              v68[0] = 0LL;
              *(_OWORD *)((char *)a4 + 12) = *(_OWORD *)v41;
              *(_OWORD *)((char *)a4 + 28) = *((_OWORD *)v41 + 1);
              *((float *)a4 + 11) = v41[8];
              *(float *)&v68[1] = (float)v36;
              *((float *)&v68[1] + 1) = (float)v37;
              v29 = *(_OWORD *)v68;
              goto LABEL_24;
            }
            v46 = 3321;
          }
        }
      }
    }
LABEL_33:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, SingleAdapter, v46);
    goto LABEL_41;
  }
  v43 = (float *)((char *)a4 + 12);
  if ( a4 != (struct EffectInput *)-12LL )
  {
    *((_DWORD *)a4 + 4) = 0;
    *((_DWORD *)a4 + 5) = 0;
    *((_DWORD *)a4 + 6) = 0;
    *((_DWORD *)a4 + 8) = 0;
    *((_DWORD *)a4 + 9) = 0;
    *((_DWORD *)a4 + 10) = 0;
    *v43 = 1.0;
    *((_DWORD *)a4 + 7) = 1065353216;
    *((_DWORD *)a4 + 11) = 1065353216;
  }
  *v43 = 1.0 / a2->width;
  *((float *)a4 + 7) = 1.0 / a2->height;
  *((_OWORD *)a4 + 3) = _xmm;
  StockTransparentImageNoRef = CDrawingContext::GetStockTransparentImageNoRef(this, &v50);
  v16 = StockTransparentImageNoRef;
  if ( StockTransparentImageNoRef >= 0 )
  {
    v42 = v50;
    (*(void (__fastcall **)(struct IImageSource *))(*(_QWORD *)v50 + 8LL))(v50);
    goto LABEL_39;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, StockTransparentImageNoRef, 0xD42u);
  v4 = v50;
LABEL_41:
  if ( v54 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
  if ( v52 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
  if ( v51 )
    (*(void (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)v51 + 16LL))(v51);
  if ( v4 )
    (*(void (__fastcall **)(struct IImageSource *))(*(_QWORD *)v4 + 16LL))(v4);
  return v16;
}
