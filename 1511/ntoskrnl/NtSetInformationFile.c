/*
 * XREFs of NtSetInformationFile @ 0x14008E8E0
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
 *     IoThreadToProcess @ 0x1400284B0 (IoThreadToProcess.c)
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     IopQueueThreadIrp @ 0x140043B00 (IopQueueThreadIrp.c)
 *     IopAllocateFileObjectExtension @ 0x140074A60 (IopAllocateFileObjectExtension.c)
 *     IopCallDriverReference @ 0x140077AB0 (IopCallDriverReference.c)
 *     IopGetFileObjectExtension @ 0x14007CDA0 (IopGetFileObjectExtension.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     IopCompleteRequest @ 0x140086090 (IopCompleteRequest.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     IopWaitForSynchronousIo @ 0x14008E3A0 (IopWaitForSynchronousIo.c)
 *     sub_14008E44C @ 0x14008E44C (sub_14008E44C.c)
 *     IopResetEvent @ 0x14008E840 (IopResetEvent.c)
 *     IoGetAttachedDevice @ 0x140097FE0 (IoGetAttachedDevice.c)
 *     KeAreAllApcsDisabled @ 0x140098520 (KeAreAllApcsDisabled.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x1400D5460 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     KeSetKernelStackSwapEnable @ 0x1400DE5E0 (KeSetKernelStackSwapEnable.c)
 *     IopVerifyDeviceObjectOnStack @ 0x1400E2D94 (IopVerifyDeviceObjectOnStack.c)
 *     IopIsProcessAppContainer @ 0x1400EFD88 (IopIsProcessAppContainer.c)
 *     ObpDeferObjectDeletion @ 0x14010002C (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     IopReplaceCompletionPort @ 0x1401BB900 (IopReplaceCompletionPort.c)
 *     ObpPushStackInfo @ 0x1401E6504 (ObpPushStackInfo.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObCloseHandle @ 0x1403F6F34 (ObCloseHandle.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ObpRemoveObjectRoutine @ 0x14042F540 (ObpRemoveObjectRoutine.c)
 *     SeReleaseSubjectContext @ 0x140435320 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x140470510 (SeCaptureSubjectContextEx.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     RtlIsSandboxedToken @ 0x140478894 (RtlIsSandboxedToken.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x14049BF20 (ObpHandleRevocationBlockRemoveObject.c)
 *     IopAcquireFileObjectLock @ 0x1404AC66C (IopAcquireFileObjectLock.c)
 *     IopOpenLinkOrRenameTarget @ 0x1404B43D0 (IopOpenLinkOrRenameTarget.c)
 *     IopTrackLink @ 0x1404BC4A8 (IopTrackLink.c)
 *     IopCancelAlertedRequest @ 0x1404C5FBC (IopCancelAlertedRequest.c)
 *     IopExceptionCleanup @ 0x1404C68BC (IopExceptionCleanup.c)
 *     IopAllocateIrpCleanup @ 0x1405F70B8 (IopAllocateIrpCleanup.c)
 *     IopSetFileObjectIosbRange @ 0x1405F8D44 (IopSetFileObjectIosbRange.c)
 *     ObpDeregisterObject @ 0x14062F65C (ObpDeregisterObject.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass)
{
  HANDLE v6; // r15
  struct _KTHREAD *CurrentThread; // rbx
  FILE_INFORMATION_CLASS v8; // r13d
  unsigned __int8 v9; // al
  _DWORD *v10; // rcx
  __int64 v11; // rax
  ACCESS_MASK v12; // edi
  struct _KPROCESS *v13; // rax
  char IsSandboxedToken; // bl
  __int64 v16; // rdx
  NTSTATUS v17; // edi
  __int64 v18; // r8
  char *v19; // rbx
  _DWORD *v20; // rax
  char IsProcessAppContainer; // al
  unsigned int *v22; // r15
  __int64 v23; // rsi
  PDEVICE_OBJECT v24; // rsi
  __int64 v25; // rsi
  PIRP p_AttachedDevice; // r9
  PDEVICE_OBJECT *FileObjectExtension; // rax
  PDEVICE_OBJECT v28; // rax
  struct _DEVICE_OBJECT *v29; // rax
  struct _KTHREAD *v30; // rax
  volatile __int32 *v31; // rsi
  volatile signed __int64 *v32; // rbx
  signed __int64 v33; // rax
  PVOID v34; // rbx
  __int64 v35; // rax
  USHORT SectorSize; // cx
  PIO_STATUS_BLOCK v37; // rax
  struct _KTHREAD *v38; // rcx
  char *v39; // rbx
  char *v40; // rbx
  signed __int64 v41; // rax
  bool v42; // cc
  signed __int64 v43; // rax
  __int64 v44; // rax
  struct _KTHREAD *v45; // rcx
  __int16 v46; // ax
  signed __int64 v47; // rsi
  signed __int64 v48; // rsi
  __int64 v49; // rax
  char v50; // r12
  __int64 v51; // r8
  __int16 *v52; // rcx
  _DWORD *v53; // rax
  PVOID v54; // rbx
  IRP *v55; // rax
  __int64 v56; // rcx
  IRP *v57; // rsi
  int *v58; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r12
  struct _IRP *v60; // rax
  __int64 v61; // rdx
  __int64 v62; // r8
  struct _KTHREAD *v63; // rax
  struct _IRP *MasterIrp; // r8
  int v65; // edx
  unsigned int v66; // eax
  unsigned int v67; // eax
  unsigned int v68; // ecx
  unsigned int v69; // ecx
  struct _IRP *v70; // rcx
  unsigned __int8 v71; // r15
  HANDLE *v72; // rcx
  _QWORD *v73; // r13
  _QWORD *PoolWithTag; // rbx
  KSPIN_LOCK *v75; // r12
  KIRQL v76; // al
  struct _IRP *v77; // r15
  PVOID v78; // rbx
  struct _IRP *v79; // rdx
  KPROCESSOR_MODE v80; // bl
  struct _IRP *v81; // rbx
  struct _IRP *v82; // r8
  ULONG Flags; // ecx
  int v84; // eax
  char v85; // r8
  volatile __int32 *v86; // rbx
  PVOID v87; // rbx
  NTSTATUS v88; // eax
  unsigned __int8 CurrentIrql; // bl
  KPROCESSOR_MODE PreviousMode; // [rsp+30h] [rbp-108h]
  char v91; // [rsp+31h] [rbp-107h]
  PVOID Object; // [rsp+38h] [rbp-100h] BYREF
  char v93; // [rsp+40h] [rbp-F8h]
  BOOLEAN v94; // [rsp+41h] [rbp-F7h]
  char v95; // [rsp+42h] [rbp-F6h]
  PDEVICE_OBJECT AttachedDevice; // [rsp+48h] [rbp-F0h]
  NTSTATUS v97; // [rsp+50h] [rbp-E8h]
  PIO_STATUS_BLOCK v98; // [rsp+58h] [rbp-E0h]
  struct _KTHREAD *v99; // [rsp+60h] [rbp-D8h]
  PIRP Irp; // [rsp+68h] [rbp-D0h]
  __int16 v101; // [rsp+70h] [rbp-C8h] BYREF
  char v102; // [rsp+72h] [rbp-C6h]
  int v103; // [rsp+74h] [rbp-C4h]
  _QWORD v104[2]; // [rsp+78h] [rbp-C0h] BYREF
  PVOID v105; // [rsp+88h] [rbp-B0h] BYREF
  int v106[4]; // [rsp+90h] [rbp-A8h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp-98h] BYREF
  PVOID v108; // [rsp+A8h] [rbp-90h] BYREF
  PVOID v109; // [rsp+B0h] [rbp-88h] BYREF
  __int64 v110; // [rsp+B8h] [rbp-80h] BYREF
  __int64 v111; // [rsp+C0h] [rbp-78h] BYREF
  PVOID v112; // [rsp+C8h] [rbp-70h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D0h] [rbp-68h] BYREF
  char v114[8]; // [rsp+F0h] [rbp-48h] BYREF
  __int64 v115; // [rsp+F8h] [rbp-40h]
  void *retaddr; // [rsp+138h] [rbp+0h]

  v98 = IoStatusBlock;
  v6 = FileHandle;
  memset(v106, 0, sizeof(v106));
  Handle = 0LL;
  v94 = 0;
  v93 = 0;
  CurrentThread = KeGetCurrentThread();
  v99 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  if ( !PreviousMode )
  {
    v8 = FileInformationClass;
    if ( FileInformationClass == FileRenameInformationBypassAccessCheck )
    {
      v8 = FileRenameInformation;
    }
    else
    {
      if ( FileInformationClass != FileLinkInformationBypassAccessCheck )
      {
LABEL_32:
        v12 = IopSetOperationAccess[v8];
        goto LABEL_33;
      }
      v8 = FileLinkInformation;
    }
    v93 = 1;
    goto LABEL_32;
  }
  v8 = FileInformationClass;
  if ( (unsigned int)FileInformationClass >= FileDispositionInformationEx )
    return -1073741821;
  v9 = *((_BYTE *)IopSetOperationLength + (int)FileInformationClass);
  if ( !v9 )
    return -1073741821;
  if ( Length < v9 )
    return -1073741820;
  v10 = &IoStatusBlock->0;
  if ( (unsigned __int64)IoStatusBlock >= MmUserProbeAddress )
    v10 = (_DWORD *)MmUserProbeAddress;
  *v10 = *v10;
  if ( CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[7] )
  {
    if ( Length )
    {
      v11 = 4LL;
      if ( Length == 1 )
        v11 = 1LL;
      if ( ((v11 - 1) & (unsigned __int64)FileInformation) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)FileInformation + Length > MmUserProbeAddress
        || (char *)FileInformation + Length < FileInformation )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
      }
      v6 = FileHandle;
    }
  }
  else if ( Length )
  {
    if ( ((*((unsigned __int8 *)IopQuerySetAlignmentRequirement + (int)FileInformationClass) - 1) & (unsigned __int64)FileInformation) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)FileInformation + Length > MmUserProbeAddress
      || (char *)FileInformation + Length < FileInformation )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
  }
  v12 = IopSetOperationAccess[FileInformationClass];
  if ( FileInformationClass == FileLinkInformation )
  {
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    v13 = IoThreadToProcess(CurrentThread);
    SeCaptureSubjectContextEx(CurrentThread, v13, &SubjectContext);
    IsSandboxedToken = RtlIsSandboxedToken(&SubjectContext);
    SeReleaseSubjectContext(&SubjectContext);
    if ( IsSandboxedToken )
      v12 |= 0x100u;
  }
LABEL_33:
  v17 = ObReferenceObjectByHandle(v6, v12, (POBJECT_TYPE)IoFileObjectType, PreviousMode, &Object, 0LL);
  v19 = (char *)Object;
  v108 = Object;
  if ( v17 >= 0 )
  {
    v20 = (_DWORD *)*((_QWORD *)Object + 26);
    if ( v20 )
    {
      if ( (*v20 & 4) != 0 )
      {
        IsProcessAppContainer = IopIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process);
        v19 = (char *)Object;
        if ( IsProcessAppContainer )
        {
          ObfDereferenceObjectWithTag(Object, 0x746C6644u);
          v17 = -1073739504;
        }
      }
    }
  }
  v97 = v17;
  if ( v17 < 0 )
    return v17;
  v22 = (unsigned int *)(v19 + 80);
  if ( (*((_DWORD *)v19 + 20) & 0x800) != 0 )
  {
    AttachedDevice = IoGetAttachedDevice(*((PDEVICE_OBJECT *)v19 + 1));
  }
  else
  {
    v23 = *((_QWORD *)v19 + 2);
    if ( !v23 || (v24 = *(PDEVICE_OBJECT *)(v23 + 8)) == 0LL )
    {
      v25 = *(_QWORD *)(*((_QWORD *)v19 + 1) + 56LL);
      if ( !v25 || (v24 = *(PDEVICE_OBJECT *)(v25 + 8)) == 0LL )
        v24 = (PDEVICE_OBJECT)*((_QWORD *)v19 + 1);
    }
    p_AttachedDevice = (PIRP)&v24->AttachedDevice;
    Irp = (PIRP)&v24->AttachedDevice;
    if ( v24->AttachedDevice )
    {
      if ( *((_QWORD *)v19 + 26) )
      {
        FileObjectExtension = (PDEVICE_OBJECT *)IopGetFileObjectExtension((__int64)v19, 1, 0LL);
        if ( FileObjectExtension )
        {
          v28 = *FileObjectExtension;
          AttachedDevice = v28;
          if ( v28 )
          {
            if ( (unsigned __int8)IopVerifyDeviceObjectOnStack(v24, v28) )
              goto LABEL_55;
            p_AttachedDevice = Irp;
          }
        }
      }
      v29 = *(struct _DEVICE_OBJECT **)&p_AttachedDevice->Type;
      if ( *(_QWORD *)&p_AttachedDevice->Type )
      {
        do
        {
          v24 = v29;
          v29 = v29->AttachedDevice;
        }
        while ( v29 );
      }
    }
    AttachedDevice = v24;
  }
LABEL_55:
  if ( (*v22 & 2) == 0 )
  {
    v101 = 1;
    v102 = 6;
    v103 = 0;
    v104[1] = v104;
    v104[0] = v104;
    v50 = 0;
    goto LABEL_111;
  }
  v30 = KeGetCurrentThread();
  --v30->KernelApcDisable;
  v31 = (volatile __int32 *)Object;
  if ( !_InterlockedExchange((volatile __int32 *)Object + 29, 1) )
  {
    v32 = (volatile signed __int64 *)Object;
    if ( ObpTraceFlags )
      ObpPushStackInfo((_DWORD)Object - 48);
    v33 = _InterlockedIncrement64(v32 - 6);
    if ( v33 <= 1 )
      KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)v32, 0x10uLL, v33);
    v19 = (char *)Object;
    goto LABEL_63;
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  v19 = (char *)Object;
  v17 = IopAcquireFileObjectLock(Object);
  v97 = v17;
  if ( !v95 )
  {
LABEL_63:
    if ( v8 == FilePositionInformation )
    {
      if ( Length < 8 )
      {
        _InterlockedExchange(v31 + 29, 0);
        v34 = Object;
        if ( *((_DWORD *)Object + 28) )
          KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
        ObfDereferenceObjectWithTag(v34, 0x746C6644u);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        ObfDereferenceObjectWithTag(Object, 0x746C6644u);
        return -1073741820;
      }
      v35 = *(_QWORD *)FileInformation;
      v115 = *(_QWORD *)FileInformation;
      if ( (*v22 & 8) != 0
        && (SectorSize = AttachedDevice->SectorSize) != 0
        && ((SectorSize - 1) & (unsigned int)v35) != 0
        || v35 < 0 )
      {
        v17 = -1073741811;
      }
      else
      {
        *((_QWORD *)v19 + 13) = v35;
        v37 = v98;
        v98->Status = 0;
        v37->Information = 0LL;
      }
      v38 = KeGetCurrentThread();
      v38->OtherTransferCount += Length;
      __addgsqword(0x2E78u, Length);
      _InterlockedExchange((volatile __int32 *)Object + 29, 0);
      v39 = (char *)Object;
      if ( *((_DWORD *)Object + 28) )
        KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
      v40 = v39 - 48;
      if ( ObpTraceFlags )
        ObpPushStackInfo((_DWORD)v40);
      v41 = _InterlockedExchangeAdd64((volatile signed __int64 *)v40, 0xFFFFFFFFFFFFFFFFuLL);
      v42 = v41 <= 1;
      v43 = v41 - 1;
      if ( v42 )
      {
        if ( *((_QWORD *)v40 + 1) )
          KeBugCheckEx(
            0x18u,
            ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v40[24] ^ (unsigned __int64)BYTE1(v40)],
            (ULONG_PTR)Object,
            1uLL,
            *((_QWORD *)v40 + 1));
        if ( v43 < 0 )
          KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 2uLL, v43);
        if ( KeAreAllApcsDisabled() )
        {
          ObpDeferObjectDeletion(v40);
        }
        else
        {
          v44 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v40);
          if ( v44 )
            ObpHandleRevocationBlockRemoveObject(v44);
          if ( ObpTraceFlags )
            ObpDeregisterObject(v40);
          ObpRemoveObjectRoutine(v40, 0LL);
        }
      }
      v45 = KeGetCurrentThread();
      v46 = v45->KernelApcDisable + 1;
      v45->KernelApcDisable = v46;
      if ( !v46
        && ($E81C3296F15336D9BF9B2D43BB137B25 *)v45->ApcState.ApcListHead[0].Flink != &v45->152
        && !v45->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery((__int64)v45);
      }
      if ( ObpTraceFlags )
        ObpPushStackInfo((_DWORD)v40);
      v47 = _InterlockedExchangeAdd64((volatile signed __int64 *)v40, 0xFFFFFFFFFFFFFFFFuLL);
      v42 = v47 <= 1;
      v48 = v47 - 1;
      if ( v42 )
      {
        if ( *((_QWORD *)v40 + 1) )
          KeBugCheckEx(
            0x18u,
            ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v40[24] ^ (unsigned __int64)BYTE1(v40)],
            (ULONG_PTR)Object,
            1uLL,
            *((_QWORD *)v40 + 1));
        if ( v48 < 0 )
          KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 2uLL, v48);
        if ( KeAreAllApcsDisabled() )
        {
          ObpDeferObjectDeletion(v40);
        }
        else
        {
          v49 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v40);
          if ( v49 )
            ObpHandleRevocationBlockRemoveObject(v49);
          if ( ObpTraceFlags )
            ObpDeregisterObject(v40);
          ObpRemoveObjectRoutine(v40, 0LL);
        }
      }
      return v17;
    }
    v50 = 1;
LABEL_111:
    v91 = v50;
    IopResetEvent((__int64)v19, v16, v18);
    if ( v8 == FileTrackingInformation )
    {
      if ( Length >= 0x10 )
      {
        v52 = (__int16 *)(v19 + 152);
        if ( !v50 )
          v52 = &v101;
        v17 = IopTrackLink((int)v19, (int)v106, (int)FileInformation, Length, (__int64)v52, PreviousMode);
        v97 = v17;
        if ( v17 >= 0 )
        {
          v53 = &v98->0;
          v98->Information = 0LL;
          *v53 = v17;
        }
      }
      else
      {
        v17 = -1073741820;
      }
      if ( v50 )
      {
        _InterlockedExchange((volatile __int32 *)v19 + 29, 0);
        v54 = Object;
        if ( *((_DWORD *)Object + 28) )
          KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
        ObfDereferenceObjectWithTag(v54, 0x746C6644u);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        v19 = (char *)Object;
      }
      goto LABEL_122;
    }
    LOBYTE(v51) = v50 == 0;
    v55 = (IRP *)pIoAllocateIrp(AttachedDevice, (unsigned __int8)AttachedDevice->StackSize, v51, retaddr);
    v57 = v55;
    Irp = v55;
    if ( !v55 )
    {
      IopAllocateIrpCleanup(v19, 0LL);
      return -1073741670;
    }
    v55->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)v19;
    v55->Tail.Overlay.Thread = v99;
    v55->RequestorMode = PreviousMode;
    if ( v50 )
    {
      v55->UserEvent = 0LL;
      v58 = (int *)&v98->0;
      v57->AllocationFlags |= 2u;
    }
    else
    {
      if ( PreviousMode == 1 )
        v94 = KeSetKernelStackSwapEnable(0);
      v57->UserEvent = (PKEVENT)&v101;
      v58 = v106;
      v57->Flags = 4;
    }
    v57->UserIosb = (PIO_STATUS_BLOCK)v58;
    v57->Overlay.AllocationSize.QuadPart = 0LL;
    CurrentStackLocation = v57->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].MajorFunction = 6;
    CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v19;
    v57->AssociatedIrp.MasterIrp = 0LL;
    v57->MdlAddress = 0LL;
    v60 = (struct _IRP *)sub_14008E44C(v56, Length);
    v99 = (struct _KTHREAD *)v60;
    v57->AssociatedIrp.MasterIrp = v60;
    memmove(v60, FileInformation, Length);
    if ( ((unsigned int)(v8 - 19) <= 1 || v8 == FilePositionInformation) && v99->Header.SignalState < 0 )
      RtlRaiseStatus(-1073741811);
    v57->Flags |= 0x830u;
    CurrentStackLocation[-1].Parameters.Read.Length = Length;
    CurrentStackLocation[-1].Parameters.Create.Options = v8;
    IopQueueThreadIrp((__int64)v57, v61, v62);
    v63 = KeGetCurrentThread();
    ++v63->OtherOperationCount;
    __incgsdword(0x2E64u);
    if ( v8 == FileModeInformation )
    {
      MasterIrp = v57->AssociatedIrp.MasterIrp;
      v65 = *(_DWORD *)&MasterIrp->Type;
      if ( (*(_DWORD *)&MasterIrp->Type & 0xFFFFFFC9) == 0
        && ((v65 & 0x30) == 0 || (*v22 & 2) != 0)
        && ((v65 & 0x30) != 0 || (*v22 & 2) == 0)
        && (*(_DWORD *)&MasterIrp->Type & 0x30) != 0x30 )
      {
        v66 = *v22;
        if ( (*v22 & 8) == 0 )
        {
          if ( (v65 & 2) != 0 )
            v67 = v66 | 0x10;
          else
            v67 = v66 & 0xFFFFFFEF;
          *v22 = v67;
        }
        if ( (*(_DWORD *)&MasterIrp->Type & 4) != 0 )
          *v22 |= 0x20u;
        else
          *v22 &= ~0x20u;
        v68 = *v22;
        if ( (*v22 & 2) != 0 )
        {
          if ( (*(_DWORD *)&MasterIrp->Type & 0x10) != 0 )
            v69 = v68 | 4;
          else
            v69 = v68 & 0xFFFFFFFB;
          *v22 = v69;
        }
        v17 = 0;
        goto LABEL_156;
      }
      goto LABEL_155;
    }
    if ( (unsigned int)(v8 - 10) <= 1 || v8 == FileMoveClusterInformation )
    {
      v82 = v57->AssociatedIrp.MasterIrp;
      Flags = v82->Flags;
      if ( !Flags || (Flags & 1) != 0 || Length - 20 < Flags )
        goto LABEL_216;
      if ( v8 == FileMoveClusterInformation )
      {
        CurrentStackLocation[-1].Parameters.Create.EaLength = *(_DWORD *)&v82->Type;
      }
      else
      {
        CurrentStackLocation[-1].Parameters.SetFile.ReplaceIfExists = v82->Type;
        if ( v93 )
          CurrentStackLocation[-1].Flags |= 1u;
      }
      if ( *((_WORD *)&v82->Flags + 2) == 92 || v82->MdlAddress )
      {
        v84 = IopOpenLinkOrRenameTarget(&Handle, v57, v82, Object);
        v17 = v84;
        v71 = v91;
        if ( v84 < 0 )
        {
          v57->IoStatus.Status = v84;
          goto LABEL_219;
        }
LABEL_163:
        v17 = IopCallDriverReference((__int64)AttachedDevice, v57, v71, Object, 2);
LABEL_219:
        v80 = PreviousMode;
        goto LABEL_220;
      }
    }
    else
    {
      if ( v8 == FileShortNameInformation )
      {
        v70 = v57->AssociatedIrp.MasterIrp;
        if ( Length - 4 >= *(_DWORD *)&v70->Type )
        {
          v71 = v91;
          if ( *(&v70->Size + 1) == 92 )
          {
            v17 = -1073741811;
LABEL_218:
            v57->IoStatus.Status = v17;
            goto LABEL_219;
          }
          goto LABEL_163;
        }
LABEL_216:
        v17 = -1073741811;
        goto LABEL_217;
      }
      if ( v8 != FileDispositionInformation )
      {
        switch ( v8 )
        {
          case FileCompletionInformation:
            v72 = (HANDLE *)v57->AssociatedIrp.MasterIrp;
            v99 = (struct _KTHREAD *)v72;
            v73 = Object;
            if ( !*((_QWORD *)Object + 22) && (*v22 & 2) == 0 )
            {
              v17 = ObReferenceObjectByHandle(*v72, 2u, IoCompletionObjectType, PreviousMode, &v105, 0LL);
              if ( v17 >= 0 )
              {
                PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x63436F49u);
                if ( PoolWithTag )
                {
                  v75 = (KSPIN_LOCK *)((char *)Object + 184);
                  v76 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Object + 23);
                  if ( v73[22] )
                  {
                    KeReleaseSpinLock(v75, v76);
                    ExFreePoolWithTag(PoolWithTag, 0);
                    ObfDereferenceObjectWithTag(v105, 0x746C6644u);
                    v17 = -1073741752;
                  }
                  else
                  {
                    *v22 &= ~0x400u;
                    *PoolWithTag = v105;
                    PoolWithTag[1] = v99->Header.WaitListHead.Flink;
                    v73[22] = PoolWithTag;
                    v17 = 0;
                    KeReleaseSpinLock(v75, v76);
                  }
                }
                else
                {
                  ObfDereferenceObjectWithTag(v105, 0x746C6644u);
                  v17 = -1073741670;
                }
              }
              goto LABEL_156;
            }
            break;
          case FileReplaceCompletionInformation:
            v77 = v57->AssociatedIrp.MasterIrp;
            v78 = 0LL;
            v112 = 0LL;
            if ( *((_QWORD *)Object + 22) )
            {
              if ( *(_QWORD *)&v77->Type )
              {
                v17 = ObReferenceObjectByHandle(
                        *(HANDLE *)&v77->Type,
                        2u,
                        IoCompletionObjectType,
                        PreviousMode,
                        &v109,
                        0LL);
                v78 = v109;
                v112 = v109;
              }
              if ( v17 >= 0 )
              {
                v17 = IopReplaceCompletionPort(Object, v78, v77->MdlAddress);
                if ( v78 )
                {
                  ObfDereferenceObjectWithTag(v78, 0x746C6644u);
                  v57->IoStatus.Information = 0LL;
                  goto LABEL_217;
                }
              }
LABEL_156:
              v57->IoStatus.Information = 0LL;
LABEL_217:
              v71 = v91;
              goto LABEL_218;
            }
            break;
          case FileIoCompletionNotificationInformation:
            v79 = v57->AssociatedIrp.MasterIrp;
            if ( (*v22 & 2) != 0 )
            {
              v17 = -1073741811;
            }
            else
            {
              v17 = 0;
              if ( (*(_DWORD *)&v79->Type & 1) != 0 )
                *v22 |= 0x2000000u;
              if ( (*(_DWORD *)&v79->Type & 2) != 0 )
                *v22 |= 0x4000000u;
              if ( (*(_DWORD *)&v79->Type & 4) != 0 )
                *v22 |= 0x8000000u;
            }
            v57->IoStatus.Information = 0LL;
            goto LABEL_217;
          case FileIoStatusBlockRangeInformation:
            v80 = PreviousMode;
            if ( SeSinglePrivilegeCheck(SeLockMemoryPrivilege, PreviousMode) )
            {
              if ( (*v22 & 2) != 0 )
                v17 = -1073741811;
              else
                v17 = IopSetFileObjectIosbRange(Object, v57);
            }
            else
            {
              v17 = -1073741727;
            }
            v57->IoStatus.Status = v17;
            v57->IoStatus.Information = 0LL;
            v71 = v91;
LABEL_220:
            if ( v17 == 259 )
            {
              v85 = v80;
              if ( !v71 )
              {
                v88 = KeWaitForSingleObject(&v101, Executive, v80, 0, 0LL);
                if ( v88 == 257 || v88 == 192 )
                  IopCancelAlertedRequest(&v101, v57);
                v17 = v106[0];
                *v98 = *(PIO_STATUS_BLOCK)v106;
                goto LABEL_235;
              }
              v86 = (volatile __int32 *)Object;
              v17 = IopWaitForSynchronousIo(v57, (__int64)Object, v85);
              _InterlockedExchange(v86 + 29, 0);
              v87 = Object;
              if ( *((_DWORD *)Object + 28) )
                KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
            }
            else
            {
              if ( !v71 )
                v57->UserEvent = 0LL;
              v57->UserIosb = v98;
              CurrentIrql = KeGetCurrentIrql();
              __writecr8(1uLL);
              IopCompleteRequest((__int64)&v57->Tail, (__int64)v114, (__int64)&v110, (ULONG_PTR *)&v108, &v110);
              __writecr8(CurrentIrql);
              if ( !v71 )
                goto LABEL_235;
              _InterlockedExchange((volatile __int32 *)Object + 29, 0);
              v87 = Object;
              if ( *((_DWORD *)Object + 28) )
                KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
            }
            ObfDereferenceObjectWithTag(v87, 0x746C6644u);
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
LABEL_235:
            if ( v94 )
              KeSetKernelStackSwapEnable(1u);
            if ( Handle )
              ObCloseHandle(Handle, 0);
            return v17;
          case FileIoPriorityHintInformation:
            v81 = v57->AssociatedIrp.MasterIrp;
            if ( *(_DWORD *)&v81->Type <= 2u )
            {
              v17 = IopAllocateFileObjectExtension((__int64)Object, &v111);
              if ( v17 >= 0 )
                *(_DWORD *)(v111 + 72) = *(_DWORD *)&v81->Type + 1;
              goto LABEL_156;
            }
            break;
          default:
            goto LABEL_167;
        }
LABEL_155:
        v17 = -1073741811;
        goto LABEL_156;
      }
      if ( v57->AssociatedIrp.MasterIrp->Type )
        CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = (PNAMED_PIPE_CREATE_PARAMETERS)FileHandle;
    }
LABEL_167:
    v71 = v91;
    goto LABEL_163;
  }
LABEL_122:
  ObfDereferenceObjectWithTag(v19, 0x746C6644u);
  return v17;
}
