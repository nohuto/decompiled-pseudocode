/*
 * XREFs of RawInputManagerObjectResolveHandle @ 0x1C001A9C0
 * Callers:
 *     RIMDirectStartStopDeviceRead @ 0x1C001A680 (RIMDirectStartStopDeviceRead.c)
 *     RIMOnPowerNotification @ 0x1C006E310 (RIMOnPowerNotification.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C006F3B0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMDirectStartDeviceClassNotifications @ 0x1C006F6D0 (RIMDirectStartDeviceClassNotifications.c)
 *     RIMRefreshDeviceAttributes @ 0x1C006FF80 (RIMRefreshDeviceAttributes.c)
 *     RIMDirectPnpRemoveDevicesOfType @ 0x1C0070BA0 (RIMDirectPnpRemoveDevicesOfType.c)
 *     RIMDirectStopDeviceClassNotifications @ 0x1C0070CB0 (RIMDirectStopDeviceClassNotifications.c)
 *     RIMRemoveInputOfType @ 0x1C0071410 (RIMRemoveInputOfType.c)
 *     RIMUnregisterForInput @ 0x1C00719C0 (RIMUnregisterForInput.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C0072410 (RIMRegisterForInputWithCallbacks.c)
 *     RIMDeviceIoControl @ 0x1C0073240 (RIMDeviceIoControl.c)
 *     RIMReadInput @ 0x1C00785F0 (RIMReadInput.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C0084B00 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C00C0E60 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddInputOfType @ 0x1C00C1260 (RIMAddInputOfType.c)
 *     RIMFreeInputBuffer @ 0x1C00C1540 (RIMFreeInputBuffer.c)
 *     RIMGetDevicePreparsedData @ 0x1C00C1660 (RIMGetDevicePreparsedData.c)
 *     RIMGetDeviceProperties @ 0x1C00C18C0 (RIMGetDeviceProperties.c)
 *     RIMGetDownContactCount @ 0x1C00C1B60 (RIMGetDownContactCount.c)
 *     RIMInjectInput @ 0x1C00C1D70 (RIMInjectInput.c)
 *     RIMIsPrimaryPointerDeviceDown @ 0x1C00C1FD0 (RIMIsPrimaryPointerDeviceDown.c)
 *     RIMOnCheckPointerDeviceMonitors @ 0x1C00C2180 (RIMOnCheckPointerDeviceMonitors.c)
 *     RIMOnPnpNotification @ 0x1C00C22E0 (RIMOnPnpNotification.c)
 *     RIMOnTimerNotification @ 0x1C00C2650 (RIMOnTimerNotification.c)
 *     RIMRemoveInjectionDevice @ 0x1C00C29F0 (RIMRemoveInjectionDevice.c)
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
