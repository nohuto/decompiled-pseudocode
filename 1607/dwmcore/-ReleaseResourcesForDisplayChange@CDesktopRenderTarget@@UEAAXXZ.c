/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@UEAAXXZ @ 0x18011E000
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@WCI@EAAXXZ @ 0x1800BF900 (-ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@WCI@EAAXXZ.c)
 * Callees:
 *     ?ResetScheduler@CComposition@@QEAAXXZ @ 0x18003B5B4 (-ResetScheduler@CComposition@@QEAAXXZ.c)
 *     ?ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ @ 0x180076C20 (-ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ.c)
 *     ?FindPrimary@CDesktopRenderTarget@@AEAAJXZ @ 0x18011D978 (-FindPrimary@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x18011E054 (-RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 */

void __fastcall CDesktopRenderTarget::ReleaseResourcesForDisplayChange(CDesktopRenderTarget *this)
{
  __int64 v1; // rax
  CDesktopRenderTarget *v3; // rcx

  v1 = *((_QWORD *)this - 12);
  v3 = (CDesktopRenderTarget *)((char *)this - 112);
  if ( *(_DWORD *)(v1 + 1104) )
  {
    CDesktopRenderTarget::ReleaseRenderTargets(v3);
    *((_BYTE *)this + 240) = 1;
  }
  else
  {
    CDesktopRenderTarget::RemoveInvalidRenderTargets(v3);
    CDesktopRenderTarget::FindPrimary((CDesktopRenderTarget *)((char *)this - 112));
    CComposition::ResetScheduler(*((CComposition **)this - 12));
  }
}
