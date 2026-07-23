/*
 * XREFs of VfDevObjPostAddDevice @ 0x14070D7A8
 * Callers:
 *     PpvUtilCallAddDevice @ 0x14012FF88 (PpvUtilCallAddDevice.c)
 * Callees:
 *     MmIsDriverVerifying @ 0x1400B20B0 (MmIsDriverVerifying.c)
 *     VfFilterAttach @ 0x14071AB04 (VfFilterAttach.c)
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
