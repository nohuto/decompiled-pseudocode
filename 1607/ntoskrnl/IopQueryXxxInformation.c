/*
 * XREFs of IopQueryXxxInformation @ 0x1404ED0B8
 * Callers:
 *     IopQueryNameInternal @ 0x1404ECAA0 (IopQueryNameInternal.c)
 *     IoQueryFileInformation @ 0x1404ED090 (IoQueryFileInformation.c)
 *     IoQueryVolumeInformation @ 0x14052BB24 (IoQueryVolumeInformation.c)
 * Callees:
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x14002DBE0 (IofCallDriver.c)
 *     IoGetRelatedDeviceObject @ 0x14002DC60 (IoGetRelatedDeviceObject.c)
 *     IopQueueThreadIrp @ 0x14002DCF0 (IopQueueThreadIrp.c)
 *     KeResetEvent @ 0x14002E1B0 (KeResetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     IopAcquireFastLock @ 0x14007BB34 (IopAcquireFastLock.c)
 *     IopWaitForSynchronousIo @ 0x1400C8360 (IopWaitForSynchronousIo.c)
 *     IopAcquireFileObjectLock @ 0x1403EE090 (IopAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140620E74 (IopAllocateIrpCleanup.c)
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
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  char v14; // bp
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 Irp; // rax
  IRP *v19; // rdi
  __int64 v20; // r8
  char v21; // dl
  __int64 v22; // rax
  NTSTATUS v23; // eax
  unsigned int FinalStatus; // esi
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned int v29; // edi
  _DWORD v30[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v31; // [rsp+38h] [rbp-50h]
  struct _KEVENT Event; // [rsp+40h] [rbp-48h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]
  char v34; // [rsp+90h] [rbp+8h] BYREF

  v30[0] = 0;
  v30[1] = 0;
  v31 = 0LL;
  ObfReferenceObject(Object);
  if ( (Object->Flags & 2) != 0 )
  {
    v14 = 1;
    if ( !IopAcquireFastLock((volatile __int32 *)&Object->Type, v11, v12, v13) )
    {
      v29 = IopAcquireFileObjectLock((char *)Object, a4, (Object->Flags & 4) != 0, &v34);
      if ( v34 )
      {
        ObfDereferenceObject(Object);
        return v29;
      }
    }
    KeResetEvent(&Object->Event);
  }
  else
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v14 = 0;
  }
  RelatedDeviceObject = IoGetRelatedDeviceObject(Object);
  LOBYTE(v16) = v14 == 0;
  LOBYTE(v17) = RelatedDeviceObject->StackSize;
  Irp = pIoAllocateIrp(RelatedDeviceObject, v17, v16, retaddr);
  v19 = (IRP *)Irp;
  if ( Irp )
  {
    *(_QWORD *)(Irp + 192) = Object;
    *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
    *(_BYTE *)(Irp + 64) = a4;
    if ( v14 )
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
    v20 = *(_QWORD *)(Irp + 184);
    v21 = a7;
    *(_QWORD *)(Irp + 72) = v30;
    v22 = a5;
    *(_QWORD *)(v20 - 24) = Object;
    *(_BYTE *)(v20 - 72) = v21 != 0 ? 5 : 10;
    v19->Flags |= 0x10u;
    v19->AssociatedIrp.MasterIrp = (struct _IRP *)v22;
    *(_DWORD *)(v20 - 64) = a3;
    *(_DWORD *)(v20 - 56) = a2;
    IopQueueThreadIrp((__int64)v19);
    v23 = IofCallDriver(RelatedDeviceObject, v19);
    FinalStatus = v23;
    if ( v14 )
    {
      if ( v23 == 259 )
      {
        IopWaitForSynchronousIo(v19, (__int64)Object, a4);
        FinalStatus = Object->FinalStatus;
      }
      _InterlockedExchange((volatile __int32 *)&Object->Busy, 0);
      if ( Object->Waiters )
        KeSetEvent(&Object->Lock, 0, 0);
      ObfDereferenceObject(Object);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v25, v26, v27);
    }
    else if ( v23 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      FinalStatus = v30[0];
    }
    *a6 = v31;
    return FinalStatus;
  }
  else
  {
    IopAllocateIrpCleanup(Object, 0LL);
    return 3221225626LL;
  }
}
