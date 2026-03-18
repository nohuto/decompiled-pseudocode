/*
 * XREFs of ?RemoveRemoteAppRenderTarget@CDesktopRenderTarget@@UEAAJ_K@Z @ 0x18011E1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x180072E9C (-RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Remove@?$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z @ 0x1800B67A8 (-Remove@-$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?FindRemoteAppRenderTarget@CRenderTargetManager@@QEAAJ_KPEAPEAVCHwndRenderTarget@@@Z @ 0x18011B0D4 (-FindRemoteAppRenderTarget@CRenderTargetManager@@QEAAJ_KPEAPEAVCHwndRenderTarget@@@Z.c)
 *     ?Remove@?$DynArray@PEAVCBaseExpression@@$00@@QEAAHAEBQEAVCBaseExpression@@@Z @ 0x180137900 (-Remove@-$DynArray@PEAVCBaseExpression@@$00@@QEAAHAEBQEAVCBaseExpression@@@Z.c)
 */

__int64 __fastcall CDesktopRenderTarget::RemoveRemoteAppRenderTarget(CDesktopRenderTarget *this, __int64 a2)
{
  int RemoteAppRenderTarget; // eax
  unsigned int v5; // edi
  struct CHwndRenderTarget *v6; // rbx
  struct CHwndRenderTarget **v7; // rcx
  unsigned int v8; // eax
  CMILRefCountBase *v9; // rdi
  struct CHwndRenderTarget *v11; // [rsp+50h] [rbp+8h] BYREF
  CMILRefCountBase *v12; // [rsp+60h] [rbp+18h] BYREF

  v11 = 0LL;
  while ( 1 )
  {
    RemoteAppRenderTarget = CRenderTargetManager::FindRemoteAppRenderTarget(
                              *(CRenderTargetManager **)(*((_QWORD *)this - 17) + 32LL),
                              a2,
                              &v11);
    v5 = RemoteAppRenderTarget;
    if ( RemoteAppRenderTarget < 0 )
      break;
    v6 = v11;
    if ( !v11 )
      return v5;
    CRenderTargetManager::RemoveRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)this - 17) + 32LL), v11);
    v7 = (struct CHwndRenderTarget **)*((_QWORD *)this + 7);
    v8 = 0;
    if ( *((_DWORD *)this + 20) )
    {
      do
      {
        if ( v6 == *v7 )
          break;
        ++v8;
        ++v7;
      }
      while ( v8 < *((_DWORD *)this + 20) );
      if ( v8 < *((_DWORD *)this + 20) )
      {
        v9 = (CMILRefCountBase *)*((_QWORD *)v6 + 16);
        v12 = v9;
        if ( (unsigned int)DynArray<CBaseExpression *,1>::Remove((char *)this + 152, &v12) )
          CMILRefCountBase::Release(v9);
        DynArray<CHwndRenderTarget *,0>::Remove((__int64 *)this + 7, (__int64 *)&v11);
        (*(void (__fastcall **)(struct CHwndRenderTarget *))(*(_QWORD *)v6 + 16LL))(v6);
      }
    }
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, RemoteAppRenderTarget, 0x83u);
  return v5;
}
