/*
 * XREFs of IopInvalidateVolumesForDevice @ 0x140671B84
 * Callers:
 *     IopRemoveDevice @ 0x1405383EC (IopRemoveDevice.c)
 *     PiIrpQueryRemoveDevice @ 0x14058DA8C (PiIrpQueryRemoveDevice.c)
 * Callees:
 *     IoBuildDeviceIoControlRequest @ 0x140006EE4 (IoBuildDeviceIoControlRequest.c)
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     IofCallDriver @ 0x140048540 (IofCallDriver.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     IoCreateStreamFileObjectLite @ 0x14040E470 (IoCreateStreamFileObjectLite.c)
 *     ObOpenObjectByPointer @ 0x140434390 (ObOpenObjectByPointer.c)
 */

__int64 __fastcall IopInvalidateVolumesForDevice(PDEVICE_OBJECT DeviceObject)
{
  PDEVICE_OBJECT v1; // rsi
  PDEVICE_OBJECT i; // rdi
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v4; // r14
  ULONG DeviceType; // eax
  __int64 *v6; // rsi
  int v7; // r15d
  __int64 *j; // r12
  struct _DEVICE_OBJECT *k; // r13
  PIRP v10; // rax
  int Status; // eax
  __int16 v12; // ax
  struct _KTHREAD *v13; // rcx
  __int16 v14; // ax
  NTSTATUS v16; // [rsp+50h] [rbp-78h]
  PFILE_OBJECT Object; // [rsp+58h] [rbp-70h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-68h] BYREF
  struct _KEVENT Event; // [rsp+70h] [rbp-58h] BYREF
  HANDLE InputBuffer; // [rsp+D8h] [rbp+10h] BYREF
  PDEVICE_OBJECT v22; // [rsp+E0h] [rbp+18h]

  v1 = DeviceObject;
  v16 = 0;
  for ( i = DeviceObject; ; i = i->AttachedDevice )
  {
    v22 = i;
    if ( !i )
      break;
    if ( i->Vpb )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      KeWaitForSingleObject(&i->DeviceLock, Executive, 0, 0, 0LL);
      InputBuffer = 0LL;
      Object = IoCreateStreamFileObjectLite(0LL, i);
      Object->Vpb = i->Vpb;
      v16 = ObOpenObjectByPointer(Object, 0x200u, 0LL, 0, (POBJECT_TYPE)IoFileObjectType, 0, &InputBuffer);
      if ( v16 >= 0 )
      {
        v4 = KeGetCurrentThread();
        --v4->KernelApcDisable;
        ExAcquireResourceSharedLite(&IopDatabaseResource, 1u);
        DeviceType = v1->DeviceType;
        if ( DeviceType == 7 || DeviceType == 36 )
        {
          v6 = &IopDiskFileSystemQueueHead;
        }
        else
        {
          v6 = &IopCdRomFileSystemQueueHead;
          if ( DeviceType != 2 )
            v6 = &IopTapeFileSystemQueueHead;
        }
        KeInitializeEvent(&Event, NotificationEvent, 0);
        v7 = 0;
        for ( j = (__int64 *)*v6; j != v6 && (__int64 *)*j != v6; j = (__int64 *)*j )
        {
          for ( k = (struct _DEVICE_OBJECT *)(j - 10); k->AttachedDevice; k = k->AttachedDevice )
            ;
          KeResetEvent(&Event);
          v10 = IoBuildDeviceIoControlRequest(0x90054u, k, &InputBuffer, 8u, 0LL, 0, 0, &Event, &IoStatusBlock);
          if ( !v10 )
          {
            v7 = -1073741670;
            break;
          }
          *(_WORD *)&v10->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = 13;
          Status = IofCallDriver(k, v10);
          if ( Status == 259 )
          {
            KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
            Status = IoStatusBlock.Status;
          }
          else
          {
            IoStatusBlock.Status = Status;
            IoStatusBlock.Information = 0LL;
          }
          if ( Status == -1073741808 || Status == -1073741822 )
            Status = 0;
          if ( v7 >= 0 && Status < 0 )
            v7 = Status;
        }
        ExReleaseResourceLite(&IopDatabaseResource);
        v12 = v4->KernelApcDisable + 1;
        v4->KernelApcDisable = v12;
        if ( !v12
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v4->ApcState.ApcListHead[0].Flink != &v4->152
          && !v4->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        if ( Object )
        {
          ObfDereferenceObject(Object);
          if ( InputBuffer )
            ZwClose(InputBuffer);
        }
        v16 = v7;
      }
      KeSetEvent(&i->DeviceLock, 0, 0);
      v13 = KeGetCurrentThread();
      v14 = v13->KernelApcDisable + 1;
      v13->KernelApcDisable = v14;
      if ( !v14
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v13->ApcState.ApcListHead[0].Flink != &v13->152
        && !v13->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      v1 = DeviceObject;
    }
  }
  return (unsigned int)v16;
}
