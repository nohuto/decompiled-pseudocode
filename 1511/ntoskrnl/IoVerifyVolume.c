/*
 * XREFs of IoVerifyVolume @ 0x1405FA2C0
 * Callers:
 *     <none>
 * Callees:
 *     IopQueueThreadIrp @ 0x140043B00 (IopQueueThreadIrp.c)
 *     IofCallDriver @ 0x14007E4C0 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     IopDecrementVpbRefCount @ 0x14007E6B0 (IopDecrementVpbRefCount.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     IopDereferenceVpbAndFree @ 0x1400D7CB0 (IopDereferenceVpbAndFree.c)
 *     IopReferenceVerifyVpb @ 0x1401B7630 (IopReferenceVerifyVpb.c)
 *     IopMountVolume @ 0x1404DFC14 (IopMountVolume.c)
 *     PoVolumeDevice @ 0x140541E38 (PoVolumeDevice.c)
 *     IopCreateVpb @ 0x14054571C (IopCreateVpb.c)
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
  __int64 v11; // r8
  IRP *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // r14
  _DWORD v16[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v17; // [rsp+38h] [rbp-28h]
  struct _KEVENT Event; // [rsp+40h] [rbp-20h] BYREF
  void *retaddr; // [rsp+98h] [rbp+38h]
  PDEVICE_OBJECT DeviceObjecta; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v21; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v22; // [rsp+B8h] [rbp+58h] BYREF

  v16[0] = 0;
  v16[1] = 0;
  v17 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  p_DeviceLock = &DeviceObject->DeviceLock;
  KeWaitForSingleObject(&DeviceObject->DeviceLock, Executive, 0, 0, 0LL);
  if ( !IopReferenceVerifyVpb((__int64)DeviceObject, (ULONG_PTR *)&v22, &DeviceObjecta) )
  {
    v6 = 0;
LABEL_11:
    if ( (int)IopCreateVpb((__int64)DeviceObject) < 0
      || (PoVolumeDevice((__int64)DeviceObject),
          v21 = 0LL,
          (int)IopMountVolume((ULONG_PTR)DeviceObject, AllowRawMount, 1, 0, (ULONG_PTR *)&v21) < 0) )
    {
      DeviceObject->Flags &= ~2u;
    }
    else if ( v21 )
    {
      IopDecrementVpbRefCount(v21, 1);
    }
    goto LABEL_16;
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v8 = DeviceObjecta;
  for ( i = DeviceObjecta->AttachedDevice; i; i = i->AttachedDevice )
    v8 = i;
  LOBYTE(v7) = v8->StackSize;
  Irp = pIoAllocateIrp(v8, v7, 0LL, retaddr);
  v12 = (IRP *)Irp;
  if ( !Irp )
  {
    v6 = -1073741670;
    goto LABEL_16;
  }
  *(_DWORD *)(Irp + 16) = 66;
  *(_BYTE *)(Irp + 64) = 0;
  *(_QWORD *)(Irp + 80) = &Event;
  *(_QWORD *)(Irp + 72) = v16;
  v13 = *(_QWORD *)(Irp + 184);
  v14 = v22;
  *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
  *(_BYTE *)(v13 - 70) = AllowRawMount != 0;
  *(_QWORD *)(v13 - 56) = DeviceObjecta;
  *(_WORD *)(v13 - 72) = 525;
  *(_QWORD *)(v13 - 64) = v14;
  IopQueueThreadIrp(Irp, v13, v11);
  v6 = IofCallDriver(v8, v12);
  if ( v6 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v6 = v16[0];
  }
  IopDereferenceVpbAndFree(v14);
  if ( v6 == -1073741806 )
    goto LABEL_11;
LABEL_16:
  KeSetEvent(p_DeviceLock, 0, 0);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v6;
}
