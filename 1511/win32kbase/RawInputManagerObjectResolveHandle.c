/*
 * XREFs of RawInputManagerObjectResolveHandle @ 0x1C00115F0
 * Callers:
 *     RIMReadInput @ 0x1C0006150 (RIMReadInput.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C00065F0 (RIMRegisterForInputWithCallbacks.c)
 *     RIMUnregisterForInput @ 0x1C000A470 (RIMUnregisterForInput.c)
 *     RIMDeviceIoControl @ 0x1C000ED20 (RIMDeviceIoControl.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C0010980 (RIMAddNonPnpDeviceOfType.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C00113D0 (RIMDirectStartStopDeviceRead.c)
 *     RIMDirectPnpRemoveDevicesOfType @ 0x1C007B4C0 (RIMDirectPnpRemoveDevicesOfType.c)
 *     RIMDirectStopDeviceClassNotifications @ 0x1C007B9E0 (RIMDirectStopDeviceClassNotifications.c)
 *     RIMRemoveInputOfType @ 0x1C007D4D0 (RIMRemoveInputOfType.c)
 *     RIMOnPowerNotification @ 0x1C0085F40 (RIMOnPowerNotification.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0087110 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMDirectStartDeviceClassNotifications @ 0x1C00872C0 (RIMDirectStartDeviceClassNotifications.c)
 *     RIMRefreshDeviceAttributes @ 0x1C0087980 (RIMRefreshDeviceAttributes.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C00C19A0 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddInputOfType @ 0x1C00C1DA0 (RIMAddInputOfType.c)
 *     RIMFreeInputBuffer @ 0x1C00C2080 (RIMFreeInputBuffer.c)
 *     RIMGetDevicePreparsedData @ 0x1C00C21A0 (RIMGetDevicePreparsedData.c)
 *     RIMGetDeviceProperties @ 0x1C00C2400 (RIMGetDeviceProperties.c)
 *     RIMGetDownContactCount @ 0x1C00C26A0 (RIMGetDownContactCount.c)
 *     RIMGetPhysicalDeviceRect @ 0x1C00C27D0 (RIMGetPhysicalDeviceRect.c)
 *     RIMInjectInput @ 0x1C00C2A80 (RIMInjectInput.c)
 *     RIMIsPrimaryPointerDeviceDown @ 0x1C00C2CE0 (RIMIsPrimaryPointerDeviceDown.c)
 *     RIMOnCheckPointerDeviceMonitors @ 0x1C00C2E30 (RIMOnCheckPointerDeviceMonitors.c)
 *     RIMOnPnpNotification @ 0x1C00C2F90 (RIMOnPnpNotification.c)
 *     RIMOnTimerNotification @ 0x1C00C3300 (RIMOnTimerNotification.c)
 *     RIMRemoveInjectionDevice @ 0x1C00C36E0 (RIMRemoveInjectionDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RawInputManagerObjectResolveHandle(void *a1, ACCESS_MASK a2, KPROCESSOR_MODE a3, PVOID *a4)
{
  NTSTATUS v5; // ebx
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF

  v5 = ObReferenceObjectByHandle(a1, a2, ExRawInputManagerObjectType, a3, &Object, 0LL);
  if ( v5 >= 0 )
  {
    if ( *((_DWORD *)Object + 1) == 1 )
    {
      *a4 = Object;
    }
    else
    {
      v5 = -1073741788;
      ObfDereferenceObject(Object);
    }
  }
  return (unsigned int)v5;
}
