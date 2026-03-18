/*
 * XREFs of IsCurrentDesktopComposed @ 0x1C0057DE0
 * Callers:
 *     zzzInternalSetCursorPos @ 0x1C0040BC0 (zzzInternalSetCursorPos.c)
 *     xxxButtonEvent @ 0x1C004BA34 (xxxButtonEvent.c)
 *     SetAppCompatFlags @ 0x1C00594F0 (SetAppCompatFlags.c)
 *     StoreQMessage @ 0x1C00707A0 (StoreQMessage.c)
 *     _DwmLockScreenUpdates @ 0x1C0156960 (_DwmLockScreenUpdates.c)
 *     ?xxxSmoothRotateScreen@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@PEAUDISPLAYCONFIG_MODE_INFO@@H@Z @ 0x1C01D092C (-xxxSmoothRotateScreen@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@PEAUDISPLAYCONFIG_MODE_INFO@@H@Z.c)
 *     ?ContactVisualization@@YAHKPEBUtagPOINTERINFONODE@@HK@Z @ 0x1C01DABE0 (-ContactVisualization@@YAHKPEBUtagPOINTERINFONODE@@HK@Z.c)
 *     PointerSpeedHitTest @ 0x1C022D338 (PointerSpeedHitTest.c)
 *     SpeedHitTestWithoutTargeting @ 0x1C022D488 (SpeedHitTestWithoutTargeting.c)
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
      return *(_DWORD *)(v1 + 260) & 1;
  }
  return v0;
}
