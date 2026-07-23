/*
 * XREFs of IopMountVolume @ 0x1403ED8DC
 * Callers:
 *     IopCheckVpbMounted @ 0x14002DA60 (IopCheckVpbMounted.c)
 *     IoVerifyVolume @ 0x140623DA4 (IoVerifyVolume.c)
 * Callees:
 *     IopQueryVpbFlagsSafe @ 0x140007848 (IopQueryVpbFlagsSafe.c)
 *     IopAllocateIrpWithExtension @ 0x14000788C (IopAllocateIrpWithExtension.c)
 *     IopWaitForLockAlertable @ 0x1400078E4 (IopWaitForLockAlertable.c)
 *     MmIsThisAnNtAsSystem @ 0x140007958 (MmIsThisAnNtAsSystem.c)
 *     IopMountInitializeVpb @ 0x140007960 (IopMountInitializeVpb.c)
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x14002DBE0 (IofCallDriver.c)
 *     KeResetEvent @ 0x14002E1B0 (KeResetEvent.c)
 *     IopDecrementDeviceObjectRef @ 0x14002E870 (IopDecrementDeviceObjectRef.c)
 *     IopIncrementDeviceObjectRefCount @ 0x14002E950 (IopIncrementDeviceObjectRefCount.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     FsRtlIsTotalDeviceFailure @ 0x14008E8B4 (FsRtlIsTotalDeviceFailure.c)
 *     IoGetActivityIdThread @ 0x140096050 (IoGetActivityIdThread.c)
 *     IopLogEventIoMgrMountSucceeded @ 0x140135978 (IopLogEventIoMgrMountSucceeded.c)
 *     IopLogEventIoMgrMountBegin @ 0x140135A58 (IopLogEventIoMgrMountBegin.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     IopLogEventIoMgrMountFailed @ 0x1401C514C (IopLogEventIoMgrMountFailed.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     IoVolumeDeviceToDosName @ 0x1404EB0DC (IoVolumeDeviceToDosName.c)
 *     IoVolumeDeviceToGuid @ 0x14052D50C (IoVolumeDeviceToGuid.c)
 *     IopLoadFileSystemDriver @ 0x140621FF8 (IopLoadFileSystemDriver.c)
 */

__int64 __fastcall IopMountVolume(ULONG_PTR BugCheckParameter1, char a2, char a3, char a4, ULONG_PTR *a5)
{
  signed int v7; // ebx
  const GUID *ActivityIdThread; // r12
  BOOLEAN IsThisAnNtAsSystem; // di
  struct _KTHREAD *CurrentThread; // r14
  struct _KTHREAD *v11; // rcx
  NTSTATUS v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  int VpbFlagsSafe; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  __int64 *v21; // rdi
  __int64 *v22; // rbx
  ULONG_PTR v23; // r15
  int v24; // edi
  struct _DEVICE_OBJECT *v25; // rax
  __int64 v26; // rdx
  IRP *IrpWithExtension; // rax
  __int64 v28; // rcx
  NTSTATUS v29; // eax
  ULONG_PTR v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  NTSTATUS v34; // eax
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  char v43; // [rsp+48h] [rbp-108h]
  char v44; // [rsp+49h] [rbp-107h]
  BOOLEAN v45; // [rsp+4Ah] [rbp-106h]
  unsigned int v47; // [rsp+4Ch] [rbp-104h]
  NTSTATUS v48; // [rsp+4Ch] [rbp-104h]
  char v49; // [rsp+50h] [rbp-100h]
  char v51; // [rsp+52h] [rbp-FEh]
  _QWORD *Object; // [rsp+58h] [rbp-F8h]
  __int64 *v54; // [rsp+68h] [rbp-E8h]
  int v55; // [rsp+70h] [rbp-E0h]
  UNICODE_STRING DosName; // [rsp+78h] [rbp-D8h] BYREF
  __int64 *v57; // [rsp+88h] [rbp-C8h]
  int i; // [rsp+90h] [rbp-C0h]
  int v59; // [rsp+94h] [rbp-BCh]
  int v60; // [rsp+98h] [rbp-B8h]
  PDEVICE_OBJECT DeviceObject; // [rsp+A0h] [rbp-B0h]
  const GUID *v62; // [rsp+A8h] [rbp-A8h]
  ULONG_PTR v63; // [rsp+B0h] [rbp-A0h]
  NTSTATUS Status; // [rsp+B8h] [rbp-98h] BYREF
  __int64 v65; // [rsp+C0h] [rbp-90h]
  PIRP Irp; // [rsp+C8h] [rbp-88h]
  ULONG_PTR *v67; // [rsp+D0h] [rbp-80h]
  struct _KTHREAD *v68; // [rsp+D8h] [rbp-78h]
  _QWORD v69[2]; // [rsp+E0h] [rbp-70h] BYREF
  struct _KEVENT Event; // [rsp+F0h] [rbp-60h] BYREF
  __int64 v71; // [rsp+108h] [rbp-48h]
  int v72; // [rsp+110h] [rbp-40h] BYREF
  __int64 v73; // [rsp+114h] [rbp-3Ch]
  int v74; // [rsp+11Ch] [rbp-34h]

  v63 = BugCheckParameter1;
  v67 = a5;
  v7 = -1073741823;
  ActivityIdThread = 0LL;
  v62 = 0LL;
  v72 = 0;
  v73 = 0LL;
  v74 = 0;
  DosName.Length = 0;
  *(_QWORD *)&DosName.MaximumLength = 0LL;
  *(_DWORD *)((char *)&DosName.Buffer + 2) = 0;
  HIWORD(DosName.Buffer) = 0;
  v49 = 0;
  v44 = 0;
  IsThisAnNtAsSystem = MmIsThisAnNtAsSystem();
  v45 = IsThisAnNtAsSystem;
  CurrentThread = KeGetCurrentThread();
  v68 = CurrentThread;
  if ( IopShutdownFileSystems == 1 )
    return 3221225865LL;
  if ( IsThisAnNtAsSystem )
  {
    ActivityIdThread = (const GUID *)IoGetActivityIdThread();
    v62 = ActivityIdThread;
    IoVolumeDeviceToGuid(BugCheckParameter1, &v72);
    IoVolumeDeviceToDosName((PVOID)BugCheckParameter1, &DosName);
  }
  if ( !a3 )
  {
    v11 = KeGetCurrentThread();
    --v11->KernelApcDisable;
    v12 = IopWaitForLockAlertable((PVOID)(BugCheckParameter1 + 280), CurrentThread->PreviousMode, a4);
    v47 = v12;
    if ( v12 == 257 || v12 == 192 )
    {
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v13, v14, v15);
      return v47;
    }
    v44 = 1;
  }
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&IopDatabaseResource, 1u);
  v43 = 1;
  VpbFlagsSafe = (unsigned __int16)IopQueryVpbFlagsSafe(BugCheckParameter1);
  v60 = VpbFlagsSafe;
  if ( (VpbFlagsSafe & 9) != 0 )
  {
    v7 = (VpbFlagsSafe & 8) != 0 ? 0xC00000C0 : 0;
    v48 = v7;
    goto LABEL_77;
  }
  if ( IsThisAnNtAsSystem )
  {
    IopLogEventIoMgrMountBegin(ActivityIdThread, (ULONGLONG)&v72, &DosName.Length);
    v49 = 1;
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v48 = -1073741823;
  *(_DWORD *)(BugCheckParameter1 + 48) &= ~2u;
  for ( Object = (_QWORD *)BugCheckParameter1; Object[3]; Object = (_QWORD *)Object[3] )
    ;
  ObfReferenceObject(Object);
  v20 = *(_DWORD *)(BugCheckParameter1 + 72);
  if ( v20 == 7 || v20 == 36 )
  {
    v21 = &IopDiskFileSystemQueueHead;
  }
  else
  {
    v21 = &IopCdRomFileSystemQueueHead;
    if ( v20 != 2 )
      v21 = &IopTapeFileSystemQueueHead;
  }
  v57 = v21;
  v55 = *(_WORD *)(*(_QWORD *)(BugCheckParameter1 + 56) + 4LL) & 0x10;
  v54 = (__int64 *)*v21;
  LOBYTE(v17) = a2;
  while ( 1 )
  {
    if ( v54 == v21 )
      goto LABEL_32;
    if ( v7 >= 0 )
      goto LABEL_33;
    v51 = *v54 == (_QWORD)v21;
    if ( !(_BYTE)v17 && (__int64 *)*v54 == v21 && v54 != (__int64 *)*v21 )
    {
LABEL_32:
      if ( v7 >= 0 )
        goto LABEL_33;
      goto LABEL_45;
    }
    if ( !v55 || (__int64 *)*v54 == v21 )
      break;
LABEL_18:
    v54 = (__int64 *)*v54;
  }
  v22 = v54 - 10;
  DeviceObject = (PDEVICE_OBJECT)(v54 - 10);
  v23 = (ULONG_PTR)(v54 - 10);
  v24 = 1;
  for ( i = 1; ; i = v24 )
  {
    v25 = (struct _DEVICE_OBJECT *)v22[3];
    if ( !v25 )
      break;
    v22 = (__int64 *)v22[3];
    DeviceObject = v25;
    ++v24;
  }
  KeResetEvent(&Event);
  LOBYTE(v26) = v24 + *((_BYTE *)Object + 76);
  IrpWithExtension = (IRP *)IopAllocateIrpWithExtension(0LL, v26);
  Irp = IrpWithExtension;
  if ( !IrpWithExtension )
  {
    v7 = -1073741670;
    goto LABEL_62;
  }
  IrpWithExtension->Flags = 66;
  IrpWithExtension->RequestorMode = 0;
  IrpWithExtension->UserEvent = &Event;
  IrpWithExtension->UserIosb = (PIO_STATUS_BLOCK)&Status;
  IrpWithExtension->Tail.Overlay.Thread = CurrentThread;
  v28 = (__int64)&IrpWithExtension->Tail.Overlay.CurrentStackLocation[-1];
  v71 = v28;
  *(_WORD *)v28 = 269;
  *(_BYTE *)(v28 + 2) = a2;
  *(_QWORD *)(v28 + 8) = *(_QWORD *)(BugCheckParameter1 + 56);
  *(_QWORD *)(v28 + 16) = Object;
  v59 = IopFsRegistrationOps;
  ObfReferenceObject(v22);
  IopIncrementDeviceObjectRefCount(v23, 1);
  _InterlockedIncrement(&IopMountsInProgress);
  ExReleaseResourceLite(&IopDatabaseResource);
  v29 = IofCallDriver(DeviceObject, Irp);
  if ( v29 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  }
  else
  {
    Status = v29;
    v65 = 0LL;
  }
  ExAcquireResourceSharedLite(&IopDatabaseResource, 1u);
  v43 = 1;
  _InterlockedAdd(&IopMountsInProgress, 0xFFFFFFFF);
  if ( IopMountCompletionWaiters )
    KeSetEvent(&IopMountCompletionEvent, 0, 0);
  ObfDereferenceObject(DeviceObject);
  IopDecrementDeviceObjectRef(v23, 0);
  v7 = Status;
  v48 = Status;
  if ( Status >= 0 )
  {
    v30 = IopMountInitializeVpb(BugCheckParameter1, (__int64)Object, v55, v51);
    *v67 = v30;
    v21 = v57;
LABEL_28:
    LOBYTE(v17) = a2;
    goto LABEL_18;
  }
  if ( ((unsigned int)(Status + 1073741662) <= 1
     || (unsigned int)(Status + 1073741806) <= 2
     || Status == -2147483626
     || Status == -1073741643)
    && v65 == 1 )
  {
    goto LABEL_32;
  }
  v21 = v57;
  if ( v59 != IopFsRegistrationOps )
  {
    v69[0] = *v57;
    v54 = v69;
    v7 = -1073741489;
    v48 = -1073741489;
  }
  if ( v7 != -1073741412 )
  {
LABEL_41:
    if ( v7 != -1073741489 && FsRtlIsTotalDeviceFailure(v7) )
    {
      if ( !a2 || v51 )
        goto LABEL_32;
      v54 = *(__int64 **)(v21[1] + 8);
    }
    goto LABEL_28;
  }
  IopIncrementDeviceObjectRefCount(v23, 1);
  ExReleaseResourceLite(&IopDatabaseResource);
  v43 = 0;
  if ( !a3 )
  {
    KeSetEvent((PRKEVENT)(BugCheckParameter1 + 280), 0, 0);
    v44 = 0;
  }
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v31, v32, v33);
  IopLoadFileSystemDriver(v23);
  if ( !a3 )
  {
    v34 = IopWaitForLockAlertable((PVOID)(BugCheckParameter1 + 280), CurrentThread->PreviousMode, a4);
    v48 = v34;
    if ( v34 == 257 || v34 == 192 )
    {
      ObfDereferenceObject(Object);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v35, v36, v37);
      v7 = v48;
      goto LABEL_33;
    }
    v44 = 1;
  }
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&IopDatabaseResource, 1u);
  v43 = 1;
  v38 = (unsigned __int16)IopQueryVpbFlagsSafe(BugCheckParameter1);
  v60 = v38;
  if ( (v38 & 8) != 0 )
  {
    v7 = -1073741632;
LABEL_62:
    v48 = v7;
LABEL_45:
    ObfDereferenceObject(Object);
    goto LABEL_33;
  }
  if ( (v38 & 1) == 0 )
  {
    v69[0] = *v21;
    v54 = v69;
    v7 = -1073741489;
    v48 = -1073741489;
    goto LABEL_41;
  }
  ObfDereferenceObject(Object);
  v7 = 0;
  v48 = 0;
LABEL_33:
  IsThisAnNtAsSystem = v45;
LABEL_77:
  if ( v43 )
    ExReleaseResourceLite(&IopDatabaseResource);
  if ( v44 )
  {
    KeSetEvent((PRKEVENT)(BugCheckParameter1 + 280), 0, 0);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v39, v40, v41);
    v7 = v48;
  }
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v17, v18, v19);
  if ( IsThisAnNtAsSystem )
  {
    if ( v49 )
    {
      if ( v7 < 0 )
        IopLogEventIoMgrMountFailed(ActivityIdThread, (ULONGLONG)&v72, &DosName.Length, v7);
      else
        IopLogEventIoMgrMountSucceeded(ActivityIdThread, (ULONGLONG)&v72, &DosName.Length);
    }
    if ( DosName.Buffer )
      ExFreePoolWithTag(DosName.Buffer, 0);
  }
  if ( v7 < 0 && (*(_DWORD *)(BugCheckParameter1 + 48) & 0x100) != 0 && (unsigned int)InitializationPhase < 2 )
    KeBugCheckEx(0xEDu, BugCheckParameter1, v7, 0LL, 0LL);
  return (unsigned int)v7;
}
