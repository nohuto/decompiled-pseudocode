/*
 * XREFs of NtReadFile @ 0x14048EFE0
 * Callers:
 *     SmKmIssueIo @ 0x1402578DC (SmKmIssueIo.c)
 *     PfSnGetPrefetchInstructions @ 0x1404F61EC (PfSnGetPrefetchInstructions.c)
 *     VerifierNtReadFile @ 0x1407543A8 (VerifierNtReadFile.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140013F48 (ExAllocatePoolWithTagPriority.c)
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     IoAllocateMdl @ 0x140033BF0 (IoAllocateMdl.c)
 *     MmProbeAndLockPages @ 0x140034050 (MmProbeAndLockPages.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140045B50 (ExAllocatePoolWithQuotaTag.c)
 *     IoGetRelatedDeviceObject @ 0x140048020 (IoGetRelatedDeviceObject.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     IopExceptionFilter @ 0x1401F2394 (IopExceptionFilter.c)
 *     SeQueryInformationToken @ 0x140481E90 (SeQueryInformationToken.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     IopSynchronousServiceTail @ 0x1404BDDC0 (IopSynchronousServiceTail.c)
 *     PsReferencePrimaryToken @ 0x14050D730 (PsReferencePrimaryToken.c)
 *     IopAcquireFileObjectLock @ 0x140540A5C (IopAcquireFileObjectLock.c)
 *     IopExceptionCleanup @ 0x14055D264 (IopExceptionCleanup.c)
 *     IopAllocateIrpCleanup @ 0x140670E48 (IopAllocateIrpCleanup.c)
 *     ExRaiseAccessViolation @ 0x1406F7890 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 *     VfFastIoCheckState @ 0x140739E88 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140739F38 (VfFastIoSnapState.c)
 */

NTSTATUS __stdcall NtReadFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        PLARGE_INTEGER ByteOffset,
        PULONG Key)
{
  KPROCESSOR_MODE PreviousMode; // r12
  int v11; // esi
  struct _FILE_OBJECT *v12; // rbx
  _DWORD *v13; // rax
  __int64 SectorSize; // r8
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  _DWORD *v16; // rcx
  PVOID v17; // r15
  unsigned __int64 v18; // rax
  ULONG64 v19; // rdx
  unsigned __int64 v20; // rdx
  PLARGE_INTEGER v21; // rsi
  ULONG *v22; // rax
  ULONG64 Status; // rcx
  PRKEVENT v24; // r14
  PFAST_IO_DISPATCH FastIoDispatch; // r12
  ULONG *p_Flags; // r13
  ULONG Flags; // eax
  struct _KTHREAD *v28; // rax
  volatile __int32 *v29; // r14
  __int64 v30; // r9
  __int64 (__fastcall *FastIoRead)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _QWORD); // r12
  void *v32; // r14
  char v33; // si
  struct _KTHREAD *v34; // rax
  struct _KTHREAD *v35; // rcx
  unsigned __int64 v36; // rax
  volatile __int32 *v37; // rbx
  PVOID v38; // rbx
  struct _KTHREAD *v39; // rcx
  __int16 v40; // ax
  char v42; // r12
  IRP *v43; // rax
  IRP *v44; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  ULONG v46; // eax
  ULONG v47; // ecx
  int v48; // r12d
  PRKEVENT v49; // rsi
  struct _MDL *Mdl; // rax
  struct _IRP *PoolWithTagPriority; // rax
  struct _KPROCESS *Process; // rcx
  PACCESS_TOKEN v53; // rbx
  struct _KTHREAD *v54; // rcx
  __int16 v55; // ax
  PVOID v56; // rbx
  struct _KTHREAD *v57; // rcx
  __int16 v58; // ax
  PVOID v59; // rbx
  struct _KTHREAD *v60; // rcx
  __int16 v61; // ax
  KPROCESSOR_MODE v62; // [rsp+40h] [rbp-A8h]
  PVOID Object; // [rsp+48h] [rbp-A0h] BYREF
  char v64; // [rsp+50h] [rbp-98h]
  LONGLONG QuadPart; // [rsp+58h] [rbp-90h] BYREF
  PRKEVENT Eventa; // [rsp+60h] [rbp-88h]
  ULONG v67; // [rsp+68h] [rbp-80h]
  PVOID TokenInformation; // [rsp+6Ch] [rbp-7Ch] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+78h] [rbp-70h]
  __int128 v70; // [rsp+80h] [rbp-68h] BYREF
  PIRP Irp; // [rsp+90h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp-50h]
  PVOID v73[9]; // [rsp+A0h] [rbp-48h] BYREF
  void *retaddr; // [rsp+E8h] [rbp+0h]

  Eventa = 0LL;
  v67 = 0;
  QuadPart = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v62 = PreviousMode;
  v11 = ObReferenceObjectByHandle(FileHandle, 1u, (POBJECT_TYPE)IoFileObjectType, PreviousMode, &Object, 0LL);
  v12 = (struct _FILE_OBJECT *)Object;
  v73[1] = Object;
  if ( v11 >= 0 )
  {
    v13 = (_DWORD *)*((_QWORD *)Object + 26);
    if ( v13 )
    {
      if ( (*v13 & 4) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        LODWORD(TokenInformation) = 0;
        v53 = PsReferencePrimaryToken(Process);
        SeQueryInformationToken(v53, TokenIsAppContainer, &TokenInformation);
        ObfDereferenceObject(v53);
        if ( (_DWORD)TokenInformation )
        {
          ObfDereferenceObject(Object);
          return -1073739504;
        }
        v12 = (struct _FILE_OBJECT *)Object;
      }
    }
  }
  if ( v11 < 0 )
    return v11;
  RelatedDeviceObject = IoGetRelatedDeviceObject(v12);
  DeviceObject = RelatedDeviceObject;
  if ( PreviousMode )
  {
    HIDWORD(TokenInformation) = 0;
    v16 = &IoStatusBlock->0;
    if ( (unsigned __int64)IoStatusBlock >= MmUserProbeAddress )
      v16 = (_DWORD *)MmUserProbeAddress;
    *v16 = *v16;
    v12 = (struct _FILE_OBJECT *)Object;
    if ( KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7] && (*((_DWORD *)Object + 20) & 2) == 0 )
    {
      ApcRoutine = (PIO_APC_ROUTINE)((unsigned __int64)ApcRoutine | 1);
      Status = (unsigned int)IoStatusBlock->Status;
      IoStatusBlock = (PIO_STATUS_BLOCK)Status;
      if ( Status >= MmUserProbeAddress )
        Status = MmUserProbeAddress;
      *(_DWORD *)Status = *(_DWORD *)Status;
      v12 = (struct _FILE_OBJECT *)Object;
    }
    v17 = Buffer;
    if ( Length )
    {
      v18 = (unsigned __int64)Buffer;
      v19 = (ULONG64)Buffer + Length - 1;
      if ( (unsigned __int64)Buffer > v19 || v19 >= MmUserProbeAddress )
      {
        if ( !KeGetCurrentThread()->ApcState.Process->SecurePid )
          ExRaiseAccessViolation();
        v12 = (struct _FILE_OBJECT *)Object;
      }
      else
      {
        v20 = (v19 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        do
        {
          *(_BYTE *)v18 = *(_BYTE *)v18;
          v18 = (v18 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        }
        while ( v18 != v20 );
        v12 = (struct _FILE_OBJECT *)Object;
      }
    }
    if ( v12->CompletionContext && ((unsigned __int64)ApcRoutine & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      goto LABEL_150;
    v21 = ByteOffset;
    if ( ByteOffset )
    {
      if ( ((unsigned __int8)ByteOffset & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      QuadPart = ByteOffset->QuadPart;
      v12 = (struct _FILE_OBJECT *)Object;
    }
    if ( (v12->Flags & 8) != 0 )
    {
      if ( (SectorSize = RelatedDeviceObject->SectorSize, (_WORD)SectorSize)
        && (((unsigned __int16)SectorSize - 1) & Length) != 0
        || (RelatedDeviceObject->AlignmentRequirement & (unsigned int)Buffer) != 0 )
      {
        if ( (_WORD)SectorSize && Length % (unsigned __int16)SectorSize
          || (RelatedDeviceObject->AlignmentRequirement & (unsigned int)Buffer) != 0 )
        {
          goto LABEL_150;
        }
      }
      if ( ByteOffset && (_WORD)SectorSize && (((unsigned __int16)SectorSize - 1) & (unsigned int)QuadPart) != 0 )
        goto LABEL_150;
    }
    v22 = Key;
    if ( Key )
    {
      if ( (unsigned __int64)Key >= MmUserProbeAddress )
        v22 = (ULONG *)MmUserProbeAddress;
      v67 = *v22;
      v12 = (struct _FILE_OBJECT *)Object;
    }
  }
  else
  {
    v21 = ByteOffset;
    if ( ByteOffset )
      QuadPart = ByteOffset->QuadPart;
    v17 = Buffer;
    if ( Key )
      v67 = *Key;
  }
  if ( Event )
  {
    v48 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, v73, 0LL);
    v24 = (PRKEVENT)v73[0];
    Eventa = (PRKEVENT)v73[0];
    if ( v48 < 0 )
    {
      ObfDereferenceObject(v12);
      return v48;
    }
    KeResetEvent((PRKEVENT)v73[0]);
  }
  else
  {
    v24 = Eventa;
  }
  FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
  p_Flags = &v12->Flags;
  Flags = v12->Flags;
  if ( (Flags & 2) == 0 )
  {
    if ( !v21 && (Flags & 0x280) == 0 )
    {
      if ( v24 )
        ObfDereferenceObject(v24);
      goto LABEL_150;
    }
    v42 = 0;
LABEL_69:
    if ( QuadPart >= 0 )
    {
      if ( (*p_Flags & 0x4000000) == 0 )
        KeResetEvent(&v12->Event);
      LOBYTE(SectorSize) = v42 == 0;
      v43 = (IRP *)pIoAllocateIrp(DeviceObject, (unsigned __int8)DeviceObject->StackSize, SectorSize, retaddr);
      v44 = v43;
      Irp = v43;
      if ( !v43 )
      {
        IopAllocateIrpCleanup(v12, v24);
        return -1073741670;
      }
      v43->Tail.Overlay.OriginalFileObject = v12;
      v43->Tail.Overlay.Thread = CurrentThread;
      v43->Tail.Overlay.AuxiliaryBuffer = 0LL;
      v43->RequestorMode = v62;
      v43->PendingReturned = 0;
      v43->Cancel = 0;
      v43->CancelRoutine = 0LL;
      v43->UserEvent = v24;
      v43->UserIosb = IoStatusBlock;
      v43->Overlay.AllocationSize.QuadPart = (LONGLONG)ApcRoutine;
      v43->Overlay.AsynchronousParameters.UserApcContext = ApcContext;
      CurrentStackLocation = v43->Tail.Overlay.CurrentStackLocation;
      *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = 3;
      CurrentStackLocation[-1].FileObject = v12;
      v43->AssociatedIrp.MasterIrp = 0LL;
      v43->MdlAddress = 0LL;
      v46 = DeviceObject->Flags;
      if ( (v46 & 4) != 0 )
      {
        v47 = Length;
        if ( !Length )
        {
          v44->Flags = 80;
          goto LABEL_76;
        }
        if ( ViVerifierDriverAddedThunkListHead )
        {
          PoolWithTagPriority = (struct _IRP *)ExAllocatePoolWithTagPriority(
                                                 NonPagedPoolNxCacheAligned,
                                                 Length,
                                                 0x20206F49u,
                                                 (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
          if ( !PoolWithTagPriority )
            RtlRaiseStatus(-1073741670);
        }
        else
        {
          PoolWithTagPriority = (struct _IRP *)ExAllocatePoolWithQuotaTag(
                                                 NonPagedPoolNxCacheAligned,
                                                 Length,
                                                 0x20206F49u);
        }
        v44->AssociatedIrp.MasterIrp = PoolWithTagPriority;
        v44->Flags = 112;
      }
      else
      {
        v44->Flags = 0;
        if ( (v46 & 0x10) != 0 )
        {
          v47 = Length;
          if ( Length )
          {
            Mdl = IoAllocateMdl(v17, Length, 0, 1u, v44);
            if ( !Mdl )
              RtlRaiseStatus(-1073741670);
            MmProbeAndLockPages(Mdl, v62, IoWriteAccess);
            v47 = Length;
          }
          goto LABEL_76;
        }
      }
      v47 = Length;
      v44->UserBuffer = v17;
LABEL_76:
      if ( (*p_Flags & 8) != 0 )
        v44->Flags |= 0x901u;
      else
        v44->Flags |= 0x900u;
      CurrentStackLocation[-1].Parameters.Read.Length = v47;
      CurrentStackLocation[-1].Parameters.Create.Options = v67;
      CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = QuadPart;
      return IopSynchronousServiceTail(DeviceObject, v44, v12, v62, v42, 0);
    }
    if ( v24 )
      ObfDereferenceObject(v24);
    if ( v42 )
    {
      _InterlockedExchange((volatile __int32 *)&v12->Busy, 0);
      v59 = Object;
      if ( *((_DWORD *)Object + 28) )
        KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
      ObfDereferenceObject(v59);
      v60 = KeGetCurrentThread();
      v61 = v60->KernelApcDisable + 1;
      v60->KernelApcDisable = v61;
      if ( !v61
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v60->ApcState.ApcListHead[0].Flink != &v60->152
        && !v60->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      v12 = (struct _FILE_OBJECT *)Object;
    }
LABEL_150:
    ObfDereferenceObject(v12);
    return -1073741811;
  }
  v28 = KeGetCurrentThread();
  --v28->KernelApcDisable;
  v29 = (volatile __int32 *)Object;
  if ( _InterlockedExchange((volatile __int32 *)Object + 29, 1) )
  {
    v54 = KeGetCurrentThread();
    v55 = v54->KernelApcDisable + 1;
    v54->KernelApcDisable = v55;
    if ( !v55
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v54->ApcState.ApcListHead[0].Flink != &v54->152
      && !v54->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    v12 = (struct _FILE_OBJECT *)Object;
    LODWORD(Irp) = IopAcquireFileObjectLock(Object);
    if ( v64 )
    {
      if ( Eventa )
        ObfDereferenceObject(Eventa);
      ObfDereferenceObject(v12);
      return (int)Irp;
    }
  }
  else
  {
    v12 = (struct _FILE_OBJECT *)Object;
    ObfReferenceObject(Object);
  }
  if ( !v21 || (_DWORD)QuadPart == -2 && HIDWORD(QuadPart) == -1 )
    QuadPart = v12->CurrentByteOffset.QuadPart;
  if ( !v12->PrivateCacheMap )
    goto LABEL_82;
  v70 = 0uLL;
  FastIoRead = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->FastIoRead;
  if ( QuadPart < 0 )
  {
    if ( Eventa )
      ObfDereferenceObject(Eventa);
    _InterlockedExchange(v29 + 29, 0);
    v56 = Object;
    if ( *((_DWORD *)Object + 28) )
      KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
    ObfDereferenceObject(v56);
    v57 = KeGetCurrentThread();
    v58 = v57->KernelApcDisable + 1;
    v57->KernelApcDisable = v58;
    if ( !v58
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v57->ApcState.ApcListHead[0].Flink != &v57->152
      && !v57->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    ObfDereferenceObject(Object);
    return -1073741811;
  }
  else
  {
    if ( (MmVerifierData & 0x10) != 0 )
      v32 = (void *)VfFastIoSnapState();
    else
      v32 = 0LL;
    LOBYTE(v30) = 1;
    v33 = FastIoRead(v12, &QuadPart, Length, v30, v67, v17, &v70, DeviceObject);
    if ( v32 )
      VfFastIoCheckState(v32, (int)FastIoRead);
    if ( !v33 || (_DWORD)v70 && (_DWORD)v70 != -1073741807 && (_DWORD)v70 != -2147483643 )
    {
LABEL_82:
      v42 = 1;
      v24 = Eventa;
      goto LABEL_69;
    }
    v34 = KeGetCurrentThread();
    ++v34->ReadOperationCount;
    __incgsdword(0x2E5Cu);
    v35 = KeGetCurrentThread();
    v36 = DWORD2(v70);
    v35->ReadTransferCount += DWORD2(v70);
    __addgsqword(0x2E68u, v36);
    *(_OWORD *)&IoStatusBlock->Status = v70;
    v37 = (volatile __int32 *)Object;
    if ( Event )
    {
      v49 = Eventa;
      if ( (*((_DWORD *)Object + 20) & 0x8000000) == 0 )
        KeSetEvent(Eventa, 0, 0);
      ObfDereferenceObject(v49);
    }
    _InterlockedExchange(v37 + 29, 0);
    v38 = Object;
    if ( *((_DWORD *)Object + 28) )
      KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
    ObfDereferenceObject(v38);
    v39 = KeGetCurrentThread();
    v40 = v39->KernelApcDisable + 1;
    v39->KernelApcDisable = v40;
    if ( !v40
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v39->ApcState.ApcListHead[0].Flink != &v39->152
      && !v39->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    ObfDereferenceObject(Object);
    return v70;
  }
}
