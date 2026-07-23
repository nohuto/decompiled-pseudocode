/*
 * XREFs of MmIsDriverVerifying @ 0x1400B20B0
 * Callers:
 *     VfIsVerificationEnabled @ 0x140131F40 (VfIsVerificationEnabled.c)
 *     VfXdvDriverCaptureIoCallbacks @ 0x1406FE128 (VfXdvDriverCaptureIoCallbacks.c)
 *     VfGetPristineDispatchRoutine @ 0x14070B894 (VfGetPristineDispatchRoutine.c)
 *     VfGetPristineDriverInit @ 0x14070B8DC (VfGetPristineDriverInit.c)
 *     VfDevObjPostAddDevice @ 0x14070D7A8 (VfDevObjPostAddDevice.c)
 *     VfDevObjPreAddDevice @ 0x14070D7F8 (VfDevObjPreAddDevice.c)
 *     IovUtilIsVerifiedDeviceStack @ 0x14070E188 (IovUtilIsVerifiedDeviceStack.c)
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
