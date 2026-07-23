/*
 * XREFs of PopAllocateIrp @ 0x14012B2F0
 * Callers:
 *     PopRequestPowerIrp @ 0x14012B108 (PopRequestPowerIrp.c)
 *     PopNotifyDevice @ 0x1403CF498 (PopNotifyDevice.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14000F024 (ExFreeToNPagedLookasideList.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14006FA30 (ExAllocateFromNPagedLookasideList.c)
 *     PopFxLockDevice @ 0x140085838 (PopFxLockDevice.c)
 *     IoGetAttachedDeviceReference @ 0x1400C2790 (IoGetAttachedDeviceReference.c)
 *     IoAllocateIrp @ 0x1400C3FBC (IoAllocateIrp.c)
 *     KeDelayExecutionThread @ 0x1400CE420 (KeDelayExecutionThread.c)
 *     IoReuseIrp @ 0x1400CF080 (IoReuseIrp.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1400F93B8 (IoGetDeviceAttachmentBaseRef.c)
 *     PopFxAllocatePowerIrp @ 0x14012B9B0 (PopFxAllocatePowerIrp.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     VfIrpWatermark @ 0x14070C0A8 (VfIrpWatermark.c)
 */

__int64 __fastcall PopAllocateIrp(
        struct _DEVICE_OBJECT *a1,
        __int64 a2,
        UCHAR a3,
        int a4,
        int a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9,
        PIRP *a10,
        _QWORD *a11)
{
  int v11; // ebx
  PIRP QuadPart; // rsi
  _QWORD *v14; // rdi
  PDEVICE_OBJECT AttachedDeviceReference; // r13
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  PDEVICE_OBJECT v17; // r12
  __int64 DeviceNode; // r15
  UCHAR v19; // al
  int PowerIrp; // eax
  int v21; // r14d
  unsigned int v22; // r15d
  unsigned int v23; // r15d
  PVOID *v24; // r14
  UCHAR v25; // r8
  int v26; // eax
  __int64 v27; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v29; // rax
  _QWORD *v30; // rax
  PVOID Entry; // [rsp+40h] [rbp-28h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-20h] BYREF
  LARGE_INTEGER Interval; // [rsp+B8h] [rbp+50h] BYREF
  UCHAR v36; // [rsp+C0h] [rbp+58h]
  int v37; // [rsp+C8h] [rbp+60h]

  v37 = a4;
  v36 = a3;
  v11 = 0;
  Interval.QuadPart = 0LL;
  QuadPart = 0LL;
  Entry = 0LL;
  v14 = 0LL;
  *a10 = 0LL;
  *a11 = 0LL;
  AttachedDeviceReference = IoGetAttachedDeviceReference(a1);
  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(a1);
  v17 = DeviceAttachmentBaseRef;
  if ( DeviceAttachmentBaseRef )
    DeviceNode = (__int64)DeviceAttachmentBaseRef->DeviceObjectExtension->DeviceNode;
  else
    DeviceNode = 0LL;
  if ( DeviceNode )
  {
    v19 = v36;
    if ( v37 == 1 && v36 == 2 )
    {
      PowerIrp = PopFxAllocatePowerIrp(DeviceNode, (int)a1, a5, a8, a9, a7, (KIRQL)&Interval, (__int64)&Entry);
      v21 = PowerIrp;
      if ( PowerIrp < 0 && PowerIrp != -1073741130 )
      {
        QuadPart = (PIRP)Interval.QuadPart;
        v14 = Entry;
        goto LABEL_25;
      }
      QuadPart = (PIRP)Interval.QuadPart;
      v14 = Entry;
      if ( PowerIrp == 259 )
        goto LABEL_25;
      v19 = v36;
    }
    else
    {
      v21 = -1073741130;
    }
    if ( v21 >= 0 )
    {
      v24 = *(PVOID **)(DeviceNode + 80);
      if ( AttachedDeviceReference->StackSize > *((_BYTE *)v24[2] + 66) )
      {
        ObfDereferenceObjectWithTag(AttachedDeviceReference, 0x746C6644u);
        ObfReferenceObjectWithTag(v24[13], 0x746C6644u);
        AttachedDeviceReference = (PDEVICE_OBJECT)v24[13];
      }
    }
    else
    {
      if ( v19 )
        Entry = 0LL;
      else
        Entry = (PVOID)PopFxLockDevice(DeviceNode, 0);
      Interval.QuadPart = -500000LL;
      v22 = 0;
      while ( 1 )
      {
        if ( v22 && KeGetCurrentIrql() <= 1u )
          KeDelayExecutionThread(0, 0, &Interval);
        ++v22;
        v14 = ExAllocateFromNPagedLookasideList(&PopIrpDataLookaside);
        if ( v14 )
          break;
        if ( !a6 || v22 >= 0xA )
          goto LABEL_25;
      }
      v23 = 0;
      while ( 1 )
      {
        if ( v23 && KeGetCurrentIrql() <= 1u )
          KeDelayExecutionThread(0, 0, &Interval);
        ++v23;
        QuadPart = IoAllocateIrp(AttachedDeviceReference->StackSize + 1, 0);
        if ( QuadPart )
          break;
        if ( !a6 )
          goto LABEL_26;
        if ( v23 >= 0xA )
          goto LABEL_38;
      }
      v24 = (PVOID *)Entry;
    }
    IoReuseIrp(QuadPart, -1073741637);
    if ( IovUtilVerifierEnabled )
      VfIrpWatermark(QuadPart, 1LL);
    QuadPart->IoStatus.Information = 0LL;
    QuadPart->Tail.Overlay.ListEntry.Blink = &QuadPart->Tail.Overlay.ListEntry;
    QuadPart->Tail.Overlay.ListEntry.Flink = &QuadPart->Tail.Overlay.ListEntry;
    memset(v14, 0, 0xF8uLL);
    v25 = v36;
    v26 = v37;
    v14[4] = AttachedDeviceReference;
    v14[3] = v17;
    *((_BYTE *)v14 + 184) = v25;
    *((_DWORD *)v14 + 47) = v26;
    *((_DWORD *)v14 + 48) = a5;
    v27 = a8;
    v14[2] = QuadPart;
    v14[25] = v24;
    v14[27] = v27;
    v14[28] = a9;
    v14[29] = a1;
    CurrentStackLocation = QuadPart->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].DeviceObject = 0LL;
    CurrentStackLocation[-1].Context = v14;
    v29 = --QuadPart->Tail.Overlay.CurrentStackLocation;
    --QuadPart->CurrentLocation;
    v29[-1].MajorFunction = 22;
    v29[-1].MinorFunction = v25;
    v29[-1].DeviceObject = AttachedDeviceReference;
    KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
    v30 = (_QWORD *)qword_1403039F8;
    if ( *(__int64 **)qword_1403039F8 != &PopIrpList )
      __fastfail(3u);
    *v14 = &PopIrpList;
    v14[1] = v30;
    *v30 = v14;
    qword_1403039F8 = (__int64)v14;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    AttachedDeviceReference = 0LL;
    v17 = 0LL;
    v21 = 0;
    *a10 = QuadPart;
    *a11 = v14;
    v14 = 0LL;
LABEL_25:
    if ( QuadPart )
      goto LABEL_26;
    goto LABEL_38;
  }
  v21 = -1073741808;
LABEL_38:
  if ( a6 && v21 != 259 )
  {
    LOBYTE(v11) = v37 != 0;
    KeBugCheckEx(0xA0u, 1uLL, 6uLL, (ULONG_PTR)AttachedDeviceReference, v11);
  }
LABEL_26:
  if ( v14 )
    ExFreeToNPagedLookasideList(&PopIrpDataLookaside, v14);
  if ( AttachedDeviceReference )
    ObfDereferenceObjectWithTag(AttachedDeviceReference, 0x746C6644u);
  if ( v17 )
    ObfDereferenceObjectWithTag(v17, 0x746C6644u);
  return (unsigned int)v21;
}
