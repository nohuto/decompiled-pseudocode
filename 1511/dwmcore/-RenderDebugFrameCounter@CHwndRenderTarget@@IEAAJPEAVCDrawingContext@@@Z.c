/*
 * XREFs of ?RenderDebugFrameCounter@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1801063B8
 * Callers:
 *     ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x18007E1D0 (-Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036DF0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?NotifyRenderedRect@CHwndRenderTarget@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800F3D6C (-NotifyRenderedRect@CHwndRenderTarget@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@PEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x1801032E0 (-Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@PEAV-$CMatrix@UPageInPixels@Coor.c)
 *     ?GetCPUTimePerFrame@CDebugFrameCounter@@QEAAIXZ @ 0x18010396C (-GetCPUTimePerFrame@CDebugFrameCounter@@QEAAIXZ.c)
 *     ?GetFrameRate@CDebugFrameCounter@@QEAAIXZ @ 0x1801039E8 (-GetFrameRate@CDebugFrameCounter@@QEAAIXZ.c)
 *     Template_qx @ 0x18010669C (Template_qx.c)
 */

__int64 __fastcall CHwndRenderTarget::RenderDebugFrameCounter(
        CHwndRenderTarget *this,
        struct CDrawingContext *a2,
        double a3)
{
  unsigned int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned int FrameRate; // edi
  unsigned int CPUTimePerFrame; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // r14d
  int v14; // eax
  float v15; // xmm0_4
  float v16; // xmm1_4
  float v17; // xmm2_4
  float v18; // xmm3_4
  int v19; // eax
  __int128 v21; // [rsp+40h] [rbp-30h] BYREF
  float v22; // [rsp+50h] [rbp-20h] BYREF
  float v23; // [rsp+54h] [rbp-1Ch]
  float v24; // [rsp+58h] [rbp-18h]
  float v25; // [rsp+5Ch] [rbp-14h]

  v5 = 0;
  (*(void (__fastcall **)(_QWORD, float *))(**((_QWORD **)this + 11) + 256LL))(*((_QWORD *)this + 11), &v22);
  v7 = *((_QWORD *)this + 2);
  v8 = *(_QWORD *)(v7 + 488);
  if ( !v8 )
    goto LABEL_7;
  FrameRate = CDebugFrameCounter::GetFrameRate(*(CDebugFrameCounter **)(v7 + 488), v6, a3);
  CPUTimePerFrame = CDebugFrameCounter::GetCPUTimePerFrame((CDebugFrameCounter *)v8);
  v13 = CPUTimePerFrame;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_qx(v12, v11, FrameRate, CPUTimePerFrame);
  if ( v8 == -4656
    || (v14 = CDisplayDebugFrameCounter::Display(
                (CDisplayDebugFrameCounter *)(v8 + 4656),
                FrameRate,
                v13,
                a2,
                (CHwndRenderTarget *)((char *)this + 132),
                (__int64)&v22,
                CCommonRegistryData::m_fDebugFrameCounterIsVertical != 0,
                &v21),
        v5 = v14,
        v14 >= 0) )
  {
LABEL_7:
    v15 = *(float *)&v21;
    if ( v22 > *(float *)&v21 )
    {
      v15 = v22;
      *(float *)&v21 = v22;
    }
    v16 = *((float *)&v21 + 1);
    if ( v23 > *((float *)&v21 + 1) )
    {
      v16 = v23;
      *((float *)&v21 + 1) = v23;
    }
    v17 = *((float *)&v21 + 2);
    if ( *((float *)&v21 + 2) > v24 )
    {
      v17 = v24;
      *((float *)&v21 + 2) = v24;
    }
    v18 = *((float *)&v21 + 3);
    if ( *((float *)&v21 + 3) > v25 )
    {
      v18 = v25;
      *((float *)&v21 + 3) = v25;
    }
    if ( v17 <= v15 || v18 <= v16 )
      v21 = 0uLL;
    if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v21) )
    {
      v19 = CHwndRenderTarget::NotifyRenderedRect((__int64)this, (const struct MilRectF *)&v21, 1);
      v5 = v19;
      if ( v19 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xB8Fu);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xB82u);
  }
  return v5;
}
