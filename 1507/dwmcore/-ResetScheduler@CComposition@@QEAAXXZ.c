/*
 * XREFs of ?ResetScheduler@CComposition@@QEAAXXZ @ 0x1800683F8
 * Callers:
 *     ?CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180049850 (-CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z @ 0x180049DC4 (-AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z.c)
 *     ?ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@UEAAXXZ @ 0x18008DBD0 (-ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@UEAAXXZ.c)
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
