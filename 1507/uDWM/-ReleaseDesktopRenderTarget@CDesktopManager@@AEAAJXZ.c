/*
 * XREFs of ?ReleaseDesktopRenderTarget@CDesktopManager@@AEAAJXZ @ 0x18006D10C
 * Callers:
 *     ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ @ 0x18006CDBC (-NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x180017A34 (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     ?ReleaseRenderTarget@CDesktopManager@@AEAAJXZ @ 0x18001B894 (-ReleaseRenderTarget@CDesktopManager@@AEAAJXZ.c)
 *     ?SetRenderTargetForDesktops@CWindowList@@QEAAXPEAVCResource@@@Z @ 0x1800462D8 (-SetRenderTargetForDesktops@CWindowList@@QEAAXPEAVCResource@@@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CDesktopManager::ReleaseDesktopRenderTarget(CDesktopManager *this)
{
  unsigned int v1; // esi
  CResource *v3; // rcx
  int v4; // eax
  CBaseObject *v5; // rcx
  __int64 v6; // r14
  int v8; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+34h] [rbp-24h]

  v1 = 0;
  if ( *((_QWORD *)this + 8) )
  {
    CWindowList::SetRenderTargetForDesktops(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167), 0LL);
    v3 = (CResource *)*((_QWORD *)this + 8);
    v8 = 100;
    v9 = 0LL;
    v4 = CResource::Send(v3, &v8, 0xCu);
    v1 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0x3A6u);
      return v1;
    }
    v5 = (CBaseObject *)*((_QWORD *)this + 8);
    if ( v5 )
    {
      CBaseObject::Release(v5);
      *((_QWORD *)this + 8) = 0LL;
    }
  }
  CDesktopManager::ReleaseRenderTarget(this);
  v6 = *((_QWORD *)this + 9);
  if ( v6 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 16LL))(*((_QWORD *)this + 9));
    *((_QWORD *)this + 9) = 0LL;
  }
  return v1;
}
