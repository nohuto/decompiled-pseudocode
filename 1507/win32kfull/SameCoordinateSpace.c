/*
 * XREFs of SameCoordinateSpace @ 0x1C00855C8
 * Callers:
 *     xxxButtonEvent @ 0x1C004BA34 (xxxButtonEvent.c)
 *     GetInheritedMonitor @ 0x1C005C590 (GetInheritedMonitor.c)
 *     xxxReceiveMessage @ 0x1C006D6A0 (xxxReceiveMessage.c)
 *     _GetWindowPlacement @ 0x1C0083148 (_GetWindowPlacement.c)
 *     NtUserDeferWindowPosAndBand @ 0x1C0084040 (NtUserDeferWindowPosAndBand.c)
 *     NtUserGetMenuBarInfo @ 0x1C00845A0 (NtUserGetMenuBarInfo.c)
 *     NtUserSetWindowPos @ 0x1C0084E30 (NtUserSetWindowPos.c)
 *     NtUserPhysicalToLogicalPoint @ 0x1C0085400 (NtUserPhysicalToLogicalPoint.c)
 *     ?IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z @ 0x1C00EC108 (-IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z.c)
 *     NtUserMoveWindow @ 0x1C00ED1E0 (NtUserMoveWindow.c)
 *     NtUserGetUpdateRect @ 0x1C00EFC90 (NtUserGetUpdateRect.c)
 *     xxxSetWindowPlacement @ 0x1C00F297C (xxxSetWindowPlacement.c)
 *     NtUserGetWindowMinimizeRect @ 0x1C00F94A0 (NtUserGetWindowMinimizeRect.c)
 *     ?UpdateMouseButtonTarget@@YAXPEAUtagWND@@0UtagPOINT@@PEAU2@PEA_J@Z @ 0x1C00F9990 (-UpdateMouseButtonTarget@@YAXPEAUtagWND@@0UtagPOINT@@PEAU2@PEA_J@Z.c)
 *     NtUserGetComboBoxInfo @ 0x1C01137B0 (NtUserGetComboBoxInfo.c)
 *     NtUserGetMenuItemRect @ 0x1C0118910 (NtUserGetMenuItemRect.c)
 *     _ChildWindowFromPointEx @ 0x1C011A1EC (_ChildWindowFromPointEx.c)
 *     NtUserLogicalToPerMonitorDPIPhysicalPoint @ 0x1C0122070 (NtUserLogicalToPerMonitorDPIPhysicalPoint.c)
 *     TransformRegionBetweenCoordinateSpaces @ 0x1C01E62EC (TransformRegionBetweenCoordinateSpaces.c)
 *     NtUserGetAltTabInfo @ 0x1C0219AC0 (NtUserGetAltTabInfo.c)
 *     NtUserMenuItemFromPoint @ 0x1C021E460 (NtUserMenuItemFromPoint.c)
 *     NtUserPerMonitorDPIPhysicalToLogicalPoint @ 0x1C021EA40 (NtUserPerMonitorDPIPhysicalToLogicalPoint.c)
 *     _RealChildWindowFromPoint @ 0x1C023BFBC (_RealChildWindowFromPoint.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SameCoordinateSpace(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 CurrentProcessWin32Process; // rsi
  int v5; // ecx
  int v6; // edx

  v2 = 0;
  CurrentProcessWin32Process = a1;
  if ( !a1 )
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(0LL);
  if ( !a2 )
    a2 = PsGetCurrentProcessWin32Process(a1);
  v5 = *(_DWORD *)(a2 + 776);
  v6 = *(_DWORD *)(CurrentProcessWin32Process + 776);
  if ( ((v6 ^ v5) & 0x4000) == 0 && (((unsigned __int16)v6 ^ (unsigned __int16)v5) & 0x2000) == 0 )
    return 1;
  return v2;
}
