/*
 * XREFs of PiCMReleaseObjectInputData @ 0x140442B00
 * Callers:
 *     PiCMOpenClassKey @ 0x1404428B0 (PiCMOpenClassKey.c)
 *     PiCMOpenDeviceKey @ 0x1404451DC (PiCMOpenDeviceKey.c)
 *     PiCMGetObjectList @ 0x1404DBAE4 (PiCMGetObjectList.c)
 *     PiCMValidateDeviceInstance @ 0x1404DBCC4 (PiCMValidateDeviceInstance.c)
 *     PiCMGetDeviceStatus @ 0x1404DBEC4 (PiCMGetDeviceStatus.c)
 *     PiCMOpenObjectKey @ 0x14054BB34 (PiCMOpenObjectKey.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1405506E4 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMQueryRemove @ 0x14058A87C (PiCMQueryRemove.c)
 *     PiCMDeviceAction @ 0x14058ACF4 (PiCMDeviceAction.c)
 *     PiCMGetDeviceDepth @ 0x14058D600 (PiCMGetDeviceDepth.c)
 *     PiCMCreateObject @ 0x140692170 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x1406922D4 (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x1406923BC (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x140692750 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x14069289C (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x140692AC0 (PiCMDeleteObject.c)
 *     PiCMGetObjectPropertyKeys @ 0x1406930A8 (PiCMGetObjectPropertyKeys.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x1406932CC (PiCMOpenDeviceInterfaceKey.c)
 *     PiCMUnregisterDeviceInterface @ 0x1406937D4 (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMReleaseObjectInputData(__int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 16);
  if ( v1 && KeGetCurrentThread()->PreviousMode )
    ExFreePoolWithTag(v1, 0);
  return 0LL;
}
