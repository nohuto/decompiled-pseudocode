/*
 * XREFs of IopQueryXxxInformation @ 0x1404DB258
 * Callers:
 *     IopQueryNameInternal @ 0x1404D8B10 (IopQueryNameInternal.c)
 *     IoQueryFileInformation @ 0x1404DB230 (IoQueryFileInformation.c)
 *     IoQueryVolumeInformation @ 0x1404E81E0 (IoQueryVolumeInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     IoGetRelatedDeviceObject @ 0x1400435F0 (IoGetRelatedDeviceObject.c)
 *     IopQueueThreadIrp @ 0x140043B00 (IopQueueThreadIrp.c)
 *     IofCallDriver @ 0x14007E4C0 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 *     IopWaitForSynchronousIo @ 0x14008E3A0 (IopWaitForSynchronousIo.c)
 *     sub_14008E8A8 @ 0x14008E8A8 (sub_14008E8A8.c)
 *     IopAcquireFileObjectLock @ 0x1404AC66C (IopAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x1405F70B8 (IopAllocateIrpCleanup.c)
 */

__int64 __fastcall IopQueryXxxInformation(
        struct _FILE_OBJECT *Object,
        int a2,
        int a3,
        KPROCESSOR_MODE a4,
        __int64 a5,
        _DWORD *a6,
        char a7)
{
  char v11; // bp
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 Irp; // rax
  __int64 v16; // rdx
  IRP *v17; // rdi
  __int64 v18; // r8
  __int64 v19; // rax
  NTSTATUS v20; // eax
  unsigned int FinalStatus; // esi
  unsigned int v23; // edi
  _DWORD v24[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v25; // [rsp+38h] [rbp-50h]
  struct _KEVENT Event; // [rsp+40h] [rbp-48h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]
  char v28; // [rsp+90h] [rbp+8h] BYREF

  v24[0] = 0;
  v24[1] = 0;
  v25 = 0LL;
  ObfReferenceObject(Object);
  if ( (Object->Flags & 2) != 0 )
  {
    v11 = 1;
    if ( !sub_14008E8A8((volatile __int32 *)&Object->Type) )
    {
      v23 = IopAcquireFileObjectLock((char *)Object, a4, (Object->Flags & 4) != 0, &v28);
      if ( v28 )
      {
        ObfDereferenceObject(Object);
        return v23;
      }
    }
    KeResetEvent(&Object->Event);
  }
  else
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v11 = 0;
  }
  RelatedDeviceObject = IoGetRelatedDeviceObject(Object);
  LOBYTE(v13) = v11 == 0;
  LOBYTE(v14) = RelatedDeviceObject->StackSize;
  Irp = pIoAllocateIrp(RelatedDeviceObject, v14, v13, retaddr);
  v17 = (IRP *)Irp;
  if ( Irp )
  {
    *(_QWORD *)(Irp + 192) = Object;
    *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
    *(_BYTE *)(Irp + 64) = a4;
    if ( v11 )
    {
      *(_QWORD *)(Irp + 80) = 0LL;
      *(_BYTE *)(Irp + 71) |= 2u;
    }
    else
    {
      *(_DWORD *)(Irp + 16) = 4;
      *(_QWORD *)(Irp + 80) = &Event;
    }
    *(_QWORD *)(Irp + 88) = 0LL;
    v18 = *(_QWORD *)(Irp + 184);
    LOBYTE(v16) = a7;
    *(_QWORD *)(Irp + 72) = v24;
    v19 = a5;
    *(_QWORD *)(v18 - 24) = Object;
    *(_BYTE *)(v18 - 72) = (_BYTE)v16 != 0 ? 5 : 10;
    v17->Flags |= 0x10u;
    v17->AssociatedIrp.MasterIrp = (struct _IRP *)v19;
    *(_DWORD *)(v18 - 64) = a3;
    *(_DWORD *)(v18 - 56) = a2;
    IopQueueThreadIrp((__int64)v17, v16, v18);
    v20 = IofCallDriver(RelatedDeviceObject, v17);
    FinalStatus = v20;
    if ( v11 )
    {
      if ( v20 == 259 )
      {
        IopWaitForSynchronousIo(v17, (__int64)Object, a4);
        FinalStatus = Object->FinalStatus;
      }
      _InterlockedExchange((volatile __int32 *)&Object->Busy, 0);
      if ( Object->Waiters )
        KeSetEvent(&Object->Lock, 0, 0);
      ObfDereferenceObject(Object);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    }
    else if ( v20 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      FinalStatus = v24[0];
    }
    *a6 = v25;
    return FinalStatus;
  }
  else
  {
    IopAllocateIrpCleanup(Object, 0LL);
    return 3221225626LL;
  }
}
