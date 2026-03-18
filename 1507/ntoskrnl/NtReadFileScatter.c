/*
 * XREFs of NtReadFileScatter @ 0x140549CBC
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

NTSTATUS __stdcall NtReadFileScatter(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE UserApcRoutine,
        PVOID UserApcContext,
        PIO_STATUS_BLOCK UserIoStatusBlock,
        FILE_SEGMENT_ELEMENT BufferDescription[],
        ULONG BufferLength,
        PLARGE_INTEGER ByteOffset,
        PULONG Key)
{
  KPROCESSOR_MODE PreviousMode; // r12
  int v11; // esi
  char *v12; // rdi
  _DWORD *FileObjectExtension; // rax
  PFILE_OBJECT v14; // rbx
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  __int64 v16; // r8
  unsigned __int64 v17; // rdx
  unsigned __int64 DeviceType; // rcx
  ULONG v19; // r14d
  _DWORD *v20; // rcx
  PLARGE_INTEGER v21; // rsi
  USHORT SectorSize; // cx
  __int64 v23; // rdi
  SIZE_T v24; // rdx
  FILE_SEGMENT_ELEMENT *PoolWithTagPriority; // rax
  FILE_SEGMENT_ELEMENT *v26; // rbx
  ULONG *v27; // rcx
  ULONG64 Status; // rcx
  int v30; // r14d
  struct _KEVENT *v31; // rbx
  _BYTE *v32; // r12
  int v33; // eax
  char v34; // r15
  IRP *Irp; // rax
  IRP *v36; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  struct _MDL *Mdl; // rax
  struct _KPROCESS *Process; // rcx
  PACCESS_TOKEN v40; // rbx
  struct _KTHREAD *v41; // rax
  struct _KTHREAD *v42; // rcx
  __int16 v43; // ax
  NTSTATUS v44; // ebx
  PVOID v45; // rbx
  struct _KTHREAD *v46; // rcx
  __int16 v47; // ax
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-88h]
  char v49[7]; // [rsp+41h] [rbp-87h] BYREF
  PVOID v50; // [rsp+48h] [rbp-80h]
  PVOID P; // [rsp+50h] [rbp-78h]
  LONGLONG QuadPart; // [rsp+58h] [rbp-70h]
  ULONG v53; // [rsp+60h] [rbp-68h]
  PFILE_OBJECT FileObject; // [rsp+68h] [rbp-60h] BYREF
  PVOID v55; // [rsp+70h] [rbp-58h]
  int v56; // [rsp+78h] [rbp-50h]
  _BYTE TokenInformation[12]; // [rsp+7Ch] [rbp-4Ch] BYREF
  int v58; // [rsp+88h] [rbp-40h]
  PDEVICE_OBJECT DeviceObject; // [rsp+90h] [rbp-38h]
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp-30h]
  void *retaddr; // [rsp+C8h] [rbp+0h]

  P = 0LL;
  v55 = 0LL;
  v53 = 0;
  QuadPart = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  AccessMode = PreviousMode;
  v11 = ObReferenceObjectByHandle(
          FileHandle,
          1u,
          (POBJECT_TYPE)IoFileObjectType,
          PreviousMode,
          (PVOID *)&FileObject,
          0LL);
  v12 = (char *)FileObject;
  v50 = FileObject;
  if ( v11 >= 0 )
  {
    FileObjectExtension = FileObject->FileObjectExtension;
    if ( FileObjectExtension )
    {
      if ( (*FileObjectExtension & 4) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        *(_DWORD *)TokenInformation = 0;
        v40 = PsReferencePrimaryToken(Process);
        SeQueryInformationToken(v40, TokenIsAppContainer, (PVOID *)TokenInformation);
        ObfDereferenceObject(v40);
        if ( *(_DWORD *)TokenInformation )
        {
          ObfDereferenceObject(FileObject);
          v11 = -1073739504;
        }
        v12 = (char *)v50;
      }
    }
  }
  if ( v11 < 0 )
    return v11;
  v14 = FileObject;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  v17 = (unsigned __int64)RelatedDeviceObject;
  DeviceObject = RelatedDeviceObject;
  if ( (v14->Flags & 0xA) != 8
    || (RelatedDeviceObject->Flags & 4) != 0
    || ((DeviceType = RelatedDeviceObject->DeviceType, (unsigned int)DeviceType > 0x36)
     || (v16 = 0x40000100100348LL, !_bittest64(&v16, DeviceType)))
    && (_DWORD)DeviceType != 83 )
  {
    ObfDereferenceObject(FileObject);
    return -1073741811;
  }
  v19 = ((BufferLength & 0xFFF) != 0) + (BufferLength >> 12);
  if ( PreviousMode )
  {
    v56 = 0;
    v20 = &UserIoStatusBlock->0;
    if ( (unsigned __int64)UserIoStatusBlock >= MmUserProbeAddress )
      v20 = (_DWORD *)MmUserProbeAddress;
    *v20 = *v20;
    if ( KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7] && (v14->Flags & 2) == 0 )
    {
      UserApcRoutine = (PIO_APC_ROUTINE)((unsigned __int64)UserApcRoutine | 1);
      Status = (unsigned int)UserIoStatusBlock->Status;
      UserIoStatusBlock = (PIO_STATUS_BLOCK)Status;
      if ( Status >= MmUserProbeAddress )
        Status = MmUserProbeAddress;
      *(_DWORD *)Status = *(_DWORD *)Status;
    }
    v16 = (__int64)FileObject;
    if ( FileObject->CompletionContext && ((unsigned __int64)UserApcRoutine & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      ObfDereferenceObject(FileObject);
      return -1073741811;
    }
    v21 = ByteOffset;
    if ( ByteOffset )
    {
      if ( ((unsigned __int8)ByteOffset & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      QuadPart = ByteOffset->QuadPart;
      v16 = (__int64)FileObject;
    }
    if ( (v14->Flags & 8) != 0 )
    {
      if ( (SectorSize = RelatedDeviceObject->SectorSize) != 0
        && ((SectorSize - 1) & BufferLength) != 0
        && (v17 = BufferLength % SectorSize, (_DWORD)v17)
        || ByteOffset && SectorSize && ((SectorSize - 1) & (unsigned int)QuadPart) != 0 )
      {
        ObfDereferenceObject((PVOID)v16);
        return -1073741811;
      }
    }
    v23 = v19;
    if ( KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7] )
    {
      if ( v23 * 8 )
      {
        if ( ((unsigned __int8)BufferDescription & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        goto LABEL_26;
      }
    }
    else if ( v23 * 8 )
    {
      if ( ((unsigned __int8)BufferDescription & 7) != 0 )
        ExRaiseDatatypeMisalignment();
LABEL_26:
      if ( (unsigned __int64)&BufferDescription[v23] > MmUserProbeAddress || &BufferDescription[v23] < BufferDescription )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    if ( BufferLength )
    {
      v24 = 8LL * v19;
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
      memmove(PoolWithTagPriority, BufferDescription, 8LL * v19);
      BufferDescription = v26;
      v17 = 0LL;
      v58 = 0;
      while ( (unsigned int)v17 < v19 )
      {
        if ( ((__int64)v26[(unsigned int)v17].Buffer & 0xFFFLL) != 0 )
          RtlRaiseStatus(-1073741811);
        v17 = (unsigned int)(v17 + 1);
        v58 = v17;
      }
    }
    v27 = Key;
    if ( Key )
    {
      if ( (unsigned __int64)Key >= MmUserProbeAddress )
        v27 = (ULONG *)MmUserProbeAddress;
      v53 = *v27;
    }
    v12 = (char *)v50;
    goto LABEL_58;
  }
  v21 = ByteOffset;
  if ( ByteOffset )
    QuadPart = ByteOffset->QuadPart;
  if ( Key )
    v53 = *Key;
LABEL_58:
  if ( Event )
  {
    v30 = ObReferenceObjectByHandle(
            Event,
            2u,
            (POBJECT_TYPE)ExEventObjectType,
            PreviousMode,
            (PVOID *)&TokenInformation[4],
            0LL);
    v31 = *(struct _KEVENT **)&TokenInformation[4];
    v55 = *(PVOID *)&TokenInformation[4];
    if ( v30 < 0 )
    {
      ObfDereferenceObject(v12);
      if ( P )
        ExFreePoolWithTag(P, 0);
      return v30;
    }
    KeResetEvent(*(PRKEVENT *)&TokenInformation[4]);
  }
  else
  {
    v31 = (struct _KEVENT *)v55;
  }
  v32 = v12 + 80;
  v33 = *((_DWORD *)v12 + 20);
  if ( (v33 & 2) != 0 )
  {
    v41 = KeGetCurrentThread();
    --v41->KernelApcDisable;
    if ( _InterlockedExchange((volatile __int32 *)v50 + 29, 1) )
    {
      v42 = KeGetCurrentThread();
      v43 = v42->KernelApcDisable + 1;
      v42->KernelApcDisable = v43;
      if ( !v43
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v42->ApcState.ApcListHead[0].Flink != &v42->152
        && !v42->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      v12 = (char *)v50;
      v44 = IopAcquireFileObjectLock((char *)v50, AccessMode, (*v32 & 4) != 0, v49);
      if ( v49[0] )
      {
        if ( v55 )
          ObfDereferenceObject(v55);
        ObfDereferenceObject(v12);
        if ( P )
          ExFreePoolWithTag(P, 0);
        return v44;
      }
    }
    else
    {
      v12 = (char *)v50;
      ObfReferenceObject(v50);
    }
    if ( !v21 || QuadPart == -2 )
      QuadPart = *((_QWORD *)v12 + 13);
    v34 = 1;
    v31 = (struct _KEVENT *)v55;
  }
  else
  {
    if ( !v21 && (v33 & 0x280) == 0 )
    {
      if ( v31 )
        ObfDereferenceObject(v31);
LABEL_115:
      ObfDereferenceObject(v12);
      if ( P )
        ExFreePoolWithTag(P, 0);
      return -1073741811;
    }
    v34 = 0;
  }
  if ( QuadPart < 0 )
  {
    if ( v31 )
      ObfDereferenceObject(v31);
    if ( v34 )
    {
      _InterlockedExchange((volatile __int32 *)v12 + 29, 0);
      v45 = v50;
      if ( *((_DWORD *)v50 + 28) )
        KeSetEvent((PRKEVENT)((char *)v50 + 128), 0, 0);
      ObfDereferenceObject(v45);
      v46 = KeGetCurrentThread();
      v47 = v46->KernelApcDisable + 1;
      v46->KernelApcDisable = v47;
      if ( !v47
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v46->ApcState.ApcListHead[0].Flink != &v46->152
        && !v46->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      v12 = (char *)v50;
    }
    goto LABEL_115;
  }
  if ( (*(_DWORD *)v32 & 0x4000000) == 0 )
    KeResetEvent((PRKEVENT)(v12 + 152));
  LOBYTE(v16) = v34 == 0;
  LOBYTE(v17) = DeviceObject->StackSize;
  Irp = (IRP *)pIoAllocateIrp(DeviceObject, v17, v16, retaddr);
  v36 = Irp;
  *(_QWORD *)&TokenInformation[4] = Irp;
  if ( Irp )
  {
    Irp->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)v12;
    Irp->Tail.Overlay.Thread = CurrentThread;
    Irp->Tail.Overlay.AuxiliaryBuffer = 0LL;
    Irp->RequestorMode = AccessMode;
    Irp->PendingReturned = 0;
    Irp->Cancel = 0;
    Irp->CancelRoutine = 0LL;
    Irp->UserEvent = v31;
    Irp->UserIosb = UserIoStatusBlock;
    Irp->Overlay.AllocationSize.QuadPart = (LONGLONG)UserApcRoutine;
    Irp->Overlay.AsynchronousParameters.UserApcContext = UserApcContext;
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = 3;
    CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v12;
    Irp->AssociatedIrp.MasterIrp = 0LL;
    Irp->MdlAddress = 0LL;
    Irp->Flags = 0;
    if ( BufferLength )
    {
      Mdl = IoAllocateMdl(BufferDescription->Buffer, BufferLength, 0, 1u, Irp);
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      MmProbeAndLockSelectedPages(Mdl, BufferDescription, AccessMode, IoWriteAccess);
      v36->UserBuffer = BufferDescription->Buffer;
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( (*(_DWORD *)v32 & 8) != 0 )
      v36->Flags |= 0x901u;
    else
      v36->Flags |= 0x900u;
    CurrentStackLocation[-1].Parameters.Read.Length = BufferLength;
    CurrentStackLocation[-1].Parameters.Create.Options = v53;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = QuadPart;
    return IopSynchronousServiceTail(DeviceObject, v36, v12, 1, AccessMode, v34, 0);
  }
  else
  {
    IopAllocateIrpCleanup(v12, v31);
    if ( P )
      ExFreePoolWithTag(P, 0);
    return -1073741670;
  }
}
