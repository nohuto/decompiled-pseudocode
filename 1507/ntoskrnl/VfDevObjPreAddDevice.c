/*
 * XREFs of VfDevObjPreAddDevice @ 0x140742F8C
 * Callers:
 *     PpvUtilCallAddDevice @ 0x140158984 (PpvUtilCallAddDevice.c)
 * Callees:
 *     MmIsDriverVerifying @ 0x1401539A8 (MmIsDriverVerifying.c)
 *     VfFilterAttach @ 0x1407524D4 (VfFilterAttach.c)
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
