/*
 * XREFs of PopAllocateIrp @ 0x140121CF4
 * Callers:
 *     PopRequestPowerIrp @ 0x140121B34 (PopRequestPowerIrp.c)
 *     PopNotifyDevice @ 0x1403A51FC (PopNotifyDevice.c)
 * Callees:
 *     IoAllocateIrp @ 0x14001AF44 (IoAllocateIrp.c)
 *     IoGetAttachedDeviceReference @ 0x14001B010 (IoGetAttachedDeviceReference.c)
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     ExFreeToNPagedLookasideList @ 0x140079F84 (ExFreeToNPagedLookasideList.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x140098860 (IoGetDeviceAttachmentBaseRef.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1400BB7D4 (ExAllocateFromNPagedLookasideList.c)
 *     PopFxLockDevice @ 0x1400DA88C (PopFxLockDevice.c)
 *     IoReuseIrp @ 0x140100350 (IoReuseIrp.c)
 *     PopFxAllocatePowerIrp @ 0x1401223D0 (PopFxAllocatePowerIrp.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     VfIrpWatermark @ 0x1406C0020 (VfIrpWatermark.c)
 */

__int64 __fastcall PopAllocateIrp(
        struct _DEVICE_OBJECT *a1,
        __int64 a2,
        char a3,
        int a4,
        int a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9,
        _QWORD *a10,
        __int64 *a11)
{
  int v11; // ebx
  IRP *v13; // rdi
  __int64 v14; // rsi
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
  __int64 v31; // [rsp+40h] [rbp-38h] BYREF
  KIRQL v32[8]; // [rsp+48h] [rbp-30h] BYREF
  LARGE_INTEGER Interval; // [rsp+50h] [rbp-28h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-20h] BYREF
  PDEVICE_OBJECT v36; // [rsp+C8h] [rbp+50h]

  v11 = 0;
  *(_QWORD *)v32 = 0LL;
  v13 = 0LL;
  v31 = 0LL;
  v14 = 0LL;
  *a10 = 0LL;
  *a11 = 0LL;
  AttachedDeviceReference = IoGetAttachedDeviceReference(a1);
  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(a1);
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
    PowerIrp = PopFxAllocatePowerIrp(DeviceNode, (int)a1, a5, a8, a9, a7, (KIRQL)v32, (__int64)&v31);
    v21 = PowerIrp;
    if ( PowerIrp >= 0 || PowerIrp == -1073741130 )
    {
      v13 = *(IRP **)v32;
      v14 = v31;
      if ( PowerIrp != 259 )
      {
        v19 = 2;
        goto LABEL_11;
      }
    }
    else
    {
      v13 = *(IRP **)v32;
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
    memset((void *)v14, 0, 0xF8uLL);
    *(_QWORD *)(v14 + 32) = AttachedDeviceReference;
    *(_QWORD *)(v14 + 24) = v17;
    *(_BYTE *)(v14 + 184) = a3;
    *(_DWORD *)(v14 + 188) = a4;
    *(_DWORD *)(v14 + 192) = a5;
    *(_QWORD *)(v14 + 16) = v13;
    *(_QWORD *)(v14 + 200) = v22;
    *(_QWORD *)(v14 + 216) = a8;
    *(_QWORD *)(v14 + 224) = a9;
    *(_QWORD *)(v14 + 232) = a1;
    CurrentStackLocation = v13->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].DeviceObject = 0LL;
    CurrentStackLocation[-1].Context = (PVOID)v14;
    v26 = --v13->Tail.Overlay.CurrentStackLocation;
    --v13->CurrentLocation;
    v26[-1].MajorFunction = 22;
    v26[-1].MinorFunction = a3;
    v26[-1].DeviceObject = AttachedDeviceReference;
    KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
    v27 = v31;
    PopIrpLockThread = (__int64)KeGetCurrentThread();
    v28 = (__int64 **)qword_1402DE598;
    *(_QWORD *)v31 = &PopIrpList;
    *(_QWORD *)(v27 + 8) = v28;
    if ( *v28 != &PopIrpList )
      __fastfail(3u);
    *v28 = (__int64 *)v27;
    qword_1402DE598 = v27;
    PopIrpLockThread = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    AttachedDeviceReference = 0LL;
    v13 = *(IRP **)v32;
    v29 = 0LL;
    v21 = 0;
    *a10 = *(_QWORD *)v32;
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
    v31 = (__int64)ExAllocateFromNPagedLookasideList(&PopIrpDataLookaside);
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
    *(_QWORD *)v32 = IoAllocateIrp(AttachedDeviceReference->StackSize + 1, 0);
    v13 = *(IRP **)v32;
    if ( *(_QWORD *)v32 )
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
    ExFreeToNPagedLookasideList(&PopIrpDataLookaside, (PVOID)v14);
  if ( AttachedDeviceReference )
    ObfDereferenceObjectWithTag(AttachedDeviceReference, 0x746C6644u);
  if ( v29 )
    ObfDereferenceObjectWithTag(v29, 0x746C6644u);
  return (unsigned int)v21;
}
