/*
 * XREFs of PiCMReleaseObjectInputData @ 0x1404DC1A8
 * Callers:
 *     PiCMValidateDeviceInstance @ 0x1404D9E1C (PiCMValidateDeviceInstance.c)
 *     PiCMGetDeviceStatus @ 0x1404DA320 (PiCMGetDeviceStatus.c)
 *     PiCMGetObjectList @ 0x1404DBFC8 (PiCMGetObjectList.c)
 *     PiCMGetRelatedDeviceInstance @ 0x14052C9A8 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMCreateObject @ 0x1406469D4 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x140646B38 (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x140646C20 (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x140646F54 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x1406470A0 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x1406472C4 (PiCMDeleteObject.c)
 *     PiCMDeviceAction @ 0x140647448 (PiCMDeviceAction.c)
 *     PiCMGetDeviceDepth @ 0x140647BF8 (PiCMGetDeviceDepth.c)
 *     PiCMGetObjectPropertyKeys @ 0x140647CD0 (PiCMGetObjectPropertyKeys.c)
 *     PiCMQueryRemove @ 0x14064810C (PiCMQueryRemove.c)
 *     PiCMUnregisterDeviceInterface @ 0x140648AF8 (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x1400C1740 (PiControlFreeUserModeCallersBuffer.c)
 */

__int64 __fastcall PiCMReleaseObjectInputData(__int64 a1)
{
  void *v1; // rdx

  v1 = *(void **)(a1 + 16);
  if ( v1 )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, v1);
  return 0LL;
}
