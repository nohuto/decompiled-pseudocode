/*
 * XREFs of ?FindDDAHwndRenderTargetByDisplay@CDesktopRenderTarget@@AEAAPEAVCHwndRenderTarget@@PEBVCDisplay@@@Z @ 0x1800EB508
 * Callers:
 *     ?RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x18008DA98 (-RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?HandleDDAArivalOrDeparture@CDesktopRenderTarget@@EEAAJXZ @ 0x1800EB690 (-HandleDDAArivalOrDeparture@CDesktopRenderTarget@@EEAAJXZ.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
        if ( (*((unsigned __int8 (__fastcall **)(const struct CDisplay **))*v6 + 16))(v6) )
          break;
      }
      if ( ++v5 >= *((_DWORD *)this + 28) )
        return (struct CHwndRenderTarget *)v2;
    }
    return *(struct CHwndRenderTarget **)(*((_QWORD *)this + 11) + 8LL * v5);
  }
  return (struct CHwndRenderTarget *)v2;
}
