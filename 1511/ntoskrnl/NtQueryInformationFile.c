/*
 * XREFs of NtQueryInformationFile @ 0x14040F570
 * Callers:
 *     PfpFileCheckAttributesForPrefetch @ 0x1400FDF20 (PfpFileCheckAttributesForPrefetch.c)
 *     PfSnGetPrefetchInstructions @ 0x1404D439C (PfSnGetPrefetchInstructions.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     IoGetRelatedDeviceObject @ 0x1400435F0 (IoGetRelatedDeviceObject.c)
 *     IopQueueThreadIrp @ 0x140043B00 (IopQueueThreadIrp.c)
 *     IopCallDriverReference @ 0x140077AB0 (IopCallDriverReference.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     IopCompleteRequest @ 0x140086090 (IopCompleteRequest.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 *     IopWaitForSynchronousIo @ 0x14008E3A0 (IopWaitForSynchronousIo.c)
 *     sub_14008E44C @ 0x14008E44C (sub_14008E44C.c)
 *     IoGetAttachedDevice @ 0x140097FE0 (IoGetAttachedDevice.c)
 *     KeSetKernelStackSwapEnable @ 0x1400DE5E0 (KeSetKernelStackSwapEnable.c)
 *     IopGetFileVolumeNameInformation @ 0x1400EBD4C (IopGetFileVolumeNameInformation.c)
 *     IopIsProcessAppContainer @ 0x1400EFD88 (IopIsProcessAppContainer.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
 *     IopGetModeInformation @ 0x1404A9CF0 (IopGetModeInformation.c)
 *     IopAcquireFileObjectLock @ 0x1404AC66C (IopAcquireFileObjectLock.c)
 *     IopCancelAlertedRequest @ 0x1404C5FBC (IopCancelAlertedRequest.c)
 *     IopExceptionCleanup @ 0x1404C68BC (IopExceptionCleanup.c)
 *     IopAllocateIrpCleanup @ 0x1405F70B8 (IopAllocateIrpCleanup.c)
 *     IopGetNumaNodeInformation @ 0x1405FB94C (IopGetNumaNodeInformation.c)
 *     IopQueryProcessIdsUsingFile @ 0x1405FBA88 (IopQueryProcessIdsUsingFile.c)
 *     ExRaiseAccessViolation @ 0x140673340 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 *     VfFastIoCheckState @ 0x1406B9854 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1406B9904 (VfFastIoSnapState.c)
 */

NTSTATUS __stdcall NtQueryInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass)
{
  struct _KTHREAD *CurrentThread; // r8
  KPROCESSOR_MODE PreviousMode; // r10
  FILE_INFORMATION_CLASS v10; // r12d
  unsigned __int8 v11; // al
  _DWORD *v13; // rcx
  unsigned __int64 v14; // rdx
  ULONG64 v15; // rcx
  unsigned __int64 v16; // rcx
  int FileVolumeNameInformation; // ebx
  struct _FILE_OBJECT *v18; // rsi
  _DWORD *v19; // rax
  bool IsProcessAppContainer; // al
  PDEVICE_OBJECT AttachedDevice; // rax
  PDEVICE_OBJECT v22; // rdi
  struct _KTHREAD *v23; // rax
  __int64 v24; // rdx
  PVOID v25; // rbx
  struct _KTHREAD *v26; // rcx
  __int16 v27; // ax
  PIRP v28; // rax
  __int64 (__fastcall *Flink)(struct _FILE_OBJECT *, __int64, PVOID, __int128 *, PDEVICE_OBJECT); // r10
  struct _LIST_ENTRY *Blink; // rbx
  void *v31; // r13
  char v32; // al
  char v33; // bl
  PVOID v34; // rbx
  __int16 v35; // ax
  unsigned __int8 v36; // r13
  IRP *v37; // rax
  __int64 v38; // rcx
  IRP *v39; // rdi
  PIO_STATUS_BLOCK v40; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  struct _IRP *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // r8
  struct _KTHREAD *v45; // rax
  char v46; // r11
  NTSTATUS NumaNodeInformation; // r14d
  int ModeInformation; // eax
  _DWORD *v49; // r9
  _DWORD *p_Type; // r8
  int v51; // ecx
  __int64 v52; // rcx
  int v53; // eax
  int v54; // edx
  __int64 v55; // r10
  int v56; // eax
  __int64 v57; // r9
  volatile __int32 *v58; // rbx
  PVOID v59; // rbx
  NTSTATUS v60; // eax
  unsigned __int8 CurrentIrql; // bl
  KPROCESSOR_MODE v62; // [rsp+30h] [rbp-E8h]
  NTSTATUS v63; // [rsp+34h] [rbp-E4h]
  NTSTATUS v64; // [rsp+34h] [rbp-E4h]
  BOOLEAN v65; // [rsp+39h] [rbp-DFh]
  PVOID Object; // [rsp+40h] [rbp-D8h] BYREF
  unsigned __int8 v67; // [rsp+48h] [rbp-D0h]
  char v68; // [rsp+49h] [rbp-CFh]
  char v69; // [rsp+4Ah] [rbp-CEh]
  KPROCESSOR_MODE v70; // [rsp+4Bh] [rbp-CDh]
  char v71; // [rsp+4Ch] [rbp-CCh]
  char v72; // [rsp+4Dh] [rbp-CBh]
  char v73; // [rsp+4Eh] [rbp-CAh]
  PDEVICE_OBJECT v74; // [rsp+50h] [rbp-C8h]
  PIRP Irp; // [rsp+58h] [rbp-C0h]
  unsigned int v76; // [rsp+60h] [rbp-B8h] BYREF
  __int128 v77; // [rsp+68h] [rbp-B0h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+78h] [rbp-A0h] BYREF
  __int128 v79; // [rsp+80h] [rbp-98h] BYREF
  ULONG_PTR v80[2]; // [rsp+90h] [rbp-88h] BYREF
  __int64 v81; // [rsp+A0h] [rbp-78h] BYREF
  struct _KTHREAD *v82; // [rsp+A8h] [rbp-70h]
  __int64 (__fastcall *v83)(struct _FILE_OBJECT *, __int64, PVOID, __int128 *, PDEVICE_OBJECT); // [rsp+B0h] [rbp-68h]
  struct _KEVENT Event; // [rsp+B8h] [rbp-60h] BYREF
  char v85[72]; // [rsp+D0h] [rbp-48h] BYREF
  void *retaddr; // [rsp+118h] [rbp+0h]

  v79 = 0uLL;
  v65 = 0;
  CurrentThread = KeGetCurrentThread();
  v82 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v62 = PreviousMode;
  v70 = PreviousMode;
  if ( PreviousMode )
  {
    v10 = FileInformationClass;
    if ( (unsigned int)FileInformationClass >= FileDispositionInformationEx )
      return -1073741821;
    v11 = *((_BYTE *)IopQueryOperationLength + (int)FileInformationClass);
    if ( !v11 )
      return -1073741821;
    if ( Length < v11 )
      return -1073741820;
    v13 = &IoStatusBlock->0;
    if ( (unsigned __int64)IoStatusBlock >= MmUserProbeAddress )
      v13 = (_DWORD *)MmUserProbeAddress;
    *v13 = *v13;
    if ( CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[7] )
    {
      ProbeForWrite(FileInformation, Length, 4u);
      PreviousMode = v62;
    }
    else if ( Length )
    {
      v14 = (unsigned __int64)FileInformation;
      if ( ((*((unsigned __int8 *)IopQuerySetAlignmentRequirement + (int)FileInformationClass) - 1) & (unsigned int)FileInformation) != 0 )
        ExRaiseDatatypeMisalignment();
      v15 = (ULONG64)FileInformation + Length - 1;
      if ( (unsigned __int64)FileInformation > v15 || v15 >= MmUserProbeAddress )
      {
        if ( !KeGetCurrentThread()->ApcState.Process->SecurePid )
          ExRaiseAccessViolation();
      }
      else
      {
        v16 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        do
        {
          *(_BYTE *)v14 = *(_BYTE *)v14;
          v14 = (v14 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        }
        while ( v14 != v16 );
      }
    }
  }
  else
  {
    v10 = FileInformationClass;
  }
  FileVolumeNameInformation = ObReferenceObjectByHandle(
                                FileHandle,
                                IopQueryOperationAccess[v10],
                                (POBJECT_TYPE)IoFileObjectType,
                                PreviousMode,
                                &Object,
                                &HandleInformation);
  v18 = (struct _FILE_OBJECT *)Object;
  v80[0] = (ULONG_PTR)Object;
  if ( FileVolumeNameInformation >= 0 )
  {
    v19 = (_DWORD *)*((_QWORD *)Object + 26);
    if ( v19 )
    {
      if ( (*v19 & 4) != 0 )
      {
        IsProcessAppContainer = IopIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process);
        v18 = (struct _FILE_OBJECT *)Object;
        if ( IsProcessAppContainer )
        {
          ObfDereferenceObject(Object);
          FileVolumeNameInformation = -1073739504;
        }
      }
    }
  }
  v63 = FileVolumeNameInformation;
  if ( FileVolumeNameInformation < 0 )
    return FileVolumeNameInformation;
  if ( (v18->Flags & 0x800) != 0 )
    AttachedDevice = IoGetAttachedDevice(v18->DeviceObject);
  else
    AttachedDevice = IoGetRelatedDeviceObject(v18);
  v22 = AttachedDevice;
  v74 = AttachedDevice;
  Irp = (PIRP)AttachedDevice->DriverObject->FastIoDispatch;
  if ( v10 == FileIsRemoteDeviceInformation )
  {
    v71 = 1;
    if ( Length )
    {
      *(_BYTE *)FileInformation = (v18->DeviceObject->Characteristics & 0x10) != 0;
      v71 = 0;
      IoStatusBlock->Status = 0;
      IoStatusBlock->Information = 1LL;
    }
    else
    {
      FileVolumeNameInformation = -1073741820;
    }
    goto LABEL_38;
  }
  if ( v10 == FileVolumeNameInformation )
  {
    FileVolumeNameInformation = IopGetFileVolumeNameInformation(
                                  v18->DeviceObject,
                                  (__int64)IoStatusBlock,
                                  FileInformation,
                                  Length);
LABEL_38:
    ObfDereferenceObject(v18);
    return FileVolumeNameInformation;
  }
  if ( (v18->Flags & 2) != 0 )
  {
    v23 = KeGetCurrentThread();
    --v23->KernelApcDisable;
    if ( _InterlockedExchange((volatile __int32 *)Object + 29, 1) )
    {
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v18 = (struct _FILE_OBJECT *)Object;
      FileVolumeNameInformation = IopAcquireFileObjectLock(Object);
      v63 = FileVolumeNameInformation;
      if ( v72 )
        goto LABEL_38;
    }
    else
    {
      v18 = (struct _FILE_OBJECT *)Object;
      ObfReferenceObject(Object);
    }
    if ( v10 == FilePositionInformation )
    {
      v68 = 1;
      if ( Length >= 8 )
      {
        *(_QWORD *)FileInformation = v18->CurrentByteOffset.QuadPart;
        v68 = 0;
        IoStatusBlock->Status = 0;
        IoStatusBlock->Information = 8LL;
      }
      else
      {
        v63 = -1073741820;
      }
      _InterlockedExchange((volatile __int32 *)&v18->Busy, 0);
      v25 = Object;
      if ( *((_DWORD *)Object + 28) )
        KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
      ObfDereferenceObject(v25);
      v26 = KeGetCurrentThread();
      v27 = v26->KernelApcDisable + 1;
      v26->KernelApcDisable = v27;
      if ( v27 )
        goto LABEL_54;
      goto LABEL_51;
    }
    v28 = Irp;
    if ( Irp )
    {
      if ( (Flink = (__int64 (__fastcall *)(struct _FILE_OBJECT *, __int64, PVOID, __int128 *, PDEVICE_OBJECT))Irp->ThreadListEntry.Flink,
            Irp = (PIRP)Flink,
            v83 = Flink,
            Blink = v28->ThreadListEntry.Blink,
            v10 == FileBasicInformation)
        && Flink
        || v10 == FileStandardInformation && Blink )
      {
        v77 = 0uLL;
        v69 = 0;
        if ( (MmVerifierData & 0x10) != 0 )
        {
          v31 = (void *)VfFastIoSnapState();
          Flink = (__int64 (__fastcall *)(struct _FILE_OBJECT *, __int64, PVOID, __int128 *, PDEVICE_OBJECT))Irp;
        }
        else
        {
          v31 = 0LL;
        }
        v80[1] = (ULONG_PTR)v31;
        LOBYTE(v24) = 1;
        if ( v10 == FileBasicInformation )
          v32 = Flink(v18, v24, FileInformation, &v77, v22);
        else
          v32 = ((__int64 (__fastcall *)(struct _FILE_OBJECT *, __int64, PVOID, __int128 *, PDEVICE_OBJECT))Blink)(
                  v18,
                  v24,
                  FileInformation,
                  &v77,
                  v22);
        v33 = v32;
        if ( v31 )
          VfFastIoCheckState(v31, (int)Irp);
        if ( v33 )
        {
          v63 = v77;
          v69 = 1;
          *(_OWORD *)&IoStatusBlock->Status = v77;
          _InterlockedExchange((volatile __int32 *)&v18->Busy, 0);
          v34 = Object;
          if ( *((_DWORD *)Object + 28) )
            KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
          ObfDereferenceObject(v34);
          v26 = KeGetCurrentThread();
          v35 = v26->KernelApcDisable + 1;
          v26->KernelApcDisable = v35;
          if ( v35 )
            goto LABEL_54;
LABEL_51:
          if ( ($E81C3296F15336D9BF9B2D43BB137B25 *)v26->ApcState.ApcListHead[0].Flink != &v26->152
            && !v26->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery((__int64)v26);
          }
LABEL_54:
          ObfDereferenceObject(Object);
          return v63;
        }
      }
    }
    v36 = 1;
  }
  else
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v36 = 0;
  }
  v67 = v36;
  if ( (v18->Flags & 0x4000000) == 0 )
    KeResetEvent(&v18->Event);
  v37 = (IRP *)pIoAllocateIrp(v22, (unsigned __int8)v22->StackSize, 0LL, retaddr);
  v39 = v37;
  Irp = v37;
  if ( !v37 )
  {
    IopAllocateIrpCleanup(v18, 0LL);
    return -1073741670;
  }
  v37->Tail.Overlay.OriginalFileObject = v18;
  v37->Tail.Overlay.Thread = v82;
  v37->RequestorMode = v62;
  if ( v36 )
  {
    v37->UserEvent = 0LL;
    v40 = IoStatusBlock;
    v39->AllocationFlags |= 2u;
  }
  else
  {
    if ( v62 == 1 )
      v65 = KeSetKernelStackSwapEnable(0);
    v39->UserEvent = &Event;
    v40 = (PIO_STATUS_BLOCK)&v79;
    v39->Flags = 4;
  }
  v39->UserIosb = v40;
  v39->Overlay.AllocationSize.QuadPart = 0LL;
  CurrentStackLocation = v39->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].MajorFunction = 5;
  CurrentStackLocation[-1].FileObject = v18;
  v39->UserBuffer = FileInformation;
  v39->AssociatedIrp.MasterIrp = 0LL;
  v39->MdlAddress = 0LL;
  v42 = (struct _IRP *)sub_14008E44C(v38, Length);
  v39->AssociatedIrp.MasterIrp = v42;
  if ( !IopDisableBufferedIoInit )
    memset(v42, 0, Length);
  v39->Flags |= 0x870u;
  CurrentStackLocation[-1].Parameters.Read.Length = Length;
  CurrentStackLocation[-1].Parameters.Create.Options = v10;
  IopQueueThreadIrp((__int64)v39, v43, v44);
  v45 = KeGetCurrentThread();
  ++v45->OtherOperationCount;
  __incgsdword(0x2E64u);
  v46 = 0;
  NumaNodeInformation = 0;
  v64 = 0;
  switch ( v10 )
  {
    case FileAccessInformation:
      *(_DWORD *)v39->AssociatedIrp.MasterIrp = HandleInformation.GrantedAccess;
      v39->IoStatus.Information = 4LL;
LABEL_117:
      v39->IoStatus.Status = NumaNodeInformation;
      goto LABEL_119;
    case FileModeInformation:
      ModeInformation = IopGetModeInformation(Object);
      *v49 = ModeInformation;
      v39->IoStatus.Information = 4LL;
      goto LABEL_117;
    case FileAlignmentInformation:
      *(_DWORD *)v39->AssociatedIrp.MasterIrp = v74->AlignmentRequirement;
      v39->IoStatus.Information = 4LL;
      goto LABEL_117;
    case FileIoCompletionNotificationInformation:
      p_Type = &v39->AssociatedIrp.MasterIrp->Type;
      *p_Type = 0;
      v51 = 0;
      if ( (v18->Flags & 0x4000000) != 0 )
        v51 = 2;
      *p_Type = v51;
      if ( (v18->Flags & 0x8000000) != 0 )
        *p_Type |= 4u;
      if ( (v18->Flags & 0x2000000) != 0 )
        *p_Type |= 1u;
      v39->IoStatus.Information = 4LL;
      goto LABEL_117;
    case FileIoPriorityHintInformation:
      v52 = *((_QWORD *)Object + 26);
      if ( v52 && (v53 = *(_DWORD *)(v52 + 72)) != 0 )
        v54 = v53 - 1;
      else
        v54 = 2;
      *(_DWORD *)v39->AssociatedIrp.MasterIrp = v54;
      v39->IoStatus.Information = 4LL;
      goto LABEL_117;
    case FileProcessIdsUsingFileInformation:
      NumaNodeInformation = IopQueryProcessIdsUsingFile(Object, v39->AssociatedIrp.MasterIrp, Length, &v76);
      v64 = NumaNodeInformation;
      v46 = 1;
      v73 = 1;
      if ( NumaNodeInformation == -1073741820 )
        IoStatusBlock->Information = v76;
      else
        v39->IoStatus.Information = v76;
LABEL_115:
      v55 = (__int64)v74;
      goto LABEL_116;
  }
  if ( v10 != FileNumaNodeInformation )
  {
    if ( v10 == FileAllInformation )
    {
      HIDWORD(v39->AssociatedIrp.MasterIrp->UserIosb) = HandleInformation.GrantedAccess;
      v56 = IopGetModeInformation(Object);
      *(_DWORD *)(v57 + 88) = v56;
      v55 = (__int64)v74;
      *(_DWORD *)(v57 + 92) = v74->AlignmentRequirement;
      v39->IoStatus.Information = 12LL;
      goto LABEL_116;
    }
    goto LABEL_115;
  }
  NumaNodeInformation = IopGetNumaNodeInformation(Object, v39->AssociatedIrp.MasterIrp);
  v64 = NumaNodeInformation;
  v46 = 1;
  v55 = (__int64)v74;
  if ( NumaNodeInformation >= 0 )
    v39->IoStatus.Information = 2LL;
LABEL_116:
  if ( v46 )
    goto LABEL_117;
  NumaNodeInformation = IopCallDriverReference(v55, v39, v36, Object, 2);
  v64 = NumaNodeInformation;
LABEL_119:
  if ( NumaNodeInformation == 259 )
  {
    if ( !v36 )
    {
      v60 = KeWaitForSingleObject(&Event, Executive, v62, 0, 0LL);
      if ( v60 == 257 || v60 == 192 )
        IopCancelAlertedRequest(&Event, v39);
      NumaNodeInformation = v79;
      *(_OWORD *)&IoStatusBlock->Status = v79;
      goto LABEL_134;
    }
    v58 = (volatile __int32 *)Object;
    v64 = IopWaitForSynchronousIo(v39, (__int64)Object, v62);
    _InterlockedExchange(v58 + 29, 0);
    v59 = Object;
    if ( *((_DWORD *)Object + 28) )
      KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
  }
  else
  {
    if ( !v36 )
      v39->UserEvent = 0LL;
    v39->UserIosb = IoStatusBlock;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    IopCompleteRequest((__int64)&v39->Tail, (__int64)v85, (__int64)&v81, v80, &v81);
    __writecr8(CurrentIrql);
    if ( !v36 )
      goto LABEL_134;
    _InterlockedExchange((volatile __int32 *)Object + 29, 0);
    v59 = Object;
    if ( *((_DWORD *)Object + 28) )
      KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
  }
  ObfDereferenceObject(v59);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  NumaNodeInformation = v64;
LABEL_134:
  if ( v65 )
    KeSetKernelStackSwapEnable(1u);
  return NumaNodeInformation;
}
