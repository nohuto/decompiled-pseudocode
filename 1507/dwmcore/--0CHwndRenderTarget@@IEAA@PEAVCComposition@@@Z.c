/*
 * XREFs of ??0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18004D580
 * Callers:
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ @ 0x1800494B0 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180049850 (-CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?ProcessCreate@CDcompRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGET_CREATE@@@Z @ 0x180060C9C (-ProcessCreate@CDcompRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGET_CREATE@.c)
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18006D070 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 *     ??0CHwndRenderTargetDDA@@AEAA@PEAVCComposition@@@Z @ 0x1800FA770 (--0CHwndRenderTargetDDA@@AEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     <none>
 */

CHwndRenderTarget *__fastcall CHwndRenderTarget::CHwndRenderTarget(CHwndRenderTarget *this, struct CComposition *a2)
{
  CHwndRenderTarget *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CHwndRenderTarget::`vftable'{for `CResource'};
  *((_QWORD *)this + 5) = &CHwndRenderTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 6) = &CHwndRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 31) = (char *)this + 280;
  *((_QWORD *)this + 32) = (char *)this + 280;
  *((_DWORD *)this + 66) = 8;
  *(_QWORD *)((char *)this + 268) = 8LL;
  *((_QWORD *)this + 51) = (char *)this + 440;
  *((_QWORD *)this + 52) = (char *)this + 440;
  *((_DWORD *)this + 106) = 5;
  *(_QWORD *)((char *)this + 428) = 5LL;
  *((_QWORD *)this + 60) = (char *)this + 512;
  *((_QWORD *)this + 61) = (char *)this + 512;
  result = this;
  *((_DWORD *)this + 124) = 5;
  *(_QWORD *)((char *)this + 500) = 5LL;
  *((_DWORD *)this + 50) = 0;
  *((_DWORD *)this + 55) = 0;
  *((_WORD *)this + 280) = 257;
  *((_DWORD *)this + 59) = 1065353216;
  *((_BYTE *)this + 240) = 1;
  *((_DWORD *)this + 30) = 1;
  *(_OWORD *)((char *)this + 132) = IdentityMatrix;
  *(_OWORD *)((char *)this + 148) = xmmword_180190B10;
  *(_OWORD *)((char *)this + 164) = xmmword_180190B20;
  *(_OWORD *)((char *)this + 180) = xmmword_180190B30;
  *((_QWORD *)this + 72) = 0LL;
  *((_QWORD *)this + 73) = 0LL;
  return result;
}
