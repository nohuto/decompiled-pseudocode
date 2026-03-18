/*
 * XREFs of NtQueryInformationFile @ 0x140490C50
 * Callers:
 *     PfpFileCheckAttributesForPrefetch @ 0x1400138DC (PfpFileCheckAttributesForPrefetch.c)
 *     PfSnGetPrefetchInstructions @ 0x1404F61EC (PfSnGetPrefetchInstructions.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140013F48 (ExAllocatePoolWithTagPriority.c)
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     EtwActivityIdControlKernel @ 0x140026D54 (EtwActivityIdControlKernel.c)
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140045B50 (ExAllocatePoolWithQuotaTag.c)
 *     IoGetRelatedDeviceObject @ 0x140048020 (IoGetRelatedDeviceObject.c)
 *     IopQueueThreadIrp @ 0x140048420 (IopQueueThreadIrp.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     IofCallDriver @ 0x140048540 (IofCallDriver.c)
 *     IopCompleteRequest @ 0x14004A190 (IopCompleteRequest.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KeSetKernelStackSwapEnable @ 0x14006FE90 (KeSetKernelStackSwapEnable.c)
 *     IoGetIoPriorityHint @ 0x140070020 (IoGetIoPriorityHint.c)
 *     IoGetAttachedDevice @ 0x1400D1B70 (IoGetAttachedDevice.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400EF678 (ObDereferenceObjectDeferDelete.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     IopGetFileVolumeNameInformation @ 0x140129B48 (IopGetFileVolumeNameInformation.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     SeQueryInformationToken @ 0x140481E90 (SeQueryInformationToken.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     PsReferencePrimaryToken @ 0x14050D730 (PsReferencePrimaryToken.c)
 *     IopGetModeInformation @ 0x14053A6FC (IopGetModeInformation.c)
 *     IopAcquireFileObjectLock @ 0x140540A5C (IopAcquireFileObjectLock.c)
 *     IopExceptionCleanup @ 0x14055D264 (IopExceptionCleanup.c)
 *     IopCancelAlertedRequest @ 0x14058EC70 (IopCancelAlertedRequest.c)
 *     IopAllocateIrpCleanup @ 0x140670E48 (IopAllocateIrpCleanup.c)
 *     IopGetNumaNodeInformation @ 0x14067607C (IopGetNumaNodeInformation.c)
 *     IopQueryProcessIdsUsingFile @ 0x1406761D0 (IopQueryProcessIdsUsingFile.c)
 *     ExRaiseAccessViolation @ 0x1406F7890 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 *     VfFastIoCheckState @ 0x140739E88 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140739F38 (VfFastIoSnapState.c)
 */

NTSTATUS __stdcall NtQueryInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass)
{
  struct _KTHREAD *CurrentThread; // r10
  KPROCESSOR_MODE PreviousMode; // r11
  FILE_INFORMATION_CLASS v9; // r13d
  unsigned __int8 v10; // al
  _DWORD *v12; // rcx
  unsigned __int64 v13; // rdx
  ULONG64 v14; // rcx
  unsigned __int64 v15; // rcx
  int v16; // r12d
  struct _FILE_OBJECT *v17; // rsi
  _DWORD *v18; // rax
  struct _KPROCESS *Process; // rcx
  PACCESS_TOKEN v20; // rbx
  PDEVICE_OBJECT AttachedDevice; // rax
  PDEVICE_OBJECT v22; // rdi
  PFAST_IO_DISPATCH FastIoDispatch; // rbx
  PIO_STATUS_BLOCK v24; // rax
  NTSTATUS FileVolumeNameInformation; // ebx
  struct _KTHREAD *v26; // rax
  __int64 v27; // rdx
  struct _KTHREAD *v28; // rcx
  __int16 v29; // ax
  PIO_STATUS_BLOCK v30; // rax
  PVOID v31; // rbx
  struct _KTHREAD *v32; // rcx
  __int16 v33; // ax
  __int64 (__fastcall *FastIoQueryBasicInfo)(struct _FILE_OBJECT *, __int64, PVOID, __int128 *, PDEVICE_OBJECT); // r12
  __int64 (__fastcall *FastIoQueryStandardInfo)(struct _FILE_OBJECT *, __int64, PVOID, __int128 *, PDEVICE_OBJECT); // rbx
  void *v36; // rdi
  char v37; // al
  char v38; // bl
  PVOID v39; // rbx
  __int16 v40; // ax
  char v41; // r12
  __int64 Irp; // rax
  __int64 v43; // rdi
  PIO_STATUS_BLOCK v44; // rax
  __int64 v45; // rbx
  size_t v46; // r15
  PVOID PoolWithTagPriority; // rax
  struct _KTHREAD *v48; // rax
  char v49; // r10
  int NumaNodeInformation; // r15d
  volatile __int32 *v51; // rsi
  int ModeInformation; // eax
  _DWORD *v53; // r9
  int *v54; // rdx
  int v55; // ecx
  __int64 v56; // rax
  int v57; // ecx
  int v58; // ebx
  struct _DEVICE_OBJECT *v59; // r13
  int v60; // eax
  __int64 v61; // r9
  __int64 v62; // rax
  unsigned int v63; // ecx
  struct _KTHREAD *v64; // r8
  int v65; // edx
  IO_PRIORITY_HINT IoPriorityHint; // eax
  __int64 v67; // rcx
  _BYTE *v68; // rax
  bool v69; // zf
  char v70; // al
  bool v71; // bl
  KPROCESSOR_MODE v72; // al
  NTSTATUS v73; // eax
  bool v74; // dl
  unsigned __int8 CurrentIrql; // r8
  PVOID v76; // rbx
  struct _KTHREAD *v77; // rcx
  __int16 v78; // ax
  NTSTATUS v79; // eax
  unsigned __int8 v80; // bl
  PVOID v81; // rbx
  struct _KTHREAD *v82; // rcx
  __int16 v83; // ax
  KPROCESSOR_MODE v84; // [rsp+30h] [rbp-138h]
  NTSTATUS v85; // [rsp+34h] [rbp-134h]
  int v86; // [rsp+34h] [rbp-134h]
  int v87; // [rsp+34h] [rbp-134h]
  BOOLEAN v88; // [rsp+3Ah] [rbp-12Eh]
  PVOID Object; // [rsp+40h] [rbp-128h] BYREF
  char v90; // [rsp+48h] [rbp-120h]
  char v91; // [rsp+49h] [rbp-11Fh]
  KPROCESSOR_MODE v92; // [rsp+4Ah] [rbp-11Eh]
  char v93; // [rsp+4Bh] [rbp-11Dh]
  char v94; // [rsp+4Ch] [rbp-11Ch]
  char v95; // [rsp+4Dh] [rbp-11Bh]
  SIZE_T NumberOfBytes; // [rsp+50h] [rbp-118h]
  PDEVICE_OBJECT DeviceObject; // [rsp+58h] [rbp-110h]
  PIO_STATUS_BLOCK v98; // [rsp+60h] [rbp-108h]
  unsigned int v99; // [rsp+68h] [rbp-100h] BYREF
  _BYTE TokenInformation[12]; // [rsp+6Ch] [rbp-FCh] BYREF
  __int128 v101; // [rsp+78h] [rbp-F0h] BYREF
  PIO_STATUS_BLOCK v102; // [rsp+88h] [rbp-E0h]
  __int128 v103; // [rsp+90h] [rbp-D8h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+A0h] [rbp-C8h] BYREF
  PVOID v105; // [rsp+A8h] [rbp-C0h]
  PVOID v106; // [rsp+B0h] [rbp-B8h] BYREF
  _QWORD v107[2]; // [rsp+B8h] [rbp-B0h] BYREF
  __int128 *v108; // [rsp+C8h] [rbp-A0h] BYREF
  PVOID v109[2]; // [rsp+D0h] [rbp-98h] BYREF
  PVOID v110; // [rsp+E0h] [rbp-88h] BYREF
  struct _KTHREAD *v111; // [rsp+E8h] [rbp-80h]
  __int64 (__fastcall *v112)(struct _FILE_OBJECT *, __int64, PVOID, __int128 *, PDEVICE_OBJECT); // [rsp+F0h] [rbp-78h]
  struct _KEVENT Event; // [rsp+F8h] [rbp-70h] BYREF
  char v114[8]; // [rsp+110h] [rbp-58h] BYREF
  __int128 v115; // [rsp+118h] [rbp-50h] BYREF
  void *retaddr; // [rsp+168h] [rbp+0h]

  LODWORD(NumberOfBytes) = Length;
  v98 = IoStatusBlock;
  v102 = IoStatusBlock;
  v109[1] = FileInformation;
  *(_DWORD *)&TokenInformation[4] = Length;
  v103 = 0uLL;
  v88 = 0;
  CurrentThread = KeGetCurrentThread();
  v111 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v84 = PreviousMode;
  v92 = PreviousMode;
  if ( PreviousMode )
  {
    v9 = FileInformationClass;
    if ( (unsigned int)FileInformationClass >= FileDispositionInformationEx )
      return -1073741821;
    v10 = *((_BYTE *)IopQueryOperationLength + (int)FileInformationClass);
    if ( !v10 )
      return -1073741821;
    if ( Length < v10 )
      return -1073741820;
    v12 = &IoStatusBlock->0;
    if ( (unsigned __int64)IoStatusBlock >= MmUserProbeAddress )
      v12 = (_DWORD *)MmUserProbeAddress;
    *v12 = *v12;
    if ( CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[7] )
    {
      ProbeForWrite(FileInformation, Length, 4u);
      PreviousMode = v84;
    }
    else if ( Length )
    {
      v13 = (unsigned __int64)FileInformation;
      if ( ((*((unsigned __int8 *)IopQuerySetAlignmentRequirement + (int)FileInformationClass) - 1) & (unsigned int)FileInformation) != 0 )
        ExRaiseDatatypeMisalignment();
      v14 = (ULONG64)FileInformation + Length - 1;
      if ( (unsigned __int64)FileInformation > v14 || v14 >= MmUserProbeAddress )
      {
        if ( !KeGetCurrentThread()->ApcState.Process->SecurePid )
          ExRaiseAccessViolation();
      }
      else
      {
        v15 = (v14 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        do
        {
          *(_BYTE *)v13 = *(_BYTE *)v13;
          v13 = (v13 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        }
        while ( v13 != v15 );
      }
    }
  }
  else
  {
    v9 = FileInformationClass;
  }
  v16 = ObReferenceObjectByHandle(
          FileHandle,
          IopQueryOperationAccess[v9],
          (POBJECT_TYPE)IoFileObjectType,
          PreviousMode,
          &Object,
          &HandleInformation);
  v17 = (struct _FILE_OBJECT *)Object;
  v106 = Object;
  if ( v16 >= 0 )
  {
    v18 = (_DWORD *)*((_QWORD *)Object + 26);
    if ( v18 )
    {
      if ( (*v18 & 4) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        *(_DWORD *)TokenInformation = 0;
        v20 = PsReferencePrimaryToken(Process);
        SeQueryInformationToken(v20, TokenIsAppContainer, (PVOID *)TokenInformation);
        ObfDereferenceObject(v20);
        v17 = (struct _FILE_OBJECT *)Object;
        if ( *(_DWORD *)TokenInformation )
        {
          ObfDereferenceObject(Object);
          v16 = -1073739504;
        }
      }
    }
  }
  v85 = v16;
  if ( v16 < 0 )
    return v16;
  if ( (v17->Flags & 0x800) != 0 )
    AttachedDevice = IoGetAttachedDevice(v17->DeviceObject);
  else
    AttachedDevice = IoGetRelatedDeviceObject(v17);
  v22 = AttachedDevice;
  DeviceObject = AttachedDevice;
  FastIoDispatch = AttachedDevice->DriverObject->FastIoDispatch;
  if ( v9 == FileIsRemoteDeviceInformation )
  {
    v93 = 1;
    if ( (_DWORD)NumberOfBytes )
    {
      *(_BYTE *)FileInformation = (v17->DeviceObject->Characteristics & 0x10) != 0;
      v93 = 0;
      v24 = v98;
      v98->Status = 0;
      v24->Information = 1LL;
    }
    else
    {
      v16 = -1073741820;
    }
LABEL_36:
    ObfDereferenceObject(v17);
    return v16;
  }
  if ( v9 == FileVolumeNameInformation )
  {
    FileVolumeNameInformation = IopGetFileVolumeNameInformation(
                                  v17->DeviceObject,
                                  (__int64)v98,
                                  FileInformation,
                                  NumberOfBytes);
    ObfDereferenceObject(v17);
    return FileVolumeNameInformation;
  }
  if ( (v17->Flags & 2) != 0 )
  {
    v26 = KeGetCurrentThread();
    --v26->KernelApcDisable;
    if ( _InterlockedExchange((volatile __int32 *)Object + 29, 1) )
    {
      v28 = KeGetCurrentThread();
      v29 = v28->KernelApcDisable + 1;
      v28->KernelApcDisable = v29;
      if ( !v29
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v28->ApcState.ApcListHead[0].Flink != &v28->152
        && !v28->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      v17 = (struct _FILE_OBJECT *)Object;
      v16 = IopAcquireFileObjectLock(Object);
      v85 = v16;
      if ( v94 )
        goto LABEL_36;
    }
    else
    {
      v17 = (struct _FILE_OBJECT *)Object;
      ObfReferenceObject(Object);
    }
    if ( v9 == FilePositionInformation )
    {
      v91 = 1;
      if ( (unsigned int)NumberOfBytes >= 8 )
      {
        *(_QWORD *)FileInformation = v17->CurrentByteOffset.QuadPart;
        v91 = 0;
        v30 = v98;
        v98->Status = 0;
        v30->Information = 8LL;
      }
      else
      {
        v85 = -1073741820;
      }
      _InterlockedExchange((volatile __int32 *)&v17->Busy, 0);
      v31 = Object;
      if ( *((_DWORD *)Object + 28) )
        KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
      ObfDereferenceObject(v31);
      v32 = KeGetCurrentThread();
      v33 = v32->KernelApcDisable + 1;
      v32->KernelApcDisable = v33;
      if ( v33 )
        goto LABEL_58;
      goto LABEL_55;
    }
    if ( FastIoDispatch )
    {
      if ( (FastIoQueryBasicInfo = (__int64 (__fastcall *)(struct _FILE_OBJECT *, __int64, PVOID, __int128 *, PDEVICE_OBJECT))FastIoDispatch->FastIoQueryBasicInfo,
            v112 = FastIoQueryBasicInfo,
            FastIoQueryStandardInfo = (__int64 (__fastcall *)(struct _FILE_OBJECT *, __int64, PVOID, __int128 *, PDEVICE_OBJECT))FastIoDispatch->FastIoQueryStandardInfo,
            v9 == FileBasicInformation)
        && FastIoQueryBasicInfo
        || v9 == FileStandardInformation && FastIoQueryStandardInfo )
      {
        v101 = 0uLL;
        v90 = 0;
        if ( (MmVerifierData & 0x10) != 0 )
          v36 = (void *)VfFastIoSnapState();
        else
          v36 = 0LL;
        v107[1] = v36;
        LOBYTE(v27) = 1;
        if ( v9 == FileBasicInformation )
          v37 = FastIoQueryBasicInfo(v17, v27, FileInformation, &v101, DeviceObject);
        else
          v37 = FastIoQueryStandardInfo(v17, v27, FileInformation, &v101, DeviceObject);
        v38 = v37;
        if ( v36 )
          VfFastIoCheckState(v36, (int)FastIoQueryBasicInfo);
        if ( v38 )
        {
          v85 = v101;
          v90 = 1;
          *(_OWORD *)&v98->Status = v101;
          _InterlockedExchange((volatile __int32 *)&v17->Busy, 0);
          v39 = Object;
          if ( *((_DWORD *)Object + 28) )
            KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
          ObfDereferenceObject(v39);
          v32 = KeGetCurrentThread();
          v40 = v32->KernelApcDisable + 1;
          v32->KernelApcDisable = v40;
          if ( v40 )
            goto LABEL_58;
LABEL_55:
          if ( ($CD287064E7C9F7953DE243E927CFCB99 *)v32->ApcState.ApcListHead[0].Flink != &v32->152
            && !v32->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
LABEL_58:
          ObfDereferenceObject(Object);
          return v85;
        }
        v22 = DeviceObject;
      }
    }
    v41 = 1;
  }
  else
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v41 = 0;
  }
  if ( (v17->Flags & 0x4000000) == 0 )
    KeResetEvent(&v17->Event);
  Irp = pIoAllocateIrp(v22, (unsigned __int8)v22->StackSize, 0LL, retaddr);
  v43 = Irp;
  *(_QWORD *)&TokenInformation[4] = Irp;
  if ( !Irp )
  {
    IopAllocateIrpCleanup(v17, 0LL);
    return -1073741670;
  }
  *(_QWORD *)(Irp + 192) = v17;
  *(_QWORD *)(Irp + 152) = v111;
  *(_BYTE *)(Irp + 64) = v84;
  if ( v41 )
  {
    *(_QWORD *)(Irp + 80) = 0LL;
    v44 = v98;
    *(_BYTE *)(v43 + 71) |= 2u;
  }
  else
  {
    if ( v84 == 1 )
      v88 = KeSetKernelStackSwapEnable(0);
    *(_QWORD *)(v43 + 80) = &Event;
    v44 = (PIO_STATUS_BLOCK)&v103;
    *(_DWORD *)(v43 + 16) = 4;
  }
  *(_QWORD *)(v43 + 72) = v44;
  *(_QWORD *)(v43 + 88) = 0LL;
  v45 = *(_QWORD *)(v43 + 184) - 72LL;
  *(_BYTE *)v45 = 5;
  *(_QWORD *)(v45 + 48) = v17;
  *(_QWORD *)(v43 + 112) = FileInformation;
  *(_QWORD *)(v43 + 24) = 0LL;
  *(_QWORD *)(v43 + 8) = 0LL;
  v46 = (unsigned int)NumberOfBytes;
  if ( ViVerifierDriverAddedThunkListHead )
  {
    PoolWithTagPriority = ExAllocatePoolWithTagPriority(
                            NonPagedPoolNx,
                            (unsigned int)NumberOfBytes,
                            0x20206F49u,
                            (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
    if ( !PoolWithTagPriority )
      RtlRaiseStatus(-1073741670);
  }
  else
  {
    PoolWithTagPriority = ExAllocatePoolWithQuotaTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x20206F49u);
  }
  v105 = PoolWithTagPriority;
  *(_QWORD *)(v43 + 24) = PoolWithTagPriority;
  if ( !IopDisableBufferedIoInit )
    memset(PoolWithTagPriority, 0, v46);
  *(_DWORD *)(v43 + 16) |= 0x870u;
  *(_DWORD *)(v45 + 8) = v46;
  *(_DWORD *)(v45 + 16) = v9;
  IopQueueThreadIrp(v43);
  v48 = KeGetCurrentThread();
  ++v48->OtherOperationCount;
  __incgsdword(0x2E64u);
  v49 = 0;
  NumaNodeInformation = 0;
  v86 = 0;
  switch ( v9 )
  {
    case FileAccessInformation:
      **(_DWORD **)(v43 + 24) = HandleInformation.GrantedAccess;
      *(_QWORD *)(v43 + 56) = 4LL;
      v51 = (volatile __int32 *)Object;
      goto LABEL_126;
    case FileModeInformation:
      v51 = (volatile __int32 *)Object;
      ModeInformation = IopGetModeInformation(Object);
      *v53 = ModeInformation;
      *(_QWORD *)(v43 + 56) = 4LL;
      goto LABEL_126;
    case FileAlignmentInformation:
      **(_DWORD **)(v43 + 24) = DeviceObject->AlignmentRequirement;
      *(_QWORD *)(v43 + 56) = 4LL;
      v51 = (volatile __int32 *)Object;
      goto LABEL_126;
    case FileIoCompletionNotificationInformation:
      v54 = *(int **)(v43 + 24);
      *v54 = 0;
      v55 = 0;
      if ( (v17->Flags & 0x4000000) != 0 )
        v55 = 2;
      *v54 = v55;
      if ( (v17->Flags & 0x8000000) != 0 )
        *v54 |= 4u;
      if ( (v17->Flags & 0x2000000) != 0 )
        *v54 |= 1u;
      *(_QWORD *)(v43 + 56) = 4LL;
      v51 = (volatile __int32 *)Object;
      goto LABEL_126;
  }
  v51 = (volatile __int32 *)Object;
  if ( v9 == FileIoPriorityHintInformation )
  {
    v56 = *((_QWORD *)Object + 26);
    if ( v56 && (v57 = *(_DWORD *)(v56 + 64)) != 0 )
      v58 = v57 - 1;
    else
      v58 = 2;
    **(_DWORD **)(v43 + 24) = v58;
    *(_QWORD *)(v43 + 56) = 4LL;
    goto LABEL_126;
  }
  if ( v9 == FileProcessIdsUsingFileInformation )
  {
    NumaNodeInformation = IopQueryProcessIdsUsingFile(Object, *(_QWORD *)(v43 + 24), (unsigned int)NumberOfBytes, &v99);
    v86 = NumaNodeInformation;
    v49 = 1;
    v95 = 1;
    if ( NumaNodeInformation == -1073741820 )
      v98->Information = v99;
    else
      *(_QWORD *)(v43 + 56) = v99;
LABEL_124:
    v59 = DeviceObject;
    goto LABEL_125;
  }
  if ( v9 != FileNumaNodeInformation )
  {
    if ( v9 == FileAllInformation )
    {
      *(_DWORD *)(*(_QWORD *)(v43 + 24) + 76LL) = HandleInformation.GrantedAccess;
      v60 = IopGetModeInformation(v51);
      *(_DWORD *)(v61 + 88) = v60;
      v59 = DeviceObject;
      *(_DWORD *)(v61 + 92) = DeviceObject->AlignmentRequirement;
      *(_QWORD *)(v43 + 56) = 12LL;
      goto LABEL_125;
    }
    goto LABEL_124;
  }
  NumaNodeInformation = IopGetNumaNodeInformation(Object, *(_QWORD *)(v43 + 24));
  v86 = NumaNodeInformation;
  v49 = 1;
  v59 = DeviceObject;
  if ( NumaNodeInformation >= 0 )
    *(_QWORD *)(v43 + 56) = 2LL;
LABEL_125:
  if ( !v49 )
  {
    if ( !v41 )
      ObfReferenceObject((PVOID)v51);
    v62 = *((_QWORD *)v51 + 26);
    if ( v62 && *(_DWORD *)(v62 + 64) )
    {
      v63 = *(_DWORD *)(v43 + 16) & 0xFFF1FFFF;
      *(_DWORD *)(v43 + 16) = v63;
      *(_DWORD *)(v43 + 16) = v63 | (*(_DWORD *)(v62 + 64) << 17);
    }
    else
    {
      v64 = KeGetCurrentThread();
      v65 = (*((_DWORD *)&v64[1].SwapListEntry + 3) >> 9) & 7;
      if ( (v64->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
        v65 = 0;
      if ( v65 < 2 && v64 == KeGetCurrentThread() && HIDWORD(v64[1].Timer.TimerListEntry.Flink) )
        v65 = 2;
      *(_DWORD *)(v43 + 16) = *(_DWORD *)(v43 + 16) & 0xFFF1FFFF | ((v65 + 1) << 17);
      v51 = (volatile __int32 *)Object;
    }
    IoPriorityHint = IoGetIoPriorityHint((PIRP)v43);
    if ( !*(_BYTE *)(v43 + 64) && IoPriorityHint < IoPriorityNormal )
    {
      v67 = *(_QWORD *)(v43 + 152);
      if ( !v67 || (*(_DWORD *)(v67 + 116) & 0x400) == 0 && (*(_DWORD *)(v67 + 1728) & 0x20) == 0 )
      {
        ++IoKernelIssuedIoBoostedCount;
        *(_DWORD *)(v43 + 16) = *(_DWORD *)(v43 + 16) & 0xFFF1FFFF | 0x60000;
      }
    }
    if ( *(char *)(v43 + 71) < 0 || (v68 = *(_BYTE **)(v43 + 200)) == 0LL || (v69 = (*v68 & 2) == 0, v70 = 1, v69) )
      v70 = 0;
    if ( v70 )
    {
      EtwActivityIdControlKernel(1, &v110);
      v115 = *(_OWORD *)(*(_QWORD *)(v43 + 200) + 16LL);
      v108 = &v115;
      EtwActivityIdControlKernel(2, (PVOID *)&v108);
      NumaNodeInformation = IofCallDriver(v59, (PIRP)v43);
      v109[0] = v110;
      EtwActivityIdControlKernel(2, v109);
    }
    else
    {
      NumaNodeInformation = IofCallDriver(v59, (PIRP)v43);
    }
    if ( !v41 )
      ObDereferenceObjectDeferDelete((PVOID)v51);
    v86 = NumaNodeInformation;
    goto LABEL_155;
  }
LABEL_126:
  *(_DWORD *)(v43 + 48) = NumaNodeInformation;
LABEL_155:
  if ( NumaNodeInformation == 259 )
  {
    if ( v41 )
    {
      v71 = (v51[20] & 4) != 0;
      while ( 1 )
      {
        v72 = v84;
        if ( !v71 )
          v72 = 0;
        v73 = KeWaitForSingleObject((PVOID)(v51 + 38), Executive, v72, 1u, 0LL);
        if ( v73 != 257 && v73 != 192 )
          break;
        if ( !v71 && (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 1) == 0 )
        {
          v74 = 0;
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(1uLL);
          if ( !*((_DWORD *)v51 + 39) )
            v74 = *(_BYTE *)(v43 + 68) == 1;
          __writecr8(CurrentIrql);
          if ( !v74 )
            continue;
        }
        IopCancelAlertedRequest((PVOID)(v51 + 38), (PIRP)v43);
        break;
      }
      v87 = *((_DWORD *)Object + 14);
      _InterlockedExchange((volatile __int32 *)Object + 29, 0);
      v76 = Object;
      if ( *((_DWORD *)Object + 28) )
        KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
      ObfDereferenceObject(v76);
      v77 = KeGetCurrentThread();
      v78 = v77->KernelApcDisable + 1;
      v77->KernelApcDisable = v78;
      if ( !v78
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v77->ApcState.ApcListHead[0].Flink != &v77->152
        && !v77->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      NumaNodeInformation = v87;
    }
    else
    {
      v79 = KeWaitForSingleObject(&Event, Executive, v84, 0, 0LL);
      if ( v79 == 257 || v79 == 192 )
        IopCancelAlertedRequest(&Event, (PIRP)v43);
      NumaNodeInformation = v103;
      *(_OWORD *)&v98->Status = v103;
    }
  }
  else
  {
    if ( !v41 )
      *(_QWORD *)(v43 + 80) = 0LL;
    *(_QWORD *)(v43 + 72) = v98;
    v80 = KeGetCurrentIrql();
    __writecr8(1uLL);
    IopCompleteRequest(v43 + 120, (__int64)v114, v107, (ULONG_PTR *)&v106, v107);
    __writecr8(v80);
    if ( v41 )
    {
      _InterlockedExchange(v51 + 29, 0);
      v81 = Object;
      if ( *((_DWORD *)Object + 28) )
        KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
      ObfDereferenceObject(v81);
      v82 = KeGetCurrentThread();
      v83 = v82->KernelApcDisable + 1;
      v82->KernelApcDisable = v83;
      if ( !v83
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v82->ApcState.ApcListHead[0].Flink != &v82->152
        && !v82->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      NumaNodeInformation = v86;
    }
  }
  if ( v88 )
    KeSetKernelStackSwapEnable(1u);
  return NumaNodeInformation;
}
