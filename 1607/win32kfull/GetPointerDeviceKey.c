/*
 * XREFs of GetPointerDeviceKey @ 0x1C00E4CE8
 * Callers:
 *     RetrieveCalibrationData @ 0x1C00E4DB0 (RetrieveCalibrationData.c)
 *     _SetCalibrationData @ 0x1C01CCCF0 (_SetCalibrationData.c)
 * Callees:
 *     GetPointerDevicePDO @ 0x1C00E38AC (GetPointerDevicePDO.c)
 *     GetDeviceObjectPointer @ 0x1C00E3960 (GetDeviceObjectPointer.c)
 */

__int64 __fastcall GetPointerDeviceKey(struct _UNICODE_STRING *a1, void **a2, __int64 a3)
{
  int PointerDevicePDO; // edi
  unsigned int v5; // ebx
  PVOID v7; // [rsp+30h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-10h] BYREF
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+68h] [rbp+20h] BYREF

  DeviceObject = 0LL;
  if ( (int)GetDeviceObjectPointer(a1, 2u, a3, &Handle, &v7, (PDEVICE_OBJECT *)&Object) < 0 )
    return 0;
  ObfReferenceObject(Object);
  PointerDevicePDO = GetPointerDevicePDO((PDEVICE_OBJECT)Object, &DeviceObject);
  v5 = 1;
  if ( PointerDevicePDO >= 0 )
    PointerDevicePDO = IoOpenDeviceRegistryKey(DeviceObject, 1u, 0x20006u, a2);
  ObfDereferenceObject(Object);
  ObfDereferenceObject(v7);
  ObfDereferenceObject(DeviceObject);
  ZwClose(Handle);
  if ( PointerDevicePDO < 0 )
    return 0;
  return v5;
}
