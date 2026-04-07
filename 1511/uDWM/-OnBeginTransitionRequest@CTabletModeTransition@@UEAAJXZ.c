/*
 * XREFs of ?OnBeginTransitionRequest@CTabletModeTransition@@UEAAJXZ @ 0x180001E60
 * Callers:
 *     <none>
 * Callees:
 *     ?_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x180006D04 (-_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800093FC (-CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUta.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     memset_0 @ 0x18004FF66 (memset_0.c)
 */

__int64 __fastcall CTabletModeTransition::OnBeginTransitionRequest(CTabletModeTransition *this)
{
  HMONITOR v2; // rbx
  unsigned int v3; // edi
  __int64 v4; // rdx
  RECT *p_rcWork; // rax
  int v6; // eax
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
    v6 = CTransitionVisualController::CreateDesktopSnapshotComponent(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25),
           v4,
           pt,
           this,
           &v10);
    v7 = v10;
    v3 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v6, 0x14CFu);
    }
    else
    {
      v8 = CStoryboard::_AddAnimationComponent(this, v10);
      v3 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v8, 0x14D0u);
    }
    if ( v7 )
      CBaseObject::Release(v7);
  }
  return v3;
}
