/*
 * XREFs of ??0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18007E82C
 * Callers:
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ @ 0x180075420 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x18007575C (-CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180092F84 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 *     ?ProcessCreate@CDcompRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGET_CREATE@@@Z @ 0x1800B2C08 (-ProcessCreate@CDcompRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGET_CREATE@.c)
 *     ??0CHwndRenderTargetDDA@@AEAA@PEAVCComposition@@@Z @ 0x1801146E0 (--0CHwndRenderTargetDDA@@AEAA@PEAVCComposition@@@Z.c)
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
  *((_QWORD *)this + 30) = (char *)this + 272;
  *((_QWORD *)this + 31) = (char *)this + 272;
  *((_DWORD *)this + 64) = 8;
  *(_QWORD *)((char *)this + 260) = 8LL;
  *((_QWORD *)this + 50) = (char *)this + 432;
  *((_QWORD *)this + 51) = (char *)this + 432;
  *((_DWORD *)this + 104) = 5;
  *(_QWORD *)((char *)this + 420) = 5LL;
  *((_QWORD *)this + 59) = (char *)this + 504;
  *((_QWORD *)this + 60) = (char *)this + 504;
  result = this;
  *((_DWORD *)this + 122) = 5;
  *(_QWORD *)((char *)this + 492) = 5LL;
  *((_DWORD *)this + 50) = 0;
  *((_DWORD *)this + 55) = 0;
  *((_WORD *)this + 276) = 257;
  *((_DWORD *)this + 59) = 1065353216;
  *((_BYTE *)this + 554) = 1;
  *((_DWORD *)this + 30) = 1;
  *(_OWORD *)((char *)this + 132) = IdentityMatrix;
  *(_OWORD *)((char *)this + 148) = *(&IdentityMatrix + 1);
  *(__m256 *)((char *)this + 164) = ymmword_18019E9D0;
  *((_QWORD *)this + 72) = 0LL;
  *((_QWORD *)this + 73) = 0LL;
  return result;
}
