/*
 * XREFs of ?OnBeginTransitionRequest@CTabletModeTransition@@UEAAJXZ @ 0x180004EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800048A8 (-CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUta.c)
 *     ?_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x18000EE54 (-_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800505A6 (memset_0.c)
 */

__int64 __fastcall CTabletModeTransition::OnBeginTransitionRequest(CTabletModeTransition *this)
{
  HMONITOR v2; // rbx
  unsigned int v3; // edi
  __int64 v4; // rdx
  RECT *p_rcWork; // rax
  int DesktopSnapshotComponent; // eax
  struct CAnimationComponent *v7; // rbx
  int v8; // eax
  struct CAnimationComponent *v10; // [rsp+30h] [rbp-50h] BYREF
  POINT pt[2]; // [rsp+38h] [rbp-48h] BYREF
  tagMONITORINFO mi; // [rsp+48h] [rbp-38h] BYREF

  pt[0] = 0LL;
  v10 = 0LL;
  mi.cbSize = 40;
  v2 = MonitorFromPoint(0LL, 1u);
  memset_0(&mi.rcMonitor, 0, 0x24uLL);
  v3 = 0;
  if ( GetMonitorInfoW(v2, &mi) )
  {
    p_rcWork = &mi.rcWork;
    if ( !*((_BYTE *)this + 120) )
      p_rcWork = &mi.rcMonitor;
    *(RECT *)&pt[0].x = *p_rcWork;
    DesktopSnapshotComponent = CTransitionVisualController::CreateDesktopSnapshotComponent(
                                 *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 23),
                                 v4,
                                 (const struct tagRECT *)pt,
                                 this,
                                 (__int64 *)&v10);
    v7 = v10;
    v3 = DesktopSnapshotComponent;
    if ( DesktopSnapshotComponent < 0 )
    {
      MilInstrumentationCheckHR(
        0x14u,
        &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
        1u,
        DesktopSnapshotComponent,
        0x1339u);
    }
    else
    {
      v8 = CStoryboard::_AddAnimationComponent(this, v10);
      v3 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v8, 0x133Au);
    }
    if ( v7 )
      CBaseObject::Release(v7);
  }
  return v3;
}
