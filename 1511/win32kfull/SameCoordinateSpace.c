/*
 * XREFs of SameCoordinateSpace @ 0x1C0075498
 * Callers:
 *     xxxReceiveMessage @ 0x1C005D110 (xxxReceiveMessage.c)
 *     GetInheritedMonitor @ 0x1C006E21C (GetInheritedMonitor.c)
 *     NtUserGetMenuBarInfo @ 0x1C0074460 (NtUserGetMenuBarInfo.c)
 *     NtUserSetWindowPos @ 0x1C0074CF0 (NtUserSetWindowPos.c)
 *     NtUserPhysicalToLogicalPoint @ 0x1C00752D0 (NtUserPhysicalToLogicalPoint.c)
 *     NtUserDeferWindowPosAndBand @ 0x1C00755B0 (NtUserDeferWindowPosAndBand.c)
 *     _GetWindowPlacement @ 0x1C0076EB4 (_GetWindowPlacement.c)
 *     xxxButtonEvent @ 0x1C0085B2C (xxxButtonEvent.c)
 *     ?IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z @ 0x1C00EB1EC (-IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z.c)
 *     NtUserMoveWindow @ 0x1C00F2880 (NtUserMoveWindow.c)
 *     NtUserGetUpdateRect @ 0x1C00F5A40 (NtUserGetUpdateRect.c)
 *     xxxSetWindowPlacement @ 0x1C00F7AE0 (xxxSetWindowPlacement.c)
 *     NtUserGetWindowMinimizeRect @ 0x1C00FF0D0 (NtUserGetWindowMinimizeRect.c)
 *     ?UpdateMouseButtonTarget@@YAXPEAUtagWND@@0UtagPOINT@@PEAU2@PEA_J@Z @ 0x1C0101F88 (-UpdateMouseButtonTarget@@YAXPEAUtagWND@@0UtagPOINT@@PEAU2@PEA_J@Z.c)
 *     NtUserGetComboBoxInfo @ 0x1C013E840 (NtUserGetComboBoxInfo.c)
 *     NtUserGetMenuItemRect @ 0x1C01439F0 (NtUserGetMenuItemRect.c)
 *     _ChildWindowFromPointEx @ 0x1C01451D0 (_ChildWindowFromPointEx.c)
 *     NtUserLogicalToPerMonitorDPIPhysicalPoint @ 0x1C014BD90 (NtUserLogicalToPerMonitorDPIPhysicalPoint.c)
 *     TransformRegionBetweenCoordinateSpaces @ 0x1C01E677C (TransformRegionBetweenCoordinateSpaces.c)
 *     xxxEndSetWindowArrangement @ 0x1C020C568 (xxxEndSetWindowArrangement.c)
 *     NtUserGetAltTabInfo @ 0x1C0219830 (NtUserGetAltTabInfo.c)
 *     NtUserMenuItemFromPoint @ 0x1C021E2A0 (NtUserMenuItemFromPoint.c)
 *     NtUserPerMonitorDPIPhysicalToLogicalPoint @ 0x1C021E840 (NtUserPerMonitorDPIPhysicalToLogicalPoint.c)
 *     NtUserSetWindowShowState @ 0x1C0220D90 (NtUserSetWindowShowState.c)
 *     _RealChildWindowFromPoint @ 0x1C023C18C (_RealChildWindowFromPoint.c)
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
