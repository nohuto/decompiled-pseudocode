/*
 * XREFs of RIMLockExclusive @ 0x1C0052410
 * Callers:
 *     RIMOnMonitorNotification @ 0x1C0019AE0 (RIMOnMonitorNotification.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C001A680 (RIMDirectStartStopDeviceRead.c)
 *     RIMOnProcessDestroy @ 0x1C00522E0 (RIMOnProcessDestroy.c)
 *     RIMWatchDog @ 0x1C0052330 (RIMWatchDog.c)
 *     RIMOnPowerNotification @ 0x1C006E310 (RIMOnPowerNotification.c)
 *     rimSignalReadComplete @ 0x1C006EEB4 (rimSignalReadComplete.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C006F3B0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMDirectStartDeviceClassNotifications @ 0x1C006F6D0 (RIMDirectStartDeviceClassNotifications.c)
 *     RIMRefreshDeviceAttributes @ 0x1C006FF80 (RIMRefreshDeviceAttributes.c)
 *     RIMDirectPnpRemoveDevicesOfType @ 0x1C0070BA0 (RIMDirectPnpRemoveDevicesOfType.c)
 *     RIMDirectStopDeviceClassNotifications @ 0x1C0070CB0 (RIMDirectStopDeviceClassNotifications.c)
 *     RIMRemoveInputOfType @ 0x1C0071410 (RIMRemoveInputOfType.c)
 *     RIMUnregisterForInput @ 0x1C00719C0 (RIMUnregisterForInput.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C0072410 (RIMRegisterForInputWithCallbacks.c)
 *     RIMIDEAdoptOrphanedRimDevs @ 0x1C0072C84 (RIMIDEAdoptOrphanedRimDevs.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C0073508 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     RawInputManagerObjectDelete @ 0x1C00754B4 (RawInputManagerObjectDelete.c)
 *     RIMDeviceClassNotify @ 0x1C0075BD0 (RIMDeviceClassNotify.c)
 *     RIMDoOnPnpNotification @ 0x1C0076038 (RIMDoOnPnpNotification.c)
 *     rimAddToObTrackList @ 0x1C0076874 (rimAddToObTrackList.c)
 *     rimOnPnpArrived @ 0x1C00769E4 (rimOnPnpArrived.c)
 *     RIMFindSiblingMouseDevice @ 0x1C0078104 (RIMFindSiblingMouseDevice.c)
 *     RIMReadInput @ 0x1C00785F0 (RIMReadInput.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x1C00825E0 (rimHandleAnyPnpRemovePendingDevices.c)
 *     rimInputApc @ 0x1C00826A0 (rimInputApc.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C0084B00 (RIMAddNonPnpDeviceOfType.c)
 *     RIMIDEProcessRemoveInjectionDevices @ 0x1C00C05C8 (RIMIDEProcessRemoveInjectionDevices.c)
 *     RIMSetTestModeStatus @ 0x1C00C06E0 (RIMSetTestModeStatus.c)
 *     RIMWalkDeviceList @ 0x1C00C07A0 (RIMWalkDeviceList.c)
 *     RIMWatchDogTimerInit @ 0x1C00C0800 (RIMWatchDogTimerInit.c)
 *     rimFindReferencedRimObj @ 0x1C00C0AD0 (rimFindReferencedRimObj.c)
 *     rimIsValidDeviceClassNotifyContext @ 0x1C00C0C58 (rimIsValidDeviceClassNotifyContext.c)
 *     NtRIMObserveNextInput @ 0x1C00C0D60 (NtRIMObserveNextInput.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C00C0E60 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddInputOfType @ 0x1C00C1260 (RIMAddInputOfType.c)
 *     RIMFreeInputBuffer @ 0x1C00C1540 (RIMFreeInputBuffer.c)
 *     RIMGetDevicePreparsedData @ 0x1C00C1660 (RIMGetDevicePreparsedData.c)
 *     RIMGetDeviceProperties @ 0x1C00C18C0 (RIMGetDeviceProperties.c)
 *     RIMGetDownContactCount @ 0x1C00C1B60 (RIMGetDownContactCount.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C00C1C90 (RIMIDERemoveInjectionDevice.c)
 *     RIMInjectInput @ 0x1C00C1D70 (RIMInjectInput.c)
 *     RIMIsPrimaryPointerDeviceDown @ 0x1C00C1FD0 (RIMIsPrimaryPointerDeviceDown.c)
 *     RIMObserveNextInput @ 0x1C00C2110 (RIMObserveNextInput.c)
 *     RIMOnCheckPointerDeviceMonitors @ 0x1C00C2180 (RIMOnCheckPointerDeviceMonitors.c)
 *     RIMOnPnpNotification @ 0x1C00C22E0 (RIMOnPnpNotification.c)
 *     RIMOnTimerNotification @ 0x1C00C2650 (RIMOnTimerNotification.c)
 *     RIMRemoveInjectionDevice @ 0x1C00C29F0 (RIMRemoveInjectionDevice.c)
 *     RIMFindReferencedSiblingPointerDeviceForMouseDevice @ 0x1C00C2F8C (RIMFindReferencedSiblingPointerDeviceForMouseDevice.c)
 *     RIMIDEInjectDeviceInput @ 0x1C00C5D18 (RIMIDEInjectDeviceInput.c)
 *     RIMIDEInjectKeyboardInput @ 0x1C00C6438 (RIMIDEInjectKeyboardInput.c)
 *     RIMIDEInjectMouseInput @ 0x1C00C6758 (RIMIDEInjectMouseInput.c)
 *     RIMDeviceNotify @ 0x1C00C96D0 (RIMDeviceNotify.c)
 *     RIMSignalOnPnpNotificationAndWait @ 0x1C00C989C (RIMSignalOnPnpNotificationAndWait.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C00CFFB4 (RIMApplyPTPConfigRemedy.c)
 *     rimObsAddInputObserver @ 0x1C00D1204 (rimObsAddInputObserver.c)
 *     rimObsDeliverInputToObserver @ 0x1C00D1588 (rimObsDeliverInputToObserver.c)
 *     rimObsRouteInputAndCheckForExclusiveObservers @ 0x1C00D1914 (rimObsRouteInputAndCheckForExclusiveObservers.c)
 *     rimObsUpdateInputObserverRegistration @ 0x1C00D1AA0 (rimObsUpdateInputObserverRegistration.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall RIMLockExclusive(__int64 a1)
{
  struct _KTHREAD *result; // rax

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a1, 0LL);
  result = KeGetCurrentThread();
  *(_QWORD *)(a1 + 8) = result;
  return result;
}
