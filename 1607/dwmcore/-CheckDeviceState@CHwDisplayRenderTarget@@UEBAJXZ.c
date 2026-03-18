/*
 * XREFs of ?CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ @ 0x18008F500
 * Callers:
 *     ?CheckDeviceState@CHwndRenderTarget@@UEAAJXZ @ 0x1800745A0 (-CheckDeviceState@CHwndRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PresentInternal@CDWMSwapChain@@MEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x18007A6E0 (-PresentInternal@CDWMSwapChain@@MEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18007BBC0 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_xd @ 0x180106D50 (Template_xd.c)
 *     ?ProcessUnusable@CD3DDeviceLevel1@@QEAAXXZ @ 0x18010F230 (-ProcessUnusable@CD3DDeviceLevel1@@QEAAXXZ.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::CheckDeviceState(CHwDisplayRenderTarget *this)
{
  CD3DDeviceLevel1 *v1; // rdi
  CDWMSwapChain *v2; // r10
  int v3; // ebx
  __int64 (__fastcall *v4)(CDWMSwapChain *, HRGN, unsigned int, unsigned int, struct RenderTargetPresentParameters *); // rax
  int v5; // eax
  int v7; // [rsp+40h] [rbp+8h] BYREF

  v1 = (CD3DDeviceLevel1 *)*((_QWORD *)this + 1);
  v2 = (CDWMSwapChain *)*((_QWORD *)this + 5);
  v3 = *((_DWORD *)v1 + 206);
  if ( v3 < 0 )
  {
    v7 = *((_DWORD *)v1 + 206);
  }
  else
  {
    v4 = *(__int64 (__fastcall **)(CDWMSwapChain *, HRGN, unsigned int, unsigned int, struct RenderTargetPresentParameters *))(*(_QWORD *)v2 + 264LL);
    if ( v4 == CDWMSwapChain::PresentInternal )
      v5 = CDWMSwapChain::PresentInternal(v2, 0LL, 0, 1u, 0LL);
    else
      v5 = ((__int64 (__fastcall *)(CDWMSwapChain *, _QWORD, _QWORD, __int64))v4)(v2, 0LL, 0LL, 1LL);
    v7 = v5;
    v3 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x100Cu);
  }
  if ( ((v3 - 142213121) & 0xFFFFFFF7) != 0 )
  {
    TranslateDXGIorD3DErrorInContext(v3, 1, &v7);
    v3 = v7;
    if ( v7 == -2003304307 )
      CD3DDeviceLevel1::ProcessUnusable(v1);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_xd(this, &EVTDESC_MILEVENT_MEDIA_UCE_CHECKDEVICESTATE, 0LL, (unsigned int)v3);
  if ( v3 < 0 )
    MilInstrumentationCheckHR(0x14u, &dword_1801ACAC0, 1u, v3, 0x337u);
  return (unsigned int)v3;
}
