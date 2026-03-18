/*
 * XREFs of ?HasPrimary@CDesktopRenderTarget@@UEAA_NXZ @ 0x180049080
 * Callers:
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x1800694E0 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?IsPrimaryMonitor@CHwndRenderTarget@@UEBA_NXZ @ 0x18004A550 (-IsPrimaryMonitor@CHwndRenderTarget@@UEBA_NXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
      v4 = *(bool (__fastcall **)(CHwndRenderTarget *__hidden))(**(_QWORD **)(*((_QWORD *)this + 1) + 8LL * v3) + 160LL);
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
