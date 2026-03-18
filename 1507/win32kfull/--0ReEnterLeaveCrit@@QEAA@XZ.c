/*
 * XREFs of ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C007F108
 * Callers:
 *     UserJobCallout @ 0x1C007DC90 (UserJobCallout.c)
 *     ParseDesktop @ 0x1C007ED64 (ParseDesktop.c)
 *     UnmapDesktop @ 0x1C007EEA0 (UnmapDesktop.c)
 *     MapDesktop @ 0x1C007EF40 (MapDesktop.c)
 *     DestroyWindowStation @ 0x1C00F0D70 (DestroyWindowStation.c)
 *     ?ResetAccessibilityCountersOnMouseInput@@YAXXZ @ 0x1C012D4DC (-ResetAccessibilityCountersOnMouseInput@@YAXXZ.c)
 *     FreeDesktop @ 0x1C0131160 (FreeDesktop.c)
 *     FreeWindowStation @ 0x1C0131DB0 (FreeWindowStation.c)
 *     xxxProcessHidInput @ 0x1C01D44F0 (xxxProcessHidInput.c)
 *     StartDeviceRead @ 0x1C01E0354 (StartDeviceRead.c)
 *     UserDetachQueueFromInputWindowApiExt @ 0x1C01F6B40 (UserDetachQueueFromInputWindowApiExt.c)
 *     ProcessHidInputViaRim @ 0x1C022DE3C (ProcessHidInputViaRim.c)
 *     UserKillTimer @ 0x1C02390C0 (UserKillTimer.c)
 *     UserSetTimer @ 0x1C0239108 (UserSetTimer.c)
 *     ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x1C02637B4 (-DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z.c)
 * Callees:
 *     <none>
 */

ReEnterLeaveCrit *__fastcall ReEnterLeaveCrit::ReEnterLeaveCrit(ReEnterLeaveCrit *this)
{
  BOOLEAN IsResourceAcquiredExclusiveLite; // al

  IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresUser);
  *(_DWORD *)this = IsResourceAcquiredExclusiveLite;
  if ( !IsResourceAcquiredExclusiveLite )
    EnterCrit(1LL);
  return this;
}
