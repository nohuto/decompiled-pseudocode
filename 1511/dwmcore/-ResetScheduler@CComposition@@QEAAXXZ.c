/*
 * XREFs of ?ResetScheduler@CComposition@@QEAAXXZ @ 0x180094CFC
 * Callers:
 *     ?CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x18007575C (-CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@UEAAXXZ @ 0x1800B63F0 (-ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@UEAAXXZ.c)
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
