/*
 * XREFs of NtWriteFileGather @ 0x140490124
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     IoGetRelatedDeviceObject @ 0x1400435F0 (IoGetRelatedDeviceObject.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 *     IopResetEvent @ 0x14008E840 (IopResetEvent.c)
 *     MmProbeAndLockSelectedPages @ 0x1400A70B0 (MmProbeAndLockSelectedPages.c)
 *     IopReferenceFileObject @ 0x1400CC3D8 (IopReferenceFileObject.c)
 *     sub_1400CC928 @ 0x1400CC928 (sub_1400CC928.c)
 *     IoAllocateMdl @ 0x1400FC2E0 (IoAllocateMdl.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     IopExceptionFilter @ 0x1401B71BC (IopExceptionFilter.c)
 *     sub_1401BCD84 @ 0x1401BCD84 (sub_1401BCD84.c)
 *     MmUpdateMdlTracker @ 0x1401D319C (MmUpdateMdlTracker.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     IopSynchronousServiceTail @ 0x140437580 (IopSynchronousServiceTail.c)
 *     IopAcquireFileObjectLock @ 0x1404AC66C (IopAcquireFileObjectLock.c)
 *     IopExceptionCleanup @ 0x1404C68BC (IopExceptionCleanup.c)
 *     IopAllocateIrpCleanup @ 0x1405F70B8 (IopAllocateIrpCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
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
  __int64 v15; // r8
  ULONG *p_Flags; // r13
  __int64 Flags; // rdx
  unsigned __int64 DeviceType; // rcx
  __int64 v19; // r9
  ULONG v20; // r10d
  ULONG v21; // r14d
  _DWORD *v22; // rcx
  __int64 v23; // rbx
  FILE_SEGMENT_ELEMENT *v24; // rsi
  PLARGE_INTEGER v25; // rbx
  ULONG v26; // r9d
  unsigned __int16 v27; // cx
  ULONG *v28; // rax
  ULONG64 Status; // rcx
  int v30; // r15d
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
  PFILE_OBJECT v42; // rbx
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-98h]
  LONGLONG QuadPart; // [rsp+48h] [rbp-90h]
  char v45; // [rsp+50h] [rbp-88h]
  FILE_SEGMENT_ELEMENT *P; // [rsp+58h] [rbp-80h]
  PFILE_OBJECT FileObject; // [rsp+60h] [rbp-78h] BYREF
  ULONG v48; // [rsp+68h] [rbp-70h]
  int v49; // [rsp+6Ch] [rbp-6Ch]
  PDEVICE_OBJECT DeviceObject; // [rsp+70h] [rbp-68h]
  PVOID v51; // [rsp+78h] [rbp-60h]
  PVOID Object; // [rsp+80h] [rbp-58h] BYREF
  int v53; // [rsp+88h] [rbp-50h]
  ULONG *v54; // [rsp+90h] [rbp-48h]
  struct _OBJECT_HANDLE_INFORMATION v55; // [rsp+98h] [rbp-40h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp-38h]
  void *retaddr; // [rsp+D8h] [rbp+0h]

  P = 0LL;
  v51 = 0LL;
  v48 = 0;
  QuadPart = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  AccessMode = PreviousMode;
  result = IopReferenceFileObject(FileHandle, 0, PreviousMode, (PVOID *)&FileObject, &v55);
  if ( result < 0 )
    return result;
  GrantedAccess = v55.GrantedAccess;
  v13 = FileObject;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  v15 = (__int64)RelatedDeviceObject;
  DeviceObject = RelatedDeviceObject;
  p_Flags = &v13->Flags;
  v54 = &v13->Flags;
  Flags = v13->Flags;
  if ( (v13->Flags & 0xA) != 8
    || (RelatedDeviceObject->Flags & 4) != 0
    || ((DeviceType = RelatedDeviceObject->DeviceType, (unsigned int)DeviceType > 0x36)
     || (v19 = 0x40000100100348LL, !_bittest64(&v19, DeviceType)))
    && (_DWORD)DeviceType != 83 )
  {
    ObfDereferenceObject(v13);
    return -1073741811;
  }
  v20 = BufferLength;
  v21 = ((BufferLength & 0xFFF) != 0) + (BufferLength >> 12);
  if ( PreviousMode )
  {
    LOBYTE(Flags) = ~(_BYTE)Flags;
    if ( ((((unsigned __int8)Flags >> 5) & 4 | 2) & *(_DWORD *)&GrantedAccess) == 0 )
    {
      ObfDereferenceObject(v13);
      return -1073741790;
    }
    v49 = 0;
    v22 = &IoStatusBlock->0;
    if ( (unsigned __int64)IoStatusBlock >= MmUserProbeAddress )
      v22 = (_DWORD *)MmUserProbeAddress;
    *v22 = *v22;
    if ( KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7] && (*p_Flags & 2) == 0 )
    {
      ApcRoutine = (PIO_APC_ROUTINE)((unsigned __int64)ApcRoutine | 1);
      Status = (unsigned int)IoStatusBlock->Status;
      IoStatusBlock = (PIO_STATUS_BLOCK)Status;
      if ( Status >= MmUserProbeAddress )
        Status = MmUserProbeAddress;
      *(_DWORD *)Status = *(_DWORD *)Status;
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
      if ( (unsigned __int64)&BufferDescription[v23] > MmUserProbeAddress || &BufferDescription[v23] < BufferDescription )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    if ( BufferLength )
    {
      v24 = (FILE_SEGMENT_ELEMENT *)sub_1400CC928(PagedPool, 8LL * v21);
      P = v24;
      memmove(v24, BufferDescription, 8LL * v21);
      BufferDescription = v24;
      Flags = 0LL;
      v53 = 0;
      while ( (unsigned int)Flags < v21 )
      {
        if ( ((__int64)v24[(unsigned int)Flags].Buffer & 0xFFFLL) != 0 )
          RtlRaiseStatus(-1073741811);
        Flags = (unsigned int)(Flags + 1);
        v53 = Flags;
      }
      v20 = BufferLength;
      v15 = (__int64)DeviceObject;
    }
    else
    {
      v24 = 0LL;
    }
    v13 = FileObject;
    if ( FileObject->CompletionContext && ((unsigned __int64)ApcRoutine & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      RtlRaiseStatus(-1073741811);
    v25 = ByteOffset;
    if ( ByteOffset )
    {
      if ( ((unsigned __int8)ByteOffset & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      QuadPart = ByteOffset->QuadPart;
      v24 = P;
      v13 = FileObject;
    }
    p_Flags = &v13->Flags;
    v54 = &v13->Flags;
    v26 = v13->Flags;
    if ( (v26 & 8) != 0 )
    {
      v27 = *(_WORD *)(v15 + 304);
      if ( v27 )
      {
        v15 = v27;
        if ( ((v27 - 1) & v20) != 0 )
        {
          Flags = v20 % v27;
          if ( v20 % v27 )
            RtlRaiseStatus(-1073741811);
        }
      }
      if ( ByteOffset
        && QuadPart != -1
        && (QuadPart != -2 || (v26 & 2) == 0)
        && v27
        && ((v27 - 1) & (unsigned int)QuadPart) != 0 )
      {
        RtlRaiseStatus(-1073741811);
      }
    }
    v28 = Key;
    if ( Key )
    {
      if ( (unsigned __int64)Key >= MmUserProbeAddress )
        v28 = (ULONG *)MmUserProbeAddress;
      v48 = *v28;
      v24 = P;
      v13 = FileObject;
    }
    goto LABEL_62;
  }
  v25 = ByteOffset;
  if ( ByteOffset )
    QuadPart = ByteOffset->QuadPart;
  v24 = 0LL;
  if ( Key )
    v48 = *Key;
LABEL_62:
  if ( (GrantedAccess & 6) == 4 )
    QuadPart = -1LL;
  if ( Event )
  {
    v30 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, AccessMode, &Object, 0LL);
    v31 = (struct _KEVENT *)Object;
    v51 = Object;
    if ( v30 < 0 )
    {
LABEL_94:
      ObfDereferenceObject(v13);
      if ( v24 )
        ExFreePoolWithTag(v24, 0);
      return v30;
    }
    KeResetEvent((PRKEVENT)Object);
  }
  else
  {
    v31 = (struct _KEVENT *)v51;
  }
  if ( (*p_Flags & 2) == 0 )
  {
    if ( !v25 && (*p_Flags & 0x280) == 0 )
    {
      if ( v31 )
        ObfDereferenceObject(v31);
LABEL_110:
      ObfDereferenceObject(v13);
      if ( v24 )
        ExFreePoolWithTag(v24, 0);
      return -1073741811;
    }
    v32 = 0;
    goto LABEL_70;
  }
  if ( !sub_1401BCD84((volatile __int32 *)&v13->Type) )
  {
    v30 = IopAcquireFileObjectLock(v13);
    if ( v45 )
    {
      if ( v31 )
        ObfDereferenceObject(v31);
      goto LABEL_94;
    }
  }
  v32 = 1;
  if ( !v25 && !(_DWORD)QuadPart || QuadPart == -2 )
    QuadPart = v13->CurrentByteOffset.QuadPart;
LABEL_70:
  if ( QuadPart < 0 && QuadPart != -1 )
  {
    if ( v31 )
      ObfDereferenceObject(v31);
    if ( v32 )
    {
      _InterlockedExchange((volatile __int32 *)&v13->Busy, 0);
      v42 = FileObject;
      if ( FileObject->Waiters )
        KeSetEvent(&FileObject->Lock, 0, 0);
      ObfDereferenceObject(v42);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v24 = P;
      v13 = FileObject;
    }
    goto LABEL_110;
  }
  IopResetEvent((__int64)v13, Flags, v15);
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
      p_Flags = v54;
      v38 = BufferLength;
    }
    if ( v24 )
      ExFreePoolWithTag(v24, 0);
    if ( (*p_Flags & 8) != 0 )
      v36->Flags |= 0xA01u;
    else
      v36->Flags |= 0xA00u;
    CurrentStackLocation[-1].Parameters.Read.Length = v38;
    CurrentStackLocation[-1].Parameters.Create.Options = v48;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = QuadPart;
    return IopSynchronousServiceTail(DeviceObject, v36, (char *)v13, 1, AccessMode, v32, 1);
  }
  else
  {
    IopAllocateIrpCleanup(v13, v31);
    if ( v24 )
      ExFreePoolWithTag(v24, 0);
    return -1073741670;
  }
}
