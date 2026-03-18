/*
 * XREFs of GetPointerDeviceKey @ 0x1C013AD88
 * Callers:
 *     RetrieveCalibrationData @ 0x1C013A8F0 (RetrieveCalibrationData.c)
 *     _SetCalibrationData @ 0x1C01D4244 (_SetCalibrationData.c)
 * Callees:
 *     GetPointerDevicePDO @ 0x1C003A1C4 (GetPointerDevicePDO.c)
 *     GetDeviceObjectPointer @ 0x1C003A278 (GetDeviceObjectPointer.c)
 */

__int64 __fastcall GetPointerDeviceKey(struct _UNICODE_STRING *a1, void **a2)
{
  int PointerDevicePDO; // edi
  unsigned int v4; // ebx
  PVOID v6; // [rsp+30h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-10h] BYREF
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+68h] [rbp+20h] BYREF

  DeviceObject = 0LL;
  if ( (int)GetDeviceObjectPointer(a1, 2u, 3u, &Handle, &v6, (PDEVICE_OBJECT *)&Object) < 0 )
    return 0;
  ObfReferenceObject(Object);
  PointerDevicePDO = GetPointerDevicePDO((PDEVICE_OBJECT)Object, &DeviceObject);
  v4 = 1;
  if ( PointerDevicePDO >= 0 )
    PointerDevicePDO = IoOpenDeviceRegistryKey(DeviceObject, 1u, 0x20006u, a2);
  ObfDereferenceObject(Object);
  ObfDereferenceObject(v6);
  ObfDereferenceObject(DeviceObject);
  ZwClose(Handle);
  if ( PointerDevicePDO < 0 )
    return 0;
  return v4;
}
