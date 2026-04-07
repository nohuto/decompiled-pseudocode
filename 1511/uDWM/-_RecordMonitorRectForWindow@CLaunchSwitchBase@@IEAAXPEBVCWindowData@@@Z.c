/*
 * XREFs of ?_RecordMonitorRectForWindow@CLaunchSwitchBase@@IEAAXPEBVCWindowData@@@Z @ 0x180095D08
 * Callers:
 *     ?_WindowEnumCallback@CAppLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180096D90 (-_WindowEnumCallback@CAppLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CAppLaunchWithTile@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180096FC0 (-_WindowEnumCallback@CAppLaunchWithTile@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@P.c)
 *     ?_WindowEnumCallback@CAppSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800977D0 (-_WindowEnumCallback@CAppSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CLaunchSwitchBase::_RecordMonitorRectForWindow(CLaunchSwitchBase *this, const struct CWindowData *a2)
{
  const struct tagRECT *v3; // rcx

  v3 = (const struct tagRECT *)((char *)a2 + 596);
  if ( (*((_DWORD *)a2 + 144) & 0x1000000) == 0 )
    v3 = (const struct tagRECT *)((char *)a2 + 48);
  CTransitionVisualController::GetMonitorRectFromRectImpl(v3, (struct tagRECT *)((char *)this + 152));
}
