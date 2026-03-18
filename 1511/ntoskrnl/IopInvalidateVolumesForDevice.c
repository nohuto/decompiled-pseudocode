/*
 * XREFs of IopInvalidateVolumesForDevice @ 0x1405F7CFC
 * Callers:
 *     IopRemoveDevice @ 0x1404A0FEC (IopRemoveDevice.c)
 *     PiIrpQueryRemoveDevice @ 0x140615674 (PiIrpQueryRemoveDevice.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     IoBuildDeviceIoControlRequest @ 0x140073DD0 (IoBuildDeviceIoControlRequest.c)
 *     IofCallDriver @ 0x14007E4C0 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ObOpenObjectByPointer @ 0x140476C40 (ObOpenObjectByPointer.c)
 *     IoCreateStreamFileObjectLite @ 0x1404918C0 (IoCreateStreamFileObjectLite.c)
 */

__int64 __fastcall IopInvalidateVolumesForDevice(PDEVICE_OBJECT DeviceObject)
{
  __int64 result; // rax
  PDEVICE_OBJECT i; // rdi
  struct _KTHREAD *CurrentThread; // rax
  ULONG DeviceType; // eax
  __int64 *v6; // r14
  int v7; // esi
  __int64 *j; // r15
  struct _DEVICE_OBJECT *k; // r13
  PIRP v10; // rax
  int Status; // eax
  NTSTATUS v12; // [rsp+50h] [rbp-68h]
  PFILE_OBJECT Object; // [rsp+58h] [rbp-60h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-58h] BYREF
  struct _KEVENT Event; // [rsp+70h] [rbp-48h] BYREF
  HANDLE InputBuffer; // [rsp+C8h] [rbp+10h] BYREF
  struct _KTHREAD *v17; // [rsp+D0h] [rbp+18h]

  result = 0LL;
  for ( i = DeviceObject; ; i = i->AttachedDevice )
  {
    v17 = (struct _KTHREAD *)i;
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
      v12 = ObOpenObjectByPointer(Object, 0x200u, 0LL, 0, (POBJECT_TYPE)IoFileObjectType, 0, &InputBuffer);
      if ( v12 >= 0 )
      {
        v17 = KeGetCurrentThread();
        --v17->KernelApcDisable;
        ExAcquireResourceSharedLite(&IopDatabaseResource, 1u);
        DeviceType = DeviceObject->DeviceType;
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
        KiLeaveCriticalRegionUnsafe((__int64)v17);
        if ( Object )
        {
          ObfDereferenceObject(Object);
          if ( InputBuffer )
            ZwClose(InputBuffer);
        }
        v12 = v7;
      }
      KeSetEvent(&i->DeviceLock, 0, 0);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      result = (unsigned int)v12;
    }
  }
  return result;
}
