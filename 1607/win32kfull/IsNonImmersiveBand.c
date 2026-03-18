/*
 * XREFs of IsNonImmersiveBand @ 0x1C00AC030
 * Callers:
 *     xxxDestroyWindow @ 0x1C0071700 (xxxDestroyWindow.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C008D6F0 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     xxxSwitchDesktop @ 0x1C0095924 (xxxSwitchDesktop.c)
 *     CheckForegroundRight @ 0x1C00AA97C (CheckForegroundRight.c)
 *     ?CheckImmersiveForegroundAccess@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C00AAB58 (-CheckImmersiveForegroundAccess@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C00ABD4C (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     xxxEnableWindow @ 0x1C011B380 (xxxEnableWindow.c)
 *     IsImmersiveBandOrShellManaged @ 0x1C012D2CC (IsImmersiveBandOrShellManaged.c)
 *     xxxDestroyCorrespondingGhostWindow @ 0x1C01480A8 (xxxDestroyCorrespondingGhostWindow.c)
 *     ?_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z @ 0x1C014819C (-_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z.c)
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C0148218 (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     SnapshotWindowRects @ 0x1C01CE760 (SnapshotWindowRects.c)
 *     xxxMetricsRecalc @ 0x1C01CEDD8 (xxxMetricsRecalc.c)
 *     xxxRestoreMonitorsAndWindowsRects @ 0x1C01CF26C (xxxRestoreMonitorsAndWindowsRects.c)
 *     ?WindowArrangementApplicable@@YAHPEAUtagWND@@@Z @ 0x1C01F9A54 (-WindowArrangementApplicable@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsNonImmersiveBand(__int64 a1)
{
  int v1; // edx

  v1 = *(_DWORD *)(a1 + 304);
  return (unsigned int)(v1 - 1) <= 1 || v1 == 16;
}
