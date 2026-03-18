/*
 * XREFs of ?DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N222@Z @ 0x18004BCA8
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18004BE00 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 * Callees:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x18002F750 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x180030040 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x180031110 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?DesktopRectToRenderTargetRect@CHwndRenderTarget@@IEAAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18004AAB0 (-DesktopRectToRenderTargetRect@CHwndRenderTarget@@IEAAXPEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?IsEquivalentTo@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18004DE38 (-IsEquivalentTo@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004E0A0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?HasVirtualModeScale@CDisplay@@QEBA_NXZ @ 0x180057B50 (-HasVirtualModeScale@CDisplay@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 *     TemplateEventDescriptor @ 0x1800E1E38 (TemplateEventDescriptor.c)
 *     ?RenderTargetRectToDesktopRect@CHwndRenderTarget@@IEAAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800EAAE0 (-RenderTargetRectToDesktopRect@CHwndRenderTarget@@IEAAXPEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x1800F39B0 (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 *     ?PopStereoContext@CDrawingContext@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F3C80 (-PopStereoContext@CDrawingContext@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?PushStereoContext@CDrawingContext@@QEAAJW4StereoContext@@_N@Z @ 0x1800F42BC (-PushStereoContext@CDrawingContext@@QEAAJW4StereoContext@@_N@Z.c)
 */

__int64 __fastcall CHwndRenderTarget::DrawVisualTree(
        __int64 a1,
        CDrawingContext *a2,
        float *a3,
        int a4,
        char a5,
        char a6,
        __int64 a7,
        char a8)
{
  char v11; // di
  char v12; // r15
  __int64 v13; // r8
  int v14; // eax
  unsigned int v15; // ebx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  int v28; // [rsp+68h] [rbp-69h] BYREF
  _DWORD v29[11]; // [rsp+6Ch] [rbp-65h] BYREF
  _DWORD v30[4]; // [rsp+98h] [rbp-39h] BYREF
  float v31[4]; // [rsp+A8h] [rbp-29h] BYREF
  __int128 v32; // [rsp+B8h] [rbp-19h] BYREF

  v28 = 0;
  v11 = 0;
  v12 = 0;
  memset_0(v29, 0, 0x28uLL);
  if ( *(_QWORD *)(a1 + 96) && !*(_BYTE *)(a1 + 567) )
  {
    LOBYTE(v13) = 1;
    v17 = CDrawingContext::PushStereoContext(a2, 1LL, v13);
    v15 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x436u);
      return v15;
    }
    v11 = 1;
  }
  if ( CDisplay::HasVirtualModeScale(*(CDisplay **)(a1 + 80)) )
  {
    v28 = 17;
    v29[0] = 6;
    v29[3] = 1;
    v18 = CDrawingContext::PushRenderOptionsInternal(a2, 0LL, (const struct MilRenderOptions *)&v28, 1);
    v15 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x442u);
      return v15;
    }
    v12 = 1;
  }
  v14 = CDrawingContext::DrawVisualTree(a2, *(_QWORD *)(a1 + 56), a3, *(_QWORD *)(a1 + 552), a4, a5, v12, a6, 0, a8, 0);
  v15 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x44Fu);
  }
  else
  {
    if ( v12 )
      CDrawingContext::PopRenderOptionsInternal(a2, 1);
    if ( v11 )
    {
      v19 = CDrawingContext::PopStereoContext(a2, v30);
      v15 = v19;
      if ( v19 >= 0 )
      {
        if ( *(_BYTE *)(a1 + 571) )
        {
          v30[3] = 0;
          v30[2] = 0;
          v30[1] = 0;
          v30[0] = 0;
        }
        CHwndRenderTarget::RenderTargetRectToDesktopRect(a1, v30, v31);
        if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEquivalentTo(a3, v31)
          || (CHwndRenderTarget::DesktopRectToRenderTargetRect(a1, (const struct MilRectF *)a3, &v32),
              CDrawingContext::FlushD2D(a2),
              v20 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, _DWORD *))(**(_QWORD **)(a1 + 96) + 24LL))(
                      *(_QWORD *)(a1 + 96),
                      &v32,
                      v30),
              v15 = v20,
              v20 >= 0) )
        {
          if ( !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(v31) )
          {
            v21 = CDrawingContext::PushStereoContext(a2, 2LL, 0LL);
            v15 = v21;
            if ( v21 >= 0 )
            {
              if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
                TemplateEventDescriptor(v22, &EVTDESC_ETWGUID_STEREO_RIGHTCHANNELRENDEREVENT_Start);
              if ( v12
                && (v23 = CDrawingContext::PushRenderOptionsInternal(a2, 0LL, (const struct MilRenderOptions *)&v28, 1),
                    v15 = v23,
                    v23 < 0) )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x4AAu);
              }
              else
              {
                v24 = CDrawingContext::DrawVisualTree(
                        a2,
                        *(_QWORD *)(a1 + 56),
                        v31,
                        *(_QWORD *)(a1 + 552),
                        a4,
                        a5,
                        v12,
                        a6,
                        0,
                        a8,
                        0);
                v15 = v24;
                if ( v24 >= 0 )
                {
                  if ( v12 )
                    CDrawingContext::PopRenderOptionsInternal(a2, 1);
                  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
                    TemplateEventDescriptor(v25, &EVTDESC_ETWGUID_STEREO_RIGHTCHANNELRENDEREVENT_Stop);
                  v26 = CDrawingContext::PopStereoContext(a2, 0LL);
                  v15 = v26;
                  if ( v26 < 0 )
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x4BEu);
                }
                else
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0x4B5u);
                }
              }
            }
            else
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x4A4u);
            }
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x493u);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x464u);
      }
    }
  }
  return v15;
}
