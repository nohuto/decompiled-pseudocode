/*
 * XREFs of ?FindDDAHwndRenderTargetByDisplay@CDesktopRenderTarget@@AEAAPEAVCHwndRenderTarget@@PEBVCDisplay@@@Z @ 0x18011D8F0
 * Callers:
 *     ?HandleDDAArivalOrDeparture@CDesktopRenderTarget@@EEAAJXZ @ 0x18011DB40 (-HandleDDAArivalOrDeparture@CDesktopRenderTarget@@EEAAJXZ.c)
 *     ?RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x18011E054 (-RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

struct CHwndRenderTarget *__fastcall CDesktopRenderTarget::FindDDAHwndRenderTargetByDisplay(
        CDesktopRenderTarget *this,
        const struct CDisplay *a2)
{
  __int64 v2; // rdi
  unsigned int v5; // ebx
  const struct CDisplay **v6; // rcx

  v2 = 0LL;
  v5 = 0;
  if ( *((_DWORD *)this + 46) )
  {
    while ( 1 )
    {
      v6 = *(const struct CDisplay ***)(*((_QWORD *)this + 20) + 8LL * v5);
      if ( v6[19] == a2 )
      {
        if ( (*((unsigned __int8 (__fastcall **)(const struct CDisplay **))*v6 + 18))(v6) )
          break;
      }
      if ( ++v5 >= *((_DWORD *)this + 46) )
        return (struct CHwndRenderTarget *)v2;
    }
    return *(struct CHwndRenderTarget **)(*((_QWORD *)this + 20) + 8LL * v5);
  }
  return (struct CHwndRenderTarget *)v2;
}
