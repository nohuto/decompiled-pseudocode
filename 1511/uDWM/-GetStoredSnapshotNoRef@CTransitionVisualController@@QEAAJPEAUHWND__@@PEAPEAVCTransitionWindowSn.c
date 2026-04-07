/*
 * XREFs of ?GetStoredSnapshotNoRef@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAPEAVCTransitionWindowSnapshot@@@Z @ 0x180039F08
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180009690 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x18000A73C (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?Initialize@CSecondaryWindowRepresentation@@IEAAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@@Z @ 0x180017A18 (-Initialize@CSecondaryWindowRepresentation@@IEAAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUIS.c)
 *     ?ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z @ 0x180035F88 (-ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z.c)
 *     ?OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2222@Z @ 0x18003915C (-OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARG.c)
 *     ?ResizeToSnapshot@CStoryboard@@SAXPEAUHWND__@@AEBUtagRECT@@PEAU3@@Z @ 0x180094AD4 (-ResizeToSnapshot@CStoryboard@@SAXPEAUHWND__@@AEBUtagRECT@@PEAU3@@Z.c)
 * Callees:
 *     ?GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapshot@@@Z @ 0x180039EDC (-GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapsh.c)
 *     ?_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z @ 0x180039F2C (-_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::GetStoredSnapshotNoRef(
        CTransitionVisualController *this,
        HWND a2,
        struct CTransitionWindowSnapshot **a3)
{
  int SnapshotIndex; // eax
  CTransitionVisualController *v5; // rcx

  SnapshotIndex = CTransitionVisualController::_GetSnapshotIndex(this, a2);
  return CTransitionVisualController::GetStoredSnapshotNoRefByIndex(v5, SnapshotIndex, a3);
}
