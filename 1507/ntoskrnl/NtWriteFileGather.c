/*
 * XREFs of NtWriteFileGather @ 0x140540320
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140013F48 (ExAllocatePoolWithTagPriority.c)
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     IoAllocateMdl @ 0x140033BF0 (IoAllocateMdl.c)
 *     MmProbeAndLockSelectedPages @ 0x140033EA4 (MmProbeAndLockSelectedPages.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140045B50 (ExAllocatePoolWithQuotaTag.c)
 *     IoGetRelatedDeviceObject @ 0x140048020 (IoGetRelatedDeviceObject.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     IopExceptionFilter @ 0x1401F2394 (IopExceptionFilter.c)
 *     MmUpdateMdlTracker @ 0x140214574 (MmUpdateMdlTracker.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     SeQueryInformationToken @ 0x140481E90 (SeQueryInformationToken.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     IopSynchronousServiceTail @ 0x1404BDDC0 (IopSynchronousServiceTail.c)
 *     PsReferencePrimaryToken @ 0x14050D730 (PsReferencePrimaryToken.c)
 *     IopAcquireFileObjectLock @ 0x140540A5C (IopAcquireFileObjectLock.c)
 *     IopExceptionCleanup @ 0x14055D264 (IopExceptionCleanup.c)
 *     IopAllocateIrpCleanup @ 0x140670E48 (IopAllocateIrpCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
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
  int v10; // edi
  PFILE_OBJECT v11; // rbx
  _DWORD *FileObjectExtension; // rax
  char GrantedAccess; // si
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  __int64 v15; // r8
  struct _DEVICE_OBJECT *v16; // r15
  ULONG *p_Flags; // r12
  __int64 Flags; // rdx
  unsigned __int64 DeviceType; // rcx
  ULONG v20; // edi
  KPROCESSOR_MODE v21; // cl
  _DWORD *v22; // rcx
  __int64 v23; // rbx
  SIZE_T v24; // rdx
  FILE_SEGMENT_ELEMENT *PoolWithTagPriority; // rax
  FILE_SEGMENT_ELEMENT *v26; // rbx
  PLARGE_INTEGER v27; // rbx
  ULONG v28; // r9d
  USHORT SectorSize; // cx
  ULONG *v30; // rax
  ULONG64 Status; // rcx
  int v32; // esi
  char v33; // r14
  IRP *Irp; // rax
  IRP *v35; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  struct _MDL *Mdl; // rax
  unsigned __int64 v38; // rbx
  __int64 MajorFunction; // r15
  __int64 v40; // rcx
  struct _KPROCESS *Process; // rcx
  PACCESS_TOKEN v43; // rbx
  FILE_SEGMENT_ELEMENT *v44; // rcx
  struct _KTHREAD *v45; // rax
  struct _KTHREAD *v46; // rcx
  __int16 v47; // ax
  struct _KTHREAD *v48; // rcx
  __int16 v49; // ax
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-98h]
  PFILE_OBJECT v51; // [rsp+48h] [rbp-90h]
  LONGLONG QuadPart; // [rsp+50h] [rbp-88h]
  char v53; // [rsp+58h] [rbp-80h]
  FILE_SEGMENT_ELEMENT *P; // [rsp+60h] [rbp-78h]
  struct _KEVENT *v55; // [rsp+68h] [rbp-70h]
  ULONG v56; // [rsp+70h] [rbp-68h]
  PVOID TokenInformation; // [rsp+78h] [rbp-60h] BYREF
  PFILE_OBJECT FileObject; // [rsp+80h] [rbp-58h] BYREF
  PDEVICE_OBJECT v59; // [rsp+88h] [rbp-50h]
  PVOID Object; // [rsp+90h] [rbp-48h] BYREF
  int v61; // [rsp+98h] [rbp-40h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+A0h] [rbp-38h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-30h]
  void *retaddr; // [rsp+D8h] [rbp+0h]

  P = 0LL;
  v55 = 0LL;
  v56 = 0;
  QuadPart = 0LL;
  CurrentThread = KeGetCurrentThread();
  AccessMode = CurrentThread->PreviousMode;
  v10 = ObReferenceObjectByHandle(
          FileHandle,
          0,
          (POBJECT_TYPE)IoFileObjectType,
          AccessMode,
          (PVOID *)&FileObject,
          &HandleInformation);
  v11 = FileObject;
  v51 = FileObject;
  if ( v10 >= 0 )
  {
    FileObjectExtension = FileObject->FileObjectExtension;
    if ( FileObjectExtension )
    {
      if ( (*FileObjectExtension & 4) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        LODWORD(TokenInformation) = 0;
        v43 = PsReferencePrimaryToken(Process);
        SeQueryInformationToken(v43, TokenIsAppContainer, &TokenInformation);
        ObfDereferenceObject(v43);
        v11 = FileObject;
        if ( (_DWORD)TokenInformation )
        {
          ObfDereferenceObject(FileObject);
          v10 = -1073739504;
        }
      }
    }
  }
  if ( v10 < 0 )
    return v10;
  GrantedAccess = HandleInformation.GrantedAccess;
  RelatedDeviceObject = IoGetRelatedDeviceObject(v11);
  v16 = RelatedDeviceObject;
  v59 = RelatedDeviceObject;
  p_Flags = &v11->Flags;
  Flags = v11->Flags;
  if ( (v11->Flags & 0xA) != 8
    || (RelatedDeviceObject->Flags & 4) != 0
    || ((DeviceType = RelatedDeviceObject->DeviceType, (unsigned int)DeviceType > 0x36)
     || (v15 = 0x40000100100348LL, !_bittest64(&v15, DeviceType)))
    && (_DWORD)DeviceType != 83 )
  {
    ObfDereferenceObject(v11);
    return -1073741811;
  }
  v20 = ((BufferLength & 0xFFF) != 0) + (BufferLength >> 12);
  v21 = AccessMode;
  if ( AccessMode )
  {
    if ( ((((unsigned __int8)~LOBYTE(v11->Flags) >> 5) & 4 | 2) & *(_DWORD *)&GrantedAccess) == 0 )
    {
      ObfDereferenceObject(v11);
      return -1073741790;
    }
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
    v23 = v20;
    if ( KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7] )
    {
      if ( v23 * 8 )
      {
        if ( ((unsigned __int8)BufferDescription & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        goto LABEL_16;
      }
    }
    else if ( v23 * 8 )
    {
      if ( ((unsigned __int8)BufferDescription & 7) != 0 )
        ExRaiseDatatypeMisalignment();
LABEL_16:
      if ( (unsigned __int64)&BufferDescription[v23] > MmUserProbeAddress || &BufferDescription[v23] < BufferDescription )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    if ( BufferLength )
    {
      v24 = 8LL * v20;
      if ( ViVerifierDriverAddedThunkListHead )
      {
        PoolWithTagPriority = (FILE_SEGMENT_ELEMENT *)ExAllocatePoolWithTagPriority(
                                                        PagedPool,
                                                        v24,
                                                        0x20206F49u,
                                                        (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
        if ( !PoolWithTagPriority )
          RtlRaiseStatus(-1073741670);
      }
      else
      {
        PoolWithTagPriority = (FILE_SEGMENT_ELEMENT *)ExAllocatePoolWithQuotaTag(PagedPool, v24, 0x20206F49u);
      }
      P = PoolWithTagPriority;
      v26 = PoolWithTagPriority;
      memmove(PoolWithTagPriority, BufferDescription, 8LL * v20);
      BufferDescription = v26;
      for ( Flags = 0LL; ; Flags = (unsigned int)(Flags + 1) )
      {
        v61 = Flags;
        if ( (unsigned int)Flags >= v20 )
          break;
        if ( ((__int64)v26[(unsigned int)Flags].Buffer & 0xFFFLL) != 0 )
          RtlRaiseStatus(-1073741811);
      }
      v16 = v59;
    }
    if ( v51->CompletionContext && ((unsigned __int64)ApcRoutine & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      RtlRaiseStatus(-1073741811);
    v27 = ByteOffset;
    if ( ByteOffset )
    {
      if ( ((unsigned __int8)ByteOffset & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      QuadPart = ByteOffset->QuadPart;
    }
    p_Flags = &v51->Flags;
    v28 = v51->Flags;
    if ( (v28 & 8) != 0 )
    {
      SectorSize = v16->SectorSize;
      if ( SectorSize )
      {
        v15 = SectorSize;
        if ( ((SectorSize - 1) & BufferLength) != 0 )
        {
          Flags = BufferLength % SectorSize;
          if ( BufferLength % SectorSize )
            RtlRaiseStatus(-1073741811);
        }
      }
      if ( ByteOffset
        && QuadPart != -1
        && (QuadPart != -2 || (v28 & 2) == 0)
        && SectorSize
        && ((SectorSize - 1) & (unsigned int)QuadPart) != 0 )
      {
        RtlRaiseStatus(-1073741811);
      }
    }
    v30 = Key;
    if ( Key )
    {
      if ( (unsigned __int64)Key >= MmUserProbeAddress )
        v30 = (ULONG *)MmUserProbeAddress;
      v56 = *v30;
    }
    v21 = AccessMode;
    goto LABEL_66;
  }
  v27 = ByteOffset;
  if ( ByteOffset )
    QuadPart = ByteOffset->QuadPart;
  if ( Key )
    v56 = *Key;
LABEL_66:
  if ( (GrantedAccess & 6) == 4 )
    QuadPart = -1LL;
  if ( Event )
  {
    v32 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, v21, &Object, 0LL);
    v55 = (struct _KEVENT *)Object;
    if ( v32 < 0 )
    {
      ObfDereferenceObject(v51);
      if ( P )
      {
        v44 = P;
LABEL_108:
        ExFreePoolWithTag(v44, 0);
      }
      return v32;
    }
    KeResetEvent((PRKEVENT)Object);
  }
  if ( (*p_Flags & 2) == 0 )
  {
    if ( !v27 && (*p_Flags & 0x280) == 0 )
    {
      if ( v55 )
        ObfDereferenceObject(v55);
LABEL_128:
      ObfDereferenceObject(v51);
      if ( P )
        ExFreePoolWithTag(P, 0);
      return -1073741811;
    }
    v33 = 0;
    goto LABEL_74;
  }
  v45 = KeGetCurrentThread();
  --v45->KernelApcDisable;
  if ( _InterlockedExchange((volatile __int32 *)&v51->Busy, 1) )
  {
    v46 = KeGetCurrentThread();
    v47 = v46->KernelApcDisable + 1;
    v46->KernelApcDisable = v47;
    if ( !v47
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v46->ApcState.ApcListHead[0].Flink != &v46->152
      && !v46->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    v32 = IopAcquireFileObjectLock(v51);
    if ( !v53 )
      goto LABEL_121;
    if ( v55 )
      ObfDereferenceObject(v55);
    ObfDereferenceObject(v51);
    v44 = P;
    if ( P )
      goto LABEL_108;
    return v32;
  }
  ObfReferenceObject(v51);
LABEL_121:
  v33 = 1;
  if ( !v27 && !(_DWORD)QuadPart || QuadPart == -2 )
    QuadPart = v51->CurrentByteOffset.QuadPart;
LABEL_74:
  if ( QuadPart < 0 && QuadPart != -1 )
  {
    if ( v55 )
      ObfDereferenceObject(v55);
    if ( v33 )
    {
      _InterlockedExchange((volatile __int32 *)&v51->Busy, 0);
      if ( v51->Waiters )
        KeSetEvent(&v51->Lock, 0, 0);
      ObfDereferenceObject(v51);
      v48 = KeGetCurrentThread();
      v49 = v48->KernelApcDisable + 1;
      v48->KernelApcDisable = v49;
      if ( !v49
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v48->ApcState.ApcListHead[0].Flink != &v48->152
        && !v48->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    goto LABEL_128;
  }
  if ( (*p_Flags & 0x4000000) == 0 )
    KeResetEvent(&v51->Event);
  LOBYTE(v15) = v33 == 0;
  LOBYTE(Flags) = v16->StackSize;
  Irp = (IRP *)pIoAllocateIrp(v16, Flags, v15, retaddr);
  v35 = Irp;
  Object = Irp;
  if ( Irp )
  {
    Irp->Tail.Overlay.OriginalFileObject = v51;
    Irp->Tail.Overlay.Thread = CurrentThread;
    Irp->Tail.Overlay.AuxiliaryBuffer = 0LL;
    Irp->RequestorMode = AccessMode;
    Irp->PendingReturned = 0;
    Irp->Cancel = 0;
    Irp->CancelRoutine = 0LL;
    Irp->UserEvent = v55;
    Irp->UserIosb = IoStatusBlock;
    Irp->Overlay.AllocationSize.QuadPart = (LONGLONG)ApcRoutine;
    Irp->Overlay.AsynchronousParameters.UserApcContext = ApcContext;
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = 4;
    CurrentStackLocation[-1].FileObject = v51;
    if ( (*p_Flags & 0x10) != 0 )
      CurrentStackLocation[-1].Flags = 4;
    Irp->AssociatedIrp.MasterIrp = 0LL;
    Irp->MdlAddress = 0LL;
    Irp->Flags = 0;
    if ( BufferLength )
    {
      Mdl = IoAllocateMdl(BufferDescription->Buffer, BufferLength, 0, 1u, Irp);
      v38 = (unsigned __int64)Mdl;
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      MajorFunction = CurrentStackLocation[-1].MajorFunction;
      MmProbeAndLockSelectedPages(Mdl, BufferDescription, AccessMode, IoReadAccess);
      if ( (MmTrackLockedPages & 1) != 0 )
      {
        v40 = MajorFunction;
        v16 = v59;
        MmUpdateMdlTracker(v38, (__int64)v59->DriverObject->MajorFunction[v40], (__int64)v59);
      }
      else
      {
        v16 = v59;
      }
      v35->UserBuffer = BufferDescription->Buffer;
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( (*p_Flags & 8) != 0 )
      v35->Flags |= 0xA01u;
    else
      v35->Flags |= 0xA00u;
    CurrentStackLocation[-1].Parameters.Read.Length = BufferLength;
    CurrentStackLocation[-1].Parameters.Create.Options = v56;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = QuadPart;
    return IopSynchronousServiceTail(v16, v35, (char *)v51, 1, AccessMode, v33, 1);
  }
  else
  {
    IopAllocateIrpCleanup(v51, v55);
    if ( P )
      ExFreePoolWithTag(P, 0);
    return -1073741670;
  }
}
