/*
 * XREFs of ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00CF948
 * Callers:
 *     ?ResetAccessibilityCountersOnMouseInput@@YAXXZ @ 0x1C0084F90 (-ResetAccessibilityCountersOnMouseInput@@YAXXZ.c)
 *     UserJobCallout @ 0x1C00CEC90 (UserJobCallout.c)
 *     UserDetachQueueFromInputWindowApiExt @ 0x1C00CF020 (UserDetachQueueFromInputWindowApiExt.c)
 *     ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@PEAPEAUtagWND@@@Z @ 0x1C00CF0B8 (-ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@PEAPEAUtagWND@@@Z.c)
 *     ParseDesktop @ 0x1C00CF5A4 (ParseDesktop.c)
 *     UnmapDesktop @ 0x1C00CF6E0 (UnmapDesktop.c)
 *     MapDesktop @ 0x1C00CF780 (MapDesktop.c)
 *     FreeDesktop @ 0x1C00D3310 (FreeDesktop.c)
 *     FreeWindowStation @ 0x1C00DC0E0 (FreeWindowStation.c)
 *     DestroyWindowStation @ 0x1C00F4680 (DestroyWindowStation.c)
 *     xxxProcessHidInput @ 0x1C01D6080 (xxxProcessHidInput.c)
 *     StartDeviceRead @ 0x1C01E0968 (StartDeviceRead.c)
 *     ProcessHidInputViaRim @ 0x1C022E268 (ProcessHidInputViaRim.c)
 *     UserKillTimer @ 0x1C02394D4 (UserKillTimer.c)
 *     UserSetTimer @ 0x1C023951C (UserSetTimer.c)
 *     ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x1C0261F44 (-DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z.c)
 * Callees:
 *     <none>
 */

ReEnterLeaveCrit *__fastcall ReEnterLeaveCrit::ReEnterLeaveCrit(ReEnterLeaveCrit *this)
{
  BOOLEAN IsResourceAcquiredExclusiveLite; // al

  IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresUser);
  *(_DWORD *)this = IsResourceAcquiredExclusiveLite;
  if ( !IsResourceAcquiredExclusiveLite )
    EnterCrit(0LL, 1LL);
  return this;
}
