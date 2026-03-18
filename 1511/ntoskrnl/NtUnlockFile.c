/*
 * XREFs of NtUnlockFile @ 0x1404911DC
 * Callers:
 *     VerifierNtUnlockFile @ 0x1406D09EC (VerifierNtUnlockFile.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     IoGetRelatedDeviceObject @ 0x1400435F0 (IoGetRelatedDeviceObject.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     IopResetEvent @ 0x14008E840 (IopResetEvent.c)
 *     sub_14008E8A8 @ 0x14008E8A8 (sub_14008E8A8.c)
 *     IoGetAttachedDevice @ 0x140097FE0 (IoGetAttachedDevice.c)
 *     sub_1400CC298 @ 0x1400CC298 (sub_1400CC298.c)
 *     sub_1400CCC88 @ 0x1400CCC88 (sub_1400CCC88.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     IopSynchronousServiceTail @ 0x140437580 (IopSynchronousServiceTail.c)
 *     IopSynchronousApiServiceTail @ 0x140490974 (IopSynchronousApiServiceTail.c)
 *     IopAcquireFileObjectLock @ 0x1404AC66C (IopAcquireFileObjectLock.c)
 *     IopExceptionCleanup @ 0x1404C68BC (IopExceptionCleanup.c)
 *     IopAllocateIrpCleanup @ 0x1405F70B8 (IopAllocateIrpCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 *     VfFastIoCheckState @ 0x1406B9854 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1406B9904 (VfFastIoSnapState.c)
 */

NTSTATUS __stdcall NtUnlockFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER ByteOffset,
        PLARGE_INTEGER Length,
        ULONG Key)
{
  struct _KTHREAD *CurrentThread; // r15
  KPROCESSOR_MODE PreviousMode; // r14
  NTSTATUS result; // eax
  struct _FILE_OBJECT *v11; // rbx
  _DWORD *v12; // rcx
  PDEVICE_OBJECT AttachedDevice; // rax
  __int64 v14; // rcx
  struct _DEVICE_OBJECT *v15; // r13
  PFAST_IO_DISPATCH FastIoDispatch; // rsi
  __int64 (__fastcall *FastIoUnlockSingle)(struct _FILE_OBJECT *, LONGLONG *, LONGLONG *, _KPROCESS *, ULONG, __int128 *, struct _DEVICE_OBJECT *); // rsi
  void *v18; // rdi
  char v19; // r15
  __int64 v20; // rdx
  __int64 v21; // r8
  char v22; // r15
  struct _KEVENT *v23; // rsi
  __int64 v24; // rdx
  IRP *v25; // rax
  IRP *v26; // rdi
  __int64 v27; // r14
  CHAR *v28; // rax
  NTSTATUS v29; // edi
  struct _KEVENT *v30; // rax
  char v31; // [rsp+40h] [rbp-78h]
  char v32; // [rsp+41h] [rbp-77h]
  PVOID Object; // [rsp+48h] [rbp-70h] BYREF
  struct _KEVENT *HandleInformation; // [rsp+50h] [rbp-68h] BYREF
  LONGLONG QuadPart; // [rsp+58h] [rbp-60h] BYREF
  __int128 v36; // [rsp+60h] [rbp-58h] BYREF
  LONGLONG v37; // [rsp+70h] [rbp-48h] BYREF
  PIRP Irp; // [rsp+78h] [rbp-40h]
  unsigned int v39[2]; // [rsp+80h] [rbp-38h] BYREF
  __int64 v40; // [rsp+88h] [rbp-30h]
  struct _KTHREAD *v41; // [rsp+90h] [rbp-28h]
  void *retaddr; // [rsp+B8h] [rbp+0h]

  v39[0] = 0;
  v39[1] = 0;
  v40 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v41 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v31 = PreviousMode;
  result = ObReferenceObjectByHandle(
             FileHandle,
             0,
             (POBJECT_TYPE)IoFileObjectType,
             PreviousMode,
             &Object,
             (POBJECT_HANDLE_INFORMATION)&HandleInformation);
  v11 = (struct _FILE_OBJECT *)Object;
  Irp = (PIRP)Object;
  if ( result < 0 )
    return result;
  if ( PreviousMode )
  {
    if ( (BYTE4(HandleInformation) & 3) == 0 )
    {
      ObfDereferenceObject(Object);
      return -1073741790;
    }
    v12 = &IoStatusBlock->0;
    if ( (unsigned __int64)IoStatusBlock >= MmUserProbeAddress )
      v12 = (_DWORD *)MmUserProbeAddress;
    *v12 = *v12;
    if ( ((unsigned __int8)ByteOffset & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    QuadPart = ByteOffset->QuadPart;
    if ( ((unsigned __int8)Length & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v37 = Length->QuadPart;
    v11 = (struct _FILE_OBJECT *)Object;
  }
  else
  {
    QuadPart = ByteOffset->QuadPart;
    v37 = Length->QuadPart;
  }
  if ( (v11->Flags & 0x800) != 0 )
    AttachedDevice = IoGetAttachedDevice(v11->DeviceObject);
  else
    AttachedDevice = IoGetRelatedDeviceObject(v11);
  v15 = AttachedDevice;
  FastIoDispatch = AttachedDevice->DriverObject->FastIoDispatch;
  if ( FastIoDispatch )
  {
    FastIoUnlockSingle = (__int64 (__fastcall *)(struct _FILE_OBJECT *, LONGLONG *, LONGLONG *, _KPROCESS *, ULONG, __int128 *, struct _DEVICE_OBJECT *))FastIoDispatch->FastIoUnlockSingle;
    if ( FastIoUnlockSingle )
    {
      v36 = 0uLL;
      if ( (MmVerifierData & 0x10) != 0 )
        v18 = (void *)VfFastIoSnapState();
      else
        v18 = 0LL;
      v19 = FastIoUnlockSingle(v11, &QuadPart, &v37, CurrentThread->ApcState.Process, Key, &v36, v15);
      if ( v18 )
        VfFastIoCheckState(v18, (int)FastIoUnlockSingle);
      if ( v19 )
      {
        *(_OWORD *)&IoStatusBlock->Status = v36;
        ObfDereferenceObject(v11);
        return v36;
      }
    }
  }
  if ( (v11->Flags & 2) != 0 )
  {
    v22 = 1;
    if ( sub_14008E8A8((volatile __int32 *)&v11->Type) || (v29 = IopAcquireFileObjectLock(v11), !v32) )
    {
      v23 = 0LL;
      HandleInformation = 0LL;
      goto LABEL_25;
    }
LABEL_38:
    ObfDereferenceObject(v11);
    return v29;
  }
  v30 = (struct _KEVENT *)sub_1400CC298(v14, 0x18uLL);
  v23 = v30;
  HandleInformation = v30;
  if ( !v30 )
  {
    v29 = -1073741670;
    goto LABEL_38;
  }
  KeInitializeEvent(v30, SynchronizationEvent, 0);
  v22 = 0;
LABEL_25:
  IopResetEvent((__int64)v11, v20, v21);
  LOBYTE(v24) = v15->StackSize;
  v25 = (IRP *)pIoAllocateIrp(v15, v24, 0LL, retaddr);
  v26 = v25;
  Irp = v25;
  if ( v25 )
  {
    v25->Tail.Overlay.OriginalFileObject = v11;
    v25->Tail.Overlay.Thread = v41;
    v25->RequestorMode = PreviousMode;
    if ( v22 )
    {
      v25->UserEvent = 0LL;
      v25->UserIosb = IoStatusBlock;
    }
    else
    {
      v25->UserEvent = v23;
      v25->UserIosb = (PIO_STATUS_BLOCK)v39;
      v25->Flags = 4;
    }
    v25->Overlay.AllocationSize.QuadPart = 0LL;
    v27 = (__int64)&v25->Tail.Overlay.CurrentStackLocation[-1];
    *(_WORD *)v27 = 529;
    *(_QWORD *)(v27 + 48) = v11;
    v28 = (CHAR *)sub_1400CCC88();
    *(_QWORD *)v28 = v37;
    v26->Tail.Overlay.AuxiliaryBuffer = v28;
    *(_QWORD *)(v27 + 8) = v28;
    *(_DWORD *)(v27 + 16) = Key;
    *(_QWORD *)(v27 + 24) = QuadPart;
    result = IopSynchronousServiceTail(v15, v26, (char *)v11, 0, v31, v22, 2);
    if ( !v22 )
      return IopSynchronousApiServiceTail(result, v23, v26, v31, v39, IoStatusBlock);
  }
  else
  {
    if ( v23 )
      ExFreePoolWithTag(v23, 0);
    IopAllocateIrpCleanup(v11, 0LL);
    return -1073741670;
  }
  return result;
}
