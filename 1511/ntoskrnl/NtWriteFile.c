/*
 * XREFs of NtWriteFile @ 0x140436150
 * Callers:
 *     SmKmIssueIo @ 0x140208648 (SmKmIssueIo.c)
 *     VerifierNtWriteFile @ 0x1406D09F4 (VerifierNtWriteFile.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     IoGetRelatedDeviceObject @ 0x1400435F0 (IoGetRelatedDeviceObject.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 *     MmProbeAndLockPages @ 0x1400A7230 (MmProbeAndLockPages.c)
 *     sub_1400CC928 @ 0x1400CC928 (sub_1400CC928.c)
 *     IopIsProcessAppContainer @ 0x1400EFD88 (IopIsProcessAppContainer.c)
 *     IoAllocateMdl @ 0x1400FC2E0 (IoAllocateMdl.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     IopExceptionFilter @ 0x1401B71BC (IopExceptionFilter.c)
 *     MmUpdateMdlTracker @ 0x1401D319C (MmUpdateMdlTracker.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ObReferenceFileObjectForWrite @ 0x1404369A0 (ObReferenceFileObjectForWrite.c)
 *     IopSynchronousServiceTail @ 0x140437580 (IopSynchronousServiceTail.c)
 *     IopAcquireFileObjectLock @ 0x1404AC66C (IopAcquireFileObjectLock.c)
 *     IopExceptionCleanup @ 0x1404C68BC (IopExceptionCleanup.c)
 *     IopAllocateIrpCleanup @ 0x1405F70B8 (IopAllocateIrpCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 *     VfFastIoCheckState @ 0x1406B9854 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1406B9904 (VfFastIoSnapState.c)
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
  PVOID v18; // r12
  PLARGE_INTEGER v19; // rsi
  ULONG Flags; // r9d
  PULONG v21; // rax
  USHORT SectorSize; // r11
  ULONG64 Status; // rcx
  void *v25; // r15
  ULONG *p_Flags; // r13
  ULONG v27; // eax
  struct _KTHREAD *v28; // rax
  __int64 v29; // r9
  char v30; // cl
  __int64 (__fastcall *v31)(struct _FILE_OBJECT *, LONGLONG *, _QWORD, __int64, ULONG, PVOID, __int128 *, PDEVICE_OBJECT); // rsi
  void *v32; // r15
  char v33; // si
  struct _KTHREAD *v34; // rax
  struct _KTHREAD *v35; // rcx
  unsigned __int64 v36; // rax
  __int64 v37; // rax
  IRP *v38; // rsi
  char v39; // cl
  __int64 v40; // r15
  struct _DEVICE_OBJECT *v41; // r10
  ULONG v42; // eax
  int v43; // r13d
  struct _MDL *Mdl; // rax
  unsigned __int64 v45; // rbx
  __int64 v46; // r12
  PRKEVENT v47; // rsi
  struct _IRP *v48; // rax
  unsigned __int8 v49; // [rsp+40h] [rbp-A8h]
  char v50; // [rsp+41h] [rbp-A7h]
  PFILE_OBJECT FileObject; // [rsp+48h] [rbp-A0h]
  LONGLONG QuadPart; // [rsp+50h] [rbp-98h] BYREF
  char v53; // [rsp+58h] [rbp-90h]
  PRKEVENT Eventa; // [rsp+60h] [rbp-88h]
  PDEVICE_OBJECT DeviceObject; // [rsp+68h] [rbp-80h]
  ULONG v56; // [rsp+70h] [rbp-78h]
  int v57; // [rsp+74h] [rbp-74h]
  PIRP Irp; // [rsp+78h] [rbp-70h]
  __int128 v59; // [rsp+80h] [rbp-68h] BYREF
  int v60[3]; // [rsp+90h] [rbp-58h]
  int v61; // [rsp+9Ch] [rbp-4Ch]
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp-48h]
  PVOID Object; // [rsp+A8h] [rbp-40h] BYREF
  void *retaddr; // [rsp+E8h] [rbp+0h]

  Eventa = 0LL;
  v56 = 0;
  QuadPart = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v49 = PreviousMode;
  v11 = ObReferenceFileObjectForWrite((ULONG_PTR)FileHandle);
  if ( v11 < 0 )
  {
LABEL_107:
    v12 = FileObject;
    goto LABEL_3;
  }
  v12 = FileObject;
  FileObjectExtension = FileObject->FileObjectExtension;
  if ( FileObjectExtension && (*FileObjectExtension & 4) != 0 )
  {
    if ( IopIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process) )
    {
      ObfDereferenceObject(FileObject);
      return -1073739504;
    }
    goto LABEL_107;
  }
LABEL_3:
  if ( v11 < 0 )
    return v11;
  RelatedDeviceObject = IoGetRelatedDeviceObject(v12);
  DeviceObject = RelatedDeviceObject;
  if ( PreviousMode )
  {
    v57 = 0;
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
      goto LABEL_30;
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
    if ( (Flags & 8) != 0
      && (((SectorSize = RelatedDeviceObject->SectorSize) != 0 && ((SectorSize - 1) & Length) != 0
        || (RelatedDeviceObject->AlignmentRequirement & (unsigned int)Buffer) != 0)
       && (SectorSize && Length % SectorSize || (RelatedDeviceObject->AlignmentRequirement & (unsigned int)Buffer) != 0)
       || ByteOffset
       && QuadPart != -1
       && (QuadPart != -2 || (Flags & 2) == 0)
       && SectorSize
       && ((SectorSize - 1) & (unsigned int)QuadPart) != 0) )
    {
LABEL_30:
      ObfDereferenceObject(v12);
      return -1073741811;
    }
    v21 = Key;
    if ( Key )
    {
      if ( (unsigned __int64)Key >= v14 )
        v21 = (PULONG)v14;
      v56 = *v21;
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
      v56 = *Key;
  }
  if ( (v61 & 6) == 4 )
    QuadPart = -1LL;
  if ( Event )
  {
    v43 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
    v25 = Object;
    Eventa = (PRKEVENT)Object;
    if ( v43 < 0 )
    {
      ObfDereferenceObject(v12);
      return v43;
    }
    KeResetEvent((PRKEVENT)Object);
    RelatedDeviceObject = DeviceObject;
  }
  else
  {
    v25 = Eventa;
  }
  *(_QWORD *)v60 = RelatedDeviceObject->DriverObject->FastIoDispatch;
  p_Flags = &v12->Flags;
  v27 = v12->Flags;
  if ( (v27 & 2) != 0 )
  {
    v28 = KeGetCurrentThread();
    --v28->KernelApcDisable;
    if ( !_InterlockedExchange((volatile __int32 *)&FileObject->Busy, 1) )
    {
      v12 = FileObject;
      ObfReferenceObject(FileObject);
      goto LABEL_53;
    }
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v12 = FileObject;
    LODWORD(Irp) = IopAcquireFileObjectLock(FileObject);
    if ( !v53 )
    {
LABEL_53:
      v30 = 1;
      v50 = 1;
      if ( !v19 && !(_DWORD)QuadPart || (_DWORD)QuadPart == -2 && HIDWORD(QuadPart) == -1 )
        QuadPart = v12->CurrentByteOffset.QuadPart;
      if ( v12->PrivateCacheMap )
      {
        v59 = 0uLL;
        v31 = *(__int64 (__fastcall **)(struct _FILE_OBJECT *, LONGLONG *, _QWORD, __int64, ULONG, PVOID, __int128 *, PDEVICE_OBJECT))(*(_QWORD *)v60 + 24LL);
        *(_QWORD *)v60 = v31;
        if ( QuadPart < 0 && (HIDWORD(QuadPart) != -1 || (_DWORD)QuadPart != -1) )
        {
          if ( Eventa )
            ObfDereferenceObject(Eventa);
          _InterlockedExchange((volatile __int32 *)&FileObject->Busy, 0);
          if ( FileObject->Waiters )
            KeSetEvent(&FileObject->Lock, 0, 0);
          ObfDereferenceObject(FileObject);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          ObfDereferenceObject(FileObject);
          return -1073741811;
        }
        if ( (MmVerifierData & 0x10) != 0 )
          v32 = (void *)VfFastIoSnapState();
        else
          v32 = 0LL;
        LOBYTE(v29) = 1;
        v33 = v31(v12, &QuadPart, v17, v29, v56, v18, &v59, DeviceObject);
        if ( v32 )
          VfFastIoCheckState(v32, v60[0]);
        if ( v33 && !(_DWORD)v59 )
        {
          v34 = KeGetCurrentThread();
          ++v34->WriteOperationCount;
          __incgsdword(0x2E60u);
          v35 = KeGetCurrentThread();
          v36 = DWORD2(v59);
          v35->WriteTransferCount += DWORD2(v59);
          __addgsqword(0x2E70u, v36);
          *(_OWORD *)&IoStatusBlock->Status = v59;
          if ( Event )
          {
            v47 = Eventa;
            if ( (FileObject->Flags & 0x8000000) == 0 )
              KeSetEvent(Eventa, 0, 0);
            ObfDereferenceObject(v47);
          }
          _InterlockedExchange((volatile __int32 *)&FileObject->Busy, 0);
          if ( FileObject->Waiters )
            KeSetEvent(&FileObject->Lock, 0, 0);
          ObfDereferenceObject(FileObject);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          ObfDereferenceObject(FileObject);
          return v59;
        }
        v25 = Eventa;
        v30 = 1;
        RelatedDeviceObject = DeviceObject;
      }
      else
      {
        v25 = Eventa;
        RelatedDeviceObject = DeviceObject;
      }
      goto LABEL_72;
    }
    if ( Eventa )
      ObfDereferenceObject(Eventa);
    ObfDereferenceObject(FileObject);
    return (int)Irp;
  }
  else
  {
    if ( v19 || (v27 & 0x280) != 0 )
    {
      v30 = 0;
      v50 = 0;
LABEL_72:
      if ( QuadPart >= 0 || QuadPart == -1 )
      {
        if ( (*p_Flags & 0x4000000) == 0 )
        {
          KeResetEvent(&v12->Event);
          v30 = v50;
          RelatedDeviceObject = DeviceObject;
        }
        LOBYTE(v14) = v30 == 0;
        v37 = pIoAllocateIrp(RelatedDeviceObject, (unsigned __int8)RelatedDeviceObject->StackSize, v14, retaddr);
        v38 = (IRP *)v37;
        Irp = (PIRP)v37;
        if ( v37 )
        {
          *(_QWORD *)(v37 + 192) = v12;
          *(_QWORD *)(v37 + 152) = CurrentThread;
          *(_QWORD *)(v37 + 160) = 0LL;
          v39 = v49;
          *(_WORD *)(v37 + 64) = v49;
          *(_BYTE *)(v37 + 68) = 0;
          *(_QWORD *)(v37 + 104) = 0LL;
          *(_QWORD *)(v37 + 80) = v25;
          *(_QWORD *)(v37 + 72) = IoStatusBlock;
          *(_QWORD *)(v37 + 88) = ApcRoutine;
          *(_QWORD *)(v37 + 96) = ApcContext;
          v40 = *(_QWORD *)(v37 + 184);
          *(_DWORD *)(v40 - 72) = 4;
          *(_QWORD *)(v40 - 24) = v12;
          if ( (*p_Flags & 0x10) != 0 )
            *(_BYTE *)(v40 - 70) = 4;
          *(_QWORD *)(v37 + 24) = 0LL;
          *(_QWORD *)(v37 + 8) = 0LL;
          v41 = DeviceObject;
          v42 = DeviceObject->Flags;
          if ( (v42 & 4) != 0 )
          {
            if ( v17 )
            {
              v48 = (struct _IRP *)sub_1400CC928(NonPagedPoolNxCacheAligned, v17);
              v38->AssociatedIrp.MasterIrp = v48;
              memmove(v48, v18, v17);
              v38->Flags = 48;
              v39 = v49;
              v41 = DeviceObject;
            }
            else
            {
              v38->Flags = 16;
            }
          }
          else
          {
            v38->Flags = 0;
            if ( (v42 & 0x10) != 0 )
            {
              if ( v17 )
              {
                Mdl = IoAllocateMdl(v18, v17, 0, 1u, v38);
                v45 = (unsigned __int64)Mdl;
                if ( !Mdl )
                  RtlRaiseStatus(-1073741670);
                v46 = *(unsigned __int8 *)(v40 - 72);
                MmProbeAndLockPages(Mdl, v49, IoReadAccess);
                if ( (MmTrackLockedPages & 1) != 0 )
                  MmUpdateMdlTracker(
                    v45,
                    (__int64)DeviceObject->DriverObject->MajorFunction[v46],
                    (__int64)DeviceObject);
                v39 = v49;
                v41 = DeviceObject;
              }
            }
            else
            {
              v38->UserBuffer = v18;
            }
          }
          if ( (*p_Flags & 8) != 0 )
            v38->Flags |= 0xA01u;
          else
            v38->Flags |= 0xA00u;
          *(_DWORD *)(v40 - 64) = v17;
          *(_DWORD *)(v40 - 56) = v56;
          *(_QWORD *)(v40 - 48) = QuadPart;
          return IopSynchronousServiceTail(v41, v38, v12, v39, v50, 1);
        }
        else
        {
          IopAllocateIrpCleanup(v12, v25);
          return -1073741670;
        }
      }
      else
      {
        if ( v25 )
        {
          ObfDereferenceObject(v25);
          v30 = v50;
        }
        if ( v30 )
        {
          _InterlockedExchange((volatile __int32 *)&v12->Busy, 0);
          if ( FileObject->Waiters )
            KeSetEvent(&FileObject->Lock, 0, 0);
          ObfDereferenceObject(FileObject);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          v12 = FileObject;
        }
        ObfDereferenceObject(v12);
        return -1073741811;
      }
    }
    if ( v25 )
      ObfDereferenceObject(v25);
    ObfDereferenceObject(v12);
    return -1073741811;
  }
}
