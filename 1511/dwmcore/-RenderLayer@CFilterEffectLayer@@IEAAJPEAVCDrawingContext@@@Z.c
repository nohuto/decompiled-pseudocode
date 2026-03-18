/*
 * XREFs of ?RenderLayer@CFilterEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180019DB4
 * Callers:
 *     ?RestoreState@CFilterEffectLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180019D60 (-RestoreState@CFilterEffectLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x18000DC18 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?FillEffect@CDrawingContext@@AEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x18000E180 (-FillEffect@CDrawingContext@@AEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAUID2D1Bitmap1@@PEAVID2DContext@@PEAVID2DContextOwner@@PEAPEAUID2D1Effect@@@Z @ 0x18001AAF4 (-GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAUID2D1Bitmap1@@PEAVID2DContext@@PEAVID2DContextOwner@@.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N3@Z @ 0x180045C70 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     TemplateEventDescriptor @ 0x1800BA27C (TemplateEventDescriptor.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CFilterEffectLayer::RenderLayer(CFilterEffectLayer *this, struct CDrawingContext *a2)
{
  struct ID2DContextOwner *v4; // r12
  __int64 v5; // rdi
  struct ID2DContext *v6; // rax
  int v7; // xmm1_4
  int v8; // eax
  int v9; // r14d
  struct ID2DContext *v10; // rbx
  __int64 v11; // rcx
  struct ID2D1Effect *v12; // rbx
  float v13; // xmm5_4
  float v14; // xmm4_4
  float v15; // xmm3_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  float v18; // xmm0_4
  int v20; // r9d
  unsigned int v21; // [rsp+20h] [rbp-60h]
  struct ID2D1Bitmap1 *v22; // [rsp+30h] [rbp-50h] BYREF
  struct ID2DContext *v23; // [rsp+38h] [rbp-48h]
  _DWORD v24[2]; // [rsp+40h] [rbp-40h] BYREF
  struct ID2D1Effect *v25; // [rsp+48h] [rbp-38h] BYREF
  float v26; // [rsp+50h] [rbp-30h]
  float v27; // [rsp+54h] [rbp-2Ch]
  _DWORD v28[4]; // [rsp+58h] [rbp-28h] BYREF

  v22 = 0LL;
  v25 = 0LL;
  if ( a2 )
    v4 = (struct CDrawingContext *)((char *)a2 + 56);
  else
    v4 = 0LL;
  v5 = *((_QWORD *)this + 1);
  v6 = (struct ID2DContext *)*((_QWORD *)a2 + 47);
  v7 = *((_DWORD *)this + 29);
  v24[0] = *((_DWORD *)this + 28);
  v24[1] = v7;
  v23 = v6;
  v8 = (*(__int64 (__fastcall **)(__int64, struct ID2D1Bitmap1 **))(*(_QWORD *)v5 + 112LL))(v5, &v22);
  v9 = v8;
  if ( v8 < 0 )
  {
    v21 = 166;
LABEL_17:
    v20 = v8;
LABEL_19:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, v21);
    goto LABEL_11;
  }
  v10 = v23;
  if ( g_LockAndReadLayer )
    (*(void (__fastcall **)(_QWORD, struct ID2DContext *, char *))(**((_QWORD **)this + 1) + 168LL))(
      *((_QWORD *)this + 1),
      v23,
      (char *)a2 + 56);
  CFilterEffect::GetD2DEffectNoRef(*((CFilterEffect **)this + 13), v22, v10, v4, &v25);
  v12 = v25;
  if ( !v25 )
    goto LABEL_9;
  v13 = *((float *)this + 29);
  v14 = *((float *)this + 30);
  v15 = *((float *)this + 31);
  v16 = (float)*((int *)this + 4);
  LODWORD(v25) = *((_DWORD *)this + 28);
  v17 = *(float *)&v25 - v16;
  *((float *)&v25 + 1) = v13;
  v18 = (float)*((int *)this + 5);
  *(float *)v28 = v17;
  *(float *)&v28[1] = v13 - v18;
  *(float *)&v28[2] = v14 + v17;
  v26 = v14 + *(float *)&v25;
  v27 = v15 + v13;
  *(float *)&v28[3] = v15 + (float)(v13 - v18);
  v8 = CDrawingContext::PushGpuClipRectInternal((_DWORD)a2, 0, (unsigned int)&v25, 1, 1, 0);
  v9 = v8;
  if ( v8 < 0 )
  {
    v21 = 205;
    goto LABEL_17;
  }
  v9 = CDrawingContext::FillEffect(a2, (__int64)v12, (__int64)v28, (__int64)v24);
  CDrawingContext::PopGpuClipRectInternal(a2, 0);
  if ( v9 < 0 )
  {
    v21 = 219;
    v20 = v9;
    goto LABEL_19;
  }
LABEL_9:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    TemplateEventDescriptor(v11, &EVTDESC_ETWGUID_LAYEREVENT_EndExternalLayer_Stop);
LABEL_11:
  if ( v22 )
    (*(void (__fastcall **)(struct ID2D1Bitmap1 *))(*(_QWORD *)v22 + 16LL))(v22);
  return (unsigned int)v9;
}
