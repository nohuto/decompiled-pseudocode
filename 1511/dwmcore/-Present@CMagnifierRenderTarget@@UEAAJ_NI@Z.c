/*
 * XREFs of ?Present@CMagnifierRenderTarget@@UEAAJ_NI@Z @ 0x1801084D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ @ 0x180094744 (-GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ.c)
 *     ?Slice@CMagnifierRenderTarget@@MEAAJXZ @ 0x1801087B0 (-Slice@CMagnifierRenderTarget@@MEAAJXZ.c)
 */

__int64 __fastcall CMagnifierRenderTarget::Present(CComposition **this)
{
  struct IRenderTargetDesktop *PrimaryDesktopRenderTargetNoRef; // rax

  if ( *((_BYTE *)this + 580) )
  {
    PrimaryDesktopRenderTargetNoRef = CComposition::GetPrimaryDesktopRenderTargetNoRef(*(this - 3));
    if ( !PrimaryDesktopRenderTargetNoRef
      || (*(unsigned __int8 (__fastcall **)(struct IRenderTargetDesktop *))(*(_QWORD *)PrimaryDesktopRenderTargetNoRef
                                                                          + 224LL))(PrimaryDesktopRenderTargetNoRef) )
    {
      CMagnifierRenderTarget::Slice((CMagnifierRenderTarget *)(this - 5));
    }
  }
  return 0LL;
}
