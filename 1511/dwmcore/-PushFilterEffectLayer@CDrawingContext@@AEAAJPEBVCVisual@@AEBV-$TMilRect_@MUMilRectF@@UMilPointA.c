/*
 * XREFs of ?PushFilterEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAVCFilterEffect@@@Z @ 0x18000DF28
 * Callers:
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@1PEA_N@Z @ 0x18003CFD0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 * Callees:
 *     ?Create@CFilterEffectLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@PEAVCFilterEffect@@PEBVCVisual@@AEBUMilPointAndSizeF@@PEAPEAV1@@Z @ 0x180019A30 (-Create@CFilterEffectLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@PEAVCFilterEf.c)
 *     ??_ECFilterEffectLayer@@UEAAPEAXI@Z @ 0x180019C30 (--_ECFilterEffectLayer@@UEAAPEAXI@Z.c)
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x18003CBE8 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDrawingContext::PushFilterEffectLayer(
        CDrawingContext *this,
        struct CVisual *a2,
        float *a3,
        float *a4,
        struct CFilterEffect *a5)
{
  float v5; // xmm1_4
  float v8; // xmm0_4
  float v9; // xmm2_4
  float v10; // xmm0_4
  float v11; // xmm0_4
  const struct _GUID *v12; // rdx
  struct IRenderTarget *v13; // rcx
  float v14; // xmm1_4
  int v15; // eax
  float v16; // xmm0_4
  int v17; // eax
  float v18; // xmm1_4
  int v19; // eax
  unsigned int v20; // edi
  CFilterEffectLayer *v21; // rbx
  int v22; // eax
  int v24; // [rsp+40h] [rbp-20h] BYREF
  int v25; // [rsp+44h] [rbp-1Ch]
  int v26; // [rsp+48h] [rbp-18h]
  int v27; // [rsp+4Ch] [rbp-14h]
  float v28; // [rsp+50h] [rbp-10h] BYREF
  float v29; // [rsp+54h] [rbp-Ch]
  float v30; // [rsp+58h] [rbp-8h]
  float v31; // [rsp+5Ch] [rbp-4h]
  struct CFilterEffectLayer *v32; // [rsp+80h] [rbp+20h] BYREF

  v32 = 0LL;
  v5 = *a3;
  if ( *a3 < 0.0 )
  {
    v8 = v5 - 0.5;
LABEL_3:
    v24 = (int)v8;
    goto LABEL_4;
  }
  if ( v5 > 0.0 )
  {
    v8 = v5 + 0.5;
    goto LABEL_3;
  }
  v24 = 0;
LABEL_4:
  v9 = a3[1];
  if ( v9 < 0.0 )
  {
    v10 = v9 - 0.5;
LABEL_6:
    v25 = (int)v10;
    goto LABEL_7;
  }
  if ( v9 > 0.0 )
  {
    v10 = v9 + 0.5;
    goto LABEL_6;
  }
  v25 = 0;
LABEL_7:
  v11 = a3[2] - v5;
  v12 = (const struct _GUID *)(*((_QWORD *)this + 3) + 252LL);
  v13 = (struct IRenderTarget *)*((_QWORD *)this + 44);
  v14 = a3[3] - v9;
  v28 = *a4;
  v29 = a4[1];
  v15 = (int)(float)(v11 + 0.5);
  v16 = a4[2];
  v26 = v15;
  v17 = (int)(float)(v14 + 0.5);
  v18 = a4[3];
  v27 = v17;
  v30 = v16 - v28;
  v31 = v18 - v29;
  v19 = CFilterEffectLayer::Create(
          v13,
          v12,
          (const struct MilPointAndSizeL *)&v24,
          a5,
          a2,
          (const struct MilPointAndSizeF *)&v28,
          &v32);
  v20 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x1717u);
    v21 = v32;
  }
  else
  {
    v21 = v32;
    v22 = CDrawingContext::PushLayer(this, a2, v32, 1, 1);
    v20 = v22;
    if ( v22 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x1720u);
    else
      v21 = 0LL;
  }
  if ( v21 )
    CFilterEffectLayer::`vector deleting destructor'(v21, 1u);
  return v20;
}
