/*
 * XREFs of IopMountVolume @ 0x1404DFC14
 * Callers:
 *     IopCheckVpbMounted @ 0x1400CFEA0 (IopCheckVpbMounted.c)
 *     IoVerifyVolume @ 0x1405FA2C0 (IoVerifyVolume.c)
 * Callees:
 *     FsRtlIsTotalDeviceFailure @ 0x140030778 (FsRtlIsTotalDeviceFailure.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     IopDecrementDeviceObjectRef @ 0x14007E3E0 (IopDecrementDeviceObjectRef.c)
 *     IofCallDriver @ 0x14007E4C0 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     IopIncrementDeviceObjectRefCount @ 0x14007E610 (IopIncrementDeviceObjectRefCount.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 *     IopMountInitializeVpb @ 0x1400D0A3C (IopMountInitializeVpb.c)
 *     IopQueryVpbFlagsSafe @ 0x1400D0AD4 (IopQueryVpbFlagsSafe.c)
 *     IoGetActivityIdThread @ 0x1400D7FB0 (IoGetActivityIdThread.c)
 *     IopWaitForLockAlertable @ 0x1400E73A4 (IopWaitForLockAlertable.c)
 *     MmIsThisAnNtAsSystem @ 0x1400F3790 (MmIsThisAnNtAsSystem.c)
 *     IopAllocateIrpWithExtension @ 0x1401023EC (IopAllocateIrpWithExtension.c)
 *     IopLogEventIoMgrMountBegin @ 0x14012DC14 (IopLogEventIoMgrMountBegin.c)
 *     IopLogEventIoMgrMountSucceeded @ 0x14012DCE4 (IopLogEventIoMgrMountSucceeded.c)
 *     IopLogEventIoMgrMountFailed @ 0x14012F3D0 (IopLogEventIoMgrMountFailed.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     IoVolumeDeviceToDosName @ 0x1404D7FD4 (IoVolumeDeviceToDosName.c)
 *     IoVolumeDeviceToGuid @ 0x1404E7D08 (IoVolumeDeviceToGuid.c)
 *     IopLoadFileSystemDriver @ 0x14051AFA0 (IopLoadFileSystemDriver.c)
 */

__int64 __fastcall IopMountVolume(ULONG_PTR BugCheckParameter1, char a2, char a3, char a4, ULONG_PTR *a5)
{
  signed int v7; // ebx
  const GUID *ActivityIdThread; // r12
  BOOLEAN IsThisAnNtAsSystem; // di
  struct _KTHREAD *CurrentThread; // r14
  struct _KTHREAD *v11; // rcx
  NTSTATUS v12; // eax
  int VpbFlagsSafe; // eax
  int v14; // eax
  __int64 *v15; // rdi
  char v16; // dl
  __int64 *v17; // rbx
  ULONG_PTR v18; // r15
  int v19; // edi
  struct _DEVICE_OBJECT *v20; // rax
  IRP *IrpWithExtension; // rax
  __int64 v22; // rcx
  NTSTATUS v23; // eax
  ULONG_PTR v24; // rax
  NTSTATUS v25; // eax
  int v26; // eax
  char v28; // [rsp+48h] [rbp-108h]
  BOOLEAN v29; // [rsp+49h] [rbp-107h]
  char v30; // [rsp+4Ah] [rbp-106h]
  unsigned int v32; // [rsp+4Ch] [rbp-104h]
  NTSTATUS v33; // [rsp+4Ch] [rbp-104h]
  char v34; // [rsp+50h] [rbp-100h]
  char v36; // [rsp+52h] [rbp-FEh]
  _QWORD *Object; // [rsp+58h] [rbp-F8h]
  __int64 *v39; // [rsp+68h] [rbp-E8h]
  UNICODE_STRING DosName; // [rsp+70h] [rbp-E0h] BYREF
  int v41; // [rsp+80h] [rbp-D0h]
  __int64 *v42; // [rsp+88h] [rbp-C8h]
  int i; // [rsp+90h] [rbp-C0h]
  PDEVICE_OBJECT DeviceObject; // [rsp+98h] [rbp-B8h]
  const GUID *v45; // [rsp+A0h] [rbp-B0h]
  int v46; // [rsp+A8h] [rbp-A8h]
  int v47; // [rsp+ACh] [rbp-A4h]
  ULONG_PTR v48; // [rsp+B0h] [rbp-A0h]
  NTSTATUS Status; // [rsp+B8h] [rbp-98h] BYREF
  __int64 v50; // [rsp+C0h] [rbp-90h]
  PIRP Irp; // [rsp+C8h] [rbp-88h]
  ULONG_PTR *v52; // [rsp+D0h] [rbp-80h]
  struct _KTHREAD *v53; // [rsp+D8h] [rbp-78h]
  _QWORD v54[2]; // [rsp+E0h] [rbp-70h] BYREF
  struct _KEVENT Event; // [rsp+F0h] [rbp-60h] BYREF
  __int64 v56; // [rsp+108h] [rbp-48h]
  int v57; // [rsp+110h] [rbp-40h] BYREF
  __int64 v58; // [rsp+114h] [rbp-3Ch]
  int v59; // [rsp+11Ch] [rbp-34h]

  v48 = BugCheckParameter1;
  v52 = a5;
  v7 = -1073741823;
  ActivityIdThread = 0LL;
  v45 = 0LL;
  v57 = 0;
  v58 = 0LL;
  v59 = 0;
  DosName.Length = 0;
  *(_QWORD *)&DosName.MaximumLength = 0LL;
  *(_DWORD *)((char *)&DosName.Buffer + 2) = 0;
  HIWORD(DosName.Buffer) = 0;
  v34 = 0;
  v30 = 0;
  IsThisAnNtAsSystem = MmIsThisAnNtAsSystem();
  v29 = IsThisAnNtAsSystem;
  CurrentThread = KeGetCurrentThread();
  v53 = CurrentThread;
  if ( IopShutdownFileSystems == 1 )
    return 3221225865LL;
  if ( IsThisAnNtAsSystem )
  {
    ActivityIdThread = (const GUID *)IoGetActivityIdThread();
    v45 = ActivityIdThread;
    IoVolumeDeviceToGuid(BugCheckParameter1, &v57);
    IoVolumeDeviceToDosName((PVOID)BugCheckParameter1, &DosName);
  }
  if ( !a3 )
  {
    v11 = KeGetCurrentThread();
    --v11->KernelApcDisable;
    v12 = IopWaitForLockAlertable((PVOID)(BugCheckParameter1 + 280), CurrentThread->PreviousMode, a4);
    v32 = v12;
    if ( v12 == 257 || v12 == 192 )
    {
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      return v32;
    }
    v30 = 1;
  }
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&IopDatabaseResource, 1u);
  v28 = 1;
  VpbFlagsSafe = (unsigned __int16)IopQueryVpbFlagsSafe(BugCheckParameter1);
  v46 = VpbFlagsSafe;
  if ( (VpbFlagsSafe & 9) != 0 )
  {
    v7 = (VpbFlagsSafe & 8) != 0 ? 0xC00000C0 : 0;
    v33 = v7;
    goto LABEL_76;
  }
  if ( IsThisAnNtAsSystem )
  {
    IopLogEventIoMgrMountBegin(ActivityIdThread, (ULONGLONG)&v57, &DosName.Length);
    v34 = 1;
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v33 = -1073741823;
  *(_DWORD *)(BugCheckParameter1 + 48) &= ~2u;
  for ( Object = (_QWORD *)BugCheckParameter1; Object[3]; Object = (_QWORD *)Object[3] )
    ;
  ObfReferenceObject(Object);
  v14 = *(_DWORD *)(BugCheckParameter1 + 72);
  if ( v14 == 7 || v14 == 36 )
  {
    v15 = &IopDiskFileSystemQueueHead;
  }
  else
  {
    v15 = &IopCdRomFileSystemQueueHead;
    if ( v14 != 2 )
      v15 = &IopTapeFileSystemQueueHead;
  }
  v42 = v15;
  v41 = *(_WORD *)(*(_QWORD *)(BugCheckParameter1 + 56) + 4LL) & 0x10;
  v39 = (__int64 *)*v15;
  v16 = a2;
  while ( 1 )
  {
    if ( v39 == v15 )
      goto LABEL_39;
    if ( v7 >= 0 )
      goto LABEL_40;
    v36 = *v39 == (_QWORD)v15;
    if ( !v16 && (__int64 *)*v39 == v15 && v39 != (__int64 *)*v15 )
    {
LABEL_39:
      if ( v7 >= 0 )
        goto LABEL_40;
      goto LABEL_42;
    }
    if ( !v41 || (__int64 *)*v39 == v15 )
      break;
LABEL_18:
    v39 = (__int64 *)*v39;
  }
  v17 = v39 - 10;
  DeviceObject = (PDEVICE_OBJECT)(v39 - 10);
  v18 = (ULONG_PTR)(v39 - 10);
  v19 = 1;
  for ( i = 1; ; i = v19 )
  {
    v20 = (struct _DEVICE_OBJECT *)v17[3];
    if ( !v20 )
      break;
    v17 = (__int64 *)v17[3];
    DeviceObject = v20;
    ++v19;
  }
  KeResetEvent(&Event);
  IrpWithExtension = (IRP *)IopAllocateIrpWithExtension(0LL, (unsigned __int8)v19 + *((_BYTE *)Object + 76), 0);
  Irp = IrpWithExtension;
  if ( !IrpWithExtension )
  {
    v7 = -1073741670;
    goto LABEL_68;
  }
  IrpWithExtension->Flags = 66;
  IrpWithExtension->RequestorMode = 0;
  IrpWithExtension->UserEvent = &Event;
  IrpWithExtension->UserIosb = (PIO_STATUS_BLOCK)&Status;
  IrpWithExtension->Tail.Overlay.Thread = CurrentThread;
  v22 = (__int64)&IrpWithExtension->Tail.Overlay.CurrentStackLocation[-1];
  v56 = v22;
  *(_WORD *)v22 = 269;
  *(_BYTE *)(v22 + 2) = a2;
  *(_QWORD *)(v22 + 8) = *(_QWORD *)(BugCheckParameter1 + 56);
  *(_QWORD *)(v22 + 16) = Object;
  v47 = IopFsRegistrationOps;
  ObfReferenceObject(v17);
  IopIncrementDeviceObjectRefCount(v18, 1);
  _InterlockedIncrement(&IopMountsInProgress);
  ExReleaseResourceLite(&IopDatabaseResource);
  v23 = IofCallDriver(DeviceObject, Irp);
  if ( v23 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  }
  else
  {
    Status = v23;
    v50 = 0LL;
  }
  ExAcquireResourceSharedLite(&IopDatabaseResource, 1u);
  v28 = 1;
  _InterlockedAdd(&IopMountsInProgress, 0xFFFFFFFF);
  if ( IopMountCompletionWaiters )
    KeSetEvent(&IopMountCompletionEvent, 0, 0);
  ObfDereferenceObject(DeviceObject);
  IopDecrementDeviceObjectRef(v18, 0, 0);
  v7 = Status;
  v33 = Status;
  if ( Status >= 0 )
  {
    v24 = IopMountInitializeVpb(BugCheckParameter1, (__int64)Object, v41, v36);
    *v52 = v24;
    v15 = v42;
LABEL_35:
    v16 = a2;
    goto LABEL_18;
  }
  if ( ((unsigned int)(Status + 1073741662) <= 1
     || (unsigned int)(Status + 1073741806) <= 2
     || Status == -2147483626
     || Status == -1073741643)
    && v50 == 1 )
  {
    goto LABEL_39;
  }
  v15 = v42;
  if ( v47 != IopFsRegistrationOps )
  {
    v54[0] = *v42;
    v39 = v54;
    v7 = -1073741489;
    v33 = -1073741489;
  }
  if ( v7 != -1073741412 )
  {
LABEL_34:
    if ( v7 != -1073741489 && FsRtlIsTotalDeviceFailure(v7) )
    {
      if ( !a2 || v36 )
        goto LABEL_39;
      v39 = *(__int64 **)(v15[1] + 8);
    }
    goto LABEL_35;
  }
  IopIncrementDeviceObjectRefCount(v18, 1);
  ExReleaseResourceLite(&IopDatabaseResource);
  v28 = 0;
  if ( !a3 )
  {
    KeSetEvent((PRKEVENT)(BugCheckParameter1 + 280), 0, 0);
    v30 = 0;
  }
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  IopLoadFileSystemDriver(v18);
  if ( !a3 )
  {
    v25 = IopWaitForLockAlertable((PVOID)(BugCheckParameter1 + 280), CurrentThread->PreviousMode, a4);
    v33 = v25;
    if ( v25 == 257 || v25 == 192 )
    {
      ObfDereferenceObject(Object);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v7 = v33;
      goto LABEL_40;
    }
    v30 = 1;
  }
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&IopDatabaseResource, 1u);
  v28 = 1;
  v26 = (unsigned __int16)IopQueryVpbFlagsSafe(BugCheckParameter1);
  v46 = v26;
  if ( (v26 & 8) != 0 )
  {
    v7 = -1073741632;
LABEL_68:
    v33 = v7;
LABEL_42:
    ObfDereferenceObject(Object);
    goto LABEL_40;
  }
  if ( (v26 & 1) == 0 )
  {
    v54[0] = *v15;
    v39 = v54;
    v7 = -1073741489;
    v33 = -1073741489;
    goto LABEL_34;
  }
  ObfDereferenceObject(Object);
  v7 = 0;
  v33 = 0;
LABEL_40:
  IsThisAnNtAsSystem = v29;
LABEL_76:
  if ( v28 )
    ExReleaseResourceLite(&IopDatabaseResource);
  if ( v30 )
  {
    KeSetEvent((PRKEVENT)(BugCheckParameter1 + 280), 0, 0);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v7 = v33;
  }
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  if ( IsThisAnNtAsSystem )
  {
    if ( v34 )
    {
      if ( v7 < 0 )
        IopLogEventIoMgrMountFailed(ActivityIdThread, (ULONGLONG)&v57, &DosName.Length, v7);
      else
        IopLogEventIoMgrMountSucceeded(ActivityIdThread, (ULONGLONG)&v57, &DosName.Length);
    }
    if ( DosName.Buffer )
      ExFreePoolWithTag(DosName.Buffer, 0);
  }
  if ( v7 < 0 && (*(_DWORD *)(BugCheckParameter1 + 48) & 0x100) != 0 && (unsigned int)InitializationPhase < 2 )
    KeBugCheckEx(0xEDu, BugCheckParameter1, v7, 0LL, 0LL);
  return (unsigned int)v7;
}
