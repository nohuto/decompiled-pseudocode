/*
 * XREFs of MmIsDriverVerifying @ 0x1400B4230
 * Callers:
 *     VfIsVerificationEnabled @ 0x1401319D0 (VfIsVerificationEnabled.c)
 *     VfXdvDriverCaptureIoCallbacks @ 0x1406FE128 (VfXdvDriverCaptureIoCallbacks.c)
 *     VfGetPristineDispatchRoutine @ 0x14070B864 (VfGetPristineDispatchRoutine.c)
 *     VfGetPristineDriverInit @ 0x14070B8AC (VfGetPristineDriverInit.c)
 *     VfDevObjPostAddDevice @ 0x14070D778 (VfDevObjPostAddDevice.c)
 *     VfDevObjPreAddDevice @ 0x14070D7C8 (VfDevObjPreAddDevice.c)
 *     IovUtilIsVerifiedDeviceStack @ 0x14070E158 (IovUtilIsVerifiedDeviceStack.c)
 * Callees:
 *     <none>
 */

LOGICAL __stdcall MmIsDriverVerifying(struct _DRIVER_OBJECT *DriverObject)
{
  _DWORD *DriverSection; // rax

  DriverSection = DriverObject->DriverSection;
  if ( DriverSection )
    LODWORD(DriverSection) = (DriverSection[26] >> 25) & 1;
  return (unsigned int)DriverSection;
}
