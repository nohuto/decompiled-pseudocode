/*
 * XREFs of RIMLockExclusive @ 0x1C0046AF0
 * Callers:
 *     RIMFindSiblingMouseDevice @ 0x1C000587C (RIMFindSiblingMouseDevice.c)
 *     RIMReadInput @ 0x1C0006150 (RIMReadInput.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x1C00063A4 (rimHandleAnyPnpRemovePendingDevices.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C00065F0 (RIMRegisterForInputWithCallbacks.c)
 *     RIMIDEAdoptOrphanedRimDevs @ 0x1C0006FA0 (RIMIDEAdoptOrphanedRimDevs.c)
 *     RIMOnMonitorNotification @ 0x1C0008E10 (RIMOnMonitorNotification.c)
 *     RIMUnregisterForInput @ 0x1C000A470 (RIMUnregisterForInput.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C000AEE4 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     RawInputManagerObjectDelete @ 0x1C000CC50 (RawInputManagerObjectDelete.c)
 *     RIMDeviceClassNotify @ 0x1C000FE30 (RIMDeviceClassNotify.c)
 *     rimOnPnpArrived @ 0x1C0010120 (rimOnPnpArrived.c)
 *     RIMDoOnPnpNotification @ 0x1C00108E0 (RIMDoOnPnpNotification.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C0010980 (RIMAddNonPnpDeviceOfType.c)
 *     rimAddToObTrackList @ 0x1C0010FCC (rimAddToObTrackList.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C00113D0 (RIMDirectStartStopDeviceRead.c)
 *     RIMOnProcessDestroy @ 0x1C0046810 (RIMOnProcessDestroy.c)
 *     RIMUnregisterCurrentProcessForInput @ 0x1C0046860 (RIMUnregisterCurrentProcessForInput.c)
 *     RIMWatchDog @ 0x1C0046A10 (RIMWatchDog.c)
 *     RIMDirectPnpRemoveDevicesOfType @ 0x1C007B4C0 (RIMDirectPnpRemoveDevicesOfType.c)
 *     RIMDirectStopDeviceClassNotifications @ 0x1C007B9E0 (RIMDirectStopDeviceClassNotifications.c)
 *     rimInputApc @ 0x1C007C160 (rimInputApc.c)
 *     RIMRemoveInputOfType @ 0x1C007D4D0 (RIMRemoveInputOfType.c)
 *     rimApcIoUnregisterPlugPlayNotificationExWorker @ 0x1C007F27C (rimApcIoUnregisterPlugPlayNotificationExWorker.c)
 *     RIMOnPowerNotification @ 0x1C0085F40 (RIMOnPowerNotification.c)
 *     rimSignalReadComplete @ 0x1C0086B48 (rimSignalReadComplete.c)
 *     rimObsRouteInputAndCheckForExclusiveObservers @ 0x1C0086CD0 (rimObsRouteInputAndCheckForExclusiveObservers.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0087110 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMDirectStartDeviceClassNotifications @ 0x1C00872C0 (RIMDirectStartDeviceClassNotifications.c)
 *     RIMRefreshDeviceAttributes @ 0x1C0087980 (RIMRefreshDeviceAttributes.c)
 *     RIMIDEProcessRemoveInjectionDevices @ 0x1C00C11A8 (RIMIDEProcessRemoveInjectionDevices.c)
 *     RIMSetTestModeStatus @ 0x1C00C12E0 (RIMSetTestModeStatus.c)
 *     RIMWalkDeviceList @ 0x1C00C13A0 (RIMWalkDeviceList.c)
 *     RIMWatchDogTimerInit @ 0x1C00C1400 (RIMWatchDogTimerInit.c)
 *     rimFindReferencedRimObj @ 0x1C00C16D0 (rimFindReferencedRimObj.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C00C19A0 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddInputOfType @ 0x1C00C1DA0 (RIMAddInputOfType.c)
 *     RIMFreeInputBuffer @ 0x1C00C2080 (RIMFreeInputBuffer.c)
 *     RIMGetDevicePreparsedData @ 0x1C00C21A0 (RIMGetDevicePreparsedData.c)
 *     RIMGetDeviceProperties @ 0x1C00C2400 (RIMGetDeviceProperties.c)
 *     RIMGetDownContactCount @ 0x1C00C26A0 (RIMGetDownContactCount.c)
 *     RIMGetPhysicalDeviceRect @ 0x1C00C27D0 (RIMGetPhysicalDeviceRect.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C00C2978 (RIMIDERemoveInjectionDevice.c)
 *     RIMInjectInput @ 0x1C00C2A80 (RIMInjectInput.c)
 *     RIMIsPrimaryPointerDeviceDown @ 0x1C00C2CE0 (RIMIsPrimaryPointerDeviceDown.c)
 *     RIMOnCheckPointerDeviceMonitors @ 0x1C00C2E30 (RIMOnCheckPointerDeviceMonitors.c)
 *     RIMOnPnpNotification @ 0x1C00C2F90 (RIMOnPnpNotification.c)
 *     RIMOnTimerNotification @ 0x1C00C3300 (RIMOnTimerNotification.c)
 *     RIMRemoveInjectionDevice @ 0x1C00C36E0 (RIMRemoveInjectionDevice.c)
 *     RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1C00C3878 (RIMRemoveMouseOrKeyboardInjectionDevice.c)
 *     RIMFindReferencedSiblingPointerDeviceForMouseDevice @ 0x1C00C3DAC (RIMFindReferencedSiblingPointerDeviceForMouseDevice.c)
 *     RIMIDEInjectDeviceInput @ 0x1C00C6C04 (RIMIDEInjectDeviceInput.c)
 *     RIMIDEInjectKeyboardInput @ 0x1C00C730C (RIMIDEInjectKeyboardInput.c)
 *     RIMIDEInjectMouseInput @ 0x1C00C762C (RIMIDEInjectMouseInput.c)
 *     RIMDeviceNotify @ 0x1C00CA5D0 (RIMDeviceNotify.c)
 *     RIMSignalOnPnpNotificationAndWait @ 0x1C00CA79C (RIMSignalOnPnpNotificationAndWait.c)
 *     rimHandlePnpWaitersOnOwnedDevices @ 0x1C00CABFC (rimHandlePnpWaitersOnOwnedDevices.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C00D1390 (RIMApplyPTPConfigRemedy.c)
 *     rimObsAddInputObserver @ 0x1C00D2D04 (rimObsAddInputObserver.c)
 *     rimObsDeliverInputToObserver @ 0x1C00D3280 (rimObsDeliverInputToObserver.c)
 *     rimObsObserveNextInput @ 0x1C00D3568 (rimObsObserveNextInput.c)
 *     rimObsUpdateInputObserverRegistration @ 0x1C00D38B4 (rimObsUpdateInputObserverRegistration.c)
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
