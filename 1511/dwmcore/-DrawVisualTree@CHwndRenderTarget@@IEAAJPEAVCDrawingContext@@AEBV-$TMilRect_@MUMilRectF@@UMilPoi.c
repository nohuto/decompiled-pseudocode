/*
 * XREFs of ?DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N222@Z @ 0x18007D438
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x18007D530 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsEquivalentTo@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180036B84 (-IsEquivalentTo@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036DF0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x180045060 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x180045EE0 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x180046ED0 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?HasVirtualModeScale@CDisplay@@QEBA_NXZ @ 0x180070778 (-HasVirtualModeScale@CDisplay@@QEBA_NXZ.c)
 *     ?DesktopRectToRenderTargetRect@CHwndRenderTarget@@IEAAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18007C120 (-DesktopRectToRenderTargetRect@CHwndRenderTarget@@IEAAXPEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     TemplateEventDescriptor @ 0x1800BA27C (TemplateEventDescriptor.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 *     ?PushStereoContext@CDrawingContext@@QEAAJW4StereoContext@@_N@Z @ 0x1800F3A4C (-PushStereoContext@CDrawingContext@@QEAAJW4StereoContext@@_N@Z.c)
 *     ?PopStereoContext@CDrawingContext@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F3BB4 (-PopStereoContext@CDrawingContext@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?RenderTargetRectToDesktopRect@CHwndRenderTarget@@IEAAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800F3CF8 (-RenderTargetRectToDesktopRect@CHwndRenderTarget@@IEAAXPEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x18010D9C4 (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 */

__int64 __fastcall CHwndRenderTarget::DrawVisualTree(
        __int64 a1,
        CDrawingContext *a2,
        __int128 *a3,
        int a4,
        char a5,
        char a6,
        __int64 a7,
        char a8)
{
  char v11; // di
  char v12; // r15
  BOOL v13; // eax
  unsigned int v14; // ebx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  BOOL v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  int v27; // [rsp+68h] [rbp-69h] BYREF
  _DWORD v28[11]; // [rsp+6Ch] [rbp-65h] BYREF
  _DWORD v29[4]; // [rsp+98h] [rbp-39h] BYREF
  __int128 v30; // [rsp+A8h] [rbp-29h] BYREF
  __int128 v31; // [rsp+B8h] [rbp-19h] BYREF

  v27 = 0;
  v11 = 0;
  v12 = 0;
  memset_0(v28, 0, 0x28uLL);
  if ( *(_QWORD *)(a1 + 96) && !*(_BYTE *)(a1 + 560) )
  {
    v16 = CDrawingContext::PushStereoContext(a2, 1LL);
    v14 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x3F0u);
      return v14;
    }
    v11 = 1;
  }
  if ( CDisplay::HasVirtualModeScale(*(CDisplay **)(a1 + 80)) )
  {
    v27 = 3;
    v28[0] = 6;
    v28[3] = 1;
    v17 = CDrawingContext::PushRenderOptionsInternal(a2, 0LL, (const struct MilRenderOptions *)&v27, 1);
    v14 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x3FCu);
      return v14;
    }
    v12 = 1;
  }
  v13 = CDrawingContext::DrawVisualTree(a2, *(_QWORD *)(a1 + 56), a3, *(_QWORD *)(a1 + 544), a4, a5, v12, a6, 0, a8, 0);
  v14 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x409u);
  }
  else
  {
    if ( v12 )
      CDrawingContext::PopRenderOptionsInternal(a2, 1);
    if ( v11 )
    {
      v18 = CDrawingContext::PopStereoContext(a2, v29);
      v14 = v18;
      if ( v18 >= 0 )
      {
        if ( *(_BYTE *)(a1 + 564) )
        {
          v29[3] = 0;
          v29[2] = 0;
          v29[1] = 0;
          v29[0] = 0;
        }
        CHwndRenderTarget::RenderTargetRectToDesktopRect(a1, v29, &v30);
        if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEquivalentTo((float *)a3, (float *)&v30)
          || (CHwndRenderTarget::DesktopRectToRenderTargetRect(a1, (const struct MilRectF *)a3, &v31),
              CDrawingContext::FlushD2D(a2),
              v19 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, _DWORD *))(**(_QWORD **)(a1 + 96) + 24LL))(
                      *(_QWORD *)(a1 + 96),
                      &v31,
                      v29),
              v14 = v19,
              v19 >= 0) )
        {
          if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v30) )
          {
            v20 = CDrawingContext::PushStereoContext(a2, 2LL);
            v14 = v20;
            if ( v20 >= 0 )
            {
              if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
                TemplateEventDescriptor(v21, &EVTDESC_ETWGUID_STEREO_RIGHTCHANNELRENDEREVENT_Start);
              if ( v12
                && (v22 = CDrawingContext::PushRenderOptionsInternal(a2, 0LL, (const struct MilRenderOptions *)&v27, 1),
                    v14 = v22,
                    v22 < 0) )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x464u);
              }
              else
              {
                v23 = CDrawingContext::DrawVisualTree(
                        a2,
                        *(_QWORD *)(a1 + 56),
                        &v30,
                        *(_QWORD *)(a1 + 544),
                        a4,
                        a5,
                        v12,
                        a6,
                        0,
                        a8,
                        0);
                v14 = v23;
                if ( v23 >= 0 )
                {
                  if ( v12 )
                    CDrawingContext::PopRenderOptionsInternal(a2, 1);
                  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
                    TemplateEventDescriptor(v24, &EVTDESC_ETWGUID_STEREO_RIGHTCHANNELRENDEREVENT_Stop);
                  v25 = CDrawingContext::PopStereoContext(a2, 0LL);
                  v14 = v25;
                  if ( v25 < 0 )
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0x478u);
                }
                else
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x46Fu);
                }
              }
            }
            else
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x45Eu);
            }
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x44Du);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x41Eu);
      }
    }
  }
  return v14;
}
