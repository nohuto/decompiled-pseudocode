/*
 * XREFs of DpiSetDeviceUsageType @ 0x1C016BAA0
 * Callers:
 *     DpiAddDevice @ 0x1C00C5300 (DpiAddDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiSetDeviceUsageType(PDEVICE_OBJECT DeviceObject, ULONG a2, BOOLEAN a3)
{
  PIRP v6; // rax
  __int64 v7; // rcx
  IRP *v8; // rdx
  _QWORD *v9; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // rax
  __int64 v17; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF

  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v6 = IoBuildSynchronousFsdRequest(0x1Bu, DeviceObject, 0LL, 0, 0LL, &Event, &IoStatusBlock);
  v8 = v6;
  if ( v6 )
  {
    v6->IoStatus.Status = -1073741637;
    CurrentStackLocation = v6->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].MinorFunction = 22;
    CurrentStackLocation[-1].Parameters.SetLock.Lock = a3;
    CurrentStackLocation[-1].Parameters.Create.Options = a2;
    LODWORD(DeviceObject) = IofCallDriver(DeviceObject, v8);
    if ( (_DWORD)DeviceObject == 259 )
    {
      v11 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      DeviceObject = (PDEVICE_OBJECT)v11;
      if ( v11 )
      {
        v16 = (_QWORD *)WdLogNewEntry5_WdError(v13);
        v16[3] = DpiSetDeviceUsageType;
        v16[4] = KeWaitForSingleObject;
        v16[5] = DeviceObject;
        WdLogEvent5_WdError(v16);
      }
      else
      {
        DeviceObject = (PDEVICE_OBJECT)IoStatusBlock.Status;
        if ( IoStatusBlock.Status < 0 )
        {
          v17 = WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
          *(_QWORD *)(v17 + 24) = DpiSetDeviceUsageType;
          *(_QWORD *)(v17 + 32) = DeviceObject;
          WdLogEvent5_WdWarning(v17);
        }
      }
    }
  }
  else
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdLowResource(v7);
    LODWORD(DeviceObject) = -1073741670;
    v9[3] = DpiSetDeviceUsageType;
    v9[4] = IoBuildSynchronousFsdRequest;
    v9[5] = -1073741670LL;
    WdLogEvent5_WdLowResource(v9);
  }
  return (unsigned int)DeviceObject;
}
