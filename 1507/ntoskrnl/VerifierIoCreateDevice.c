/*
 * XREFs of VerifierIoCreateDevice @ 0x140742DC0
 * Callers:
 *     <none>
 * Callees:
 *     IoCreateDevice @ 0x1404132C4 (IoCreateDevice.c)
 *     ViDevObjAdd @ 0x1407431E0 (ViDevObjAdd.c)
 */

__int64 __fastcall VerifierIoCreateDevice(
        struct _DRIVER_OBJECT *a1,
        ULONG a2,
        UNICODE_STRING *a3,
        ULONG a4,
        ULONG DeviceCharacteristics,
        BOOLEAN Exclusive,
        PDEVICE_OBJECT *DeviceObject)
{
  int Device; // ebx

  Device = pXdvIoCreateDevice(a1, a2, a3, a4, DeviceCharacteristics, Exclusive, DeviceObject);
  if ( Device >= 0 && (MmVerifierData & 0x10) != 0 )
    ViDevObjAdd(*DeviceObject);
  return (unsigned int)Device;
}
