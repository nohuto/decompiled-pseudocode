/*
 * XREFs of NtWriteFile @ 0x1404454D0
 * Callers:
 *     SmKmIssueIo @ 0x140220894 (SmKmIssueIo.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x14002DC60 (IoGetRelatedDeviceObject.c)
 *     KeResetEvent @ 0x14002E1B0 (KeResetEvent.c)
 *     IoAllocateMdl @ 0x14002EB10 (IoAllocateMdl.c)
 *     MmProbeAndLockPages @ 0x14002ECA0 (MmProbeAndLockPages.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x14009A334 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     IopIsProcessAppContainer @ 0x1400B06B4 (IopIsProcessAppContainer.c)
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     IopExceptionFilter @ 0x1401C4BE0 (IopExceptionFilter.c)
 *     MmUpdateMdlTracker @ 0x1401E308C (MmUpdateMdlTracker.c)
 *     IopAcquireFileObjectLock @ 0x1403EE090 (IopAcquireFileObjectLock.c)
 *     IopSynchronousServiceTail @ 0x140444680 (IopSynchronousServiceTail.c)
 *     ObReferenceFileObjectForWrite @ 0x140445D20 (ObReferenceFileObjectForWrite.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     IopAllocateIrpCleanup @ 0x140620E74 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x140621488 (IopExceptionCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 *     VfFastIoCheckState @ 0x1407058F8 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1407059A8 (VfFastIoSnapState.c)
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
  __int64 v14; // rdx
  __int64 Flags; // r8
  __int64 SectorSize; // r9
  PDEVICE_OBJECT RelatedDeviceObject; // r10
  __int64 v18; // rcx
  ULONG v19; // r14d
  PVOID v20; // r12
  PLARGE_INTEGER v21; // rsi
  __int64 v22; // rax
  struct _IO_STATUS_BLOCK *Status; // rcx
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
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  IRP *v41; // rsi
  char v42; // cl
  __int64 v43; // r15
  struct _DEVICE_OBJECT *v44; // r10
  ULONG v45; // eax
  int v46; // r13d
  struct _MDL *Mdl; // rax
  unsigned __int64 v48; // rbx
  __int64 v49; // r12
  PRKEVENT v50; // rsi
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  struct _IRP *PoolWithQuota_0; // rax
  unsigned __int8 v58; // [rsp+40h] [rbp-B8h]
  char v59; // [rsp+41h] [rbp-B7h]
  PFILE_OBJECT FileObject; // [rsp+48h] [rbp-B0h]
  LONGLONG QuadPart; // [rsp+50h] [rbp-A8h] BYREF
  _BYTE v62[8]; // [rsp+58h] [rbp-A0h] BYREF
  PRKEVENT Eventa; // [rsp+60h] [rbp-98h]
  ULONG v64; // [rsp+68h] [rbp-90h]
  PDEVICE_OBJECT DeviceObject; // [rsp+70h] [rbp-88h]
  int v66; // [rsp+78h] [rbp-80h]
  PIRP Irp; // [rsp+80h] [rbp-78h]
  __int128 v68; // [rsp+88h] [rbp-70h] BYREF
  int v69[3]; // [rsp+98h] [rbp-60h]
  int v70; // [rsp+A4h] [rbp-54h]
  PVOID Object; // [rsp+A8h] [rbp-50h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+B0h] [rbp-48h]
  void *retaddr; // [rsp+F8h] [rbp+0h]

  Eventa = 0LL;
  v64 = 0;
  QuadPart = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v58 = PreviousMode;
  v11 = ObReferenceFileObjectForWrite((ULONG_PTR)FileHandle);
  if ( v11 < 0 )
  {
LABEL_102:
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
    goto LABEL_102;
  }
LABEL_3:
  if ( v11 < 0 )
    return v11;
  RelatedDeviceObject = IoGetRelatedDeviceObject(v12);
  DeviceObject = RelatedDeviceObject;
  if ( PreviousMode )
  {
    v66 = 0;
    v18 = (__int64)IoStatusBlock;
    if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
      v18 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v18 = *(_DWORD *)v18;
    v12 = FileObject;
    if ( KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7] && (FileObject->Flags & 2) == 0 )
    {
      ApcRoutine = (PIO_APC_ROUTINE)((unsigned __int64)ApcRoutine | 1);
      Status = (struct _IO_STATUS_BLOCK *)(unsigned int)IoStatusBlock->Status;
      IoStatusBlock = Status;
      Status->Status = Status->Status;
      v12 = FileObject;
    }
    v19 = Length;
    v20 = Buffer;
    if ( Length && ((unsigned __int64)Buffer + Length > 0x7FFFFFFF0000LL || (char *)Buffer + Length < Buffer) )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( v12->CompletionContext && ((unsigned __int64)ApcRoutine & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      goto LABEL_30;
    v21 = ByteOffset;
    if ( ByteOffset )
    {
      if ( ((unsigned __int8)ByteOffset & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      QuadPart = ByteOffset->QuadPart;
      v12 = FileObject;
    }
    Flags = v12->Flags;
    if ( (Flags & 8) != 0 )
    {
      if ( ((SectorSize = RelatedDeviceObject->SectorSize, (_WORD)SectorSize)
         && (((unsigned __int16)SectorSize - 1) & Length) != 0
         || (RelatedDeviceObject->AlignmentRequirement & (unsigned int)Buffer) != 0)
        && ((_WORD)SectorSize && (v14 = Length % (unsigned __int16)SectorSize, (_DWORD)v14)
         || (RelatedDeviceObject->AlignmentRequirement & (unsigned int)Buffer) != 0)
        || ByteOffset
        && QuadPart != -1
        && (QuadPart != -2 || (Flags & 2) == 0)
        && (_WORD)SectorSize
        && (((unsigned __int16)SectorSize - 1) & (unsigned int)QuadPart) != 0 )
      {
LABEL_30:
        ObfDereferenceObject(v12);
        return -1073741811;
      }
    }
    v22 = (__int64)Key;
    if ( Key )
    {
      if ( (unsigned __int64)Key >= 0x7FFFFFFF0000LL )
        v22 = 0x7FFFFFFF0000LL;
      v64 = *(_DWORD *)v22;
      v12 = FileObject;
    }
  }
  else
  {
    v21 = ByteOffset;
    if ( ByteOffset )
      QuadPart = ByteOffset->QuadPart;
    v19 = Length;
    v20 = Buffer;
    if ( Key )
      v64 = *Key;
  }
  if ( (v70 & 6) == 4 )
    QuadPart = -1LL;
  if ( Event )
  {
    v46 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
    v25 = Object;
    Eventa = (PRKEVENT)Object;
    if ( v46 < 0 )
    {
      ObfDereferenceObject(v12);
      return v46;
    }
    KeResetEvent((PRKEVENT)Object);
    RelatedDeviceObject = DeviceObject;
  }
  else
  {
    v25 = Eventa;
  }
  *(_QWORD *)v69 = RelatedDeviceObject->DriverObject->FastIoDispatch;
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
      goto LABEL_50;
    }
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v14, Flags, SectorSize);
    v12 = FileObject;
    LODWORD(Irp) = IopAcquireFileObjectLock((char *)FileObject, v58, (*(_BYTE *)p_Flags & 4) != 0, v62);
    if ( !v62[0] )
    {
LABEL_50:
      v30 = 1;
      v59 = 1;
      if ( !v21 && !(_DWORD)QuadPart || (_DWORD)QuadPart == -2 && HIDWORD(QuadPart) == -1 )
        QuadPart = v12->CurrentByteOffset.QuadPart;
      if ( v12->PrivateCacheMap )
      {
        v68 = 0uLL;
        v31 = *(__int64 (__fastcall **)(struct _FILE_OBJECT *, LONGLONG *, _QWORD, __int64, ULONG, PVOID, __int128 *, PDEVICE_OBJECT))(*(_QWORD *)v69 + 24LL);
        *(_QWORD *)v69 = v31;
        if ( QuadPart < 0 && (HIDWORD(QuadPart) != -1 || (_DWORD)QuadPart != -1) )
        {
          if ( Eventa )
            ObfDereferenceObject(Eventa);
          _InterlockedExchange((volatile __int32 *)&FileObject->Busy, 0);
          if ( FileObject->Waiters )
            KeSetEvent(&FileObject->Lock, 0, 0);
          ObfDereferenceObject(FileObject);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v51, v52, v53);
          ObfDereferenceObject(FileObject);
          return -1073741811;
        }
        if ( (MmVerifierData & 0x10) != 0 )
          v32 = (void *)VfFastIoSnapState();
        else
          v32 = 0LL;
        LOBYTE(v29) = 1;
        v33 = v31(v12, &QuadPart, v19, v29, v64, v20, &v68, DeviceObject);
        if ( v32 )
          VfFastIoCheckState(v32, v69[0]);
        if ( v33 && !(_DWORD)v68 )
        {
          v34 = KeGetCurrentThread();
          ++v34->WriteOperationCount;
          __incgsdword(0x2E60u);
          v35 = KeGetCurrentThread();
          v36 = DWORD2(v68);
          v35->WriteTransferCount += DWORD2(v68);
          __addgsqword(0x2E70u, v36);
          *(_OWORD *)&IoStatusBlock->Status = v68;
          if ( Event )
          {
            v50 = Eventa;
            if ( (FileObject->Flags & 0x8000000) == 0 )
              KeSetEvent(Eventa, 0, 0);
            ObfDereferenceObject(v50);
          }
          _InterlockedExchange((volatile __int32 *)&FileObject->Busy, 0);
          if ( FileObject->Waiters )
            KeSetEvent(&FileObject->Lock, 0, 0);
          ObfDereferenceObject(FileObject);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v37, v38, v39);
          ObfDereferenceObject(FileObject);
          return v68;
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
      goto LABEL_68;
    }
    if ( Eventa )
      ObfDereferenceObject(Eventa);
    ObfDereferenceObject(FileObject);
    return (int)Irp;
  }
  else
  {
    if ( v21 || (v27 & 0x280) != 0 )
    {
      v30 = 0;
      v59 = 0;
LABEL_68:
      if ( QuadPart >= 0 || QuadPart == -1 )
      {
        if ( (*p_Flags & 0x4000000) == 0 )
        {
          KeResetEvent(&v12->Event);
          v30 = v59;
          RelatedDeviceObject = DeviceObject;
        }
        LOBYTE(Flags) = v30 == 0;
        v40 = pIoAllocateIrp(RelatedDeviceObject, (unsigned __int8)RelatedDeviceObject->StackSize, Flags, retaddr);
        v41 = (IRP *)v40;
        Irp = (PIRP)v40;
        if ( v40 )
        {
          *(_QWORD *)(v40 + 192) = v12;
          *(_QWORD *)(v40 + 152) = CurrentThread;
          *(_QWORD *)(v40 + 160) = 0LL;
          v42 = v58;
          *(_WORD *)(v40 + 64) = v58;
          *(_BYTE *)(v40 + 68) = 0;
          *(_QWORD *)(v40 + 104) = 0LL;
          *(_QWORD *)(v40 + 80) = v25;
          *(_QWORD *)(v40 + 72) = IoStatusBlock;
          *(_QWORD *)(v40 + 88) = ApcRoutine;
          *(_QWORD *)(v40 + 96) = ApcContext;
          v43 = *(_QWORD *)(v40 + 184);
          *(_DWORD *)(v43 - 72) = 4;
          *(_QWORD *)(v43 - 24) = v12;
          if ( (*p_Flags & 0x10) != 0 )
            *(_BYTE *)(v43 - 70) = 4;
          *(_QWORD *)(v40 + 24) = 0LL;
          *(_QWORD *)(v40 + 8) = 0LL;
          v44 = DeviceObject;
          v45 = DeviceObject->Flags;
          if ( (v45 & 4) != 0 )
          {
            if ( v19 )
            {
              PoolWithQuota_0 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_0(NonPagedPoolNxCacheAligned, v19);
              v41->AssociatedIrp.MasterIrp = PoolWithQuota_0;
              memmove(PoolWithQuota_0, v20, v19);
              v41->Flags = 48;
              v42 = v58;
              v44 = DeviceObject;
            }
            else
            {
              v41->Flags = 16;
            }
          }
          else
          {
            v41->Flags = 0;
            if ( (v45 & 0x10) != 0 )
            {
              if ( v19 )
              {
                Mdl = IoAllocateMdl(v20, v19, 0, 1u, v41);
                v48 = (unsigned __int64)Mdl;
                if ( !Mdl )
                  RtlRaiseStatus(-1073741670);
                v49 = *(unsigned __int8 *)(v43 - 72);
                MmProbeAndLockPages(Mdl, v58, IoReadAccess);
                if ( (MmTrackLockedPages & 1) != 0 )
                  MmUpdateMdlTracker(
                    v48,
                    (__int64)DeviceObject->DriverObject->MajorFunction[v49],
                    (__int64)DeviceObject);
                v42 = v58;
                v44 = DeviceObject;
              }
            }
            else
            {
              v41->UserBuffer = v20;
            }
          }
          if ( (*p_Flags & 8) != 0 )
            v41->Flags |= 0xA01u;
          else
            v41->Flags |= 0xA00u;
          *(_DWORD *)(v43 - 64) = v19;
          *(_DWORD *)(v43 - 56) = v64;
          *(_QWORD *)(v43 - 48) = QuadPart;
          return IopSynchronousServiceTail(v44, v41, (__int64)v12, 1, v42, v59, 1u);
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
          v30 = v59;
        }
        if ( v30 )
        {
          _InterlockedExchange((volatile __int32 *)&v12->Busy, 0);
          if ( FileObject->Waiters )
            KeSetEvent(&FileObject->Lock, 0, 0);
          ObfDereferenceObject(FileObject);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v54, v55, v56);
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
