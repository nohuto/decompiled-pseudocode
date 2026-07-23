/*
 * XREFs of IopCloseFile @ 0x140442010
 * Callers:
 *     IopParseDevice @ 0x14043F7C0 (IopParseDevice.c)
 *     IopDeleteFile @ 0x140445270 (IopDeleteFile.c)
 *     IopCreateFile @ 0x14045A850 (IopCreateFile.c)
 * Callees:
 *     IopDequeueIrpFromThread @ 0x14002D960 (IopDequeueIrpFromThread.c)
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     IoGetAttachedDevice @ 0x14002DA40 (IoGetAttachedDevice.c)
 *     IofCallDriver @ 0x14002DBE0 (IofCallDriver.c)
 *     IoGetRelatedDeviceObject @ 0x14002DC60 (IoGetRelatedDeviceObject.c)
 *     IopQueueThreadIrp @ 0x14002DCF0 (IopQueueThreadIrp.c)
 *     IopAllocateIrpMustSucceed @ 0x14002DD90 (IopAllocateIrpMustSucceed.c)
 *     IopResetEvent @ 0x14002E140 (IopResetEvent.c)
 *     IoFreeIrp @ 0x140055950 (IoFreeIrp.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     IopSetLockOperationProcess @ 0x140078558 (IopSetLockOperationProcess.c)
 *     IopGetFileObjectExtension @ 0x14007B5A0 (IopGetFileObjectExtension.c)
 *     IopCloseFileObjectExtension @ 0x1400A30E0 (IopCloseFileObjectExtension.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     IopAcquireFastLock_0 @ 0x1400FA700 (IopAcquireFastLock_0.c)
 *     IopAcquireFileObjectLock @ 0x1403EE090 (IopAcquireFileObjectLock.c)
 *     IopCleanupProcessResources @ 0x1404B226C (IopCleanupProcessResources.c)
 *     IopFreeBandwidthContract @ 0x140629438 (IopFreeBandwidthContract.c)
 *     VfFastIoCheckState @ 0x1407058F8 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1407059A8 (VfFastIoSnapState.c)
 */

void __fastcall IopCloseFile(__int64 a1, struct _FILE_OBJECT *a2, __int64 a3, __int64 a4)
{
  __int64 FileObjectExtension; // rbp
  __int64 v7; // rdi
  int v8; // r15d
  _QWORD *v9; // r8
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  struct _DEVICE_OBJECT *v14; // rbp
  PFAST_IO_DISPATCH FastIoDispatch; // r14
  __int64 (__fastcall *FastIoUnlockAll)(_QWORD, _QWORD, _QWORD, _QWORD); // r14
  void *v17; // rdi
  char v18; // r12
  IRP *v19; // rdi
  struct _IO_STACK_LOCATION *v20; // rcx
  struct _KTHREAD *v21; // rcx
  __int16 v22; // ax
  PDEVICE_OBJECT AttachedDevice; // rax
  struct _DEVICE_OBJECT *v24; // r13
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v26; // rcx
  __int16 v27; // ax
  IRP *MustSucceed; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  struct _KTHREAD *v30; // rax
  struct _KTHREAD *v31; // rcx
  __int16 v32; // ax
  _BYTE v33[8]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v34[16]; // [rsp+38h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+48h] [rbp-40h] BYREF
  char v36; // [rsp+A0h] [rbp+18h] BYREF

  if ( a3 == 1 )
  {
    FileObjectExtension = 0LL;
    v7 = 0LL;
    v8 = 0;
    if ( a2->FileObjectExtension )
    {
      FileObjectExtension = IopGetFileObjectExtension((__int64)a2, 2, 0LL);
      v7 = IopGetFileObjectExtension((__int64)a2, 4, v9);
    }
    if ( a4 == 1 )
    {
      if ( (a2->Flags & 0x800) != 0 )
        AttachedDevice = IoGetAttachedDevice(a2->DeviceObject);
      else
        AttachedDevice = IoGetRelatedDeviceObject(a2);
      a2->Flags |= 0x40000u;
      v24 = AttachedDevice;
      if ( a1 && (a2->Flags & 2) != 0 )
      {
        CurrentThread = KeGetCurrentThread();
        v8 = 1;
        --CurrentThread->KernelApcDisable;
        if ( _InterlockedExchange((volatile __int32 *)&a2->Busy, 1) )
        {
          v26 = KeGetCurrentThread();
          v27 = v26->KernelApcDisable + 1;
          v26->KernelApcDisable = v27;
          if ( !v27
            && ($2B8565053CDC740D4E4887693DD8AC9E *)v26->ApcState.ApcListHead[0].Flink != &v26->152
            && !v26->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery((__int64)v26);
          }
          while ( (unsigned int)IopAcquireFileObjectLock((char *)a2, 0, 0, v33) )
            ;
        }
        else
        {
          ObfReferenceObject(a2);
        }
      }
      if ( v7 )
        IopFreeBandwidthContract(a2);
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      IopResetEvent((__int64)a2);
      MustSucceed = (IRP *)IopAllocateIrpMustSucceed((__int64)v24, (unsigned __int8)v24->StackSize);
      MustSucceed->Tail.Overlay.OriginalFileObject = a2;
      MustSucceed->Tail.Overlay.Thread = KeGetCurrentThread();
      MustSucceed->UserIosb = &MustSucceed->IoStatus;
      CurrentStackLocation = MustSucceed->Tail.Overlay.CurrentStackLocation;
      MustSucceed->RequestorMode = 0;
      MustSucceed->UserEvent = &Event;
      MustSucceed->Overlay.AllocationSize.QuadPart = 0LL;
      MustSucceed->Flags = 1028;
      CurrentStackLocation[-1].MajorFunction = 18;
      CurrentStackLocation[-1].FileObject = a2;
      IopQueueThreadIrp((__int64)MustSucceed);
      v30 = KeGetCurrentThread();
      ++v30->OtherOperationCount;
      __incgsdword(0x2E64u);
      if ( IofCallDriver(v24, MustSucceed) == 259 )
        KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
      MustSucceed->Tail.Overlay.Thread = KeGetCurrentThread();
      IopDequeueIrpFromThread(MustSucceed);
      IoFreeIrp(MustSucceed);
      if ( v8 )
      {
        _InterlockedExchange((volatile __int32 *)&a2->Busy, 0);
        if ( a2->Waiters )
          KeSetEvent(&a2->Lock, 0, 0);
        ObfDereferenceObject(a2);
        v31 = KeGetCurrentThread();
        v32 = v31->KernelApcDisable + 1;
        v31->KernelApcDisable = v32;
        if ( !v32
          && ($2B8565053CDC740D4E4887693DD8AC9E *)v31->ApcState.ApcListHead[0].Flink != &v31->152
          && !v31->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery((__int64)v31);
        }
      }
      if ( a2->CompletionContext || FileObjectExtension )
        IopCleanupProcessResources(a2, a1, FileObjectExtension);
      if ( a2->FileObjectExtension )
        IopCloseFileObjectExtension((__int64)a2);
    }
    else
    {
      if ( a2->CompletionContext || FileObjectExtension )
        IopCleanupProcessResources(a2, a1, FileObjectExtension);
      if ( (int)IopSetLockOperationProcess((__int64)a2, a1, 1, a4) >= 0 )
      {
        if ( (a2->Flags & 0x800) != 0 )
          RelatedDeviceObject = IoGetAttachedDevice(a2->DeviceObject);
        else
          RelatedDeviceObject = IoGetRelatedDeviceObject(a2);
        v14 = RelatedDeviceObject;
        FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
        if ( (a2->Flags & 2) != 0 && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) == 0 )
        {
          v8 = 1;
          if ( !IopAcquireFastLock_0((volatile __int32 *)&a2->Type, v11, v12, v13) )
          {
            while ( (unsigned int)IopAcquireFileObjectLock((char *)a2, 0, 0, &v36) )
              ;
          }
        }
        if ( !FastIoDispatch )
          goto LABEL_24;
        FastIoUnlockAll = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->FastIoUnlockAll;
        if ( !FastIoUnlockAll )
          goto LABEL_24;
        if ( (MmVerifierData & 0x10) != 0 )
          v17 = (void *)VfFastIoSnapState();
        else
          v17 = 0LL;
        v18 = FastIoUnlockAll(a2, KeGetCurrentThread()->ApcState.Process, v34, v14);
        if ( v17 )
          VfFastIoCheckState(v17, (int)FastIoUnlockAll);
        if ( !v18 )
        {
LABEL_24:
          KeInitializeEvent(&Event, SynchronizationEvent, 0);
          v19 = (IRP *)IopAllocateIrpMustSucceed((__int64)v14, (unsigned __int8)v14->StackSize);
          v19->Tail.Overlay.OriginalFileObject = a2;
          v19->Tail.Overlay.Thread = KeGetCurrentThread();
          v19->UserIosb = &v19->IoStatus;
          v20 = v19->Tail.Overlay.CurrentStackLocation;
          v19->RequestorMode = 0;
          v19->UserEvent = &Event;
          v19->Flags = 4100;
          v19->Overlay.AllocationSize.QuadPart = 0LL;
          *(_WORD *)&v20[-1].MajorFunction = 785;
          v20[-1].FileObject = a2;
          ObfReferenceObject(a2);
          IopQueueThreadIrp((__int64)v19);
          if ( IofCallDriver(v14, v19) == 259 )
            KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
        }
        if ( v8 == 1 )
        {
          _InterlockedExchange((volatile __int32 *)&a2->Busy, 0);
          if ( a2->Waiters )
            KeSetEvent(&a2->Lock, 0, 0);
          ObfDereferenceObject(a2);
          v21 = KeGetCurrentThread();
          v22 = v21->KernelApcDisable + 1;
          v21->KernelApcDisable = v22;
          if ( !v22
            && ($2B8565053CDC740D4E4887693DD8AC9E *)v21->ApcState.ApcListHead[0].Flink != &v21->152
            && !v21->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery((__int64)v21);
          }
        }
      }
    }
  }
}
