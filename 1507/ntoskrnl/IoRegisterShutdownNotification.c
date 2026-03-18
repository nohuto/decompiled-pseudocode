/*
 * XREFs of IoRegisterShutdownNotification @ 0x1405904B8
 * Callers:
 *     VerifierIoRegisterShutdownNotification @ 0x140741FF8 (VerifierIoRegisterShutdownNotification.c)
 *     RawInitialize @ 0x1407B9A68 (RawInitialize.c)
 *     WmipDriverEntry @ 0x1407B9CBC (WmipDriverEntry.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     IopInterlockedInsertHeadList @ 0x14015E0D0 (IopInterlockedInsertHeadList.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall IoRegisterShutdownNotification(PDEVICE_OBJECT DeviceObject)
{
  __int64 *PoolWithTag; // rax
  __int64 *v3; // rdi
  REGHANDLE v4; // r10
  struct _DRIVER_OBJECT *DriverObject; // rax
  unsigned int v6; // r9d
  ULONGLONG Buffer; // rcx
  __int64 v8; // rax
  unsigned int v9; // r9d
  __int64 v10; // rax
  __int16 v12; // [rsp+30h] [rbp-58h] BYREF
  int v13; // [rsp+38h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[3]; // [rsp+40h] [rbp-48h] BYREF

  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x68536F49u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741670;
  PoolWithTag[2] = (__int64)DeviceObject;
  ObfReferenceObject(DeviceObject);
  IopInterlockedInsertHeadList((__int64 *)&IopNotifyShutdownQueueHead, v3);
  DeviceObject->Flags |= 0x800u;
  v4 = EtwApiCallsProvRegHandle;
  v13 = 0;
  if ( EtwApiCallsProvRegHandle )
  {
    DriverObject = DeviceObject->DriverObject;
    v6 = 0;
    v12 = 0;
    if ( DriverObject )
    {
      Buffer = (ULONGLONG)DriverObject->DriverName.Buffer;
      if ( Buffer )
      {
        v6 = 1;
        UserData[0].Size = DriverObject->DriverName.Length;
        UserData[0].Ptr = Buffer;
        UserData[0].Reserved = 0;
      }
    }
    v8 = v6;
    v9 = v6 + 1;
    UserData[v8].Ptr = (ULONGLONG)&v12;
    *(_QWORD *)&UserData[v8].Size = 2LL;
    v10 = v9;
    UserData[v10].Ptr = (ULONGLONG)&v13;
    *(_QWORD *)&UserData[v10].Size = 4LL;
    EtwWrite(v4, &KERNEL_AUDIT_API_IOREGISTERSHUTDOWNNOTIFICATION, 0LL, v9 + 1, UserData);
  }
  return 0;
}
