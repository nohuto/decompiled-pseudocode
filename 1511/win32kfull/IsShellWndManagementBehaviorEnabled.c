/*
 * XREFs of IsShellWndManagementBehaviorEnabled @ 0x1C006F5AC
 * Callers:
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C006E7C4 (IsWindowSubjectToShellWindowBehavior.c)
 *     IsShellParticipatesInSizing @ 0x1C00730E0 (IsShellParticipatesInSizing.c)
 *     xxxShowWindowEx @ 0x1C00794D0 (xxxShowWindowEx.c)
 *     xxxTrackMouseMove @ 0x1C00C6FC4 (xxxTrackMouseMove.c)
 *     xxxDesktopRecalc @ 0x1C00EF640 (xxxDesktopRecalc.c)
 *     ?ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z @ 0x1C020268C (-ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z.c)
 *     IsWindowSubjectToShellSizingPolicy @ 0x1C020B4D0 (IsWindowSubjectToShellSizingPolicy.c)
 *     xxxArrangeWindow @ 0x1C020BBA4 (xxxArrangeWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsShellWndManagementBehaviorEnabled(__int64 a1, int a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( *(_QWORD *)(a1 + 320) )
    return (a2 & *(_DWORD *)(a1 + 328)) != 0;
  return v2;
}
