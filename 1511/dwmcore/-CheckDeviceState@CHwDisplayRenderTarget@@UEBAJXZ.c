/*
 * XREFs of ?CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ @ 0x180081370
 * Callers:
 *     ?CheckDeviceState@CHwndRenderTarget@@UEAAJXZ @ 0x18007C760 (-CheckDeviceState@CHwndRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?ProcessUnusable@CD3DDeviceLevel1@@QEAAX_N@Z @ 0x18002292C (-ProcessUnusable@CD3DDeviceLevel1@@QEAAX_N@Z.c)
 *     ?PresentInternal@CDWMSwapChain@@MEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x180073480 (-PresentInternal@CDWMSwapChain@@MEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180074880 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     Template_xd @ 0x1800F310C (Template_xd.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::CheckDeviceState(CHwDisplayRenderTarget *this)
{
  __int64 v1; // rdi
  __int64 v3; // rcx
  CD3DDeviceLevel1 *v4; // rbp
  CDWMSwapChain *v5; // rsi
  int v6; // ebx
  __int64 (__fastcall *v7)(CDWMSwapChain *, HRGN, unsigned int, unsigned int, struct RenderTargetPresentParameters *); // rbx
  int v8; // eax
  int v11; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this - 2);
  ++*(_DWORD *)(v1 + 504);
  *(_DWORD *)(v1 + 508) = GetCurrentThreadId();
  v4 = (CD3DDeviceLevel1 *)*((_QWORD *)this - 2);
  v5 = (CDWMSwapChain *)*((_QWORD *)this + 4);
  v6 = *((_DWORD *)v4 + 200);
  if ( v6 < 0 )
  {
    v11 = *((_DWORD *)v4 + 200);
  }
  else
  {
    v7 = *(__int64 (__fastcall **)(CDWMSwapChain *, HRGN, unsigned int, unsigned int, struct RenderTargetPresentParameters *))(*(_QWORD *)v5 + 264LL);
    if ( v7 == CDWMSwapChain::PresentInternal )
      v8 = CDWMSwapChain::PresentInternal(v5, 0LL, 0, 1u, 0LL);
    else
      v8 = v7(v5, 0LL, 0, 1u, 0LL);
    v11 = v8;
    v6 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x1016u);
  }
  if ( ((v6 - 142213121) & 0xFFFFFFF7) != 0 )
  {
    TranslateDXGIorD3DErrorInContext(v6, 1, &v11);
    v6 = v11;
    if ( v11 == -2003304307 )
      CD3DDeviceLevel1::ProcessUnusable(v4, 0);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_xd(v3, &EVTDESC_MILEVENT_MEDIA_UCE_CHECKDEVICESTATE, 0LL, (unsigned int)v6);
  if ( v6 < 0 )
    MilInstrumentationCheckHR(0x14u, &dword_18016FE48, 1u, v6, 0x3A3u);
  if ( (*(_DWORD *)(v1 + 504))-- == 1 )
    *(_DWORD *)(v1 + 508) = 0;
  return (unsigned int)v6;
}
