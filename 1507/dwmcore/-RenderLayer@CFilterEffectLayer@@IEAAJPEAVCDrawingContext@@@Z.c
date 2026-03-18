/*
 * XREFs of ?RenderLayer@CFilterEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180001984
 * Callers:
 *     ?RestoreState@CFilterEffectLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180001930 (-RestoreState@CFilterEffectLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAUID2D1Bitmap1@@PEAVID2DContext@@PEAVID2DContextOwner@@PEAPEAUID2D1Effect@@@Z @ 0x180002550 (-GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAUID2D1Bitmap1@@PEAVID2DContext@@PEAVID2DContextOwner@@.c)
 *     ?FillEffect@CDrawingContext@@AEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_NPEBUMilPointAndSizeF@@@Z @ 0x1800107A4 (-FillEffect@CDrawingContext@@AEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     TemplateEventDescriptor @ 0x1800E1E38 (TemplateEventDescriptor.c)
 */

__int64 __fastcall CFilterEffectLayer::RenderLayer(CFilterEffectLayer *this, struct CDrawingContext *a2)
{
  struct ID2DContextOwner *v4; // r12
  __int64 v5; // rdi
  float *v6; // rsi
  struct ID2DContext *v7; // rax
  int v8; // xmm1_4
  int v9; // eax
  unsigned int v10; // r15d
  struct ID2DContext *v11; // rbx
  __int64 v12; // rcx
  float v13; // xmm2_4
  float v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm3_4
  float v18; // xmm0_4
  float v19; // xmm1_4
  float v20; // xmm0_4
  int v21; // eax
  float v22; // xmm0_4
  int v23; // eax
  float v25; // xmm0_4
  int v26; // [rsp+20h] [rbp-50h]
  struct ID2D1Bitmap1 *v27; // [rsp+30h] [rbp-40h] BYREF
  struct ID2D1Effect *v28; // [rsp+38h] [rbp-38h] BYREF
  int v29; // [rsp+40h] [rbp-30h]
  int v30; // [rsp+44h] [rbp-2Ch]
  struct ID2DContext *v31; // [rsp+48h] [rbp-28h]
  float v32; // [rsp+50h] [rbp-20h]
  float v33; // [rsp+54h] [rbp-1Ch]
  float v34; // [rsp+58h] [rbp-18h]
  float v35; // [rsp+5Ch] [rbp-14h]

  v27 = 0LL;
  v28 = 0LL;
  if ( a2 )
    v4 = (struct CDrawingContext *)((char *)a2 + 56);
  else
    v4 = 0LL;
  v5 = *((_QWORD *)this + 1);
  v6 = (float *)((char *)this + 112);
  v7 = (struct ID2DContext *)*((_QWORD *)a2 + 47);
  v8 = *((_DWORD *)this + 29);
  v29 = *((_DWORD *)this + 28);
  v30 = v8;
  v31 = v7;
  v9 = (*(__int64 (__fastcall **)(__int64, struct ID2D1Bitmap1 **))(*(_QWORD *)v5 + 112LL))(v5, &v27);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xA6u);
    goto LABEL_16;
  }
  v11 = v31;
  if ( g_LockAndReadLayer )
  {
    (*(void (__fastcall **)(_QWORD, struct ID2DContext *, char *))(**((_QWORD **)this + 1) + 168LL))(
      *((_QWORD *)this + 1),
      v31,
      (char *)a2 + 56);
    v6 = (float *)((char *)this + 112);
  }
  CFilterEffect::GetD2DEffectNoRef(*((CFilterEffect **)this + 13), v27, v11, v4, &v28);
  if ( !v28 )
    goto LABEL_14;
  v13 = 0.0;
  v14 = *v6;
  v15 = (float)*((int *)this + 4);
  if ( v15 > *v6 )
  {
    v16 = (float)(v14 - v15) - 0.5;
    goto LABEL_10;
  }
  if ( v14 > v15 )
  {
    v16 = (float)(v14 - v15) + 0.5;
LABEL_10:
    v17 = (float)(int)v16;
    goto LABEL_11;
  }
  v17 = 0.0;
LABEL_11:
  v18 = *((float *)this + 29);
  v19 = (float)*((int *)this + 5);
  v32 = v17;
  if ( v19 > v18 )
  {
    v25 = (float)(v18 - v19) - 0.5;
  }
  else
  {
    if ( v18 <= v19 )
      goto LABEL_13;
    v25 = (float)(v18 - v19) + 0.5;
  }
  v13 = (float)(int)v25;
LABEL_13:
  v20 = *((float *)this + 30) + 0.5;
  v33 = v13;
  v21 = (int)v20;
  v22 = *((float *)this + 31) + 0.5;
  v34 = (float)v21 + v17;
  v35 = (float)(int)v22 + v13;
  v23 = CDrawingContext::FillEffect(a2, v26, (__int64)v6);
  v10 = v23;
  if ( v23 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0xDFu);
    goto LABEL_16;
  }
LABEL_14:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    TemplateEventDescriptor(v12, &EVTDESC_ETWGUID_LAYEREVENT_EndExternalLayer_Stop);
LABEL_16:
  if ( v27 )
    (*(void (__fastcall **)(struct ID2D1Bitmap1 *))(*(_QWORD *)v27 + 16LL))(v27);
  return v10;
}
