/*
 * XREFs of PiCMReleaseObjectInputData @ 0x140443254
 * Callers:
 *     PiCMGetObjectList @ 0x140443074 (PiCMGetObjectList.c)
 *     PiCMValidateDeviceInstance @ 0x14045BB10 (PiCMValidateDeviceInstance.c)
 *     PiCMGetDeviceStatus @ 0x14045BD84 (PiCMGetDeviceStatus.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1404F1C44 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMCreateObject @ 0x1406123AC (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x140612510 (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x1406125F8 (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x14061292C (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x140612A78 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x140612C9C (PiCMDeleteObject.c)
 *     PiCMDeviceAction @ 0x140612E20 (PiCMDeviceAction.c)
 *     PiCMGetDeviceDepth @ 0x140613584 (PiCMGetDeviceDepth.c)
 *     PiCMGetObjectPropertyKeys @ 0x14061365C (PiCMGetObjectPropertyKeys.c)
 *     PiCMQueryRemove @ 0x140613880 (PiCMQueryRemove.c)
 *     PiCMUnregisterDeviceInterface @ 0x14061426C (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMReleaseObjectInputData(__int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 16);
  if ( v1 && KeGetCurrentThread()->PreviousMode )
    ExFreePoolWithTag(v1, 0);
  return 0LL;
}
