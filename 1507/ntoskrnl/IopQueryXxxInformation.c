/*
 * XREFs of IopQueryXxxInformation @ 0x14042A8D8
 * Callers:
 *     IopQueryNameInternal @ 0x140426C40 (IopQueryNameInternal.c)
 *     IoQueryFileInformation @ 0x14042A8B0 (IoQueryFileInformation.c)
 *     IoQueryVolumeInformation @ 0x140558044 (IoQueryVolumeInformation.c)
 * Callees:
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     IoGetRelatedDeviceObject @ 0x140048020 (IoGetRelatedDeviceObject.c)
 *     IopQueueThreadIrp @ 0x140048420 (IopQueueThreadIrp.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     IofCallDriver @ 0x140048540 (IofCallDriver.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     IopAcquireFileObjectLock @ 0x140540A5C (IopAcquireFileObjectLock.c)
 *     IopCancelAlertedRequest @ 0x14058EC70 (IopCancelAlertedRequest.c)
 *     IopAllocateIrpCleanup @ 0x140670E48 (IopAllocateIrpCleanup.c)
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
  struct _KTHREAD *CurrentThread; // rax
  char v12; // r14
  PDEVICE_OBJECT RelatedDeviceObject; // rbp
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 Irp; // rax
  IRP *v17; // rdi
  __int64 v18; // r8
  NTSTATUS v19; // eax
  unsigned int FinalStatus; // ebp
  bool v21; // bp
  KPROCESSOR_MODE v22; // al
  NTSTATUS v23; // eax
  struct _KTHREAD *v24; // rcx
  __int16 v25; // ax
  struct _KTHREAD *v27; // rcx
  __int16 v28; // ax
  unsigned int v29; // edi
  bool v30; // dl
  unsigned __int8 CurrentIrql; // al
  __int64 v32; // [rsp+30h] [rbp-58h] BYREF
  __int64 v33; // [rsp+38h] [rbp-50h]
  struct _KEVENT Objecta; // [rsp+40h] [rbp-48h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]
  char v36; // [rsp+90h] [rbp+8h]

  v32 = 0LL;
  v33 = 0LL;
  ObfReferenceObject(Object);
  if ( (Object->Flags & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( _InterlockedExchange((volatile __int32 *)&Object->Busy, 1) )
    {
      v27 = KeGetCurrentThread();
      v28 = v27->KernelApcDisable + 1;
      v27->KernelApcDisable = v28;
      if ( !v28
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v27->ApcState.ApcListHead[0].Flink != &v27->152
        && !v27->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      v29 = IopAcquireFileObjectLock(Object);
      if ( v36 )
      {
        ObfDereferenceObject(Object);
        return v29;
      }
    }
    else
    {
      ObfReferenceObject(Object);
    }
    KeResetEvent(&Object->Event);
    v12 = 1;
  }
  else
  {
    KeInitializeEvent(&Objecta, SynchronizationEvent, 0);
    v12 = 0;
  }
  RelatedDeviceObject = IoGetRelatedDeviceObject(Object);
  LOBYTE(v14) = v12 == 0;
  LOBYTE(v15) = RelatedDeviceObject->StackSize;
  Irp = pIoAllocateIrp(RelatedDeviceObject, v15, v14, retaddr);
  v17 = (IRP *)Irp;
  if ( Irp )
  {
    *(_QWORD *)(Irp + 192) = Object;
    *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
    *(_BYTE *)(Irp + 64) = a4;
    if ( v12 )
    {
      *(_QWORD *)(Irp + 80) = 0LL;
      *(_BYTE *)(Irp + 71) |= 2u;
    }
    else
    {
      *(_DWORD *)(Irp + 16) = 4;
      *(_QWORD *)(Irp + 80) = &Objecta;
    }
    *(_QWORD *)(Irp + 88) = 0LL;
    v18 = *(_QWORD *)(Irp + 184);
    *(_QWORD *)(Irp + 72) = &v32;
    *(_QWORD *)(v18 - 24) = Object;
    *(_BYTE *)(v18 - 72) = a7 != 0 ? 5 : 10;
    *(_DWORD *)(Irp + 16) |= 0x10u;
    *(_QWORD *)(Irp + 24) = a5;
    *(_DWORD *)(v18 - 64) = a3;
    *(_DWORD *)(v18 - 56) = a2;
    IopQueueThreadIrp(Irp);
    v19 = IofCallDriver(RelatedDeviceObject, v17);
    FinalStatus = v19;
    if ( v12 )
    {
      if ( v19 == 259 )
      {
        v21 = (Object->Flags & 4) != 0;
        while ( 1 )
        {
          v22 = a4;
          if ( !v21 )
            v22 = 0;
          v23 = KeWaitForSingleObject(&Object->Event, Executive, v22, 1u, 0LL);
          if ( v23 != 257 && v23 != 192 )
            break;
          if ( !v21 && (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 1) == 0 )
          {
            v30 = 0;
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(1uLL);
            if ( !Object->Event.Header.SignalState )
              v30 = v17->Cancel == 1;
            __writecr8(CurrentIrql);
            if ( !v30 )
              continue;
          }
          IopCancelAlertedRequest(&Object->Event, v17);
          break;
        }
        FinalStatus = Object->FinalStatus;
      }
      _InterlockedExchange((volatile __int32 *)&Object->Busy, 0);
      if ( Object->Waiters )
        KeSetEvent(&Object->Lock, 0, 0);
      ObfDereferenceObject(Object);
      v24 = KeGetCurrentThread();
      v25 = v24->KernelApcDisable + 1;
      v24->KernelApcDisable = v25;
      if ( !v25
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v24->ApcState.ApcListHead[0].Flink != &v24->152
        && !v24->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    else if ( v19 == 259 )
    {
      KeWaitForSingleObject(&Objecta, Executive, 0, 0, 0LL);
      FinalStatus = v32;
    }
    *a6 = v33;
    return FinalStatus;
  }
  else
  {
    IopAllocateIrpCleanup(Object, 0LL);
    return 3221225626LL;
  }
}
