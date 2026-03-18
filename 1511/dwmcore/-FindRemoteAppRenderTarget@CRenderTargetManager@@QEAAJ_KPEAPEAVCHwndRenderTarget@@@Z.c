/*
 * XREFs of ?FindRemoteAppRenderTarget@CRenderTargetManager@@QEAAJ_KPEAPEAVCHwndRenderTarget@@@Z @ 0x180104AF8
 * Callers:
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ @ 0x180075420 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?RemoveRemoteAppRenderTarget@CDesktopRenderTarget@@UEAAJ_K@Z @ 0x180107580 (-RemoveRemoteAppRenderTarget@CDesktopRenderTarget@@UEAAJ_K@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
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
             37LL) )
      {
        v7 = *(struct CHwndRenderTarget **)(*((_QWORD *)this + 9) + 8 * v3);
        if ( (*(__int64 (__fastcall **)(struct CHwndRenderTarget *))(*(_QWORD *)v7 + 208LL))(v7) == a2 )
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
