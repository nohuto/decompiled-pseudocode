/*
 * XREFs of ?GetInputParameters@CEffectBrush@@AEAAJIAEBUD2D_SIZE_F@@PEAVCDrawingContext@@PEAUGraphInputParameters@1@@Z @ 0x18013BD88
 * Callers:
 *     ?RenderSubgraphs@CEffectBrush@@QEAAJPEAVCDrawingContext@@_KPEAVCVisual@@AEBUCCommonDrawListCacheParameters@@_NPEAVCDrawListCache@@@Z @ 0x18013D4E8 (-RenderSubgraphs@CEffectBrush@@QEAAJPEAVCDrawingContext@@_KPEAVCVisual@@AEBUCCommonDrawListCache.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x180098050 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetStockTransparentImageNoRef@CDrawingContext@@QEAAJPEAPEAVIImageSource@@@Z @ 0x180123F34 (-GetStockTransparentImageNoRef@CDrawingContext@@QEAAJPEAPEAVIImageSource@@@Z.c)
 *     ?GetStockOpaqueBlackImageNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAVIImageSource@@@Z @ 0x1801742F0 (-GetStockOpaqueBlackImageNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAVIImageSource@@@Z.c)
 */

__int64 __fastcall CEffectBrush::GetInputParameters(
        CEffectBrush *this,
        unsigned int a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawingContext *a4,
        struct CEffectBrush::GraphInputParameters *a5)
{
  __int64 v7; // rdi
  D2D1::Matrix3x2F *v9; // rax
  __int64 v10; // r8
  int v11; // eax
  unsigned int v12; // ebx
  __m128 v13; // xmm6
  int StockTransparentImageNoRef; // eax
  FLOAT width; // xmm0_4
  FLOAT height; // xmm1_4
  __int128 v17; // xmm0
  float v18; // xmm1_4
  float v19; // xmm2_4
  float v20; // xmm3_4
  __m128 v21; // xmm1
  void (__fastcall ***v22)(_QWORD, __int64); // rcx
  CD3DDeviceLevel1 *v24; // rax
  int StockOpaqueBlackImageNoRef; // eax
  void (__fastcall ***v26)(_QWORD, __int64); // [rsp+30h] [rbp-40h] BYREF
  __int128 v27; // [rsp+38h] [rbp-38h]

  v26 = 0LL;
  v7 = a2;
  *((_QWORD *)a5 + 37) = 0LL;
  v9 = (D2D1::Matrix3x2F *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 32LL))(*((_QWORD *)this + 19));
  if ( D2D1::Matrix3x2F::IsIdentity(v9) )
    v10 = 0LL;
  v11 = (*(__int64 (__fastcall **)(_QWORD, const struct D2D_SIZE_F *, __int64, struct CEffectBrush::GraphInputParameters *, void (__fastcall ****)(_QWORD, __int64)))(**(_QWORD **)(*((_QWORD *)this + 31) + 8 * v7) + 168LL))(
          *(_QWORD *)(*((_QWORD *)this + 31) + 8 * v7),
          a3,
          v10,
          a5,
          &v26);
  v12 = v11;
  v13 = 0LL;
  if ( v11 == -2003304441 )
  {
    StockTransparentImageNoRef = CDrawingContext::GetStockTransparentImageNoRef(a4, (struct IImageSource **)a5 + 8);
    v12 = StockTransparentImageNoRef;
    if ( StockTransparentImageNoRef >= 0 )
    {
      width = a3->width;
      height = a3->height;
      *(_QWORD *)&v27 = 0LL;
      *((_QWORD *)&v27 + 1) = __PAIR64__(LODWORD(height), LODWORD(width));
      v17 = v27;
      *(_OWORD *)a5 = v27;
      *((_OWORD *)a5 + 1) = v17;
      goto LABEL_6;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, StockTransparentImageNoRef, 0x301u);
  }
  else
  {
    if ( v11 < 0 || *((_QWORD *)a5 + 8) )
      goto LABEL_7;
    v24 = (CD3DDeviceLevel1 *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a4 + 57) + 176LL))(*((_QWORD *)a4 + 57));
    StockOpaqueBlackImageNoRef = CD3DDeviceLevel1::GetStockOpaqueBlackImageNoRef(v24, (struct IImageSource **)a5 + 8);
    v12 = StockOpaqueBlackImageNoRef;
    if ( StockOpaqueBlackImageNoRef >= 0 )
    {
LABEL_6:
      v18 = *((float *)a5 + 2) - *(float *)a5;
      *(_QWORD *)((char *)&v27 + 4) = 0LL;
      *(_OWORD *)((char *)a5 + 72) = _xmm;
      *((_BYTE *)a5 + 112) = 0;
      v19 = 1.0 / v18;
      v20 = 1.0 / (float)(*((float *)a5 + 3) - *((float *)a5 + 1));
      v21 = 0LL;
      *(float *)&v27 = v19;
      *((float *)&v27 + 3) = v20;
      v21.m128_f32[0] = 0.0 - (float)(v19 * 0.0);
      *(_OWORD *)((char *)a5 + 88) = v27;
      v13.m128_f32[0] = 0.0 - (float)(v20 * 0.0);
      *((_QWORD *)a5 + 13) = _mm_unpacklo_ps(v21, v13).m128_u64[0];
LABEL_7:
      v22 = 0LL;
      *((_QWORD *)a5 + 37) = v26;
      v26 = 0LL;
      goto LABEL_8;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, StockOpaqueBlackImageNoRef, 0x30Du);
  }
  v22 = v26;
LABEL_8:
  if ( v22 )
    (**v22)(v22, 1LL);
  return v12;
}
