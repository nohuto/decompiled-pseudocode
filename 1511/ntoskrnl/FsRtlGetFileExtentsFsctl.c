/*
 * XREFs of FsRtlGetFileExtentsFsctl @ 0x1401AC318
 * Callers:
 *     FsRtlGetFileExtents @ 0x1401AC304 (FsRtlGetFileExtents.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x1400435F0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x14007E4C0 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

NTSTATUS __fastcall FsRtlGetFileExtentsFsctl(struct _FILE_OBJECT *a1, __int64 a2, __int64 a3, __int64 a4)
{
  PDEVICE_OBJECT RelatedDeviceObject; // rbx
  __int64 v9; // rdx
  __int64 Irp; // rax
  IRP *v11; // rdx
  NTSTATUS result; // eax
  __int64 v13; // rax
  __int16 Object; // [rsp+30h] [rbp-50h] BYREF
  char v15; // [rsp+32h] [rbp-4Eh]
  int v16; // [rsp+34h] [rbp-4Ch]
  _QWORD v17[2]; // [rsp+38h] [rbp-48h] BYREF
  _DWORD v18[2]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v19; // [rsp+50h] [rbp-30h]
  _QWORD v20[3]; // [rsp+58h] [rbp-28h] BYREF
  void *retaddr; // [rsp+98h] [rbp+18h]

  v18[0] = 0;
  v16 = 0;
  v18[1] = 0;
  v19 = 0LL;
  Object = 0;
  v15 = 6;
  v17[1] = v17;
  v17[0] = v17;
  RelatedDeviceObject = IoGetRelatedDeviceObject(a1);
  LOBYTE(v9) = RelatedDeviceObject->StackSize;
  Irp = pIoAllocateIrp(RelatedDeviceObject, v9, 0LL, retaddr);
  v11 = (IRP *)Irp;
  if ( !Irp )
    return -1073741670;
  v20[0] = a2;
  v20[1] = a3;
  v20[2] = 0LL;
  *(_BYTE *)(Irp + 64) = 0;
  *(_QWORD *)(Irp + 72) = v18;
  *(_QWORD *)(Irp + 80) = &Object;
  *(_QWORD *)(Irp + 112) = a4;
  *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
  v13 = *(_QWORD *)(Irp + 184);
  *(_QWORD *)(v13 - 40) = v20;
  *(_WORD *)(v13 - 72) = 13;
  *(_QWORD *)(v13 - 24) = a1;
  *(_DWORD *)(v13 - 48) = 590747;
  *(_DWORD *)(v13 - 56) = 24;
  *(_DWORD *)(v13 - 64) = 8;
  result = IofCallDriver(RelatedDeviceObject, v11);
  if ( result == 259 )
  {
    result = KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    if ( !result )
      return v18[0];
  }
  return result;
}
