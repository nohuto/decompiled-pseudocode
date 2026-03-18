/*
 * XREFs of ?FindDDAHwndRenderTargetByDisplay@CDesktopRenderTarget@@AEAAPEAVCHwndRenderTarget@@PEBVCDisplay@@@Z @ 0x180106F38
 * Callers:
 *     ?RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x1800B62F8 (-RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?HandleDDAArivalOrDeparture@CDesktopRenderTarget@@EEAAJXZ @ 0x180107180 (-HandleDDAArivalOrDeparture@CDesktopRenderTarget@@EEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

struct CHwndRenderTarget *__fastcall CDesktopRenderTarget::FindDDAHwndRenderTargetByDisplay(
        CDesktopRenderTarget *this,
        const struct CDisplay *a2)
{
  __int64 v2; // rsi
  unsigned int v5; // edi
  const struct CDisplay **v6; // r14

  v2 = 0LL;
  v5 = 0;
  if ( *((_DWORD *)this + 28) )
  {
    while ( 1 )
    {
      v6 = *(const struct CDisplay ***)(*((_QWORD *)this + 11) + 8LL * v5);
      if ( v6[10] == a2 )
      {
        if ( (*((unsigned __int8 (__fastcall **)(const struct CDisplay **))*v6 + 17))(v6) )
          break;
      }
      if ( ++v5 >= *((_DWORD *)this + 28) )
        return (struct CHwndRenderTarget *)v2;
    }
    return *(struct CHwndRenderTarget **)(*((_QWORD *)this + 11) + 8LL * v5);
  }
  return (struct CHwndRenderTarget *)v2;
}
