/*
 * XREFs of MmIsDriverVerifying @ 0x1400F22E4
 * Callers:
 *     VfIsVerificationEnabled @ 0x140126998 (VfIsVerificationEnabled.c)
 *     VfXdvDriverCaptureIoCallbacks @ 0x1406B2474 (VfXdvDriverCaptureIoCallbacks.c)
 *     VfGetPristineDispatchRoutine @ 0x1406BF80C (VfGetPristineDispatchRoutine.c)
 *     VfGetPristineDriverInit @ 0x1406BF854 (VfGetPristineDriverInit.c)
 *     VfDevObjPostAddDevice @ 0x1406C1710 (VfDevObjPostAddDevice.c)
 *     VfDevObjPreAddDevice @ 0x1406C1760 (VfDevObjPreAddDevice.c)
 *     IovUtilIsVerifiedDeviceStack @ 0x1406C20C8 (IovUtilIsVerifiedDeviceStack.c)
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
