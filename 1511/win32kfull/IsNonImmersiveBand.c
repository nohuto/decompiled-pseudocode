/*
 * XREFs of IsNonImmersiveBand @ 0x1C00910EC
 * Callers:
 *     xxxDestroyWindow @ 0x1C0068F30 (xxxDestroyWindow.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C006DDCC (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     CheckForegroundRight @ 0x1C008D2FC (CheckForegroundRight.c)
 *     ?CheckImmersiveForegroundAccess@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C008D54C (-CheckImmersiveForegroundAccess@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     xxxEnableWindow @ 0x1C0090D00 (xxxEnableWindow.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C0090E2C (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     xxxSwitchDesktop @ 0x1C0093754 (xxxSwitchDesktop.c)
 *     IsImmersiveBandOrShellManaged @ 0x1C00944C8 (IsImmersiveBandOrShellManaged.c)
 *     xxxDestroyCorrespondingGhostWindow @ 0x1C01424F8 (xxxDestroyCorrespondingGhostWindow.c)
 *     ?_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z @ 0x1C0142654 (-_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z.c)
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01426D0 (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     SnapshotWindowRects @ 0x1C01D78AC (SnapshotWindowRects.c)
 *     xxxMetricsRecalc @ 0x1C01D7D60 (xxxMetricsRecalc.c)
 *     xxxRestoreMonitorsAndWindowsRects @ 0x1C01D81F4 (xxxRestoreMonitorsAndWindowsRects.c)
 *     ?WindowArrangementApplicable@@YAHPEAUtagWND@@@Z @ 0x1C0202738 (-WindowArrangementApplicable@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsNonImmersiveBand(__int64 a1)
{
  int v1; // edx

  v1 = *(_DWORD *)(a1 + 304);
  return (unsigned int)(v1 - 1) <= 1 || v1 == 16;
}
