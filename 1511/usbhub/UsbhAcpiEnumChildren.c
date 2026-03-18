/*
 * XREFs of UsbhAcpiEnumChildren @ 0x1C0023290
 * Callers:
 *     UsbhGetAcpiPortAttributes @ 0x1C0022E20 (UsbhGetAcpiPortAttributes.c)
 * Callees:
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     __security_check_cookie @ 0x1C0028D40 (__security_check_cookie.c)
 */

__int64 __fastcall UsbhAcpiEnumChildren(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  __int64 OutputBufferLength; // rbp
  PDEVICE_OBJECT *v6; // rsi
  IRP *v7; // rbx
  NTSTATUS Status; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-58h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-48h] BYREF
  _QWORD InputBuffer[2]; // [rsp+78h] [rbp-30h] BYREF

  OutputBufferLength = (unsigned int)a3;
  v6 = (PDEVICE_OBJECT *)FdoExt(a1, (__int64)a2, a3, a4);
  InputBuffer[1] = 0LL;
  InputBuffer[0] = 0x148696541LL;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v7 = IoBuildDeviceIoControlRequest(
         0x32C020u,
         v6[151],
         InputBuffer,
         0x10u,
         a2,
         OutputBufferLength,
         0,
         &Event,
         &IoStatusBlock);
  if ( !v7 )
    return 3221225626LL;
  ObfReferenceObject(v6[151]);
  Status = IofCallDriver(v6[151], v7);
  if ( Status == 259 )
  {
    Status = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    if ( !Status )
      Status = IoStatusBlock.Status;
  }
  ObfDereferenceObject(v6[151]);
  if ( (_DWORD)OutputBufferLength == 20 )
  {
    if ( Status == -2147483643 && *a2 == 1198089537 && a2[1] >= 0x14u )
      return (unsigned int)Status;
  }
  else if ( Status < 0 || *a2 == 1198089537 && a2[1] && IoStatusBlock.Information == OutputBufferLength )
  {
    return (unsigned int)Status;
  }
  return 3222536207LL;
}
