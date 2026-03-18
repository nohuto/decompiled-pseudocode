/*
 * XREFs of IopCloseFile @ 0x14042ECB0
 * Callers:
 *     IopParseDevice @ 0x140412F10 (IopParseDevice.c)
 *     IopDeleteFile @ 0x14042EA40 (IopDeleteFile.c)
 *     IopCreateFile @ 0x140439640 (IopCreateFile.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     IoGetRelatedDeviceObject @ 0x1400435F0 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpMustSucceed @ 0x140043AC0 (IopAllocateIrpMustSucceed.c)
 *     IopQueueThreadIrp @ 0x140043B00 (IopQueueThreadIrp.c)
 *     IopGetFileObjectExtension @ 0x14007CDA0 (IopGetFileObjectExtension.c)
 *     IofCallDriver @ 0x14007E4C0 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     IopDequeueIrpFromThread @ 0x14007E560 (IopDequeueIrpFromThread.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     IoFreeIrp @ 0x140087080 (IoFreeIrp.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 *     IopResetEvent @ 0x14008E840 (IopResetEvent.c)
 *     IoGetAttachedDevice @ 0x140097FE0 (IoGetAttachedDevice.c)
 *     IopSetLockOperationProcess @ 0x1400CC17C (IopSetLockOperationProcess.c)
 *     sub_1400E5420 @ 0x1400E5420 (sub_1400E5420.c)
 *     IopCleanupProcessResources @ 0x14048FEE8 (IopCleanupProcessResources.c)
 *     IopAcquireFileObjectLock @ 0x1404AC66C (IopAcquireFileObjectLock.c)
 *     IopFreeBandwidthContract @ 0x1405FF3C8 (IopFreeBandwidthContract.c)
 *     VfFastIoCheckState @ 0x1406B9854 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1406B9904 (VfFastIoSnapState.c)
 */

void __fastcall IopCloseFile(__int64 a1, struct _FILE_OBJECT *a2, __int64 a3, __int64 a4)
{
  __int64 FileObjectExtension; // r14
  __int64 v7; // rdi
  int v8; // r15d
  PDEVICE_OBJECT AttachedDevice; // rax
  struct _DEVICE_OBJECT *v10; // rbp
  struct _KTHREAD *CurrentThread; // rax
  IRP *MustSucceed; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  struct _KTHREAD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  struct _KTHREAD *v19; // rcx
  __int16 v20; // ax
  _QWORD *v21; // r8
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  struct _DEVICE_OBJECT *v23; // rbp
  PFAST_IO_DISPATCH FastIoDispatch; // r14
  __int64 (__fastcall *FastIoUnlockAll)(_QWORD, _QWORD, _QWORD, _QWORD); // r14
  void *v26; // rdi
  char v27; // r12
  __int64 v28; // rdx
  __int64 v29; // r8
  IRP *v30; // rdi
  struct _IO_STACK_LOCATION *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // r8
  _BYTE v34[16]; // [rsp+38h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+48h] [rbp-40h] BYREF

  if ( a3 == 1 )
  {
    FileObjectExtension = 0LL;
    v7 = 0LL;
    v8 = 0;
    if ( a2->FileObjectExtension )
    {
      FileObjectExtension = IopGetFileObjectExtension((__int64)a2, 2, 0LL);
      v7 = IopGetFileObjectExtension((__int64)a2, (int)v21 + 4, v21);
    }
    if ( a4 == 1 )
    {
      if ( (a2->Flags & 0x800) != 0 )
        AttachedDevice = IoGetAttachedDevice(a2->DeviceObject);
      else
        AttachedDevice = IoGetRelatedDeviceObject(a2);
      a2->Flags |= 0x40000u;
      v10 = AttachedDevice;
      if ( a1 && (a2->Flags & 2) != 0 )
      {
        CurrentThread = KeGetCurrentThread();
        v8 = 1;
        --CurrentThread->KernelApcDisable;
        if ( _InterlockedExchange((volatile __int32 *)&a2->Busy, 1) )
        {
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          while ( (unsigned int)IopAcquireFileObjectLock(a2) )
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
      if ( (a2->Flags & 0x4000000) == 0 )
        KeResetEvent(&a2->Event);
      MustSucceed = (IRP *)IopAllocateIrpMustSucceed((__int64)v10, (unsigned __int8)v10->StackSize);
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
      IopQueueThreadIrp((__int64)MustSucceed, v14, v15);
      v16 = KeGetCurrentThread();
      ++v16->OtherOperationCount;
      __incgsdword(0x2E64u);
      if ( IofCallDriver(v10, MustSucceed) == 259 )
        KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
      MustSucceed->Tail.Overlay.Thread = KeGetCurrentThread();
      IopDequeueIrpFromThread(MustSucceed, v17, v18);
      IoFreeIrp(MustSucceed);
      if ( v8 )
      {
        _InterlockedExchange((volatile __int32 *)&a2->Busy, 0);
        if ( a2->Waiters )
          KeSetEvent(&a2->Lock, 0, 0);
        ObfDereferenceObject(a2);
        v19 = KeGetCurrentThread();
        v20 = v19->KernelApcDisable + 1;
        v19->KernelApcDisable = v20;
        if ( !v20
          && ($E81C3296F15336D9BF9B2D43BB137B25 *)v19->ApcState.ApcListHead[0].Flink != &v19->152
          && !v19->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery((__int64)v19);
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
        v23 = RelatedDeviceObject;
        FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
        if ( (a2->Flags & 2) != 0 && (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 1) == 0 )
        {
          v8 = 1;
          if ( !sub_1400E5420((volatile __int32 *)&a2->Type) )
          {
            while ( (unsigned int)IopAcquireFileObjectLock(a2) )
              ;
          }
        }
        if ( !FastIoDispatch )
          goto LABEL_49;
        FastIoUnlockAll = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->FastIoUnlockAll;
        if ( !FastIoUnlockAll )
          goto LABEL_49;
        if ( (MmVerifierData & 0x10) != 0 )
          v26 = (void *)VfFastIoSnapState();
        else
          v26 = 0LL;
        v27 = FastIoUnlockAll(a2, KeGetCurrentThread()->ApcState.Process, v34, v23);
        if ( v26 )
          VfFastIoCheckState(v26, (int)FastIoUnlockAll);
        if ( !v27 )
        {
LABEL_49:
          KeInitializeEvent(&Event, SynchronizationEvent, 0);
          IopResetEvent((__int64)a2, v28, v29);
          v30 = (IRP *)IopAllocateIrpMustSucceed((__int64)v23, (unsigned __int8)v23->StackSize);
          v30->Tail.Overlay.OriginalFileObject = a2;
          v30->Tail.Overlay.Thread = KeGetCurrentThread();
          v30->UserIosb = &v30->IoStatus;
          v31 = v30->Tail.Overlay.CurrentStackLocation;
          v30->RequestorMode = 0;
          v30->UserEvent = &Event;
          v30->Flags = 4;
          v30->Overlay.AllocationSize.QuadPart = 0LL;
          *(_WORD *)&v31[-1].MajorFunction = 785;
          v31[-1].FileObject = a2;
          ObfReferenceObject(a2);
          IopQueueThreadIrp((__int64)v30, v32, v33);
          if ( IofCallDriver(v23, v30) == 259 )
            KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
        }
        if ( v8 == 1 )
        {
          _InterlockedExchange((volatile __int32 *)&a2->Busy, 0);
          if ( a2->Waiters )
            KeSetEvent(&a2->Lock, 0, 0);
          ObfDereferenceObject(a2);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        }
      }
    }
  }
}
