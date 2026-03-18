/*
 * XREFs of PopAllocateIrp @ 0x140137024
 * Callers:
 *     PopRequestPowerIrp @ 0x140136E74 (PopRequestPowerIrp.c)
 *     PopNotifyDevice @ 0x1403EEB1C (PopNotifyDevice.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x140030738 (ExAllocateFromNPagedLookasideList.c)
 *     ExFreeToNPagedLookasideList @ 0x140033280 (ExFreeToNPagedLookasideList.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     IoGetAttachedDeviceReference @ 0x1400CF130 (IoGetAttachedDeviceReference.c)
 *     IoAllocateIrp @ 0x1400CF78C (IoAllocateIrp.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1400D0E10 (IoGetDeviceAttachmentBaseRef.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     IoReuseIrp @ 0x14010B380 (IoReuseIrp.c)
 *     PopFxLockDevice @ 0x14011BF2C (PopFxLockDevice.c)
 *     PopFxAllocatePowerIrp @ 0x140137708 (PopFxAllocatePowerIrp.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memset @ 0x140195A80 (memset.c)
 *     VfIrpWatermark @ 0x140741814 (VfIrpWatermark.c)
 */

__int64 __fastcall PopAllocateIrp(
        PDEVICE_OBJECT DeviceObject,
        __int64 a2,
        char a3,
        int a4,
        int a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9,
        PIRP *a10,
        __int64 *a11)
{
  int v11; // ebx
  IRP *v13; // rdi
  _QWORD *v14; // rsi
  PDEVICE_OBJECT AttachedDeviceReference; // r15
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  PDEVICE_OBJECT v17; // r12
  __int64 DeviceNode; // r13
  char v19; // al
  int PowerIrp; // eax
  int v21; // r14d
  __int64 v22; // r13
  unsigned int v23; // r12d
  unsigned int v24; // r12d
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v26; // rax
  __int64 v27; // rsi
  __int64 **v28; // rax
  PDEVICE_OBJECT v29; // r13
  _QWORD *v31; // [rsp+40h] [rbp-38h] BYREF
  PIRP Irp; // [rsp+48h] [rbp-30h] BYREF
  LARGE_INTEGER Interval; // [rsp+50h] [rbp-28h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-20h] BYREF
  PDEVICE_OBJECT v36; // [rsp+C8h] [rbp+50h]

  v11 = 0;
  Irp = 0LL;
  v13 = 0LL;
  v31 = 0LL;
  v14 = 0LL;
  *a10 = 0LL;
  *a11 = 0LL;
  AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(DeviceObject);
  v36 = DeviceAttachmentBaseRef;
  v17 = DeviceAttachmentBaseRef;
  if ( DeviceAttachmentBaseRef )
    DeviceNode = (__int64)DeviceAttachmentBaseRef->DeviceObjectExtension->DeviceNode;
  else
    DeviceNode = 0LL;
  if ( !DeviceNode )
  {
    v21 = -1073741808;
    v29 = DeviceAttachmentBaseRef;
LABEL_39:
    if ( a6 && v21 != 259 )
    {
      LOBYTE(v11) = a4 != 0;
      KeBugCheckEx(0xA0u, 1uLL, 6uLL, (ULONG_PTR)AttachedDeviceReference, v11);
    }
    goto LABEL_26;
  }
  v19 = a3;
  if ( a4 == 1 && a3 == 2 )
  {
    PowerIrp = PopFxAllocatePowerIrp(DeviceNode, (_DWORD)DeviceObject, a5, a8, a9, a7, (__int64)&Irp, (__int64)&v31);
    v21 = PowerIrp;
    if ( PowerIrp >= 0 || PowerIrp == -1073741130 )
    {
      v13 = Irp;
      v14 = v31;
      if ( PowerIrp != 259 )
      {
        v19 = 2;
        goto LABEL_11;
      }
    }
    else
    {
      v13 = Irp;
      v14 = v31;
    }
    v29 = v17;
    goto LABEL_25;
  }
  v21 = -1073741130;
LABEL_11:
  if ( v21 >= 0 )
  {
    v22 = *(_QWORD *)(DeviceNode + 80);
    if ( AttachedDeviceReference->StackSize > *(_BYTE *)(*(_QWORD *)(v22 + 16) + 66LL) )
    {
      ObfDereferenceObjectWithTag(AttachedDeviceReference, 0x746C6644u);
      ObfReferenceObjectWithTag(*(PVOID *)(v22 + 104), 0x746C6644u);
      AttachedDeviceReference = *(PDEVICE_OBJECT *)(v22 + 104);
    }
LABEL_21:
    IoReuseIrp(v13, -1073741637);
    if ( IovUtilVerifierEnabled )
      VfIrpWatermark(v13, 1LL);
    v13->IoStatus.Information = 0LL;
    v13->Tail.Overlay.ListEntry.Blink = &v13->Tail.Overlay.ListEntry;
    v13->Tail.Overlay.ListEntry.Flink = &v13->Tail.Overlay.ListEntry;
    memset(v14, 0, 0xF8uLL);
    v14[4] = AttachedDeviceReference;
    v14[3] = v17;
    *((_BYTE *)v14 + 184) = a3;
    *((_DWORD *)v14 + 47) = a4;
    *((_DWORD *)v14 + 48) = a5;
    v14[2] = v13;
    v14[25] = v22;
    v14[27] = a8;
    v14[28] = a9;
    v14[29] = DeviceObject;
    CurrentStackLocation = v13->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].DeviceObject = 0LL;
    CurrentStackLocation[-1].Context = v14;
    v26 = --v13->Tail.Overlay.CurrentStackLocation;
    --v13->CurrentLocation;
    v26[-1].MajorFunction = 22;
    v26[-1].MinorFunction = a3;
    v26[-1].DeviceObject = AttachedDeviceReference;
    KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
    v27 = (__int64)v31;
    PopIrpLockThread = (__int64)KeGetCurrentThread();
    v28 = (__int64 **)qword_14032EB68;
    *v31 = &PopIrpList;
    *(_QWORD *)(v27 + 8) = v28;
    if ( *v28 != &PopIrpList )
      __fastfail(3u);
    *v28 = (__int64 *)v27;
    qword_14032EB68 = v27;
    PopIrpLockThread = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    AttachedDeviceReference = 0LL;
    v13 = Irp;
    v29 = 0LL;
    v21 = 0;
    *a10 = Irp;
    *a11 = v27;
    v14 = 0LL;
LABEL_25:
    if ( v13 )
      goto LABEL_26;
    goto LABEL_39;
  }
  if ( v19 )
    v22 = 0LL;
  else
    v22 = PopFxLockDevice(DeviceNode, 0);
  Interval.QuadPart = -500000LL;
  v23 = 0;
  while ( 1 )
  {
    if ( v23 && KeGetCurrentIrql() <= 1u )
      KeDelayExecutionThread(0, 0, &Interval);
    ++v23;
    v31 = ExAllocateFromNPagedLookasideList(&PopIrpDataLookaside);
    v14 = v31;
    if ( v31 )
      break;
    if ( !a6 || v23 >= 0xA )
    {
      v29 = v36;
      goto LABEL_25;
    }
  }
  v24 = 0;
  while ( 1 )
  {
    if ( v24 && KeGetCurrentIrql() <= 1u )
      KeDelayExecutionThread(0, 0, &Interval);
    ++v24;
    Irp = IoAllocateIrp(AttachedDeviceReference->StackSize + 1, 0);
    v13 = Irp;
    if ( Irp )
    {
      v17 = v36;
      goto LABEL_21;
    }
    if ( !a6 )
      break;
    if ( v24 >= 0xA )
    {
      v29 = v36;
      goto LABEL_39;
    }
  }
  v29 = v36;
LABEL_26:
  if ( v14 )
    ExFreeToNPagedLookasideList(&PopIrpDataLookaside, v14);
  if ( AttachedDeviceReference )
    ObfDereferenceObjectWithTag(AttachedDeviceReference, 0x746C6644u);
  if ( v29 )
    ObfDereferenceObjectWithTag(v29, 0x746C6644u);
  return (unsigned int)v21;
}
