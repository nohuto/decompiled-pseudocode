/*
 * XREFs of ?ReleaseDesktopRenderTarget@CDesktopManager@@AEAAJXZ @ 0x180076F3C
 * Callers:
 *     ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ @ 0x180076BEC (-NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetRenderTargetForDesktops@CWindowList@@QEAAXPEAVCResource@@@Z @ 0x1800474E4 (-SetRenderTargetForDesktops@CWindowList@@QEAAXPEAVCResource@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseRenderTarget@CDesktopManager@@AEAAJXZ @ 0x180076FF0 (-ReleaseRenderTarget@CDesktopManager@@AEAAJXZ.c)
 */

__int64 __fastcall CDesktopManager::ReleaseDesktopRenderTarget(CDesktopManager *this)
{
  unsigned int v1; // edi
  int v3; // eax
  CBaseObject *v4; // rcx
  __int64 v5; // rcx

  v1 = 0;
  if ( *((_QWORD *)this + 8) )
  {
    CWindowList::SetRenderTargetForDesktops(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 165), 0LL);
    v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 8) + 16LL) + 688LL))(
           *(_QWORD *)(*((_QWORD *)this + 8) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 8) + 24LL),
           0LL);
    v1 = v3;
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0x437u);
      return v1;
    }
    v4 = (CBaseObject *)*((_QWORD *)this + 8);
    if ( v4 )
    {
      CBaseObject::Release(v4);
      *((_QWORD *)this + 8) = 0LL;
    }
  }
  CDesktopManager::ReleaseRenderTarget(this);
  v5 = *((_QWORD *)this + 9);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    *((_QWORD *)this + 9) = 0LL;
  }
  return v1;
}
