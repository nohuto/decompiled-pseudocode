/*
 * XREFs of ?ResetScheduler@CComposition@@QEAAXXZ @ 0x18003B5B4
 * Callers:
 *     ?CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ @ 0x180076E7C (-CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x18011D3C8 (-CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@UEAAXXZ @ 0x18011E000 (-ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CComposition::ResetScheduler(CComposition *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 43);
  if ( v1 )
    *(_BYTE *)(v1 + 28) = 1;
}
