/*
 * XREFs of NtWriteFile @ 0x1404BCA70
 * Callers:
 *     SmKmIssueIo @ 0x1402578DC (SmKmIssueIo.c)
 *     VerifierNtWriteFile @ 0x1407544C0 (VerifierNtWriteFile.c)
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
 *     memmove @ 0x140195740 (memmove.c)
 *     IopExceptionFilter @ 0x1401F2394 (IopExceptionFilter.c)
 *     MmUpdateMdlTracker @ 0x140214574 (MmUpdateMdlTracker.c)
 *     SeQueryInformationToken @ 0x140481E90 (SeQueryInformationToken.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ObReferenceFileObjectForWrite @ 0x1404BD320 (ObReferenceFileObjectForWrite.c)
 *     IopSynchronousServiceTail @ 0x1404BDDC0 (IopSynchronousServiceTail.c)
 *     PsReferencePrimaryToken @ 0x14050D730 (PsReferencePrimaryToken.c)
 *     IopAcquireFileObjectLock @ 0x140540A5C (IopAcquireFileObjectLock.c)
 *     IopExceptionCleanup @ 0x14055D264 (IopExceptionCleanup.c)
 *     IopAllocateIrpCleanup @ 0x140670E48 (IopAllocateIrpCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 *     VfFastIoCheckState @ 0x140739E88 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140739F38 (VfFastIoSnapState.c)
 */

NTSTATUS __stdcall NtWriteFile(
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
  KPROCESSOR_MODE PreviousMode; // r13
  NTSTATUS v11; // esi
  struct _FILE_OBJECT *v12; // rdi
  _DWORD *FileObjectExtension; // rax
  ULONG64 v14; // r8
  PDEVICE_OBJECT RelatedDeviceObject; // r10
  _DWORD *v16; // rcx
  ULONG v17; // r14d
  PVOID v18; // r15
  PLARGE_INTEGER v19; // rsi
  ULONG Flags; // r9d
  PULONG v21; // rax
  USHORT SectorSize; // r11
  ULONG64 Status; // rcx
  void *v24; // r13
  ULONG *p_Flags; // r12
  ULONG v26; // eax
  struct _KTHREAD *v27; // rax
  __int64 v28; // r9
  __int64 (__fastcall *v29)(struct _FILE_OBJECT *, LONGLONG *, _QWORD, __int64, ULONG, PVOID, __int128 *, PDEVICE_OBJECT); // rsi
  void *v30; // r13
  char v31; // si
  struct _KTHREAD *v32; // rax
  struct _KTHREAD *v33; // rcx
  unsigned __int64 v34; // rax
  struct _KTHREAD *v35; // rcx
  __int16 v36; // ax
  char v38; // si
  __int64 v39; // rax
  IRP *v40; // rsi
  char v41; // cl
  __int64 v42; // r13
  struct _DEVICE_OBJECT *v43; // r10
  ULONG v44; // eax
  int v45; // r12d
  struct _MDL *Mdl; // rax
  unsigned __int64 v47; // rbx
  __int64 v48; // r15
  PRKEVENT v49; // rsi
  struct _KPROCESS *Process; // rcx
  PACCESS_TOKEN v51; // rdi
  struct _KTHREAD *v52; // rcx
  __int16 v53; // ax
  struct _KTHREAD *v54; // rcx
  __int16 v55; // ax
  struct _KTHREAD *v56; // rcx
  __int16 v57; // ax
  struct _IRP *PoolWithTagPriority; // rax
  unsigned __int8 v59; // [rsp+40h] [rbp-B8h]
  PFILE_OBJECT FileObject; // [rsp+48h] [rbp-B0h]
  char v61; // [rsp+50h] [rbp-A8h]
  LONGLONG QuadPart; // [rsp+58h] [rbp-A0h] BYREF
  char v63; // [rsp+60h] [rbp-98h]
  PRKEVENT Eventa; // [rsp+68h] [rbp-90h]
  PDEVICE_OBJECT DeviceObject; // [rsp+70h] [rbp-88h]
  ULONG v66; // [rsp+78h] [rbp-80h]
  PVOID TokenInformation; // [rsp+7Ch] [rbp-7Ch] BYREF
  PIRP Irp; // [rsp+88h] [rbp-70h]
  __int128 v69; // [rsp+90h] [rbp-68h] BYREF
  int v70[3]; // [rsp+A0h] [rbp-58h]
  int v71; // [rsp+ACh] [rbp-4Ch]
  struct _KTHREAD *CurrentThread; // [rsp+B0h] [rbp-48h]
  PVOID Object; // [rsp+B8h] [rbp-40h] BYREF
  void *retaddr; // [rsp+F8h] [rbp+0h]

  Eventa = 0LL;
  v66 = 0;
  QuadPart = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v59 = PreviousMode;
  v11 = ObReferenceFileObjectForWrite((ULONG_PTR)FileHandle);
  if ( v11 < 0 )
  {
LABEL_113:
    v12 = FileObject;
    goto LABEL_3;
  }
  v12 = FileObject;
  FileObjectExtension = FileObject->FileObjectExtension;
  if ( FileObjectExtension && (*FileObjectExtension & 4) != 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    LODWORD(TokenInformation) = 0;
    v51 = PsReferencePrimaryToken(Process);
    SeQueryInformationToken(v51, TokenIsAppContainer, &TokenInformation);
    ObfDereferenceObject(v51);
    if ( (_DWORD)TokenInformation )
    {
      ObfDereferenceObject(FileObject);
      return -1073739504;
    }
    goto LABEL_113;
  }
LABEL_3:
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
    v12 = FileObject;
    if ( KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7] && (FileObject->Flags & 2) == 0 )
    {
      ApcRoutine = (PIO_APC_ROUTINE)((unsigned __int64)ApcRoutine | 1);
      Status = (unsigned int)IoStatusBlock->Status;
      IoStatusBlock = (PIO_STATUS_BLOCK)Status;
      if ( Status >= MmUserProbeAddress )
        Status = MmUserProbeAddress;
      *(_DWORD *)Status = *(_DWORD *)Status;
      v12 = FileObject;
    }
    v17 = Length;
    v18 = Buffer;
    v14 = MmUserProbeAddress;
    if ( Length && ((unsigned __int64)Buffer + Length > MmUserProbeAddress || (char *)Buffer + Length < Buffer) )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
      v14 = MmUserProbeAddress;
    }
    if ( v12->CompletionContext && ((unsigned __int64)ApcRoutine & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      goto LABEL_141;
    v19 = ByteOffset;
    if ( ByteOffset )
    {
      if ( ((unsigned __int8)ByteOffset & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      QuadPart = ByteOffset->QuadPart;
      v12 = FileObject;
      v14 = MmUserProbeAddress;
    }
    Flags = v12->Flags;
    if ( (Flags & 8) != 0 )
    {
      if ( ((SectorSize = RelatedDeviceObject->SectorSize) != 0 && ((SectorSize - 1) & Length) != 0
         || (RelatedDeviceObject->AlignmentRequirement & (unsigned int)Buffer) != 0)
        && (SectorSize && Length % SectorSize || (RelatedDeviceObject->AlignmentRequirement & (unsigned int)Buffer) != 0) )
      {
        goto LABEL_141;
      }
      if ( ByteOffset
        && QuadPart != -1
        && (QuadPart != -2 || (Flags & 2) == 0)
        && SectorSize
        && ((SectorSize - 1) & (unsigned int)QuadPart) != 0 )
      {
        goto LABEL_141;
      }
    }
    v21 = Key;
    if ( Key )
    {
      if ( (unsigned __int64)Key >= v14 )
        v21 = (PULONG)v14;
      v66 = *v21;
      v12 = FileObject;
    }
  }
  else
  {
    v19 = ByteOffset;
    if ( ByteOffset )
      QuadPart = ByteOffset->QuadPart;
    v17 = Length;
    v18 = Buffer;
    if ( Key )
      v66 = *Key;
  }
  if ( (v71 & 6) == 4 )
    QuadPart = -1LL;
  if ( Event )
  {
    v45 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
    v24 = Object;
    Eventa = (PRKEVENT)Object;
    if ( v45 < 0 )
    {
      ObfDereferenceObject(v12);
      return v45;
    }
    KeResetEvent((PRKEVENT)Object);
    RelatedDeviceObject = DeviceObject;
  }
  else
  {
    v24 = Eventa;
  }
  *(_QWORD *)v70 = RelatedDeviceObject->DriverObject->FastIoDispatch;
  p_Flags = &v12->Flags;
  v26 = v12->Flags;
  if ( (v26 & 2) == 0 )
  {
    if ( !v19 && (v26 & 0x280) == 0 )
    {
      if ( v24 )
        ObfDereferenceObject(v24);
LABEL_141:
      ObfDereferenceObject(v12);
      return -1073741811;
    }
    v38 = 0;
    v61 = 0;
LABEL_72:
    if ( QuadPart >= 0 || QuadPart == -1 )
    {
      if ( (*p_Flags & 0x4000000) == 0 )
      {
        KeResetEvent(&v12->Event);
        RelatedDeviceObject = DeviceObject;
      }
      LOBYTE(v14) = v38 == 0;
      v39 = pIoAllocateIrp(RelatedDeviceObject, (unsigned __int8)RelatedDeviceObject->StackSize, v14, retaddr);
      v40 = (IRP *)v39;
      Irp = (PIRP)v39;
      if ( v39 )
      {
        *(_QWORD *)(v39 + 192) = v12;
        *(_QWORD *)(v39 + 152) = CurrentThread;
        *(_QWORD *)(v39 + 160) = 0LL;
        v41 = v59;
        *(_WORD *)(v39 + 64) = v59;
        *(_BYTE *)(v39 + 68) = 0;
        *(_QWORD *)(v39 + 104) = 0LL;
        *(_QWORD *)(v39 + 80) = v24;
        *(_QWORD *)(v39 + 72) = IoStatusBlock;
        *(_QWORD *)(v39 + 88) = ApcRoutine;
        *(_QWORD *)(v39 + 96) = ApcContext;
        v42 = *(_QWORD *)(v39 + 184);
        *(_DWORD *)(v42 - 72) = 4;
        *(_QWORD *)(v42 - 24) = v12;
        if ( (*p_Flags & 0x10) != 0 )
          *(_BYTE *)(v42 - 70) = 4;
        *(_QWORD *)(v39 + 24) = 0LL;
        *(_QWORD *)(v39 + 8) = 0LL;
        v43 = DeviceObject;
        v44 = DeviceObject->Flags;
        if ( (v44 & 4) != 0 )
        {
          if ( v17 )
          {
            if ( ViVerifierDriverAddedThunkListHead )
            {
              PoolWithTagPriority = (struct _IRP *)ExAllocatePoolWithTagPriority(
                                                     NonPagedPoolNxCacheAligned,
                                                     v17,
                                                     0x20206F49u,
                                                     (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
              if ( !PoolWithTagPriority )
                RtlRaiseStatus(-1073741670);
            }
            else
            {
              PoolWithTagPriority = (struct _IRP *)ExAllocatePoolWithQuotaTag(
                                                     NonPagedPoolNxCacheAligned,
                                                     v17,
                                                     0x20206F49u);
            }
            v40->AssociatedIrp.MasterIrp = PoolWithTagPriority;
            memmove(PoolWithTagPriority, v18, v17);
            v40->Flags = 48;
            v41 = v59;
            v43 = DeviceObject;
          }
          else
          {
            v40->Flags = 16;
          }
        }
        else
        {
          v40->Flags = 0;
          if ( (v44 & 0x10) != 0 )
          {
            if ( v17 )
            {
              Mdl = IoAllocateMdl(v18, v17, 0, 1u, v40);
              v47 = (unsigned __int64)Mdl;
              if ( !Mdl )
                RtlRaiseStatus(-1073741670);
              v48 = *(unsigned __int8 *)(v42 - 72);
              MmProbeAndLockPages(Mdl, v59, IoReadAccess);
              if ( (MmTrackLockedPages & 1) != 0 )
                MmUpdateMdlTracker(v47, (__int64)DeviceObject->DriverObject->MajorFunction[v48], (__int64)DeviceObject);
              v41 = v59;
              v43 = DeviceObject;
            }
          }
          else
          {
            v40->UserBuffer = v18;
          }
        }
        if ( (*p_Flags & 8) != 0 )
          v40->Flags |= 0xA01u;
        else
          v40->Flags |= 0xA00u;
        *(_DWORD *)(v42 - 64) = v17;
        *(_DWORD *)(v42 - 56) = v66;
        *(_QWORD *)(v42 - 48) = QuadPart;
        return IopSynchronousServiceTail(v43, v40, v12, v41, v61, 1);
      }
      else
      {
        IopAllocateIrpCleanup(v12, v24);
        return -1073741670;
      }
    }
    else
    {
      if ( v24 )
        ObfDereferenceObject(v24);
      if ( v38 )
      {
        _InterlockedExchange((volatile __int32 *)&v12->Busy, 0);
        if ( FileObject->Waiters )
          KeSetEvent(&FileObject->Lock, 0, 0);
        ObfDereferenceObject(FileObject);
        v56 = KeGetCurrentThread();
        v57 = v56->KernelApcDisable + 1;
        v56->KernelApcDisable = v57;
        if ( !v57
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v56->ApcState.ApcListHead[0].Flink != &v56->152
          && !v56->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        v12 = FileObject;
      }
      ObfDereferenceObject(v12);
      return -1073741811;
    }
  }
  v27 = KeGetCurrentThread();
  --v27->KernelApcDisable;
  if ( !_InterlockedExchange((volatile __int32 *)&FileObject->Busy, 1) )
  {
    v12 = FileObject;
    ObfReferenceObject(FileObject);
    goto LABEL_53;
  }
  v52 = KeGetCurrentThread();
  v53 = v52->KernelApcDisable + 1;
  v52->KernelApcDisable = v53;
  if ( !v53
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v52->ApcState.ApcListHead[0].Flink != &v52->152
    && !v52->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  v12 = FileObject;
  LODWORD(Irp) = IopAcquireFileObjectLock(FileObject);
  if ( !v63 )
  {
LABEL_53:
    v61 = 1;
    if ( !v19 && !(_DWORD)QuadPart || (_DWORD)QuadPart == -2 && HIDWORD(QuadPart) == -1 )
      QuadPart = v12->CurrentByteOffset.QuadPart;
    if ( v12->PrivateCacheMap )
    {
      v69 = 0uLL;
      v29 = *(__int64 (__fastcall **)(struct _FILE_OBJECT *, LONGLONG *, _QWORD, __int64, ULONG, PVOID, __int128 *, PDEVICE_OBJECT))(*(_QWORD *)v70 + 24LL);
      *(_QWORD *)v70 = v29;
      if ( QuadPart < 0 && (HIDWORD(QuadPart) != -1 || (_DWORD)QuadPart != -1) )
      {
        if ( Eventa )
          ObfDereferenceObject(Eventa);
        _InterlockedExchange((volatile __int32 *)&FileObject->Busy, 0);
        if ( FileObject->Waiters )
          KeSetEvent(&FileObject->Lock, 0, 0);
        ObfDereferenceObject(FileObject);
        v54 = KeGetCurrentThread();
        v55 = v54->KernelApcDisable + 1;
        v54->KernelApcDisable = v55;
        if ( !v55
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v54->ApcState.ApcListHead[0].Flink != &v54->152
          && !v54->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        ObfDereferenceObject(FileObject);
        return -1073741811;
      }
      if ( (MmVerifierData & 0x10) != 0 )
        v30 = (void *)VfFastIoSnapState();
      else
        v30 = 0LL;
      LOBYTE(v28) = 1;
      v31 = v29(v12, &QuadPart, v17, v28, v66, v18, &v69, DeviceObject);
      if ( v30 )
        VfFastIoCheckState(v30, v70[0]);
      if ( v31 && !(_DWORD)v69 )
      {
        v32 = KeGetCurrentThread();
        ++v32->WriteOperationCount;
        __incgsdword(0x2E60u);
        v33 = KeGetCurrentThread();
        v34 = DWORD2(v69);
        v33->WriteTransferCount += DWORD2(v69);
        __addgsqword(0x2E70u, v34);
        *(_OWORD *)&IoStatusBlock->Status = v69;
        if ( Event )
        {
          v49 = Eventa;
          if ( (FileObject->Flags & 0x8000000) == 0 )
            KeSetEvent(Eventa, 0, 0);
          ObfDereferenceObject(v49);
        }
        _InterlockedExchange((volatile __int32 *)&FileObject->Busy, 0);
        if ( FileObject->Waiters )
          KeSetEvent(&FileObject->Lock, 0, 0);
        ObfDereferenceObject(FileObject);
        v35 = KeGetCurrentThread();
        v36 = v35->KernelApcDisable + 1;
        v35->KernelApcDisable = v36;
        if ( !v36
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v35->ApcState.ApcListHead[0].Flink != &v35->152
          && !v35->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        ObfDereferenceObject(FileObject);
        return v69;
      }
    }
    v24 = Eventa;
    v38 = 1;
    RelatedDeviceObject = DeviceObject;
    goto LABEL_72;
  }
  if ( Eventa )
    ObfDereferenceObject(Eventa);
  ObfDereferenceObject(FileObject);
  return (int)Irp;
}
