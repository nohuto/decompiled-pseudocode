/*
 * XREFs of ?RenderLayer@CTreeEffectLayer@@QEAAJPEAVCDrawingContext@@@Z @ 0x18012FD40
 * Callers:
 *     ?RestoreState@CTreeEffectLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18012FFF0 (-RestoreState@CTreeEffectLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M@Z @ 0x18000388C (-PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M@Z.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x1800057C0 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x18005B548 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x18006BD60 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N3@Z @ 0x18006DE9C (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18006E5B0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18006E9A0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x18006F114 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     TemplateEventDescriptor @ 0x1800BCF6C (TemplateEventDescriptor.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?PopAlpha@CDrawingContext@@AEAAXXZ @ 0x180107360 (-PopAlpha@CDrawingContext@@AEAAXXZ.c)
 *     ?GetTreeEffectInternal@CVisual@@QEBAPEAVCTreeEffect@@XZ @ 0x18010A1B0 (-GetTreeEffectInternal@CVisual@@QEBAPEAVCTreeEffect@@XZ.c)
 */

__int64 __fastcall CTreeEffectLayer::RenderLayer(CTreeEffectLayer *this, struct CDrawingContext *a2)
{
  char v4; // r12
  char v5; // r15
  float v6; // xmm0_4
  float v7; // xmm1_4
  float v8; // xmm0_4
  float v9; // xmm1_4
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  __int64 v15; // rcx
  CVisual *CurrentVisual; // rax
  struct CTreeEffect *TreeEffectInternal; // rax
  struct CTreeEffect *v18; // r14
  __int64 v19; // rcx
  __m128i v20; // xmm1
  int v21; // eax
  _BYTE v23[16]; // [rsp+30h] [rbp-59h] BYREF
  _OWORD v24[4]; // [rsp+40h] [rbp-49h] BYREF
  int v25; // [rsp+80h] [rbp-9h]
  float v26; // [rsp+90h] [rbp+7h] BYREF
  unsigned __int32 v27; // [rsp+94h] [rbp+Bh]
  float v28; // [rsp+98h] [rbp+Fh]
  float v29; // [rsp+9Ch] [rbp+13h]
  __int128 v30; // [rsp+A0h] [rbp+17h] BYREF

  v24[0] = CMILMatrix::Identity;
  v4 = 0;
  v24[1] = xmmword_1801EAD20;
  v5 = 0;
  v24[2] = xmmword_1801EAD30;
  v6 = *((float *)this + 28);
  v24[3] = xmmword_1801EAD40;
  v7 = *((float *)this + 29);
  v26 = v6;
  v8 = v6 + *((float *)this + 30);
  v27 = LODWORD(v7);
  v9 = v7 + *((float *)this + 31);
  v25 = dword_1801EAD50;
  v28 = v8;
  v29 = v9;
  v10 = CDrawingContext::PushGpuClipRectInternal((__int64)a2, 0LL, &v26, 1, 1, 0);
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x81u);
  }
  else
  {
    CMILMatrix::Translate((CMILMatrix *)v24, (float)*((int *)this + 4), (float)*((int *)this + 5), 0.0);
    v12 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)v24, 0, 1);
    v11 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x8Au);
    }
    else
    {
      v4 = 1;
      v13 = CDrawingContext::PushEffectiveAlphaForNode(a2, 0LL, 1.0);
      v11 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x8Du);
      }
      else
      {
        *((_BYTE *)a2 + 792) = 0;
        v5 = 1;
        v14 = CDrawingContext::ApplyRenderStateInternal(a2, 0);
        v11 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x92u);
        }
        else
        {
          if ( g_LockAndReadLayer )
            (*(void (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)this + 1) + 176LL))(
              *((_QWORD *)this + 1),
              *((_QWORD *)a2 + 57),
              (char *)a2 + 128);
          if ( !*((_QWORD *)this + 16) )
            goto LABEL_11;
          CurrentVisual = CDrawingContext::GetCurrentVisual((struct CDrawingContext *)((char *)a2 + 128));
          TreeEffectInternal = CVisual::GetTreeEffectInternal(CurrentVisual);
          v18 = TreeEffectInternal;
          if ( !TreeEffectInternal )
            goto LABEL_11;
          *((_QWORD *)TreeEffectInternal + 1) = this;
          v19 = *((_QWORD *)this + 16);
          v20 = _mm_cvtsi32_si128(*((_DWORD *)this + 7));
          v30 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
          v23[0] = 0;
          v26 = (float)*((int *)this + 6);
          v27 = _mm_cvtepi32_ps(v20).m128_u32[0];
          v21 = (*(__int64 (__fastcall **)(__int64, struct CDrawingContext *, float *, _BYTE *, __int128 *))(*(_QWORD *)v19 + 120LL))(
                  v19,
                  a2,
                  &v26,
                  v23,
                  &v30);
          *((_QWORD *)v18 + 1) = 0LL;
          v11 = v21;
          if ( v21 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0xB9u);
          }
          else
          {
LABEL_11:
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
              TemplateEventDescriptor(v15, &EVTDESC_ETWGUID_LAYEREVENT_EndExternalLayer_Stop);
          }
        }
      }
    }
    CDrawingContext::PopGpuClipRectInternal(a2, 0);
  }
  *((_BYTE *)a2 + 792) = 1;
  if ( v5 )
    CDrawingContext::PopAlpha(a2);
  if ( v4 )
    CDrawingContext::PopTransformInternal(a2, 1);
  return v11;
}
