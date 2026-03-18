/*
 * XREFs of VfDevObjPreAddDevice @ 0x1406C1760
 * Callers:
 *     PpvUtilCallAddDevice @ 0x1401255DC (PpvUtilCallAddDevice.c)
 * Callees:
 *     MmIsDriverVerifying @ 0x1400F22E4 (MmIsDriverVerifying.c)
 *     VfFilterAttach @ 0x1406CEA4C (VfFilterAttach.c)
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
