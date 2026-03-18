/*
 * XREFs of MmIsDriverVerifying @ 0x1401539A8
 * Callers:
 *     VfIsVerificationEnabled @ 0x14015A38C (VfIsVerificationEnabled.c)
 *     VfXdvDriverCaptureIoCallbacks @ 0x1407320D4 (VfXdvDriverCaptureIoCallbacks.c)
 *     VfGetPristineDispatchRoutine @ 0x140740D70 (VfGetPristineDispatchRoutine.c)
 *     VfGetPristineDriverInit @ 0x140740DB8 (VfGetPristineDriverInit.c)
 *     VfDevObjPostAddDevice @ 0x140742F3C (VfDevObjPostAddDevice.c)
 *     VfDevObjPreAddDevice @ 0x140742F8C (VfDevObjPreAddDevice.c)
 *     IovUtilIsVerifiedDeviceStack @ 0x140743968 (IovUtilIsVerifiedDeviceStack.c)
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
