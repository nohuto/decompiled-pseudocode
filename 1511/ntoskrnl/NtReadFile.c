/*
 * XREFs of NtReadFile @ 0x140412000
 * Callers:
 *     SmKmIssueIo @ 0x140208648 (SmKmIssueIo.c)
 *     PfSnGetPrefetchInstructions @ 0x1404D439C (PfSnGetPrefetchInstructions.c)
 *     VerifierNtReadFile @ 0x1406D08DC (VerifierNtReadFile.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
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
 *     IopExceptionFilter @ 0x1401B71BC (IopExceptionFilter.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     IopSynchronousServiceTail @ 0x140437580 (IopSynchronousServiceTail.c)
 *     IopAcquireFileObjectLock @ 0x1404AC66C (IopAcquireFileObjectLock.c)
 *     IopExceptionCleanup @ 0x1404C68BC (IopExceptionCleanup.c)
 *     IopAllocateIrpCleanup @ 0x1405F70B8 (IopAllocateIrpCleanup.c)
 *     ExRaiseAccessViolation @ 0x140673340 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 *     VfFastIoCheckState @ 0x1406B9854 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1406B9904 (VfFastIoSnapState.c)
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
  KPROCESSOR_MODE PreviousMode; // r15
  int v11; // esi
  struct _FILE_OBJECT *v12; // rbx
  _DWORD *v13; // rax
  __int64 SectorSize; // r8
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  _DWORD *v16; // rcx
  PVOID v17; // r12
  unsigned __int64 v18; // rax
  ULONG64 v19; // rdx
  unsigned __int64 v20; // rdx
  PLARGE_INTEGER v21; // rsi
  ULONG *v22; // rax
  ULONG64 Status; // rcx
  void *v24; // r14
  PFAST_IO_DISPATCH FastIoDispatch; // r15
  ULONG *p_Flags; // r13
  ULONG Flags; // eax
  struct _KTHREAD *v28; // rax
  volatile __int32 *v29; // r14
  __int64 v30; // r9
  __int64 (__fastcall *FastIoRead)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _QWORD); // r15
  void *v32; // r14
  char v33; // si
  struct _KTHREAD *v34; // rax
  struct _KTHREAD *v35; // rcx
  unsigned __int64 v36; // rax
  volatile __int32 *v37; // rbx
  PVOID v38; // rbx
  struct _KTHREAD *v39; // rcx
  __int16 v40; // ax
  char v42; // r15
  __int64 Irp; // rax
  IRP *v44; // rsi
  __int64 v45; // r14
  ULONG v46; // eax
  ULONG v47; // ecx
  int v48; // r15d
  PRKEVENT v49; // rsi
  struct _MDL *Mdl; // rax
  NTSTATUS v51; // r13d
  PVOID v52; // rbx
  PVOID v53; // rbx
  KPROCESSOR_MODE v54; // [rsp+40h] [rbp-A8h]
  PVOID Object; // [rsp+48h] [rbp-A0h] BYREF
  char v56; // [rsp+50h] [rbp-98h]
  LONGLONG QuadPart; // [rsp+58h] [rbp-90h] BYREF
  PRKEVENT Eventa; // [rsp+60h] [rbp-88h]
  ULONG v59; // [rsp+68h] [rbp-80h]
  int v60; // [rsp+6Ch] [rbp-7Ch]
  PVOID v61; // [rsp+70h] [rbp-78h] BYREF
  __int128 v62; // [rsp+78h] [rbp-70h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+88h] [rbp-60h]
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp-58h]
  ULONG *v65; // [rsp+98h] [rbp-50h]
  PVOID v66; // [rsp+A0h] [rbp-48h]
  void *retaddr; // [rsp+E8h] [rbp+0h]

  Eventa = 0LL;
  v59 = 0;
  QuadPart = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v54 = PreviousMode;
  v11 = ObReferenceObjectByHandle(FileHandle, 1u, (POBJECT_TYPE)IoFileObjectType, PreviousMode, &Object, 0LL);
  v12 = (struct _FILE_OBJECT *)Object;
  v66 = Object;
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
    v60 = 0;
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
      goto LABEL_134;
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
          goto LABEL_134;
        }
      }
      if ( ByteOffset && (_WORD)SectorSize && (((unsigned __int16)SectorSize - 1) & (unsigned int)QuadPart) != 0 )
        goto LABEL_134;
    }
    v22 = Key;
    if ( Key )
    {
      if ( (unsigned __int64)Key >= MmUserProbeAddress )
        v22 = (ULONG *)MmUserProbeAddress;
      v59 = *v22;
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
      v59 = *Key;
  }
  if ( Event )
  {
    v48 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v61, 0LL);
    v24 = v61;
    Eventa = (PRKEVENT)v61;
    if ( v48 < 0 )
    {
      ObfDereferenceObject(v12);
      return v48;
    }
    KeResetEvent((PRKEVENT)v61);
  }
  else
  {
    v24 = Eventa;
  }
  FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
  p_Flags = &v12->Flags;
  v65 = &v12->Flags;
  Flags = v12->Flags;
  if ( (Flags & 2) == 0 )
  {
    if ( !v21 && (Flags & 0x280) == 0 )
    {
      if ( v24 )
        ObfDereferenceObject(v24);
      goto LABEL_134;
    }
    v42 = 0;
LABEL_69:
    if ( QuadPart >= 0 )
    {
      if ( (*p_Flags & 0x4000000) == 0 )
        KeResetEvent(&v12->Event);
      LOBYTE(SectorSize) = v42 == 0;
      Irp = pIoAllocateIrp(DeviceObject, (unsigned __int8)DeviceObject->StackSize, SectorSize, retaddr);
      v44 = (IRP *)Irp;
      v61 = (PVOID)Irp;
      if ( !Irp )
      {
        IopAllocateIrpCleanup(v12, v24);
        return -1073741670;
      }
      *(_QWORD *)(Irp + 192) = v12;
      *(_QWORD *)(Irp + 152) = CurrentThread;
      *(_QWORD *)(Irp + 160) = 0LL;
      *(_BYTE *)(Irp + 64) = v54;
      *(_BYTE *)(Irp + 65) = 0;
      *(_BYTE *)(Irp + 68) = 0;
      *(_QWORD *)(Irp + 104) = 0LL;
      *(_QWORD *)(Irp + 80) = v24;
      *(_QWORD *)(Irp + 72) = IoStatusBlock;
      *(_QWORD *)(Irp + 88) = ApcRoutine;
      *(_QWORD *)(Irp + 96) = ApcContext;
      v45 = *(_QWORD *)(Irp + 184);
      *(_DWORD *)(v45 - 72) = 3;
      *(_QWORD *)(v45 - 24) = v12;
      *(_QWORD *)(Irp + 24) = 0LL;
      *(_QWORD *)(Irp + 8) = 0LL;
      v46 = DeviceObject->Flags;
      if ( (v46 & 4) != 0 )
      {
        v47 = Length;
        if ( !Length )
        {
          v44->Flags = 80;
          goto LABEL_76;
        }
        v44->AssociatedIrp.MasterIrp = (struct _IRP *)sub_1400CC928(NonPagedPoolNxCacheAligned, Length);
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
            MmProbeAndLockPages(Mdl, v54, IoWriteAccess);
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
      *(_DWORD *)(v45 - 64) = v47;
      *(_DWORD *)(v45 - 56) = v59;
      *(_QWORD *)(v45 - 48) = QuadPart;
      return IopSynchronousServiceTail(DeviceObject, v44, v12, v54, v42, 0);
    }
    if ( v24 )
      ObfDereferenceObject(v24);
    if ( v42 )
    {
      _InterlockedExchange((volatile __int32 *)&v12->Busy, 0);
      v53 = Object;
      if ( *((_DWORD *)Object + 28) )
        KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
      ObfDereferenceObject(v53);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v12 = (struct _FILE_OBJECT *)Object;
    }
LABEL_134:
    ObfDereferenceObject(v12);
    return -1073741811;
  }
  v28 = KeGetCurrentThread();
  --v28->KernelApcDisable;
  v29 = (volatile __int32 *)Object;
  if ( _InterlockedExchange((volatile __int32 *)Object + 29, 1) )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v12 = (struct _FILE_OBJECT *)Object;
    v51 = IopAcquireFileObjectLock(Object);
    if ( v56 )
    {
      if ( Eventa )
        ObfDereferenceObject(Eventa);
      ObfDereferenceObject(v12);
      return v51;
    }
    p_Flags = v65;
  }
  else
  {
    v12 = (struct _FILE_OBJECT *)Object;
    ObfReferenceObject(Object);
  }
  if ( !v21 || (_DWORD)QuadPart == -2 && HIDWORD(QuadPart) == -1 )
    QuadPart = v12->CurrentByteOffset.QuadPart;
  if ( !v12->PrivateCacheMap )
    goto LABEL_68;
  v62 = 0uLL;
  FastIoRead = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->FastIoRead;
  if ( QuadPart < 0 )
  {
    if ( Eventa )
      ObfDereferenceObject(Eventa);
    _InterlockedExchange(v29 + 29, 0);
    v52 = Object;
    if ( *((_DWORD *)Object + 28) )
      KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
    ObfDereferenceObject(v52);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
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
    v33 = FastIoRead(v12, &QuadPart, Length, v30, v59, v17, &v62, DeviceObject);
    if ( v32 )
      VfFastIoCheckState(v32, (int)FastIoRead);
    if ( !v33 || (_DWORD)v62 && (_DWORD)v62 != -1073741807 && (_DWORD)v62 != -2147483643 )
    {
LABEL_68:
      v42 = 1;
      v24 = Eventa;
      goto LABEL_69;
    }
    v34 = KeGetCurrentThread();
    ++v34->ReadOperationCount;
    __incgsdword(0x2E5Cu);
    v35 = KeGetCurrentThread();
    v36 = DWORD2(v62);
    v35->ReadTransferCount += DWORD2(v62);
    __addgsqword(0x2E68u, v36);
    *(_OWORD *)&IoStatusBlock->Status = v62;
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
      && ($E81C3296F15336D9BF9B2D43BB137B25 *)v39->ApcState.ApcListHead[0].Flink != &v39->152
      && !v39->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery((__int64)v39);
    }
    ObfDereferenceObject(Object);
    return v62;
  }
}
