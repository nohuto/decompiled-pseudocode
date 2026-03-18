/*
 * XREFs of IsCurrentDesktopComposed @ 0x1C00DF580
 * Callers:
 *     StoreQMessage @ 0x1C0080C10 (StoreQMessage.c)
 *     zzzInternalSetCursorPos @ 0x1C00DB4DC (zzzInternalSetCursorPos.c)
 *     xxxButtonEvent @ 0x1C00DDEA4 (xxxButtonEvent.c)
 *     SetAppCompatFlags @ 0x1C00DEF80 (SetAppCompatFlags.c)
 *     _DwmLockScreenUpdates @ 0x1C0133EA0 (_DwmLockScreenUpdates.c)
 *     ?xxxSmoothRotateScreen@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@PEAUDISPLAYCONFIG_MODE_INFO@@HPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C9F78 (-xxxSmoothRotateScreen@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@PEAUDISPLAYCONFIG_MODE_INFO@@HPEAU_DXGK_.c)
 *     ?ContactVisualization@@YAHKPEBUtagPOINTERINFONODE@@HK@Z @ 0x1C01D2BA0 (-ContactVisualization@@YAHKPEBUtagPOINTERINFONODE@@HK@Z.c)
 *     PointerSpeedHitTest @ 0x1C02233A0 (PointerSpeedHitTest.c)
 *     SpeedHitTestWithoutTargeting @ 0x1C02234F0 (SpeedHitTestWithoutTargeting.c)
 * Callees:
 *     <none>
 */

__int64 IsCurrentDesktopComposed()
{
  unsigned int v0; // ecx
  __int64 v1; // rax

  v0 = 0;
  if ( grpdeskRitInput )
  {
    v1 = *(_QWORD *)(grpdeskRitInput + 8LL);
    if ( v1 )
      return *(_DWORD *)(v1 + 244) & 1;
  }
  return v0;
}
