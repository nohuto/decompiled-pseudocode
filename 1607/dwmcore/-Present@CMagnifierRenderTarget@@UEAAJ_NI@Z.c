/*
 * XREFs of ?Present@CMagnifierRenderTarget@@UEAAJ_NI@Z @ 0x18011EF90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ @ 0x18003AE80 (-GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?Slice@CMagnifierRenderTarget@@MEAAJXZ @ 0x18011F230 (-Slice@CMagnifierRenderTarget@@MEAAJXZ.c)
 */

__int64 __fastcall CMagnifierRenderTarget::Present(CComposition **this)
{
  struct IRenderTargetDesktop *PrimaryDesktopRenderTargetNoRef; // rax

  if ( *((_BYTE *)this + 580) )
  {
    PrimaryDesktopRenderTargetNoRef = CComposition::GetPrimaryDesktopRenderTargetNoRef(*(this - 12));
    if ( !PrimaryDesktopRenderTargetNoRef
      || (*(unsigned __int8 (__fastcall **)(struct IRenderTargetDesktop *))(*(_QWORD *)PrimaryDesktopRenderTargetNoRef
                                                                          + 216LL))(PrimaryDesktopRenderTargetNoRef) )
    {
      CMagnifierRenderTarget::Slice((CMagnifierRenderTarget *)(this - 14));
    }
  }
  return 0LL;
}
