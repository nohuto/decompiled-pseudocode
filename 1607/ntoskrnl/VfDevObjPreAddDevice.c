/*
 * XREFs of VfDevObjPreAddDevice @ 0x14070D7C8
 * Callers:
 *     PpvUtilCallAddDevice @ 0x14012FA18 (PpvUtilCallAddDevice.c)
 * Callees:
 *     MmIsDriverVerifying @ 0x1400B4230 (MmIsDriverVerifying.c)
 *     VfFilterAttach @ 0x14071AB04 (VfFilterAttach.c)
 */

LOGICAL __fastcall VfDevObjPreAddDevice(PDEVICE_OBJECT TargetDevice, struct _DRIVER_OBJECT *DriverObject)
{
  LOGICAL result; // eax

  result = MmIsDriverVerifying(DriverObject);
  if ( result )
  {
    result = MmVerifierData;
    if ( (MmVerifierData & 0x10) != 0 )
      return VfFilterAttach(TargetDevice);
  }
  return result;
}
