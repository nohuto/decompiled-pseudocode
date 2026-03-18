/*
 * XREFs of ??0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x180075B68
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?ProcessCreate@CDcompRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGET_CREATE@@@Z @ 0x1800B6F68 (-ProcessCreate@CDcompRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGET_CREATE@.c)
 *     ?CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x18011D3C8 (-CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ??0CHwndRenderTargetRemoteApp@@QEAA@PEAVCComposition@@@Z @ 0x18012D730 (--0CHwndRenderTargetRemoteApp@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CHwndRenderTargetDDA@@AEAA@PEAVCComposition@@@Z @ 0x18012DC08 (--0CHwndRenderTargetDDA@@AEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??0CRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1800B8344 (--0CRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 */

CHwndRenderTarget *__fastcall CHwndRenderTarget::CHwndRenderTarget(CHwndRenderTarget *this, struct CComposition *a2)
{
  CHwndRenderTarget *result; // rax

  CRenderTarget::CRenderTarget(this, a2);
  *(_QWORD *)this = &CHwndRenderTarget::`vftable'{for `CResource'};
  *((_QWORD *)this + 14) = &CHwndRenderTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 15) = &CHwndRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_DWORD *)this + 67) = 0;
  *((_DWORD *)this + 84) = 0;
  *((_QWORD *)this + 54) = (char *)this + 464;
  *((_QWORD *)this + 55) = (char *)this + 464;
  *((_DWORD *)this + 112) = 8;
  *(_QWORD *)((char *)this + 452) = 8LL;
  *((_QWORD *)this + 74) = (char *)this + 624;
  *((_QWORD *)this + 75) = (char *)this + 624;
  *((_DWORD *)this + 152) = 5;
  *(_QWORD *)((char *)this + 612) = 5LL;
  *((_QWORD *)this + 83) = (char *)this + 696;
  *((_QWORD *)this + 84) = (char *)this + 696;
  *((_DWORD *)this + 170) = 5;
  *(_QWORD *)((char *)this + 684) = 5LL;
  *((_DWORD *)this + 86) = 0;
  *((_DWORD *)this + 91) = 0;
  *((_WORD *)this + 373) = 257;
  *((_DWORD *)this + 95) = 1065353216;
  *((_BYTE *)this + 744) = 1;
  *((_DWORD *)this + 48) = 1;
  *(_OWORD *)((char *)this + 204) = CMILMatrix::Identity;
  *(_OWORD *)((char *)this + 220) = xmmword_1801EAD20;
  *(_OWORD *)((char *)this + 236) = xmmword_1801EAD30;
  *(_OWORD *)((char *)this + 252) = xmmword_1801EAD40;
  *((_DWORD *)this + 67) = dword_1801EAD50;
  result = this;
  *((_QWORD *)this + 96) = 0LL;
  *((_QWORD *)this + 97) = 0LL;
  return result;
}
