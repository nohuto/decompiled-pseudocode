/*
 * XREFs of IoVerifyVolume @ 0x140674678
 * Callers:
 *     <none>
 * Callees:
 *     IopDecrementVpbRefCount @ 0x1400457D0 (IopDecrementVpbRefCount.c)
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     IopQueueThreadIrp @ 0x140048420 (IopQueueThreadIrp.c)
 *     IofCallDriver @ 0x140048540 (IofCallDriver.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     IopDereferenceVpbAndFree @ 0x14010C250 (IopDereferenceVpbAndFree.c)
 *     IopReferenceVerifyVpb @ 0x1401F2970 (IopReferenceVerifyVpb.c)
 *     IopMountVolume @ 0x14040ADB8 (IopMountVolume.c)
 *     PoVolumeDevice @ 0x1405B7EDC (PoVolumeDevice.c)
 *     IopCreateVpb @ 0x1405BE634 (IopCreateVpb.c)
 */

NTSTATUS __stdcall IoVerifyVolume(PDEVICE_OBJECT DeviceObject, BOOLEAN AllowRawMount)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KEVENT *p_DeviceLock; // r15
  NTSTATUS v6; // edi
  __int64 v7; // rdx
  PDEVICE_OBJECT v8; // rdi
  struct _DEVICE_OBJECT *i; // rax
  __int64 Irp; // rax
  IRP *v11; // rsi
  struct _KTHREAD *v12; // rcx
  __int16 v13; // ax
  __int64 v15; // rdx
  __int64 v16; // r14
  struct _KTHREAD *v17; // rcx
  __int16 v18; // ax
  _QWORD v19[2]; // [rsp+30h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-20h] BYREF
  void *retaddr; // [rsp+98h] [rbp+38h]
  PDEVICE_OBJECT DeviceObjecta; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v23; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v24; // [rsp+B8h] [rbp+58h] BYREF

  v19[0] = 0LL;
  v19[1] = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  p_DeviceLock = &DeviceObject->DeviceLock;
  KeWaitForSingleObject(&DeviceObject->DeviceLock, Executive, 0, 0, 0LL);
  if ( !IopReferenceVerifyVpb((__int64)DeviceObject, (ULONG_PTR *)&v24, &DeviceObjecta) )
  {
    v6 = 0;
LABEL_15:
    if ( (int)IopCreateVpb((__int64)DeviceObject) < 0
      || (PoVolumeDevice((__int64)DeviceObject),
          v23 = 0LL,
          (int)IopMountVolume((ULONG_PTR)DeviceObject, AllowRawMount, 1, 0, (ULONG_PTR *)&v23) < 0) )
    {
      DeviceObject->Flags &= ~2u;
    }
    else if ( v23 )
    {
      IopDecrementVpbRefCount(v23, 1);
    }
LABEL_20:
    KeSetEvent(p_DeviceLock, 0, 0);
    v17 = KeGetCurrentThread();
    v18 = v17->KernelApcDisable + 1;
    v17->KernelApcDisable = v18;
    if ( !v18
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v17->ApcState.ApcListHead[0].Flink != &v17->152
      && !v17->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return v6;
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v8 = DeviceObjecta;
  for ( i = DeviceObjecta->AttachedDevice; i; i = i->AttachedDevice )
    v8 = i;
  LOBYTE(v7) = v8->StackSize;
  Irp = pIoAllocateIrp(v8, v7, 0LL, retaddr);
  v11 = (IRP *)Irp;
  if ( Irp )
  {
    *(_DWORD *)(Irp + 16) = 66;
    *(_BYTE *)(Irp + 64) = 0;
    *(_QWORD *)(Irp + 80) = &Event;
    *(_QWORD *)(Irp + 72) = v19;
    v15 = *(_QWORD *)(Irp + 184);
    v16 = v24;
    *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
    *(_BYTE *)(v15 - 70) = AllowRawMount != 0;
    *(_QWORD *)(v15 - 56) = DeviceObjecta;
    *(_WORD *)(v15 - 72) = 525;
    *(_QWORD *)(v15 - 64) = v16;
    IopQueueThreadIrp(Irp);
    v6 = IofCallDriver(v8, v11);
    if ( v6 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v6 = v19[0];
    }
    IopDereferenceVpbAndFree(v16);
    if ( v6 != -1073741806 )
      goto LABEL_20;
    goto LABEL_15;
  }
  KeSetEvent(p_DeviceLock, 0, 0);
  v12 = KeGetCurrentThread();
  v13 = v12->KernelApcDisable + 1;
  v12->KernelApcDisable = v13;
  if ( !v13
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v12->ApcState.ApcListHead[0].Flink != &v12->152
    && !v12->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return -1073741670;
}
