/*
 * XREFs of IsShellWndManagementBehaviorEnabled @ 0x1C009E988
 * Callers:
 *     xxxTrackMouseMove @ 0x1C009DDCC (xxxTrackMouseMove.c)
 *     xxxShowWindowEx @ 0x1C009E4B4 (xxxShowWindowEx.c)
 *     IsShellParticipatesInSizing @ 0x1C009E8F0 (IsShellParticipatesInSizing.c)
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C009E938 (IsWindowSubjectToShellWindowBehavior.c)
 *     xxxDesktopRecalc @ 0x1C010DE48 (xxxDesktopRecalc.c)
 *     ?ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z @ 0x1C01F99A8 (-ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z.c)
 *     IsWindowSubjectToShellSizingPolicy @ 0x1C02025E0 (IsWindowSubjectToShellSizingPolicy.c)
 *     xxxArrangeWindow @ 0x1C0202CF4 (xxxArrangeWindow.c)
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
