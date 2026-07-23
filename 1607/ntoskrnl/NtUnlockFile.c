/*
 * XREFs of NtUnlockFile @ 0x1404AF9D8
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     IoGetAttachedDevice @ 0x14002DA40 (IoGetAttachedDevice.c)
 *     IoGetRelatedDeviceObject @ 0x14002DC60 (IoGetRelatedDeviceObject.c)
 *     IopResetEvent @ 0x14002E140 (IopResetEvent.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     IopVerifierExAllocatePool @ 0x14007B690 (IopVerifierExAllocatePool.c)
 *     IopAcquireFastLock @ 0x14007BB34 (IopAcquireFastLock.c)
 *     IopVerifierExAllocatePoolWithQuota_2 @ 0x140133428 (IopVerifierExAllocatePoolWithQuota_2.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     IopAcquireFileObjectLock @ 0x1403EE090 (IopAcquireFileObjectLock.c)
 *     IopSynchronousServiceTail @ 0x140444680 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     IopSynchronousApiServiceTail @ 0x1404AF418 (IopSynchronousApiServiceTail.c)
 *     IopAllocateIrpCleanup @ 0x140620E74 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x140621488 (IopExceptionCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 *     VfFastIoCheckState @ 0x1407058F8 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1407059A8 (VfFastIoSnapState.c)
 */

NTSTATUS __stdcall NtUnlockFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER ByteOffset,
        PLARGE_INTEGER Length,
        ULONG Key)
{
  struct _KTHREAD *CurrentThread; // r15
  char PreviousMode; // r14
  NTSTATUS result; // eax
  struct _FILE_OBJECT *v11; // rbx
  __int64 v12; // rcx
  PDEVICE_OBJECT AttachedDevice; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  struct _DEVICE_OBJECT *v18; // r13
  PFAST_IO_DISPATCH FastIoDispatch; // rsi
  __int64 (__fastcall *FastIoUnlockSingle)(struct _FILE_OBJECT *, LONGLONG *, LONGLONG *, _KPROCESS *, ULONG, __int128 *, struct _DEVICE_OBJECT *); // rsi
  void *v21; // rdi
  char v22; // r15
  char v23; // r15
  struct _KEVENT *v24; // rsi
  __int64 v25; // rdx
  IRP *v26; // rax
  IRP *v27; // rdi
  __int64 v28; // r14
  CHAR *PoolWithQuota_2; // rax
  KPROCESSOR_MODE v30; // r14
  NTSTATUS v31; // edi
  struct _KEVENT *Pool; // rax
  char v33; // [rsp+40h] [rbp-78h] BYREF
  char v34; // [rsp+41h] [rbp-77h]
  PVOID Object; // [rsp+48h] [rbp-70h] BYREF
  struct _KEVENT *HandleInformation; // [rsp+50h] [rbp-68h] BYREF
  LONGLONG v37; // [rsp+58h] [rbp-60h] BYREF
  LONGLONG QuadPart; // [rsp+60h] [rbp-58h] BYREF
  __int128 v39; // [rsp+68h] [rbp-50h] BYREF
  PIRP Irp; // [rsp+78h] [rbp-40h]
  unsigned int v41[2]; // [rsp+80h] [rbp-38h] BYREF
  __int64 v42; // [rsp+88h] [rbp-30h]
  struct _KTHREAD *v43; // [rsp+90h] [rbp-28h]
  void *retaddr; // [rsp+B8h] [rbp+0h]

  v41[0] = 0;
  v41[1] = 0;
  v42 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v43 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v34 = PreviousMode;
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
    v12 = (__int64)IoStatusBlock;
    if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
      v12 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v12 = *(_DWORD *)v12;
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
  v18 = AttachedDevice;
  FastIoDispatch = AttachedDevice->DriverObject->FastIoDispatch;
  if ( FastIoDispatch )
  {
    FastIoUnlockSingle = (__int64 (__fastcall *)(struct _FILE_OBJECT *, LONGLONG *, LONGLONG *, _KPROCESS *, ULONG, __int128 *, struct _DEVICE_OBJECT *))FastIoDispatch->FastIoUnlockSingle;
    if ( FastIoUnlockSingle )
    {
      v39 = 0uLL;
      if ( (MmVerifierData & 0x10) != 0 )
        v21 = (void *)VfFastIoSnapState();
      else
        v21 = 0LL;
      v22 = FastIoUnlockSingle(v11, &QuadPart, &v37, CurrentThread->ApcState.Process, Key, &v39, v18);
      if ( v21 )
        VfFastIoCheckState(v21, (int)FastIoUnlockSingle);
      if ( v22 )
      {
        *(_OWORD *)&IoStatusBlock->Status = v39;
        ObfDereferenceObject(v11);
        return v39;
      }
    }
  }
  if ( (v11->Flags & 2) != 0 )
  {
    v23 = 1;
    if ( IopAcquireFastLock((volatile __int32 *)&v11->Type, v14, v16, v17)
      || (v31 = IopAcquireFileObjectLock((char *)v11, PreviousMode, (v11->Flags & 4) != 0, &v33), !v33) )
    {
      v24 = 0LL;
      HandleInformation = 0LL;
      goto LABEL_25;
    }
LABEL_38:
    ObfDereferenceObject(v11);
    return v31;
  }
  Pool = (struct _KEVENT *)IopVerifierExAllocatePool(v15, 0x18uLL);
  v24 = Pool;
  HandleInformation = Pool;
  if ( !Pool )
  {
    v31 = -1073741670;
    goto LABEL_38;
  }
  KeInitializeEvent(Pool, SynchronizationEvent, 0);
  v23 = 0;
LABEL_25:
  IopResetEvent((__int64)v11);
  LOBYTE(v25) = v18->StackSize;
  v26 = (IRP *)pIoAllocateIrp(v18, v25, 0LL, retaddr);
  v27 = v26;
  Irp = v26;
  if ( v26 )
  {
    v26->Tail.Overlay.OriginalFileObject = v11;
    v26->Tail.Overlay.Thread = v43;
    v26->RequestorMode = PreviousMode;
    if ( v23 )
    {
      v26->UserEvent = 0LL;
      v26->UserIosb = IoStatusBlock;
    }
    else
    {
      v26->UserEvent = v24;
      v26->UserIosb = (PIO_STATUS_BLOCK)v41;
      v26->Flags = 4;
    }
    v26->Overlay.AllocationSize.QuadPart = 0LL;
    v28 = (__int64)&v26->Tail.Overlay.CurrentStackLocation[-1];
    *(_WORD *)v28 = 529;
    *(_QWORD *)(v28 + 48) = v11;
    PoolWithQuota_2 = (CHAR *)IopVerifierExAllocatePoolWithQuota_2();
    *(_QWORD *)PoolWithQuota_2 = v37;
    v27->Tail.Overlay.AuxiliaryBuffer = PoolWithQuota_2;
    *(_QWORD *)(v28 + 8) = PoolWithQuota_2;
    *(_DWORD *)(v28 + 16) = Key;
    *(_QWORD *)(v28 + 24) = QuadPart;
    v30 = v34;
    result = IopSynchronousServiceTail(v18, v27, (__int64)v11, 0, v34, v23, 2u);
    if ( !v23 )
      return IopSynchronousApiServiceTail(result, v24, v27, v30, v41, IoStatusBlock);
  }
  else
  {
    if ( v24 )
      ExFreePoolWithTag(v24, 0);
    IopAllocateIrpCleanup(v11, 0LL);
    return -1073741670;
  }
  return result;
}
