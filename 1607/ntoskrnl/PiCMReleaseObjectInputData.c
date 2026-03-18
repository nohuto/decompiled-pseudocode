/*
 * XREFs of PiCMReleaseObjectInputData @ 0x1404F921C
 * Callers:
 *     PiCMValidateDeviceInstance @ 0x1404F6E90 (PiCMValidateDeviceInstance.c)
 *     PiCMGetDeviceStatus @ 0x1404F7394 (PiCMGetDeviceStatus.c)
 *     PiCMGetObjectList @ 0x1404F903C (PiCMGetObjectList.c)
 *     PiCMGetRelatedDeviceInstance @ 0x14052C468 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMCreateObject @ 0x1406468F0 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x140646A54 (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x140646B3C (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x140646E70 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x140646FBC (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x1406471E0 (PiCMDeleteObject.c)
 *     PiCMDeviceAction @ 0x140647364 (PiCMDeviceAction.c)
 *     PiCMGetDeviceDepth @ 0x140647B14 (PiCMGetDeviceDepth.c)
 *     PiCMGetObjectPropertyKeys @ 0x140647BEC (PiCMGetObjectPropertyKeys.c)
 *     PiCMQueryRemove @ 0x140648028 (PiCMQueryRemove.c)
 *     PiCMUnregisterDeviceInterface @ 0x140648A14 (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x1400C38B0 (PiControlFreeUserModeCallersBuffer.c)
 */

__int64 __fastcall PiCMReleaseObjectInputData(__int64 a1)
{
  void *v1; // rdx

  v1 = *(void **)(a1 + 16);
  if ( v1 )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, v1);
  return 0LL;
}
