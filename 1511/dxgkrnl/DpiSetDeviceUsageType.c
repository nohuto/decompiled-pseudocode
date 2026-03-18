/*
 * XREFs of DpiSetDeviceUsageType @ 0x1C01702B0
 * Callers:
 *     DpiAddDevice @ 0x1C00D2490 (DpiAddDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiSetDeviceUsageType(PDEVICE_OBJECT DeviceObject, ULONG a2, BOOLEAN a3)
{
  PIRP v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  IRP *v10; // rdx
  _QWORD *v11; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rax
  __int64 v19; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF

  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v6 = IoBuildSynchronousFsdRequest(0x1Bu, DeviceObject, 0LL, 0, 0LL, &Event, &IoStatusBlock);
  v10 = v6;
  if ( v6 )
  {
    v6->IoStatus.Status = -1073741637;
    CurrentStackLocation = v6->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].MinorFunction = 22;
    CurrentStackLocation[-1].Parameters.SetLock.Lock = a3;
    CurrentStackLocation[-1].Parameters.Create.Options = a2;
    LODWORD(DeviceObject) = IofCallDriver(DeviceObject, v10);
    if ( (_DWORD)DeviceObject == 259 )
    {
      v13 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      DeviceObject = (PDEVICE_OBJECT)v13;
      if ( v13 )
      {
        v18 = (_QWORD *)WdLogNewEntry5_WdError(v15);
        v18[3] = DpiSetDeviceUsageType;
        v18[4] = KeWaitForSingleObject;
        v18[5] = DeviceObject;
        WdLogEvent5_WdError(v18);
      }
      else
      {
        DeviceObject = (PDEVICE_OBJECT)IoStatusBlock.Status;
        if ( IoStatusBlock.Status < 0 )
        {
          v19 = WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
          *(_QWORD *)(v19 + 24) = DpiSetDeviceUsageType;
          *(_QWORD *)(v19 + 32) = DeviceObject;
          WdLogEvent5_WdWarning(v19);
        }
      }
    }
  }
  else
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdLowResource(v7, 0LL, v8, v9);
    LODWORD(DeviceObject) = -1073741670;
    v11[3] = DpiSetDeviceUsageType;
    v11[4] = IoBuildSynchronousFsdRequest;
    v11[5] = -1073741670LL;
    WdLogEvent5_WdLowResource(v11);
  }
  return (unsigned int)DeviceObject;
}
