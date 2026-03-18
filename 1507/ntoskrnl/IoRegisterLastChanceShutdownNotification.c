/*
 * XREFs of IoRegisterLastChanceShutdownNotification @ 0x140590394
 * Callers:
 *     VerifierIoRegisterLastChanceShutdownNotification @ 0x140741FE8 (VerifierIoRegisterLastChanceShutdownNotification.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     IopInterlockedInsertHeadList @ 0x14015E0D0 (IopInterlockedInsertHeadList.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall IoRegisterLastChanceShutdownNotification(PDEVICE_OBJECT DeviceObject)
{
  __int64 *PoolWithTag; // rdi
  REGHANDLE v3; // r10
  struct _DRIVER_OBJECT *DriverObject; // rax
  unsigned int v5; // r9d
  ULONGLONG Buffer; // rcx
  __int64 v7; // rax
  unsigned int v8; // r9d
  __int64 v9; // rax
  __int16 v11; // [rsp+30h] [rbp-58h] BYREF
  int v12; // [rsp+38h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[3]; // [rsp+40h] [rbp-48h] BYREF

  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x68536F49u);
  if ( !PoolWithTag )
    return -1073741670;
  ObfReferenceObject(DeviceObject);
  PoolWithTag[2] = (__int64)DeviceObject;
  IopInterlockedInsertHeadList((__int64 *)&IopNotifyLastChanceShutdownQueueHead, PoolWithTag);
  DeviceObject->Flags |= 0x800u;
  v3 = EtwApiCallsProvRegHandle;
  v12 = 0;
  if ( EtwApiCallsProvRegHandle )
  {
    DriverObject = DeviceObject->DriverObject;
    v5 = 0;
    v11 = 0;
    if ( DriverObject )
    {
      Buffer = (ULONGLONG)DriverObject->DriverName.Buffer;
      if ( Buffer )
      {
        v5 = 1;
        UserData[0].Size = DriverObject->DriverName.Length;
        UserData[0].Ptr = Buffer;
        UserData[0].Reserved = 0;
      }
    }
    v7 = v5;
    v8 = v5 + 1;
    UserData[v7].Ptr = (ULONGLONG)&v11;
    *(_QWORD *)&UserData[v7].Size = 2LL;
    v9 = v8;
    UserData[v9].Ptr = (ULONGLONG)&v12;
    *(_QWORD *)&UserData[v9].Size = 4LL;
    EtwWrite(v3, &KERNEL_AUDIT_API_IOREGISTERLASTCHANCESHUTDOWNNOTIFICATION, 0LL, v8 + 1, UserData);
  }
  return 0;
}
