/*
 * XREFs of ?RemoveRemoteAppRenderTarget@CDesktopRenderTarget@@UEAAJ_K@Z @ 0x1800EBA80
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x180049EC4 (-RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 *     ?Remove@?$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z @ 0x180060370 (-Remove@-$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?FindRemoteAppRenderTarget@CRenderTargetManager@@QEAAJ_KPEAPEAVCHwndRenderTarget@@@Z @ 0x1800E8A98 (-FindRemoteAppRenderTarget@CRenderTargetManager@@QEAAJ_KPEAPEAVCHwndRenderTarget@@@Z.c)
 */

__int64 __fastcall CDesktopRenderTarget::RemoveRemoteAppRenderTarget(CDesktopRenderTarget *this, __int64 a2)
{
  int RemoteAppRenderTarget; // eax
  unsigned int v5; // ebx
  struct CHwndRenderTarget *v6; // rdi
  unsigned int v7; // eax
  struct CHwndRenderTarget **i; // rdx
  struct CHwndRenderTarget *v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  while ( 1 )
  {
    RemoteAppRenderTarget = CRenderTargetManager::FindRemoteAppRenderTarget(
                              *(CRenderTargetManager **)(*((_QWORD *)this - 8) + 32LL),
                              a2,
                              &v10);
    v5 = RemoteAppRenderTarget;
    if ( RemoteAppRenderTarget < 0 )
      break;
    v6 = v10;
    if ( !v10 )
      return v5;
    CRenderTargetManager::RemoveRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)this - 8) + 32LL), v10);
    v7 = 0;
    for ( i = (struct CHwndRenderTarget **)*((_QWORD *)this + 7); v7 < *((_DWORD *)this + 20); ++i )
    {
      if ( v6 == *i )
        break;
      ++v7;
    }
    if ( v7 < *((_DWORD *)this + 20) )
    {
      DynArray<CHwndRenderTarget *,0>::Remove((__int64 *)this + 7, (__int64 *)&v10);
      (*(void (__fastcall **)(struct CHwndRenderTarget *))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, RemoteAppRenderTarget, 0x67u);
  return v5;
}
