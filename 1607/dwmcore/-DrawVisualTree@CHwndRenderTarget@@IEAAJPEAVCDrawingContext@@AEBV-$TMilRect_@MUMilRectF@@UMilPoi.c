/*
 * XREFs of ?DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N222@Z @ 0x180074BBC
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180074CC0 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 * Callees:
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800035A8 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?DesktopRectToRenderTargetRect@CHwndRenderTarget@@IEAAX_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800091F4 (-DesktopRectToRenderTargetRect@CHwndRenderTarget@@IEAAX_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?HasVirtualModeScale@CDisplay@@QEBA_NXZ @ 0x1800346B8 (-HasVirtualModeScale@CDisplay@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004B800 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsEquivalentTo@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18004B8AC (-IsEquivalentTo@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x18006D600 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x18006E110 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     TemplateEventDescriptor @ 0x1800BCF6C (TemplateEventDescriptor.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?PushStereoContext@CDrawingContext@@QEAAJW4StereoContext@@_N@Z @ 0x180107730 (-PushStereoContext@CDrawingContext@@QEAAJW4StereoContext@@_N@Z.c)
 *     ?PopStereoContext@CDrawingContext@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18010788C (-PopStereoContext@CDrawingContext@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?RenderTargetRectToDesktopRect@CHwndRenderTarget@@IEAAX_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180107958 (-RenderTargetRectToDesktopRect@CHwndRenderTarget@@IEAAX_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x180123580 (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 */

__int64 __fastcall CHwndRenderTarget::DrawVisualTree(
        __int64 a1,
        CDrawingContext *a2,
        struct _D3DCOLORVALUE *a3,
        int a4,
        char a5,
        char a6,
        __int64 a7,
        char a8)
{
  char v11; // r15
  char v12; // r14
  int v13; // eax
  unsigned int v14; // ebx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  __int64 v19; // rdx
  int v20; // eax
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  _DWORD v28[10]; // [rsp+68h] [rbp-69h] BYREF
  _DWORD v29[4]; // [rsp+90h] [rbp-41h] BYREF
  struct _D3DCOLORVALUE v30; // [rsp+A0h] [rbp-31h] BYREF
  __int128 v31; // [rsp+B0h] [rbp-21h] BYREF

  v11 = 0;
  v12 = 0;
  memset_0(v28, 0, sizeof(v28));
  if ( *(_QWORD *)(a1 + 168) && !*(_BYTE *)(a1 + 753) )
  {
    v16 = CDrawingContext::PushStereoContext(a2, 1LL);
    v14 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x447u);
      return v14;
    }
    v11 = 1;
  }
  if ( CDisplay::HasVirtualModeScale(*(CDisplay **)(a1 + 152)) )
  {
    v28[0] = 3;
    v28[1] = 6;
    v28[4] = 1;
    v17 = CDrawingContext::PushRenderOptionsInternal(a2, 0LL, (const struct MilRenderOptions *)v28, 1);
    v14 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x453u);
      return v14;
    }
    v12 = 1;
  }
  v13 = CDrawingContext::DrawVisualTree(a2, *(_QWORD *)(a1 + 128), a3, *(_QWORD *)(a1 + 736), a4, a5, v12, a6, 0, a8, 0);
  v14 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x460u);
  }
  else
  {
    if ( v12 )
      CDrawingContext::PopRenderOptionsInternal(a2, 1);
    if ( v11 )
    {
      v18 = CDrawingContext::PopStereoContext(a2, v29);
      v14 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x475u);
      }
      else
      {
        if ( *(_BYTE *)(a1 + 757) )
        {
          v29[3] = 0;
          v29[2] = 0;
          v29[1] = 0;
          v29[0] = 0;
        }
        CHwndRenderTarget::RenderTargetRectToDesktopRect(a1, v19, v29, &v30);
        if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEquivalentTo(&a3->r, &v30.r)
          || (CHwndRenderTarget::DesktopRectToRenderTargetRect(a1, 1, (__int64)a3, &v31),
              CDrawingContext::FlushD2D(a2),
              v20 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, _DWORD *))(**(_QWORD **)(a1 + 168) + 24LL))(
                      *(_QWORD *)(a1 + 168),
                      &v31,
                      v29),
              v14 = v20,
              v20 >= 0) )
        {
          if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(&v30.r) )
          {
            v21 = CDrawingContext::PushStereoContext(a2, 2LL);
            v14 = v21;
            if ( v21 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x4B6u);
            }
            else
            {
              if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
                TemplateEventDescriptor(v22, &EVTDESC_ETWGUID_STEREO_RIGHTCHANNELRENDEREVENT_Start);
              if ( v12
                && (v23 = CDrawingContext::PushRenderOptionsInternal(a2, 0LL, (const struct MilRenderOptions *)v28, 1),
                    v14 = v23,
                    v23 < 0) )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x4BCu);
              }
              else
              {
                v24 = CDrawingContext::DrawVisualTree(
                        a2,
                        *(_QWORD *)(a1 + 128),
                        &v30,
                        *(_QWORD *)(a1 + 736),
                        a4,
                        a5,
                        v12,
                        a6,
                        0,
                        a8,
                        0);
                v14 = v24;
                if ( v24 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0x4C7u);
                }
                else
                {
                  if ( v12 )
                    CDrawingContext::PopRenderOptionsInternal(a2, 1);
                  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
                    TemplateEventDescriptor(v25, &EVTDESC_ETWGUID_STEREO_RIGHTCHANNELRENDEREVENT_Stop);
                  v26 = CDrawingContext::PopStereoContext(a2, 0LL);
                  v14 = v26;
                  if ( v26 < 0 )
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x4D0u);
                }
              }
            }
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x4A5u);
        }
      }
    }
  }
  return v14;
}
