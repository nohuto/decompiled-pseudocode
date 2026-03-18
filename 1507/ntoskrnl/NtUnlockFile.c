/*
 * XREFs of NtUnlockFile @ 0x14053C750
 * Callers:
 *     VerifierNtUnlockFile @ 0x1407544B8 (VerifierNtUnlockFile.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140013F48 (ExAllocatePoolWithTagPriority.c)
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140045B50 (ExAllocatePoolWithQuotaTag.c)
 *     IoGetRelatedDeviceObject @ 0x140048020 (IoGetRelatedDeviceObject.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     IoGetAttachedDevice @ 0x1400D1B70 (IoGetAttachedDevice.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     IopSynchronousApiServiceTail @ 0x140457B28 (IopSynchronousApiServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     IopSynchronousServiceTail @ 0x1404BDDC0 (IopSynchronousServiceTail.c)
 *     IopAcquireFileObjectLock @ 0x140540A5C (IopAcquireFileObjectLock.c)
 *     IopExceptionCleanup @ 0x14055D264 (IopExceptionCleanup.c)
 *     IopAllocateIrpCleanup @ 0x140670E48 (IopAllocateIrpCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 *     VfFastIoCheckState @ 0x140739E88 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140739F38 (VfFastIoSnapState.c)
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
  ULONG *p_Flags; // r14
  PDEVICE_OBJECT AttachedDevice; // rax
  struct _DEVICE_OBJECT *v15; // r13
  PFAST_IO_DISPATCH FastIoDispatch; // rsi
  void *v17; // rdi
  __int64 (__fastcall *FastIoUnlockSingle)(struct _FILE_OBJECT *, LONGLONG *, LONGLONG *, _KPROCESS *, ULONG, __int128 *, struct _DEVICE_OBJECT *); // rsi
  char v19; // r15
  struct _KTHREAD *v20; // rax
  char v21; // r15
  __int64 v22; // rdx
  struct _KEVENT *v23; // rsi
  IRP *v24; // rax
  IRP *v25; // rdi
  __int64 v26; // r14
  CHAR *PoolWithQuotaTag; // rcx
  struct _KTHREAD *v28; // rcx
  __int16 v29; // ax
  NTSTATUS v30; // edi
  struct _KEVENT *PoolWithTagPriority; // rax
  char v32; // [rsp+40h] [rbp-78h]
  char v33; // [rsp+41h] [rbp-77h]
  PVOID Object; // [rsp+48h] [rbp-70h] BYREF
  struct _KEVENT *HandleInformation; // [rsp+50h] [rbp-68h] BYREF
  LONGLONG QuadPart; // [rsp+58h] [rbp-60h] BYREF
  __int128 v37; // [rsp+60h] [rbp-58h] BYREF
  LONGLONG v38; // [rsp+70h] [rbp-48h] BYREF
  PIRP Irp; // [rsp+78h] [rbp-40h]
  _QWORD v40[2]; // [rsp+80h] [rbp-38h] BYREF
  struct _KTHREAD *v41; // [rsp+90h] [rbp-28h]
  void *retaddr; // [rsp+B8h] [rbp+0h]

  v40[0] = 0LL;
  v40[1] = 0LL;
  CurrentThread = KeGetCurrentThread();
  v41 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v32 = PreviousMode;
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
    v38 = Length->QuadPart;
    v11 = (struct _FILE_OBJECT *)Object;
  }
  else
  {
    QuadPart = ByteOffset->QuadPart;
    v38 = Length->QuadPart;
  }
  p_Flags = &v11->Flags;
  if ( (v11->Flags & 0x800) != 0 )
    AttachedDevice = IoGetAttachedDevice(v11->DeviceObject);
  else
    AttachedDevice = IoGetRelatedDeviceObject(v11);
  v15 = AttachedDevice;
  FastIoDispatch = AttachedDevice->DriverObject->FastIoDispatch;
  v17 = 0LL;
  if ( FastIoDispatch )
  {
    FastIoUnlockSingle = (__int64 (__fastcall *)(struct _FILE_OBJECT *, LONGLONG *, LONGLONG *, _KPROCESS *, ULONG, __int128 *, struct _DEVICE_OBJECT *))FastIoDispatch->FastIoUnlockSingle;
    if ( FastIoUnlockSingle )
    {
      v37 = 0uLL;
      if ( (MmVerifierData & 0x10) != 0 )
        v17 = (void *)VfFastIoSnapState();
      v19 = FastIoUnlockSingle(v11, &QuadPart, &v38, CurrentThread->ApcState.Process, Key, &v37, v15);
      if ( v17 )
        VfFastIoCheckState(v17, (int)FastIoUnlockSingle);
      if ( v19 )
      {
        *(_OWORD *)&IoStatusBlock->Status = v37;
        ObfDereferenceObject(v11);
        return v37;
      }
    }
  }
  if ( (*p_Flags & 2) == 0 )
  {
    if ( ViVerifierDriverAddedThunkListHead )
      PoolWithTagPriority = (struct _KEVENT *)ExAllocatePoolWithTagPriority(
                                                NonPagedPoolNx,
                                                0x18uLL,
                                                0x20206F49u,
                                                (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
    else
      PoolWithTagPriority = (struct _KEVENT *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x20206F49u);
    v23 = PoolWithTagPriority;
    HandleInformation = PoolWithTagPriority;
    if ( PoolWithTagPriority )
    {
      KeInitializeEvent(PoolWithTagPriority, SynchronizationEvent, 0);
      v21 = 0;
      goto LABEL_26;
    }
    v30 = -1073741670;
    goto LABEL_51;
  }
  v20 = KeGetCurrentThread();
  --v20->KernelApcDisable;
  v21 = 1;
  if ( _InterlockedExchange((volatile __int32 *)Object + 29, 1) )
  {
    v28 = KeGetCurrentThread();
    v29 = v28->KernelApcDisable + 1;
    v28->KernelApcDisable = v29;
    if ( !v29
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v28->ApcState.ApcListHead[0].Flink != &v28->152
      && !v28->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    v11 = (struct _FILE_OBJECT *)Object;
    v30 = IopAcquireFileObjectLock(Object);
    if ( !v33 )
      goto LABEL_25;
LABEL_51:
    ObfDereferenceObject(v11);
    return v30;
  }
  v11 = (struct _FILE_OBJECT *)Object;
  ObfReferenceObject(Object);
LABEL_25:
  v23 = 0LL;
  HandleInformation = 0LL;
LABEL_26:
  if ( (*p_Flags & 0x4000000) == 0 )
    KeResetEvent(&v11->Event);
  LOBYTE(v22) = v15->StackSize;
  v24 = (IRP *)pIoAllocateIrp(v15, v22, 0LL, retaddr);
  v25 = v24;
  Irp = v24;
  if ( v24 )
  {
    v24->Tail.Overlay.OriginalFileObject = v11;
    v24->Tail.Overlay.Thread = v41;
    v24->RequestorMode = v32;
    if ( v21 )
    {
      v24->UserEvent = 0LL;
      v24->UserIosb = IoStatusBlock;
    }
    else
    {
      v24->UserEvent = v23;
      v24->UserIosb = (PIO_STATUS_BLOCK)v40;
      v24->Flags = 4;
    }
    v24->Overlay.AllocationSize.QuadPart = 0LL;
    v26 = (__int64)&v24->Tail.Overlay.CurrentStackLocation[-1];
    *(_WORD *)v26 = 529;
    *(_QWORD *)(v26 + 48) = v11;
    if ( ViVerifierDriverAddedThunkListHead )
    {
      PoolWithQuotaTag = (CHAR *)ExAllocatePoolWithTagPriority(
                                   NonPagedPoolNx,
                                   8uLL,
                                   0x20206F49u,
                                   (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
      if ( !PoolWithQuotaTag )
        RtlRaiseStatus(-1073741670);
    }
    else
    {
      PoolWithQuotaTag = (CHAR *)ExAllocatePoolWithQuotaTag(NonPagedPoolNx, 8uLL, 0x20206F49u);
    }
    *(_QWORD *)PoolWithQuotaTag = v38;
    v25->Tail.Overlay.AuxiliaryBuffer = PoolWithQuotaTag;
    *(_QWORD *)(v26 + 8) = PoolWithQuotaTag;
    *(_DWORD *)(v26 + 16) = Key;
    *(_QWORD *)(v26 + 24) = QuadPart;
    result = IopSynchronousServiceTail(v15, v25, (char *)v11, 0, v32, v21, 2);
    if ( !v21 )
      return IopSynchronousApiServiceTail(result, v23, v25, v32, (unsigned int *)v40, IoStatusBlock);
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
