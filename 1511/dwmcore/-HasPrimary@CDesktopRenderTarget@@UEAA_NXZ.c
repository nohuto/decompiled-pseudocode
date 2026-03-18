/*
 * XREFs of ?HasPrimary@CDesktopRenderTarget@@UEAA_NXZ @ 0x180074CB0
 * Callers:
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x180095C70 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsPrimaryMonitor@CHwndRenderTarget@@UEBA_NXZ @ 0x18007BAA0 (-IsPrimaryMonitor@CHwndRenderTarget@@UEBA_NXZ.c)
 */

char __fastcall CDesktopRenderTarget::HasPrimary(CDesktopRenderTarget *this)
{
  char v1; // bl
  unsigned int v3; // edi
  bool (__fastcall *v4)(CHwndRenderTarget *__hidden); // rbp

  v1 = 0;
  v3 = 0;
  if ( *((_DWORD *)this + 8) )
  {
    while ( 1 )
    {
      v4 = *(bool (__fastcall **)(CHwndRenderTarget *__hidden))(**(_QWORD **)(*((_QWORD *)this + 1) + 8LL * v3) + 168LL);
      if ( v4 == CHwndRenderTarget::IsPrimaryMonitor
         ? CHwndRenderTarget::IsPrimaryMonitor(*(CHwndRenderTarget **)(*((_QWORD *)this + 1) + 8LL * v3))
         : v4(*(CHwndRenderTarget **)(*((_QWORD *)this + 1) + 8LL * v3)) )
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
