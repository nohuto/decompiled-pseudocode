/*
 * XREFs of ?FindRemoteAppRenderTarget@CRenderTargetManager@@QEAAJ_KPEAPEAVCHwndRenderTarget@@@Z @ 0x1800E8A98
 * Callers:
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ @ 0x1800494B0 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?RemoveRemoteAppRenderTarget@CDesktopRenderTarget@@UEAAJ_K@Z @ 0x1800EBA80 (-RemoveRemoteAppRenderTarget@CDesktopRenderTarget@@UEAAJ_K@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CRenderTargetManager::FindRemoteAppRenderTarget(
        CRenderTargetManager *this,
        __int64 a2,
        struct CHwndRenderTarget **a3)
{
  __int64 v3; // rsi
  struct CHwndRenderTarget *v7; // rdi

  *a3 = 0LL;
  v3 = 0LL;
  if ( *((_DWORD *)this + 24) )
  {
    while ( 1 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 9) + 8 * v3) + 48LL))(
             *(_QWORD *)(*((_QWORD *)this + 9) + 8 * v3),
             36LL) )
      {
        v7 = *(struct CHwndRenderTarget **)(*((_QWORD *)this + 9) + 8 * v3);
        if ( (*(__int64 (__fastcall **)(struct CHwndRenderTarget *))(*(_QWORD *)v7 + 200LL))(v7) == a2 )
          break;
      }
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= *((_DWORD *)this + 24) )
        return 0LL;
    }
    *a3 = v7;
  }
  return 0LL;
}
