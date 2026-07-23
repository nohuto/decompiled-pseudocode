/*
 * XREFs of VfDevObjPreAddDevice @ 0x14070D7F8
 * Callers:
 *     PpvUtilCallAddDevice @ 0x14012FF88 (PpvUtilCallAddDevice.c)
 * Callees:
 *     MmIsDriverVerifying @ 0x1400B20B0 (MmIsDriverVerifying.c)
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
