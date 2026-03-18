/*
 * XREFs of DpiGetDeviceInstanceId @ 0x1C0170140
 * Callers:
 *     DpiMiracastInterfaceChange @ 0x1C0024050 (DpiMiracastInterfaceChange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetDeviceInstanceId(PDEVICE_OBJECT DeviceObject, ULONG_PTR *a2)
{
  struct _DEVICE_OBJECT *v3; // rbx
  PIRP v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  IRP *v8; // rdx
  _QWORD *v9; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v12; // rcx
  NTSTATUS v13; // eax
  _QWORD *v14; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF

  v3 = DeviceObject;
  if ( DeviceObject && a2 )
  {
    *a2 = 0LL;
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v4 = IoBuildSynchronousFsdRequest(0x1Bu, v3, 0LL, 0, 0LL, &Event, &IoStatusBlock);
    v8 = v4;
    if ( !v4 )
    {
      v9 = (_QWORD *)WdLogNewEntry5_WdLowResource(v5, 0LL, v6, v7);
      LODWORD(v3) = -1073741670;
      v9[3] = DpiGetDeviceInstanceId;
      v9[4] = IoBuildSynchronousFsdRequest;
      v9[5] = -1073741670LL;
      WdLogEvent5_WdLowResource(v9);
      return (unsigned int)v3;
    }
    v4->IoStatus.Status = -1073741637;
    CurrentStackLocation = v4->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].MinorFunction = 19;
    CurrentStackLocation[-1].Parameters.Read.Length = 3;
    LODWORD(v3) = IofCallDriver(v3, v8);
    if ( (_DWORD)v3 == 259 )
    {
      v13 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v3 = (struct _DEVICE_OBJECT *)v13;
      if ( v13 )
      {
        v14 = (_QWORD *)WdLogNewEntry5_WdError(v12);
        v14[3] = DpiGetDeviceInstanceId;
        v14[4] = KeWaitForSingleObject;
        v14[5] = v3;
LABEL_9:
        WdLogEvent5_WdError(v14);
        return (unsigned int)v3;
      }
      LODWORD(v3) = IoStatusBlock.Status;
    }
    if ( (int)v3 >= 0 )
    {
      *a2 = IoStatusBlock.Information;
      return (unsigned int)v3;
    }
    v14 = (_QWORD *)WdLogNewEntry5_WdError(v12);
    v14[4] = 0LL;
    v14[3] = DpiGetDeviceInstanceId;
    v14[5] = (int)v3;
    goto LABEL_9;
  }
  return 3221225485LL;
}
