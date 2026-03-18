/*
 * XREFs of Feature_DesktopDWMCursor__private_IsEnabledDeviceUsageNoInline @ 0x14006B130
 * Callers:
 *     ?MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z @ 0x14002A724 (-MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z.c)
 *     ?MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHKPEAX_K@Z @ 0x14006AD00 (-MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHKPEAX_K@Z.c)
 *     SetMouseTrails @ 0x1400F6DA0 (SetMouseTrails.c)
 *     ?UpdateRoutingState@CursorApiRouter@@AEAA?AW4RoutingStateActionNeeded@1@_N@Z @ 0x1400F9C78 (-UpdateRoutingState@CursorApiRouter@@AEAA-AW4RoutingStateActionNeeded@1@_N@Z.c)
 * Callees:
 *     Feature_DesktopDWMCursor__private_IsEnabledFallback @ 0x1402A28F8 (Feature_DesktopDWMCursor__private_IsEnabledFallback.c)
 */

__int64 Feature_DesktopDWMCursor__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DesktopDWMCursor__private_featureState & 0x10) != 0 )
    return Feature_DesktopDWMCursor__private_featureState & 1;
  else
    return Feature_DesktopDWMCursor__private_IsEnabledFallback(
             (unsigned int)Feature_DesktopDWMCursor__private_featureState,
             3LL);
}
