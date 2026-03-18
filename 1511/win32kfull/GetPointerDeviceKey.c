/*
 * XREFs of GetPointerDeviceKey @ 0x1C0094E88
 * Callers:
 *     RetrieveCalibrationData @ 0x1C00949F0 (RetrieveCalibrationData.c)
 *     _SetCalibrationData @ 0x1C01D5DD0 (_SetCalibrationData.c)
 * Callees:
 *     GetPointerDevicePDO @ 0x1C0095CBC (GetPointerDevicePDO.c)
 *     GetDeviceObjectPointer @ 0x1C0095D70 (GetDeviceObjectPointer.c)
 */

__int64 __fastcall GetPointerDeviceKey(__int64 a1, void **a2)
{
  NTSTATUS PointerDevicePDO; // edi
  unsigned int v4; // ebx
  PVOID v6; // [rsp+30h] [rbp-18h] BYREF
  HANDLE Handle[2]; // [rsp+38h] [rbp-10h] BYREF
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+68h] [rbp+20h]

  DeviceObject = 0LL;
  if ( (int)GetDeviceObjectPointer(a1, 2LL, 3LL, Handle, &v6, &Object) < 0 )
    return 0;
  ObfReferenceObject(Object);
  PointerDevicePDO = GetPointerDevicePDO((PDEVICE_OBJECT)Object);
  v4 = 1;
  if ( PointerDevicePDO >= 0 )
    PointerDevicePDO = IoOpenDeviceRegistryKey(DeviceObject, 1u, 0x20006u, a2);
  ObfDereferenceObject(Object);
  ObfDereferenceObject(v6);
  ObfDereferenceObject(DeviceObject);
  ZwClose(Handle[0]);
  if ( PointerDevicePDO < 0 )
    return 0;
  return v4;
}
