/*
 * XREFs of ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C009A5A8
 * Callers:
 *     UserJobCallout @ 0x1C00995A0 (UserJobCallout.c)
 *     UserDetachQueueFromInputWindowApiExt @ 0x1C0099CB0 (UserDetachQueueFromInputWindowApiExt.c)
 *     ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@PEAPEAUtagWND@@@Z @ 0x1C0099D38 (-ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@PEAPEAUtagWND@@@Z.c)
 *     ParseDesktop @ 0x1C009A204 (ParseDesktop.c)
 *     UnmapDesktop @ 0x1C009A340 (UnmapDesktop.c)
 *     MapDesktop @ 0x1C009A3E0 (MapDesktop.c)
 *     ?ResetAccessibilityCountersOnMouseInput@@YAXXZ @ 0x1C00E0434 (-ResetAccessibilityCountersOnMouseInput@@YAXXZ.c)
 *     FreeWindowStation @ 0x1C00F92C0 (FreeWindowStation.c)
 *     DestroyWindowStation @ 0x1C0114480 (DestroyWindowStation.c)
 *     FreeDesktop @ 0x1C0132F10 (FreeDesktop.c)
 *     xxxProcessHidInput @ 0x1C01CCFA0 (xxxProcessHidInput.c)
 *     StartDeviceRead @ 0x1C01D6BC0 (StartDeviceRead.c)
 *     ProcessHidInputViaRim @ 0x1C0229C44 (ProcessHidInputViaRim.c)
 *     ?xxxRouteSyntheticTouchpadToMT@@YAHIUtagPOINT@@0_K@Z @ 0x1C0229DE0 (-xxxRouteSyntheticTouchpadToMT@@YAHIUtagPOINT@@0_K@Z.c)
 *     UserKillTimer @ 0x1C0231530 (UserKillTimer.c)
 *     UserSetTimer @ 0x1C0231578 (UserSetTimer.c)
 *     ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x1C025F908 (-DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z.c)
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
