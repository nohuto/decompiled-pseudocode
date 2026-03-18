/*
 * XREFs of IsCurrentDesktopComposed @ 0x1C00874C0
 * Callers:
 *     StoreQMessage @ 0x1C0060180 (StoreQMessage.c)
 *     xxxButtonEvent @ 0x1C0085B2C (xxxButtonEvent.c)
 *     SetAppCompatFlags @ 0x1C0086EA0 (SetAppCompatFlags.c)
 *     zzzInternalSetCursorPos @ 0x1C009A8F8 (zzzInternalSetCursorPos.c)
 *     _DwmLockScreenUpdates @ 0x1C0113270 (_DwmLockScreenUpdates.c)
 *     ?xxxSmoothRotateScreen@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@PEAUDISPLAYCONFIG_MODE_INFO@@H@Z @ 0x1C01D2528 (-xxxSmoothRotateScreen@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@PEAUDISPLAYCONFIG_MODE_INFO@@H@Z.c)
 *     ?ContactVisualization@@YAHKPEBUtagPOINTERINFONODE@@HK@Z @ 0x1C01DB1E0 (-ContactVisualization@@YAHKPEBUtagPOINTERINFONODE@@HK@Z.c)
 *     PointerSpeedHitTest @ 0x1C022D63C (PointerSpeedHitTest.c)
 *     SpeedHitTestWithoutTargeting @ 0x1C022D78C (SpeedHitTestWithoutTargeting.c)
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
