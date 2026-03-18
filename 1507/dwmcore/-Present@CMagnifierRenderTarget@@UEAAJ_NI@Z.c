/*
 * XREFs of ?Present@CMagnifierRenderTarget@@UEAAJ_NI@Z @ 0x1800ECB00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ @ 0x180067F00 (-GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?Slice@CMagnifierRenderTarget@@MEAAJXZ @ 0x1800ED9C0 (-Slice@CMagnifierRenderTarget@@MEAAJXZ.c)
 */

__int64 __fastcall CMagnifierRenderTarget::Present(CComposition **this)
{
  struct IRenderTargetDesktop *PrimaryDesktopRenderTargetNoRef; // rax

  if ( *((_BYTE *)this + 604) )
  {
    PrimaryDesktopRenderTargetNoRef = CComposition::GetPrimaryDesktopRenderTargetNoRef(*(this - 3));
    if ( !PrimaryDesktopRenderTargetNoRef
      || (*(unsigned __int8 (__fastcall **)(struct IRenderTargetDesktop *))(*(_QWORD *)PrimaryDesktopRenderTargetNoRef
                                                                          + 232LL))(PrimaryDesktopRenderTargetNoRef) )
    {
      CMagnifierRenderTarget::Slice((CMagnifierRenderTarget *)(this - 5));
    }
  }
  return 0LL;
}
