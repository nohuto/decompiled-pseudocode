/*
 * XREFs of IopCloseFile @ 0x14048F8A0
 * Callers:
 *     IopDeleteFile @ 0x1404886E0 (IopDeleteFile.c)
 *     IopParseDevice @ 0x14048B640 (IopParseDevice.c)
 *     IopCreateFile @ 0x14050A2E0 (IopCreateFile.c)
 * Callees:
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     IoGetRelatedDeviceObject @ 0x140048020 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpMustSucceed @ 0x1400480B0 (IopAllocateIrpMustSucceed.c)
 *     IopQueueThreadIrp @ 0x140048420 (IopQueueThreadIrp.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     IofCallDriver @ 0x140048540 (IofCallDriver.c)
 *     IopDequeueIrpFromThread @ 0x1400485C0 (IopDequeueIrpFromThread.c)
 *     IoFreeIrp @ 0x14004BC70 (IoFreeIrp.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     IopSetLockOperationProcess @ 0x14006DB64 (IopSetLockOperationProcess.c)
 *     IopGetFileObjectExtension @ 0x1400716C0 (IopGetFileObjectExtension.c)
 *     IoGetAttachedDevice @ 0x1400D1B70 (IoGetAttachedDevice.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     IopCleanupProcessResources @ 0x1404A84DC (IopCleanupProcessResources.c)
 *     IopAcquireFileObjectLock @ 0x140540A5C (IopAcquireFileObjectLock.c)
 *     IopFreeBandwidthContract @ 0x140679EEC (IopFreeBandwidthContract.c)
 *     VfFastIoCheckState @ 0x140739E88 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140739F38 (VfFastIoSnapState.c)
 */

void __fastcall IopCloseFile(__int64 a1, struct _FILE_OBJECT *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 FileObjectExtension; // rbp
  int v8; // r12d
  _QWORD *v9; // r8
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  struct _DEVICE_OBJECT *v11; // r14
  PFAST_IO_DISPATCH FastIoDispatch; // rbp
  struct _KTHREAD *v13; // rax
  struct _KTHREAD *v14; // rcx
  __int16 v15; // ax
  __int64 (__fastcall *FastIoUnlockAll)(_QWORD, _QWORD, _QWORD, _QWORD); // rbp
  void *v17; // rbx
  char v18; // r15
  IRP *v19; // rbx
  struct _IO_STACK_LOCATION *v20; // rcx
  struct _KTHREAD *v21; // rcx
  __int16 v22; // ax
  PDEVICE_OBJECT AttachedDevice; // rax
  struct _DEVICE_OBJECT *v24; // r15
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v26; // rcx
  __int16 v27; // ax
  IRP *MustSucceed; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  struct _KTHREAD *v30; // rax
  struct _KTHREAD *v31; // rcx
  __int16 v32; // ax
  _BYTE v33[16]; // [rsp+38h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+48h] [rbp-40h] BYREF

  if ( a3 == 1 )
  {
    v5 = 0LL;
    FileObjectExtension = 0LL;
    v8 = 0;
    if ( a2->FileObjectExtension )
    {
      FileObjectExtension = IopGetFileObjectExtension((__int64)a2, 2, 0LL);
      v5 = IopGetFileObjectExtension((__int64)a2, 4, v9);
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
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v26->ApcState.ApcListHead[0].Flink != &v26->152
            && !v26->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          while ( (unsigned int)IopAcquireFileObjectLock(a2) )
            ;
        }
        else
        {
          ObfReferenceObject(a2);
        }
      }
      if ( v5 )
        IopFreeBandwidthContract(a2);
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      if ( (a2->Flags & 0x4000000) == 0 )
        KeResetEvent(&a2->Event);
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
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v31->ApcState.ApcListHead[0].Flink != &v31->152
          && !v31->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
      }
      if ( a2->CompletionContext || FileObjectExtension )
        IopCleanupProcessResources(a2, a1, FileObjectExtension);
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
        v11 = RelatedDeviceObject;
        FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
        if ( (a2->Flags & 2) != 0 && (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 1) == 0 )
        {
          v13 = KeGetCurrentThread();
          v8 = 1;
          --v13->KernelApcDisable;
          if ( _InterlockedExchange((volatile __int32 *)&a2->Busy, 1) )
          {
            v14 = KeGetCurrentThread();
            v15 = v14->KernelApcDisable + 1;
            v14->KernelApcDisable = v15;
            if ( !v15
              && ($CD287064E7C9F7953DE243E927CFCB99 *)v14->ApcState.ApcListHead[0].Flink != &v14->152
              && !v14->SpecialApcDisable )
            {
              KiCheckForKernelApcDelivery();
            }
            while ( (unsigned int)IopAcquireFileObjectLock(a2) )
              ;
          }
          else
          {
            ObfReferenceObject(a2);
          }
        }
        if ( !FastIoDispatch )
          goto LABEL_29;
        FastIoUnlockAll = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->FastIoUnlockAll;
        if ( !FastIoUnlockAll )
          goto LABEL_29;
        if ( (MmVerifierData & 0x10) != 0 )
          v17 = (void *)VfFastIoSnapState();
        else
          v17 = 0LL;
        v18 = FastIoUnlockAll(a2, KeGetCurrentThread()->ApcState.Process, v33, v11);
        if ( v17 )
          VfFastIoCheckState(v17, (int)FastIoUnlockAll);
        if ( !v18 )
        {
LABEL_29:
          KeInitializeEvent(&Event, SynchronizationEvent, 0);
          v19 = (IRP *)IopAllocateIrpMustSucceed((__int64)v11, (unsigned __int8)v11->StackSize);
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
          if ( IofCallDriver(v11, v19) == 259 )
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
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v21->ApcState.ApcListHead[0].Flink != &v21->152
            && !v21->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
        }
      }
    }
  }
}
