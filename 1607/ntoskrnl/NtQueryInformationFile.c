/*
 * XREFs of NtQueryInformationFile @ 0x140443C00
 * Callers:
 *     PfpFileCheckAttributesForPrefetch @ 0x1400C83EC (PfpFileCheckAttributesForPrefetch.c)
 *     PfSnGetPrefetchInstructions @ 0x1403E6878 (PfSnGetPrefetchInstructions.c)
 * Callees:
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     IoGetAttachedDevice @ 0x14002DA40 (IoGetAttachedDevice.c)
 *     IoGetRelatedDeviceObject @ 0x14002DC60 (IoGetRelatedDeviceObject.c)
 *     IopQueueThreadIrp @ 0x14002DCF0 (IopQueueThreadIrp.c)
 *     KeResetEvent @ 0x14002E1B0 (KeResetEvent.c)
 *     IopCompleteRequest @ 0x1400543C0 (IopCompleteRequest.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     IopVerifierExAllocatePoolWithQuota @ 0x140079FA0 (IopVerifierExAllocatePoolWithQuota.c)
 *     KeSetKernelStackSwapEnable @ 0x14007B664 (KeSetKernelStackSwapEnable.c)
 *     IopGetFileVolumeNameInformation @ 0x1400AA9BC (IopGetFileVolumeNameInformation.c)
 *     IopIsProcessAppContainer @ 0x1400B06B4 (IopIsProcessAppContainer.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     IopWaitForSynchronousIo @ 0x1400C8360 (IopWaitForSynchronousIo.c)
 *     IopCallDriverReference @ 0x1400E98EC (IopCallDriverReference.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     IopAcquireFileObjectLock @ 0x1403EE090 (IopAcquireFileObjectLock.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     IopGetModeInformation @ 0x1404B1D18 (IopGetModeInformation.c)
 *     IopCancelAlertedRequest @ 0x1404D2CCC (IopCancelAlertedRequest.c)
 *     IopAllocateIrpCleanup @ 0x140620E74 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x140621488 (IopExceptionCleanup.c)
 *     IopGetNumaNodeInformation @ 0x140625634 (IopGetNumaNodeInformation.c)
 *     IopQueryProcessIdsUsingFile @ 0x140625770 (IopQueryProcessIdsUsingFile.c)
 *     ExRaiseAccessViolation @ 0x1406B6180 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 *     VfFastIoCheckState @ 0x1407058F8 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1407059A8 (VfFastIoSnapState.c)
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
  FILE_INFORMATION_CLASS v9; // r12d
  unsigned __int8 v10; // al
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  NTSTATUS FileVolumeNameInformation; // ebx
  struct _FILE_OBJECT *v17; // rsi
  _DWORD *v18; // rax
  bool IsProcessAppContainer; // al
  PDEVICE_OBJECT AttachedDevice; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  PDEVICE_OBJECT v24; // rdi
  PFAST_IO_DISPATCH FastIoDispatch; // r13
  struct _KTHREAD *v26; // rax
  __int64 v27; // rdx
  _BOOL8 v28; // r8
  PVOID v29; // rbx
  struct _KTHREAD *v30; // rcx
  __int16 v31; // ax
  PIRP FastIoQueryBasicInfo; // r10
  __int64 (__fastcall *FastIoQueryStandardInfo)(struct _FILE_OBJECT *, __int64, PVOID, __int128 *, PDEVICE_OBJECT); // rbx
  void *v34; // r13
  char v35; // al
  char v36; // bl
  PVOID v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  char v41; // r13
  IRP *v42; // rax
  __int64 v43; // rcx
  IRP *v44; // rdi
  PIO_STATUS_BLOCK v45; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  struct _IRP *PoolWithQuota; // rax
  __int64 v48; // rdx
  __int64 v49; // r8
  struct _KTHREAD *v50; // rax
  __int64 v51; // r9
  NTSTATUS NumaNodeInformation; // r14d
  int ModeInformation; // eax
  _DWORD *v54; // r8
  _DWORD *p_Type; // rdx
  int v56; // eax
  __int64 v57; // rcx
  int v58; // eax
  int v59; // ecx
  __int64 v60; // r10
  struct _IRP *MasterIrp; // r8
  int v62; // eax
  __int64 v63; // r8
  volatile __int32 *v64; // rbx
  PVOID v65; // rbx
  NTSTATUS v66; // eax
  unsigned __int8 CurrentIrql; // bl
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r9
  KPROCESSOR_MODE v71; // [rsp+30h] [rbp-E8h]
  NTSTATUS v72; // [rsp+34h] [rbp-E4h]
  NTSTATUS v73; // [rsp+34h] [rbp-E4h]
  BOOLEAN v74; // [rsp+39h] [rbp-DFh]
  PVOID Object; // [rsp+40h] [rbp-D8h] BYREF
  char v76; // [rsp+48h] [rbp-D0h]
  char v77; // [rsp+49h] [rbp-CFh]
  char v78; // [rsp+4Ah] [rbp-CEh]
  KPROCESSOR_MODE v79; // [rsp+4Bh] [rbp-CDh]
  char v80; // [rsp+4Ch] [rbp-CCh]
  _BYTE v81[3]; // [rsp+4Dh] [rbp-CBh] BYREF
  PDEVICE_OBJECT v82; // [rsp+50h] [rbp-C8h]
  unsigned int v83; // [rsp+58h] [rbp-C0h] BYREF
  PIRP Irp; // [rsp+60h] [rbp-B8h]
  __int128 v85; // [rsp+68h] [rbp-B0h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+78h] [rbp-A0h] BYREF
  __int128 v87; // [rsp+80h] [rbp-98h] BYREF
  void *v88; // [rsp+90h] [rbp-88h]
  PIRP v89; // [rsp+98h] [rbp-80h]
  struct _KTHREAD *v90; // [rsp+A0h] [rbp-78h]
  PVOID v91; // [rsp+A8h] [rbp-70h] BYREF
  __int64 v92; // [rsp+B0h] [rbp-68h] BYREF
  struct _KEVENT Event; // [rsp+B8h] [rbp-60h] BYREF
  char v94[72]; // [rsp+D0h] [rbp-48h] BYREF
  void *retaddr; // [rsp+118h] [rbp+0h]

  v87 = 0uLL;
  v74 = 0;
  CurrentThread = KeGetCurrentThread();
  v90 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v71 = PreviousMode;
  v79 = PreviousMode;
  if ( PreviousMode )
  {
    v9 = FileInformationClass;
    if ( (unsigned int)FileInformationClass >= FileDesiredStorageClassInformation )
      return -1073741821;
    v10 = *((_BYTE *)IopQueryOperationLength + (int)FileInformationClass);
    if ( !v10 )
      return -1073741821;
    if ( Length < v10 )
      return -1073741820;
    v12 = (__int64)IoStatusBlock;
    if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
      v12 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v12 = *(_DWORD *)v12;
    if ( CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[7] )
    {
      ProbeForWrite(FileInformation, Length, 4u);
      PreviousMode = v71;
    }
    else if ( Length )
    {
      v13 = (unsigned __int64)FileInformation;
      if ( ((*((unsigned __int8 *)IopQuerySetAlignmentRequirement + (int)FileInformationClass) - 1) & (unsigned int)FileInformation) != 0 )
        ExRaiseDatatypeMisalignment();
      v14 = (unsigned __int64)FileInformation + Length - 1;
      if ( (unsigned __int64)FileInformation > v14 || v14 >= 0x7FFFFFFF0000LL )
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
  FileVolumeNameInformation = ObReferenceObjectByHandle(
                                FileHandle,
                                IopQueryOperationAccess[v9],
                                (POBJECT_TYPE)IoFileObjectType,
                                PreviousMode,
                                &Object,
                                &HandleInformation);
  v17 = (struct _FILE_OBJECT *)Object;
  v91 = Object;
  if ( FileVolumeNameInformation >= 0 )
  {
    v18 = (_DWORD *)*((_QWORD *)Object + 26);
    if ( v18 )
    {
      if ( (*v18 & 4) != 0 )
      {
        IsProcessAppContainer = IopIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process);
        v17 = (struct _FILE_OBJECT *)Object;
        if ( IsProcessAppContainer )
        {
          ObfDereferenceObject(Object);
          FileVolumeNameInformation = -1073739504;
        }
      }
    }
  }
  v72 = FileVolumeNameInformation;
  if ( FileVolumeNameInformation < 0 )
    return FileVolumeNameInformation;
  if ( (v17->Flags & 0x800) != 0 )
    AttachedDevice = IoGetAttachedDevice(v17->DeviceObject);
  else
    AttachedDevice = IoGetRelatedDeviceObject(v17);
  v24 = AttachedDevice;
  v82 = AttachedDevice;
  FastIoDispatch = AttachedDevice->DriverObject->FastIoDispatch;
  if ( v9 == FileIsRemoteDeviceInformation )
  {
    v76 = 1;
    if ( Length )
    {
      *(_BYTE *)FileInformation = (v17->DeviceObject->Characteristics & 0x10) != 0;
      v76 = 0;
      IoStatusBlock->Status = 0;
      IoStatusBlock->Information = 1LL;
    }
    else
    {
      FileVolumeNameInformation = -1073741820;
    }
    goto LABEL_38;
  }
  if ( v9 == FileVolumeNameInformation )
  {
    FileVolumeNameInformation = IopGetFileVolumeNameInformation(
                                  v17->DeviceObject,
                                  (__int64)IoStatusBlock,
                                  FileInformation,
                                  Length);
LABEL_38:
    ObfDereferenceObject(v17);
    return FileVolumeNameInformation;
  }
  if ( (v17->Flags & 2) != 0 )
  {
    v26 = KeGetCurrentThread();
    --v26->KernelApcDisable;
    if ( _InterlockedExchange((volatile __int32 *)Object + 29, 1) )
    {
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v21, v22, v23);
      v28 = (v17->Flags & 4) != 0;
      v17 = (struct _FILE_OBJECT *)Object;
      FileVolumeNameInformation = IopAcquireFileObjectLock((char *)Object, v71, v28, v81);
      v72 = FileVolumeNameInformation;
      if ( v81[0] )
        goto LABEL_38;
    }
    else
    {
      v17 = (struct _FILE_OBJECT *)Object;
      ObfReferenceObject(Object);
    }
    if ( v9 == FilePositionInformation )
    {
      v77 = 1;
      if ( Length >= 8 )
      {
        *(_QWORD *)FileInformation = v17->CurrentByteOffset.QuadPart;
        v77 = 0;
        IoStatusBlock->Status = 0;
        IoStatusBlock->Information = 8LL;
      }
      else
      {
        v72 = -1073741820;
      }
      _InterlockedExchange((volatile __int32 *)&v17->Busy, 0);
      v29 = Object;
      if ( *((_DWORD *)Object + 28) )
        KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
      ObfDereferenceObject(v29);
      v30 = KeGetCurrentThread();
      v31 = v30->KernelApcDisable + 1;
      v30->KernelApcDisable = v31;
      if ( !v31
        && ($2B8565053CDC740D4E4887693DD8AC9E *)v30->ApcState.ApcListHead[0].Flink != &v30->152
        && !v30->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery((__int64)v30);
      }
LABEL_135:
      ObfDereferenceObject(Object);
      return v72;
    }
    if ( FastIoDispatch )
    {
      if ( (FastIoQueryBasicInfo = (PIRP)FastIoDispatch->FastIoQueryBasicInfo,
            Irp = FastIoQueryBasicInfo,
            v89 = FastIoQueryBasicInfo,
            FastIoQueryStandardInfo = (__int64 (__fastcall *)(struct _FILE_OBJECT *, __int64, PVOID, __int128 *, PDEVICE_OBJECT))FastIoDispatch->FastIoQueryStandardInfo,
            v9 == FileBasicInformation)
        && FastIoQueryBasicInfo
        || v9 == FileStandardInformation && FastIoQueryStandardInfo )
      {
        v85 = 0uLL;
        v78 = 0;
        if ( (MmVerifierData & 0x10) != 0 )
        {
          v34 = (void *)VfFastIoSnapState();
          FastIoQueryBasicInfo = Irp;
        }
        else
        {
          v34 = 0LL;
        }
        v88 = v34;
        LOBYTE(v27) = 1;
        if ( v9 == FileBasicInformation )
          v35 = ((__int64 (__fastcall *)(struct _FILE_OBJECT *, __int64, PVOID, __int128 *, PDEVICE_OBJECT))FastIoQueryBasicInfo)(
                  v17,
                  v27,
                  FileInformation,
                  &v85,
                  v24);
        else
          v35 = FastIoQueryStandardInfo(v17, v27, FileInformation, &v85, v24);
        v36 = v35;
        if ( v34 )
          VfFastIoCheckState(v34, (int)Irp);
        if ( v36 )
        {
          v72 = v85;
          v78 = 1;
          *(_OWORD *)&IoStatusBlock->Status = v85;
          _InterlockedExchange((volatile __int32 *)&v17->Busy, 0);
          v37 = Object;
          if ( *((_DWORD *)Object + 28) )
            KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
          ObfDereferenceObject(v37);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v38, v39, v40);
          goto LABEL_135;
        }
      }
    }
    v41 = 1;
  }
  else
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v41 = 0;
  }
  v80 = v41;
  if ( (v17->Flags & 0x4000000) == 0 )
    KeResetEvent(&v17->Event);
  v42 = (IRP *)pIoAllocateIrp(v24, (unsigned __int8)v24->StackSize, 0LL, retaddr);
  v44 = v42;
  Irp = v42;
  if ( !v42 )
  {
    IopAllocateIrpCleanup(v17, 0LL);
    return -1073741670;
  }
  v42->Tail.Overlay.OriginalFileObject = v17;
  v42->Tail.Overlay.Thread = v90;
  v42->RequestorMode = v71;
  if ( v41 )
  {
    v42->UserEvent = 0LL;
    v45 = IoStatusBlock;
    v44->AllocationFlags |= 2u;
  }
  else
  {
    if ( v71 == 1 )
      v74 = KeSetKernelStackSwapEnable(0);
    v44->UserEvent = &Event;
    v45 = (PIO_STATUS_BLOCK)&v87;
    v44->Flags = 4;
  }
  v44->UserIosb = v45;
  v44->Overlay.AllocationSize.QuadPart = 0LL;
  CurrentStackLocation = v44->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].MajorFunction = 5;
  CurrentStackLocation[-1].FileObject = v17;
  v44->UserBuffer = FileInformation;
  v44->AssociatedIrp.MasterIrp = 0LL;
  v44->MdlAddress = 0LL;
  PoolWithQuota = (struct _IRP *)IopVerifierExAllocatePoolWithQuota(v43, Length);
  v44->AssociatedIrp.MasterIrp = PoolWithQuota;
  if ( !IopDisableBufferedIoInit )
    memset(PoolWithQuota, 0, Length);
  v44->Flags |= 0x870u;
  CurrentStackLocation[-1].Parameters.Read.Length = Length;
  CurrentStackLocation[-1].Parameters.Create.Options = v9;
  IopQueueThreadIrp((__int64)v44);
  v50 = KeGetCurrentThread();
  ++v50->OtherOperationCount;
  __incgsdword(0x2E64u);
  LOBYTE(v51) = 0;
  NumaNodeInformation = 0;
  v73 = 0;
  switch ( v9 )
  {
    case FileAccessInformation:
      *(_DWORD *)v44->AssociatedIrp.MasterIrp = HandleInformation.GrantedAccess;
      v44->IoStatus.Information = 4LL;
LABEL_115:
      v44->IoStatus.Status = NumaNodeInformation;
      goto LABEL_117;
    case FileModeInformation:
      ModeInformation = IopGetModeInformation(Object, v48, v44->AssociatedIrp.MasterIrp, v51);
      *v54 = ModeInformation;
      v44->IoStatus.Information = 4LL;
      goto LABEL_115;
    case FileAlignmentInformation:
      *(_DWORD *)v44->AssociatedIrp.MasterIrp = v82->AlignmentRequirement;
      v44->IoStatus.Information = 4LL;
      goto LABEL_115;
    case FileIoCompletionNotificationInformation:
      p_Type = &v44->AssociatedIrp.MasterIrp->Type;
      *p_Type = 0;
      v56 = 0;
      if ( (v17->Flags & 0x4000000) != 0 )
        v56 = 2;
      *p_Type = v56;
      if ( (v17->Flags & 0x8000000) != 0 )
        *p_Type |= 4u;
      if ( (v17->Flags & 0x2000000) != 0 )
        *p_Type |= 1u;
      v44->IoStatus.Information = 4LL;
      goto LABEL_115;
    case FileIoPriorityHintInformation:
      v57 = *((_QWORD *)Object + 26);
      if ( v57 && (v58 = *(_DWORD *)(v57 + 72)) != 0 )
        v59 = v58 - 1;
      else
        v59 = 2;
      *(_DWORD *)v44->AssociatedIrp.MasterIrp = v59;
      v44->IoStatus.Information = 4LL;
      goto LABEL_115;
    case FileProcessIdsUsingFileInformation:
      NumaNodeInformation = IopQueryProcessIdsUsingFile(Object, v44->AssociatedIrp.MasterIrp, Length, &v83);
      v73 = NumaNodeInformation;
      LOBYTE(v51) = 1;
      v81[1] = 1;
      if ( NumaNodeInformation == -1073741820 )
        IoStatusBlock->Information = v83;
      else
        v44->IoStatus.Information = v83;
LABEL_113:
      v60 = (__int64)v82;
      goto LABEL_114;
  }
  if ( v9 != FileNumaNodeInformation )
  {
    if ( v9 == FileAllInformation )
    {
      MasterIrp = v44->AssociatedIrp.MasterIrp;
      HIDWORD(MasterIrp->UserIosb) = HandleInformation.GrantedAccess;
      v62 = IopGetModeInformation(Object, v48, MasterIrp, v51);
      *(_DWORD *)(v63 + 88) = v62;
      v60 = (__int64)v82;
      *(_DWORD *)(v63 + 92) = v82->AlignmentRequirement;
      v44->IoStatus.Information = 12LL;
      goto LABEL_114;
    }
    goto LABEL_113;
  }
  NumaNodeInformation = IopGetNumaNodeInformation(Object, v44->AssociatedIrp.MasterIrp, v49, v51);
  v73 = NumaNodeInformation;
  LOBYTE(v51) = 1;
  v60 = (__int64)v82;
  if ( NumaNodeInformation >= 0 )
    v44->IoStatus.Information = 2LL;
LABEL_114:
  if ( (_BYTE)v51 )
    goto LABEL_115;
  NumaNodeInformation = IopCallDriverReference(v60, v44, v41, Object, 2);
  v73 = NumaNodeInformation;
LABEL_117:
  if ( NumaNodeInformation == 259 )
  {
    if ( !v41 )
    {
      v66 = KeWaitForSingleObject(&Event, Executive, v71, 0, 0LL);
      if ( v66 == 257 || v66 == 192 )
        IopCancelAlertedRequest(&Event, v44);
      NumaNodeInformation = v87;
      *(_OWORD *)&IoStatusBlock->Status = v87;
      goto LABEL_132;
    }
    v64 = (volatile __int32 *)Object;
    v73 = IopWaitForSynchronousIo(v44, (__int64)Object, v71);
    _InterlockedExchange(v64 + 29, 0);
    v65 = Object;
    if ( *((_DWORD *)Object + 28) )
      KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
  }
  else
  {
    if ( !v41 )
      v44->UserEvent = 0LL;
    v44->UserIosb = IoStatusBlock;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    IopCompleteRequest((__int64)&v44->Tail, (__int64)v94, &v92, (ULONG_PTR *)&v91, &v92);
    __writecr8(CurrentIrql);
    if ( !v41 )
      goto LABEL_132;
    _InterlockedExchange((volatile __int32 *)Object + 29, 0);
    v65 = Object;
    if ( *((_DWORD *)Object + 28) )
      KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
  }
  ObfDereferenceObject(v65);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v68, v69, v70);
  NumaNodeInformation = v73;
LABEL_132:
  if ( v74 )
    KeSetKernelStackSwapEnable(1u);
  return NumaNodeInformation;
}
