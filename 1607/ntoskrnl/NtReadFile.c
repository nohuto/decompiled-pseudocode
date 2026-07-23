/*
 * XREFs of NtReadFile @ 0x1404424F0
 * Callers:
 *     SmKmIssueIo @ 0x140220894 (SmKmIssueIo.c)
 *     PfSnGetPrefetchInstructions @ 0x1403E6878 (PfSnGetPrefetchInstructions.c)
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
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 *     IopExceptionFilter @ 0x1401C4BE0 (IopExceptionFilter.c)
 *     IopAcquireFileObjectLock @ 0x1403EE090 (IopAcquireFileObjectLock.c)
 *     IopSynchronousServiceTail @ 0x140444680 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     IopAllocateIrpCleanup @ 0x140620E74 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x140621488 (IopExceptionCleanup.c)
 *     ExRaiseAccessViolation @ 0x1406B6180 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 *     VfFastIoCheckState @ 0x1407058F8 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1407059A8 (VfFastIoSnapState.c)
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
  unsigned __int64 v14; // rdx
  __int64 SectorSize; // r8
  __int64 v16; // r9
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  __int64 v18; // rcx
  PVOID v19; // r15
  unsigned __int64 v20; // rax
  PLARGE_INTEGER v21; // rsi
  __int64 v22; // rax
  struct _IO_STATUS_BLOCK *Status; // rcx
  struct _KEVENT *v24; // r14
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
  PVOID v51; // rbx
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  PVOID v55; // rbx
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  KPROCESSOR_MODE v59; // [rsp+40h] [rbp-A8h]
  PVOID Object; // [rsp+48h] [rbp-A0h] BYREF
  _BYTE v61[8]; // [rsp+50h] [rbp-98h] BYREF
  LONGLONG QuadPart; // [rsp+58h] [rbp-90h] BYREF
  ULONG v63; // [rsp+60h] [rbp-88h]
  PRKEVENT Eventa; // [rsp+68h] [rbp-80h]
  int v65; // [rsp+70h] [rbp-78h]
  PIRP Irp; // [rsp+78h] [rbp-70h]
  PDEVICE_OBJECT DeviceObject; // [rsp+80h] [rbp-68h]
  __int128 v68; // [rsp+88h] [rbp-60h] BYREF
  PVOID v69; // [rsp+98h] [rbp-50h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp-48h]
  PVOID v71; // [rsp+A8h] [rbp-40h]
  void *retaddr; // [rsp+E8h] [rbp+0h]

  Eventa = 0LL;
  v63 = 0;
  QuadPart = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v59 = PreviousMode;
  v11 = ObReferenceObjectByHandle(FileHandle, 1u, (POBJECT_TYPE)IoFileObjectType, PreviousMode, &Object, 0LL);
  v12 = (struct _FILE_OBJECT *)Object;
  v71 = Object;
  if ( v11 >= 0 )
  {
    v13 = (_DWORD *)*((_QWORD *)Object + 26);
    if ( v13 )
    {
      if ( (*v13 & 4) != 0 )
      {
        if ( IopIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process) )
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
    v65 = 0;
    v18 = (__int64)IoStatusBlock;
    if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
      v18 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v18 = *(_DWORD *)v18;
    v12 = (struct _FILE_OBJECT *)Object;
    if ( KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7] && (*((_DWORD *)Object + 20) & 2) == 0 )
    {
      ApcRoutine = (PIO_APC_ROUTINE)((unsigned __int64)ApcRoutine | 1);
      Status = (struct _IO_STATUS_BLOCK *)(unsigned int)IoStatusBlock->Status;
      IoStatusBlock = Status;
      Status->Status = Status->Status;
      v12 = (struct _FILE_OBJECT *)Object;
    }
    v16 = Length;
    v19 = Buffer;
    if ( Length )
    {
      v20 = (unsigned __int64)Buffer;
      v14 = (unsigned __int64)Buffer + Length - 1;
      if ( (unsigned __int64)Buffer > v14 || v14 >= 0x7FFFFFFF0000LL )
      {
        if ( !KeGetCurrentThread()->ApcState.Process->SecurePid )
          ExRaiseAccessViolation();
        v12 = (struct _FILE_OBJECT *)Object;
      }
      else
      {
        v14 = (v14 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        do
        {
          *(_BYTE *)v20 = *(_BYTE *)v20;
          v20 = (v20 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        }
        while ( v20 != v14 );
        v12 = (struct _FILE_OBJECT *)Object;
      }
    }
    if ( v12->CompletionContext && ((unsigned __int64)ApcRoutine & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      goto LABEL_131;
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
        if ( (_WORD)SectorSize )
        {
          v14 = Length % (unsigned __int16)SectorSize;
          if ( (_DWORD)v14 )
            goto LABEL_131;
        }
        if ( (RelatedDeviceObject->AlignmentRequirement & (unsigned int)Buffer) != 0 )
          goto LABEL_131;
      }
      if ( ByteOffset && (_WORD)SectorSize && (((unsigned __int16)SectorSize - 1) & (unsigned int)QuadPart) != 0 )
        goto LABEL_131;
    }
    v22 = (__int64)Key;
    if ( Key )
    {
      if ( (unsigned __int64)Key >= 0x7FFFFFFF0000LL )
        v22 = 0x7FFFFFFF0000LL;
      v63 = *(_DWORD *)v22;
      v12 = (struct _FILE_OBJECT *)Object;
    }
  }
  else
  {
    v21 = ByteOffset;
    if ( ByteOffset )
      QuadPart = ByteOffset->QuadPart;
    v19 = Buffer;
    if ( Key )
      v63 = *Key;
  }
  if ( Event )
  {
    v48 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v69, 0LL);
    v24 = (struct _KEVENT *)v69;
    Eventa = (PRKEVENT)v69;
    if ( v48 < 0 )
    {
      ObfDereferenceObject(v12);
      return v48;
    }
    KeResetEvent((PRKEVENT)v69);
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
      goto LABEL_131;
    }
    v42 = 0;
LABEL_66:
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
      v43->RequestorMode = v59;
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
          goto LABEL_73;
        }
        v44->AssociatedIrp.MasterIrp = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_0(
                                                        NonPagedPoolNxCacheAligned,
                                                        Length);
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
            Mdl = IoAllocateMdl(v19, Length, 0, 1u, v44);
            if ( !Mdl )
              RtlRaiseStatus(-1073741670);
            MmProbeAndLockPages(Mdl, v59, IoWriteAccess);
            v47 = Length;
          }
          goto LABEL_73;
        }
      }
      v47 = Length;
      v44->UserBuffer = v19;
LABEL_73:
      if ( (*p_Flags & 8) != 0 )
        v44->Flags |= 0x901u;
      else
        v44->Flags |= 0x900u;
      CurrentStackLocation[-1].Parameters.Read.Length = v47;
      CurrentStackLocation[-1].Parameters.Create.Options = v63;
      CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = QuadPart;
      return IopSynchronousServiceTail(DeviceObject, v44, v59, v42, 0);
    }
    if ( v24 )
      ObfDereferenceObject(v24);
    if ( v42 )
    {
      _InterlockedExchange((volatile __int32 *)&v12->Busy, 0);
      v55 = Object;
      if ( *((_DWORD *)Object + 28) )
        KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
      ObfDereferenceObject(v55);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v56, v57, v58);
      v12 = (struct _FILE_OBJECT *)Object;
    }
LABEL_131:
    ObfDereferenceObject(v12);
    return -1073741811;
  }
  v28 = KeGetCurrentThread();
  --v28->KernelApcDisable;
  v29 = (volatile __int32 *)Object;
  if ( _InterlockedExchange((volatile __int32 *)Object + 29, 1) )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v14, SectorSize, v16);
    v12 = (struct _FILE_OBJECT *)Object;
    LODWORD(Irp) = IopAcquireFileObjectLock((char *)Object, v59, (*(_BYTE *)p_Flags & 4) != 0, v61);
    if ( v61[0] )
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
    goto LABEL_65;
  v68 = 0uLL;
  FastIoRead = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->FastIoRead;
  if ( QuadPart < 0 )
  {
    if ( Eventa )
      ObfDereferenceObject(Eventa);
    _InterlockedExchange(v29 + 29, 0);
    v51 = Object;
    if ( *((_DWORD *)Object + 28) )
      KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
    ObfDereferenceObject(v51);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v52, v53, v54);
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
    v33 = FastIoRead(v12, &QuadPart, Length, v30, v63, v19, &v68, DeviceObject);
    if ( v32 )
      VfFastIoCheckState(v32, (int)FastIoRead);
    if ( !v33 || (_DWORD)v68 && (_DWORD)v68 != -1073741807 && (_DWORD)v68 != -2147483643 )
    {
LABEL_65:
      v42 = 1;
      v24 = Eventa;
      goto LABEL_66;
    }
    v34 = KeGetCurrentThread();
    ++v34->ReadOperationCount;
    __incgsdword(0x2E5Cu);
    v35 = KeGetCurrentThread();
    v36 = DWORD2(v68);
    v35->ReadTransferCount += DWORD2(v68);
    __addgsqword(0x2E68u, v36);
    *(_OWORD *)&IoStatusBlock->Status = v68;
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
      && ($2B8565053CDC740D4E4887693DD8AC9E *)v39->ApcState.ApcListHead[0].Flink != &v39->152
      && !v39->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery((__int64)v39);
    }
    ObfDereferenceObject(Object);
    return v68;
  }
}
