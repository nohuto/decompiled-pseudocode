/*
 * XREFs of NtWriteFileGather @ 0x1404A917C
 * Callers:
 *     <none>
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x14002DC60 (IoGetRelatedDeviceObject.c)
 *     IopResetEvent @ 0x14002E140 (IopResetEvent.c)
 *     KeResetEvent @ 0x14002E1B0 (KeResetEvent.c)
 *     IoAllocateMdl @ 0x14002EB10 (IoAllocateMdl.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     IopReferenceFileObject @ 0x14007B6B0 (IopReferenceFileObject.c)
 *     MmProbeAndLockSelectedPages @ 0x140099DD4 (MmProbeAndLockSelectedPages.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x14009A334 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     IopExceptionFilter @ 0x1401C4BE0 (IopExceptionFilter.c)
 *     IopAcquireFastLock_1 @ 0x1401CAD48 (IopAcquireFastLock_1.c)
 *     MmUpdateMdlTracker @ 0x1401E308C (MmUpdateMdlTracker.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     IopAcquireFileObjectLock @ 0x1403EE090 (IopAcquireFileObjectLock.c)
 *     IopSynchronousServiceTail @ 0x140444680 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     IopAllocateIrpCleanup @ 0x140620E74 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x140621488 (IopExceptionCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtWriteFileGather(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        FILE_SEGMENT_ELEMENT BufferDescription[],
        ULONG BufferLength,
        PLARGE_INTEGER ByteOffset,
        PULONG Key)
{
  KPROCESSOR_MODE PreviousMode; // bl
  NTSTATUS result; // eax
  char GrantedAccess; // r15
  PFILE_OBJECT v13; // rdi
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  __int64 v15; // r9
  __int64 v16; // r8
  ULONG *p_Flags; // r13
  __int64 Flags; // rdx
  unsigned __int64 DeviceType; // rcx
  ULONG v20; // r10d
  ULONG v21; // r14d
  __int64 v22; // rcx
  __int64 v23; // rbx
  FILE_SEGMENT_ELEMENT *PoolWithQuota_0; // rsi
  ULONG v25; // edx
  PLARGE_INTEGER v26; // rbx
  unsigned __int16 v27; // cx
  __int64 v28; // rax
  struct _IO_STATUS_BLOCK *Status; // rcx
  NTSTATUS v30; // r15d
  struct _KEVENT *v31; // r14
  char v32; // r12
  __int64 v33; // r8
  __int64 v34; // rdx
  IRP *Irp; // rax
  IRP *v36; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  ULONG v38; // r15d
  struct _MDL *Mdl; // rax
  unsigned __int64 v40; // r15
  __int64 MajorFunction; // r13
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  PFILE_OBJECT v45; // rbx
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-98h]
  LONGLONG QuadPart; // [rsp+48h] [rbp-90h]
  char v48[8]; // [rsp+50h] [rbp-88h] BYREF
  PVOID P; // [rsp+58h] [rbp-80h]
  PFILE_OBJECT FileObject; // [rsp+60h] [rbp-78h] BYREF
  ULONG v51; // [rsp+68h] [rbp-70h]
  int v52; // [rsp+6Ch] [rbp-6Ch]
  PDEVICE_OBJECT DeviceObject; // [rsp+70h] [rbp-68h]
  ULONG v54; // [rsp+78h] [rbp-60h]
  PVOID v55; // [rsp+80h] [rbp-58h]
  PVOID Object; // [rsp+88h] [rbp-50h] BYREF
  ULONG *v57; // [rsp+90h] [rbp-48h]
  struct _OBJECT_HANDLE_INFORMATION v58; // [rsp+98h] [rbp-40h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp-38h]
  void *retaddr; // [rsp+D8h] [rbp+0h]

  P = 0LL;
  v55 = 0LL;
  v51 = 0;
  QuadPart = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  AccessMode = PreviousMode;
  result = IopReferenceFileObject(FileHandle, 0, PreviousMode, (PVOID *)&FileObject, &v58);
  if ( result < 0 )
    return result;
  GrantedAccess = v58.GrantedAccess;
  v13 = FileObject;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  v16 = (__int64)RelatedDeviceObject;
  DeviceObject = RelatedDeviceObject;
  p_Flags = &v13->Flags;
  v57 = &v13->Flags;
  Flags = v13->Flags;
  if ( (v13->Flags & 0xA) != 8
    || (RelatedDeviceObject->Flags & 4) != 0
    || ((DeviceType = RelatedDeviceObject->DeviceType, (unsigned int)DeviceType > 0x36)
     || (v15 = 0x40000100100348LL, !_bittest64(&v15, DeviceType)))
    && (_DWORD)DeviceType != 83 )
  {
    ObfDereferenceObject(v13);
    return -1073741811;
  }
  v20 = BufferLength;
  v21 = ((BufferLength & 0xFFF) != 0) + (BufferLength >> 12);
  if ( PreviousMode )
  {
    if ( ((((unsigned __int8)~LOBYTE(v13->Flags) >> 5) & 4 | 2) & *(_DWORD *)&GrantedAccess) == 0 )
    {
      ObfDereferenceObject(v13);
      return -1073741790;
    }
    v52 = 0;
    v22 = (__int64)IoStatusBlock;
    Flags = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
      v22 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v22 = *(_DWORD *)v22;
    if ( KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7] && (*p_Flags & 2) == 0 )
    {
      ApcRoutine = (PIO_APC_ROUTINE)((unsigned __int64)ApcRoutine | 1);
      Status = (struct _IO_STATUS_BLOCK *)(unsigned int)IoStatusBlock->Status;
      IoStatusBlock = Status;
      Status->Status = Status->Status;
    }
    v23 = v21;
    if ( KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7] )
    {
      if ( v23 * 8 )
      {
        if ( ((unsigned __int8)BufferDescription & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        goto LABEL_17;
      }
    }
    else if ( v23 * 8 )
    {
      if ( ((unsigned __int8)BufferDescription & 7) != 0 )
        ExRaiseDatatypeMisalignment();
LABEL_17:
      if ( (unsigned __int64)&BufferDescription[v23] > 0x7FFFFFFF0000LL || &BufferDescription[v23] < BufferDescription )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    if ( BufferLength )
    {
      PoolWithQuota_0 = (FILE_SEGMENT_ELEMENT *)IopVerifierExAllocatePoolWithQuota_0(PagedPool, 8LL * v21);
      P = PoolWithQuota_0;
      memmove(PoolWithQuota_0, BufferDescription, 8LL * v21);
      BufferDescription = PoolWithQuota_0;
      v25 = 0;
      v54 = 0;
      while ( v25 < v21 )
      {
        if ( ((__int64)PoolWithQuota_0[v25].Buffer & 0xFFFLL) != 0 )
          RtlRaiseStatus(-1073741811);
        v54 = ++v25;
      }
      v20 = BufferLength;
      v16 = (__int64)DeviceObject;
      Flags = 0x7FFFFFFF0000LL;
    }
    else
    {
      PoolWithQuota_0 = (FILE_SEGMENT_ELEMENT *)P;
    }
    v13 = FileObject;
    if ( FileObject->CompletionContext && ((unsigned __int64)ApcRoutine & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      RtlRaiseStatus(-1073741811);
    v26 = ByteOffset;
    if ( ByteOffset )
    {
      if ( ((unsigned __int8)ByteOffset & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      QuadPart = ByteOffset->QuadPart;
      PoolWithQuota_0 = (FILE_SEGMENT_ELEMENT *)P;
      v13 = FileObject;
    }
    p_Flags = &v13->Flags;
    v57 = &v13->Flags;
    v15 = v13->Flags;
    if ( (v15 & 8) != 0 )
    {
      v27 = *(_WORD *)(v16 + 304);
      if ( v27 )
      {
        v16 = v27;
        if ( ((v27 - 1) & v20) != 0 )
        {
          Flags = v20 % v27;
          if ( v20 % v27 )
            RtlRaiseStatus(-1073741811);
        }
      }
      if ( ByteOffset
        && QuadPart != -1
        && (QuadPart != -2 || (v15 & 2) == 0)
        && v27
        && ((v27 - 1) & (unsigned int)QuadPart) != 0 )
      {
        RtlRaiseStatus(-1073741811);
      }
    }
    v28 = (__int64)Key;
    if ( Key )
    {
      if ( (unsigned __int64)Key >= 0x7FFFFFFF0000LL )
        v28 = 0x7FFFFFFF0000LL;
      v51 = *(_DWORD *)v28;
      PoolWithQuota_0 = (FILE_SEGMENT_ELEMENT *)P;
      v13 = FileObject;
    }
    goto LABEL_60;
  }
  v26 = ByteOffset;
  if ( ByteOffset )
    QuadPart = ByteOffset->QuadPart;
  PoolWithQuota_0 = (FILE_SEGMENT_ELEMENT *)P;
  if ( Key )
    v51 = *Key;
LABEL_60:
  if ( (GrantedAccess & 6) == 4 )
    QuadPart = -1LL;
  if ( Event )
  {
    v30 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, AccessMode, &Object, 0LL);
    v31 = (struct _KEVENT *)Object;
    v55 = Object;
    if ( v30 < 0 )
    {
LABEL_92:
      ObfDereferenceObject(v13);
      if ( PoolWithQuota_0 )
        ExFreePoolWithTag(PoolWithQuota_0, 0);
      return v30;
    }
    KeResetEvent((PRKEVENT)Object);
  }
  else
  {
    v31 = (struct _KEVENT *)v55;
  }
  if ( (*p_Flags & 2) == 0 )
  {
    if ( !v26 && (*p_Flags & 0x280) == 0 )
    {
      if ( v31 )
        ObfDereferenceObject(v31);
LABEL_108:
      ObfDereferenceObject(v13);
      if ( PoolWithQuota_0 )
        ExFreePoolWithTag(PoolWithQuota_0, 0);
      return -1073741811;
    }
    v32 = 0;
    goto LABEL_68;
  }
  if ( !IopAcquireFastLock_1((volatile __int32 *)&v13->Type, Flags, v16, v15) )
  {
    v30 = IopAcquireFileObjectLock((char *)v13, AccessMode, (*(_BYTE *)p_Flags & 4) != 0, v48);
    if ( v48[0] )
    {
      if ( v31 )
        ObfDereferenceObject(v31);
      goto LABEL_92;
    }
  }
  v32 = 1;
  if ( !v26 && !(_DWORD)QuadPart || QuadPart == -2 )
    QuadPart = v13->CurrentByteOffset.QuadPart;
LABEL_68:
  if ( QuadPart < 0 && QuadPart != -1 )
  {
    if ( v31 )
      ObfDereferenceObject(v31);
    if ( v32 )
    {
      _InterlockedExchange((volatile __int32 *)&v13->Busy, 0);
      v45 = FileObject;
      if ( FileObject->Waiters )
        KeSetEvent(&FileObject->Lock, 0, 0);
      ObfDereferenceObject(v45);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v42, v43, v44);
      PoolWithQuota_0 = (FILE_SEGMENT_ELEMENT *)P;
      v13 = FileObject;
    }
    goto LABEL_108;
  }
  IopResetEvent((__int64)v13);
  LOBYTE(v33) = v32 == 0;
  LOBYTE(v34) = DeviceObject->StackSize;
  Irp = (IRP *)pIoAllocateIrp(DeviceObject, v34, v33, retaddr);
  v36 = Irp;
  Object = Irp;
  if ( Irp )
  {
    Irp->Tail.Overlay.OriginalFileObject = v13;
    Irp->Tail.Overlay.Thread = CurrentThread;
    Irp->Tail.Overlay.AuxiliaryBuffer = 0LL;
    Irp->RequestorMode = AccessMode;
    Irp->PendingReturned = 0;
    Irp->Cancel = 0;
    Irp->CancelRoutine = 0LL;
    Irp->UserEvent = v31;
    Irp->UserIosb = IoStatusBlock;
    Irp->Overlay.AllocationSize.QuadPart = (LONGLONG)ApcRoutine;
    Irp->Overlay.AsynchronousParameters.UserApcContext = ApcContext;
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = 4;
    CurrentStackLocation[-1].FileObject = v13;
    if ( (*p_Flags & 0x10) != 0 )
      CurrentStackLocation[-1].Flags = 4;
    Irp->AssociatedIrp.MasterIrp = 0LL;
    Irp->MdlAddress = 0LL;
    Irp->Flags = 0;
    v38 = BufferLength;
    if ( BufferLength )
    {
      Mdl = IoAllocateMdl(BufferDescription->Buffer, BufferLength, 0, 1u, Irp);
      v40 = (unsigned __int64)Mdl;
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      MajorFunction = CurrentStackLocation[-1].MajorFunction;
      MmProbeAndLockSelectedPages(Mdl, BufferDescription, AccessMode, IoReadAccess);
      if ( (MmTrackLockedPages & 1) != 0 )
        MmUpdateMdlTracker(
          v40,
          (__int64)DeviceObject->DriverObject->MajorFunction[MajorFunction],
          (__int64)DeviceObject);
      v36->UserBuffer = BufferDescription->Buffer;
      p_Flags = v57;
      v38 = BufferLength;
    }
    if ( PoolWithQuota_0 )
      ExFreePoolWithTag(PoolWithQuota_0, 0);
    if ( (*p_Flags & 8) != 0 )
      v36->Flags |= 0xA01u;
    else
      v36->Flags |= 0xA00u;
    CurrentStackLocation[-1].Parameters.Read.Length = v38;
    CurrentStackLocation[-1].Parameters.Create.Options = v51;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = QuadPart;
    return IopSynchronousServiceTail(DeviceObject, v36, (__int64)v13, 1, AccessMode, v32, 1u);
  }
  else
  {
    IopAllocateIrpCleanup(v13, v31);
    if ( PoolWithQuota_0 )
      ExFreePoolWithTag(PoolWithQuota_0, 0);
    return -1073741670;
  }
}
