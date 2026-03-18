/*
 * XREFs of ?HasPrimary@CDesktopRenderTarget@@UEAA_NXZ @ 0x1800767D0
 * Callers:
 *     ?GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ @ 0x18003AE80 (-GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ.c)
 * Callees:
 *     ?IsPrimaryMonitor@CHwndRenderTarget@@UEBA_NXZ @ 0x180073B80 (-IsPrimaryMonitor@CHwndRenderTarget@@UEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CDesktopRenderTarget::HasPrimary(CDesktopRenderTarget *this)
{
  char v1; // bl
  unsigned int v3; // edi
  CHwndRenderTarget *v4; // rcx
  _BOOL8 (__fastcall *v5)(CHwndRenderTarget *); // rax

  v1 = 0;
  v3 = 0;
  if ( *((_DWORD *)this + 8) )
  {
    while ( 1 )
    {
      v4 = *(CHwndRenderTarget **)(*((_QWORD *)this + 1) + 8LL * v3);
      v5 = *(_BOOL8 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)v4 + 176LL);
      if ( v5 == CHwndRenderTarget::IsPrimaryMonitor
         ? CHwndRenderTarget::IsPrimaryMonitor(v4)
         : ((unsigned __int8 (*)(void))v5)() )
      {
        break;
      }
      if ( ++v3 >= *((_DWORD *)this + 8) )
        return v1;
    }
    return 1;
  }
  return v1;
}
