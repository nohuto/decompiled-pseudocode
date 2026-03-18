/*
 * XREFs of ?PushFilterEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAVCFilterEffect@@@Z @ 0x1800104D0
 * Callers:
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@1PEA_N@Z @ 0x180028440 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 * Callees:
 *     ?Create@CFilterEffectLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@PEAVCFilterEffect@@PEBVCVisual@@AEBUMilPointAndSizeF@@PEAPEAV1@@Z @ 0x180001608 (-Create@CFilterEffectLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@PEAVCFilterEf.c)
 *     ??_ECFilterEffectLayer@@UEAAPEAXI@Z @ 0x180001800 (--_ECFilterEffectLayer@@UEAAPEAXI@Z.c)
 *     ?PushClipRectForNode@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180022DEC (-PushClipRectForNode@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAnd.c)
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x180028088 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDrawingContext::PushFilterEffectLayer(
        struct IRenderTarget **this,
        struct CVisual *a2,
        float *a3,
        float *a4,
        struct CFilterEffect *a5)
{
  float *v5; // r15
  int v9; // eax
  unsigned int v10; // ebx
  float v11; // xmm1_4
  float v12; // xmm0_4
  float v13; // xmm4_4
  float v14; // xmm5_4
  float v15; // xmm0_4
  float v16; // xmm1_4
  float v17; // xmm4_4
  int v18; // eax
  float v19; // xmm0_4
  float v20; // xmm4_4
  int v21; // eax
  float v22; // xmm1_4
  float v23; // xmm5_4
  struct IRenderTarget *v24; // rcx
  const struct _GUID *v25; // rdx
  int v26; // eax
  CFilterEffectLayer *v27; // rdi
  int v28; // eax
  float v30; // xmm0_4
  float v31; // xmm0_4
  float v32; // xmm1_4
  struct CFilterEffectLayer *v33; // [rsp+40h] [rbp-30h] BYREF
  float v34; // [rsp+48h] [rbp-28h] BYREF
  float v35; // [rsp+4Ch] [rbp-24h]
  float v36; // [rsp+50h] [rbp-20h]
  float v37; // [rsp+54h] [rbp-1Ch]
  int v38; // [rsp+58h] [rbp-18h] BYREF
  int v39; // [rsp+5Ch] [rbp-14h]
  int v40; // [rsp+60h] [rbp-10h]
  int v41; // [rsp+64h] [rbp-Ch]

  v33 = 0LL;
  v5 = a4;
  LOBYTE(a4) = 1;
  v9 = CDrawingContext::PushClipRectForNode(this, a2, a3, a4);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x16E7u);
    return v10;
  }
  v11 = *a3;
  if ( *a3 < 0.0 )
  {
    v12 = v11 - 0.5;
LABEL_4:
    v38 = (int)v12;
    goto LABEL_5;
  }
  if ( v11 > 0.0 )
  {
    v12 = v11 + 0.5;
    goto LABEL_4;
  }
  v38 = 0;
LABEL_5:
  v13 = a3[1];
  if ( v13 < 0.0 )
  {
    v30 = v13 - 0.5;
  }
  else
  {
    if ( v13 <= 0.0 )
    {
      v39 = 0;
      goto LABEL_8;
    }
    v30 = v13 + 0.5;
  }
  v39 = (int)v30;
LABEL_8:
  v14 = v5[3];
  v15 = a3[2] - v11;
  v16 = a3[3] - v13;
  v17 = v5[2];
  v18 = (int)(float)(v15 + 0.5);
  v19 = *v5;
  v40 = v18;
  v20 = v17 - v19;
  v21 = (int)(float)(v16 + 0.5);
  v22 = v5[1];
  v41 = v21;
  v23 = v14 - v22;
  if ( v19 < 0.0 )
  {
    v31 = v19 - 0.5;
  }
  else
  {
    if ( v19 <= 0.0 )
    {
      v34 = 0.0;
      goto LABEL_11;
    }
    v31 = v19 + 0.5;
  }
  v34 = (float)(int)v31;
LABEL_11:
  if ( v22 < 0.0 )
  {
    v32 = v22 - 0.5;
LABEL_32:
    v35 = (float)(int)v32;
    goto LABEL_14;
  }
  if ( v22 > 0.0 )
  {
    v32 = v22 + 0.5;
    goto LABEL_32;
  }
  v35 = 0.0;
LABEL_14:
  v24 = this[44];
  v25 = (const struct _GUID *)((char *)this[3] + 252);
  v36 = (float)(int)(float)(v20 + 0.5);
  v37 = (float)(int)(float)(v23 + 0.5);
  v26 = CFilterEffectLayer::Create(
          v24,
          v25,
          (const struct MilPointAndSizeL *)&v38,
          a5,
          a2,
          (const struct MilPointAndSizeF *)&v34,
          &v33);
  v10 = v26;
  if ( v26 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x1738u);
    v27 = v33;
  }
  else
  {
    v27 = v33;
    v28 = CDrawingContext::PushLayer((CDrawingContext *)this, a2, v33, 1, 1);
    v10 = v28;
    if ( v28 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0x1741u);
    else
      v27 = 0LL;
  }
  if ( v27 )
    CFilterEffectLayer::`vector deleting destructor'(v27, 1);
  return v10;
}
