/*
 * XREFs of VfDevObjPostAddDevice @ 0x140742F3C
 * Callers:
 *     PpvUtilCallAddDevice @ 0x140158984 (PpvUtilCallAddDevice.c)
 * Callees:
 *     MmIsDriverVerifying @ 0x1401539A8 (MmIsDriverVerifying.c)
 *     VfFilterAttach @ 0x1407524D4 (VfFilterAttach.c)
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
