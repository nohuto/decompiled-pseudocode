/*
 * XREFs of ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAVCResource@@PEA_N@Z @ 0x180003EC0
 * Callers:
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@1PEA_N@Z @ 0x180067DF0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 * Callees:
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x180003AE4 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?PushNoOpLayer@CDrawingContext@@AEAAJPEBVCVisual@@@Z @ 0x180004070 (-PushNoOpLayer@CDrawingContext@@AEAAJPEBVCVisual@@@Z.c)
 *     ?Create@CFilterEffectLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@PEAVCFilterEffect@@PEBVCVisual@@AEBUMilPointAndSizeF@@PEAPEAV1@@Z @ 0x180012DA4 (-Create@CFilterEffectLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@PEAVCFilterEf.c)
 *     ??_ECFilterEffectLayer@@UEAAPEAXI@Z @ 0x180012F90 (--_ECFilterEffectLayer@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??_ECExternalLayer@@UEAAPEAXI@Z @ 0x180121620 (--_ECExternalLayer@@UEAAPEAXI@Z.c)
 *     ?Create@CTreeEffectLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@PEAVCEffectBrush@@PEBVCVisual@@AEBUMilPointAndSizeF@@PEAPEAV1@@Z @ 0x18012FB2C (-Create@CTreeEffectLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@PEAVCEffectBrus.c)
 */

__int64 __fastcall CDrawingContext::PushEffectLayer(
        struct IRenderTarget **this,
        struct CVisual *a2,
        float *a3,
        float *a4,
        struct CFilterEffect *a5,
        char *a6)
{
  float v6; // xmm4_4
  CFilterEffectLayer *v7; // rdi
  CExternalLayer *v8; // rsi
  char v9; // r12
  float v12; // xmm0_4
  float v13; // xmm2_4
  float v14; // xmm0_4
  float v15; // xmm0_4
  float v16; // xmm1_4
  int v17; // eax
  float v18; // xmm0_4
  int v19; // ecx
  float v20; // xmm1_4
  struct CFilterEffect *v21; // rbx
  int v22; // eax
  unsigned int v23; // ebx
  int v24; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  struct CVisual *v29; // [rsp+20h] [rbp-40h]
  int v30; // [rsp+40h] [rbp-20h] BYREF
  int v31; // [rsp+44h] [rbp-1Ch]
  int v32; // [rsp+48h] [rbp-18h]
  int v33; // [rsp+4Ch] [rbp-14h]
  float v34; // [rsp+50h] [rbp-10h] BYREF
  float v35; // [rsp+54h] [rbp-Ch]
  float v36; // [rsp+58h] [rbp-8h]
  float v37; // [rsp+5Ch] [rbp-4h]
  CFilterEffectLayer *v38; // [rsp+A0h] [rbp+40h] BYREF
  CExternalLayer *v39; // [rsp+A8h] [rbp+48h] BYREF

  v6 = *a3;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0;
  v38 = 0LL;
  v39 = 0LL;
  if ( v6 < 0.0 )
  {
    v12 = v6 - 0.5;
LABEL_3:
    v30 = (int)v12;
    goto LABEL_4;
  }
  if ( v6 > 0.0 )
  {
    v12 = v6 + 0.5;
    goto LABEL_3;
  }
  v30 = 0;
LABEL_4:
  v13 = a3[1];
  if ( v13 >= 0.0 )
  {
    if ( v13 <= 0.0 )
    {
      v31 = 0;
      goto LABEL_7;
    }
    v14 = v13 + 0.5;
  }
  else
  {
    v14 = v13 - 0.5;
  }
  v31 = (int)v14;
LABEL_7:
  v15 = a3[2] - v6;
  v16 = a3[3] - v13;
  v34 = *a4;
  v35 = a4[1];
  v17 = (int)(float)(v15 + 0.5);
  v18 = a4[2];
  v32 = v17;
  v19 = (int)(float)(v16 + 0.5);
  v20 = a4[3];
  v36 = v18 - v34;
  v33 = v19;
  v37 = v20 - v35;
  if ( v17 <= 0 || v19 <= 0 )
  {
    v9 = 1;
    v28 = CDrawingContext::PushNoOpLayer((CDrawingContext *)this, a2);
    v23 = v28;
    if ( v28 >= 0 )
      goto LABEL_12;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0x1729u);
LABEL_30:
    if ( !v7 )
      return v23;
    CFilterEffectLayer::`vector deleting destructor'(v7, 1u);
    goto LABEL_32;
  }
  v21 = a5;
  if ( (*(unsigned __int8 (__fastcall **)(struct CFilterEffect *, __int64))(*(_QWORD *)a5 + 48LL))(a5, 9LL) )
  {
    v22 = CFilterEffectLayer::Create(
            this[54],
            (const struct _GUID *)((char *)this[3] + 252),
            (const struct MilPointAndSizeL *)&v30,
            v21,
            a2,
            (const struct MilPointAndSizeF *)&v34,
            &v38);
    v23 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x1737u);
      v7 = v38;
    }
    else
    {
      v7 = v38;
      v24 = CDrawingContext::PushLayer((CDrawingContext *)this, a2, v38, 1, 1);
      v23 = v24;
      if ( v24 >= 0 )
      {
LABEL_12:
        *a6 = v9;
        return v23;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0x173Du);
    }
    goto LABEL_30;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(struct CFilterEffect *, __int64))(*(_QWORD *)v21 + 48LL))(v21, 81LL) )
  {
    v23 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x1759u);
    return v23;
  }
  v26 = CTreeEffectLayer::Create(
          this[54],
          (const struct _GUID *)((char *)this[3] + 252),
          (const struct MilPointAndSizeL *)&v30,
          v21,
          v29,
          (const struct MilPointAndSizeF *)&v34,
          &v39);
  v23 = v26;
  if ( v26 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x174Bu);
    v8 = v39;
  }
  else
  {
    v8 = v39;
    v27 = CDrawingContext::PushLayer((CDrawingContext *)this, a2, v39, 1, 1);
    v23 = v27;
    if ( v27 >= 0 )
      goto LABEL_12;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0x1751u);
  }
LABEL_32:
  if ( v8 )
    CExternalLayer::`vector deleting destructor'(v8, 1u);
  return v23;
}
