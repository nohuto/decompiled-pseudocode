/*
 * XREFs of RawInputManagerObjectResolveHandle @ 0x1C00107E0
 * Callers:
 *     RIMAddNonPnpDeviceOfType @ 0x1C0009D90 (RIMAddNonPnpDeviceOfType.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C000A8A0 (RIMRegisterForInputWithCallbacks.c)
 *     RIMResetPointerDevices @ 0x1C000CFF0 (RIMResetPointerDevices.c)
 *     RIMDeviceIoControl @ 0x1C000FB90 (RIMDeviceIoControl.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C0010070 (RIMDirectStartStopDeviceRead.c)
 *     RIMReadInput @ 0x1C00117E0 (RIMReadInput.c)
 *     RIMRemoveInputOfType @ 0x1C007D9C0 (RIMRemoveInputOfType.c)
 *     RIMUnregisterForInput @ 0x1C007DAD0 (RIMUnregisterForInput.c)
 *     RIMDirectPnpRemoveDevicesOfType @ 0x1C007F190 (RIMDirectPnpRemoveDevicesOfType.c)
 *     RIMDirectStopDeviceClassNotifications @ 0x1C007F450 (RIMDirectStopDeviceClassNotifications.c)
 *     RIMOnPowerNotification @ 0x1C0086BF0 (RIMOnPowerNotification.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0087FB0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMDirectStartDeviceClassNotifications @ 0x1C0088380 (RIMDirectStartDeviceClassNotifications.c)
 *     RIMRefreshDeviceAttributes @ 0x1C0088A20 (RIMRefreshDeviceAttributes.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C00CE230 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddInputOfType @ 0x1C00CE630 (RIMAddInputOfType.c)
 *     RIMFreeInputBuffer @ 0x1C00CE9D0 (RIMFreeInputBuffer.c)
 *     RIMGetDevicePreparsedData @ 0x1C00CEAF0 (RIMGetDevicePreparsedData.c)
 *     RIMGetDeviceProperties @ 0x1C00CED50 (RIMGetDeviceProperties.c)
 *     RIMGetDownContactCount @ 0x1C00CF090 (RIMGetDownContactCount.c)
 *     RIMGetPhysicalDeviceRect @ 0x1C00CF1B0 (RIMGetPhysicalDeviceRect.c)
 *     RIMGetSourceProcessId @ 0x1C00CF360 (RIMGetSourceProcessId.c)
 *     RIMInjectInput @ 0x1C00CF600 (RIMInjectInput.c)
 *     RIMIsPrimaryPointerDeviceDown @ 0x1C00CF860 (RIMIsPrimaryPointerDeviceDown.c)
 *     RIMOnCheckPointerDeviceMonitors @ 0x1C00CF9B0 (RIMOnCheckPointerDeviceMonitors.c)
 *     RIMOnPnpNotification @ 0x1C00CFB10 (RIMOnPnpNotification.c)
 *     RIMOnTimerNotification @ 0x1C00CFE90 (RIMOnTimerNotification.c)
 *     RIMRemoveInjectionDevice @ 0x1C00D0310 (RIMRemoveInjectionDevice.c)
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
