/*
 * XREFs of ?RenderLayer@CFilterEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180012FE0
 * Callers:
 *     ?RestoreState@CFilterEffectLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800131C0 (-RestoreState@CFilterEffectLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?FillEffect@CDrawingContext@@AEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x180004788 (-FillEffect@CDrawingContext@@AEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x1800057C0 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAUID2D1Bitmap1@@PEAVID2DContext@@PEAVID2DContextOwner@@PEAPEAUID2D1Effect@@@Z @ 0x180014868 (-GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAUID2D1Bitmap1@@PEAVID2DContext@@PEAVID2DContextOwner@@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N3@Z @ 0x18006DE9C (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     TemplateEventDescriptor @ 0x1800BCF6C (TemplateEventDescriptor.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFilterEffectLayer::RenderLayer(CFilterEffectLayer *this, struct CDrawingContext *a2)
{
  struct ID2DContextOwner *v4; // r14
  int v5; // xmm0_4
  int v6; // xmm1_4
  __int64 v7; // rcx
  struct ID2DContext *v8; // r15
  int v9; // eax
  int v10; // ebx
  __int64 v11; // rcx
  struct ID2D1Effect *v12; // r14
  float v13; // xmm5_4
  float v14; // xmm4_4
  float v15; // xmm3_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  float v18; // xmm0_4
  unsigned int v20; // [rsp+20h] [rbp-60h]
  struct ID2D1Bitmap1 *v21; // [rsp+30h] [rbp-50h] BYREF
  _DWORD v22[2]; // [rsp+38h] [rbp-48h] BYREF
  struct ID2D1Effect *v23; // [rsp+40h] [rbp-40h] BYREF
  float v24; // [rsp+48h] [rbp-38h]
  float v25; // [rsp+4Ch] [rbp-34h]
  _DWORD v26[4]; // [rsp+50h] [rbp-30h] BYREF

  v21 = 0LL;
  v23 = 0LL;
  if ( a2 )
    v4 = (struct CDrawingContext *)((char *)a2 + 128);
  else
    v4 = 0LL;
  v5 = *((_DWORD *)this + 30);
  v6 = *((_DWORD *)this + 31);
  v7 = *((_QWORD *)this + 1);
  v8 = (struct ID2DContext *)*((_QWORD *)a2 + 57);
  v22[0] = v5;
  v22[1] = v6;
  v9 = (*(__int64 (__fastcall **)(__int64, struct ID2D1Bitmap1 **))(*(_QWORD *)v7 + 112LL))(v7, &v21);
  v10 = v9;
  if ( v9 < 0 )
  {
    v20 = 154;
    goto LABEL_18;
  }
  if ( g_LockAndReadLayer )
    (*(void (__fastcall **)(_QWORD, struct ID2DContext *, char *))(**((_QWORD **)this + 1) + 176LL))(
      *((_QWORD *)this + 1),
      v8,
      (char *)a2 + 128);
  CFilterEffect::GetD2DEffectNoRef(*((CFilterEffect **)this + 14), v21, v8, v4, &v23);
  v12 = v23;
  if ( v23 )
  {
    v13 = *((float *)this + 31);
    v14 = *((float *)this + 32);
    v15 = *((float *)this + 33);
    v16 = (float)*((int *)this + 4);
    LODWORD(v23) = *((_DWORD *)this + 30);
    v17 = *(float *)&v23 - v16;
    *((float *)&v23 + 1) = v13;
    v18 = (float)*((int *)this + 5);
    *(float *)v26 = v17;
    *(float *)&v26[1] = v13 - v18;
    *(float *)&v26[2] = v14 + v17;
    v24 = v14 + *(float *)&v23;
    v25 = v15 + v13;
    *(float *)&v26[3] = v15 + (float)(v13 - v18);
    v9 = CDrawingContext::PushGpuClipRectInternal((_DWORD)a2, 0, (unsigned int)&v23, 1, 1, 0);
    v10 = v9;
    if ( v9 >= 0 )
    {
      v10 = CDrawingContext::FillEffect(a2, (__int64)v12, (__int64)v26, (__int64)v22);
      CDrawingContext::PopGpuClipRectInternal(a2, 0);
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xCFu);
        goto LABEL_11;
      }
      goto LABEL_9;
    }
    v20 = 193;
LABEL_18:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, v20);
    goto LABEL_11;
  }
LABEL_9:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    TemplateEventDescriptor(v11, &EVTDESC_ETWGUID_LAYEREVENT_EndExternalLayer_Stop);
LABEL_11:
  if ( v21 )
    (*(void (__fastcall **)(struct ID2D1Bitmap1 *))(*(_QWORD *)v21 + 16LL))(v21);
  return (unsigned int)v10;
}
