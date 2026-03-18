/*
 * XREFs of VfDevObjPostAddDevice @ 0x1406C1710
 * Callers:
 *     PpvUtilCallAddDevice @ 0x1401255DC (PpvUtilCallAddDevice.c)
 * Callees:
 *     MmIsDriverVerifying @ 0x1400F22E4 (MmIsDriverVerifying.c)
 *     VfFilterAttach @ 0x1406CEA4C (VfFilterAttach.c)
 */

void __fastcall VfDevObjPostAddDevice(
        PDEVICE_OBJECT TargetDevice,
        struct _DRIVER_OBJECT *DriverObject,
        __int64 a3,
        __int64 a4,
        int a5)
{
  if ( a5 >= 0 && (MmVerifierData & 0x10) != 0 )
  {
    if ( MmIsDriverVerifying(DriverObject) )
      VfFilterAttach(TargetDevice);
  }
}
