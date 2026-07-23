/*
 * XREFs of NtSetInformationFile @ 0x1400793E0
 * Callers:
 *     <none>
 * Callees:
 *     IoGetAttachedDevice @ 0x14002DA40 (IoGetAttachedDevice.c)
 *     IopQueueThreadIrp @ 0x14002DCF0 (IopQueueThreadIrp.c)
 *     IopResetEvent @ 0x14002E140 (IopResetEvent.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x1400313E0 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     KeAreAllApcsDisabled @ 0x14004EDE0 (KeAreAllApcsDisabled.c)
 *     IopCompleteRequest @ 0x1400543C0 (IopCompleteRequest.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     IopVerifierExAllocatePoolWithQuota @ 0x140079FA0 (IopVerifierExAllocatePoolWithQuota.c)
 *     IopGetFileObjectExtension @ 0x14007B5A0 (IopGetFileObjectExtension.c)
 *     KeSetKernelStackSwapEnable @ 0x14007B664 (KeSetKernelStackSwapEnable.c)
 *     IopVerifyDeviceObjectOnStack @ 0x14009E038 (IopVerifyDeviceObjectOnStack.c)
 *     ObpDeferObjectDeletion @ 0x1400A652C (ObpDeferObjectDeletion.c)
 *     IopIsProcessAppContainer @ 0x1400B06B4 (IopIsProcessAppContainer.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     IopWaitForSynchronousIo @ 0x1400C8360 (IopWaitForSynchronousIo.c)
 *     IopAllocateFileObjectExtension @ 0x1400E9400 (IopAllocateFileObjectExtension.c)
 *     IopCallDriverReference @ 0x1400E98EC (IopCallDriverReference.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     IopReplaceCompletionPort @ 0x1401C960C (IopReplaceCompletionPort.c)
 *     ObpPushStackInfo @ 0x1401FEBEC (ObpPushStackInfo.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     IopAcquireFileObjectLock @ 0x1403EE090 (IopAcquireFileObjectLock.c)
 *     RtlIsSandboxedToken @ 0x1404118D0 (RtlIsSandboxedToken.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     ObpRemoveObjectRoutine @ 0x14041A5F0 (ObpRemoveObjectRoutine.c)
 *     SeCaptureSubjectContextEx @ 0x14041E6F0 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x14041E870 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1404A5760 (ObpHandleRevocationBlockRemoveObject.c)
 *     IopTrackLink @ 0x1404B0AB8 (IopTrackLink.c)
 *     IopOpenLinkOrRenameTarget @ 0x1404BCA54 (IopOpenLinkOrRenameTarget.c)
 *     IopCancelAlertedRequest @ 0x1404D2CCC (IopCancelAlertedRequest.c)
 *     ObCloseHandle @ 0x1404EF6CC (ObCloseHandle.c)
 *     IopAllocateIrpCleanup @ 0x140620E74 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x140621488 (IopExceptionCleanup.c)
 *     IopSetFileObjectIosbRange @ 0x140622C98 (IopSetFileObjectIosbRange.c)
 *     ObpDeregisterObject @ 0x14066782C (ObpDeregisterObject.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass)
{
  size_t v5; // r15
  struct _KTHREAD *CurrentThread; // rbx
  KPROCESSOR_MODE PreviousMode; // r14
  FILE_INFORMATION_CLASS v8; // r13d
  unsigned __int8 v9; // al
  __int64 v10; // rcx
  __int64 v11; // rax
  ACCESS_MASK v12; // edi
  __int64 v13; // rdx
  int v14; // ebx
  __int64 v15; // r8
  __int64 v16; // r9
  char *v17; // rdi
  _DWORD *v18; // rax
  unsigned int *v19; // r12
  __int64 v20; // rbx
  struct _DEVICE_OBJECT *v21; // rbx
  struct _DEVICE_OBJECT *i; // rax
  PDEVICE_OBJECT AttachedDevice; // r14
  struct _KTHREAD *v24; // rax
  volatile __int32 *v25; // r14
  volatile signed __int64 *v26; // rbx
  signed __int64 v27; // rax
  __int64 v28; // rax
  NTSTATUS v29; // r14d
  struct _KTHREAD *v30; // rcx
  PVOID v31; // rdi
  __int64 v32; // rdi
  signed __int64 v33; // rax
  bool v34; // cc
  signed __int64 v35; // rax
  struct _KTHREAD *v36; // rcx
  __int16 v37; // ax
  signed __int64 v38; // rbx
  signed __int64 v39; // rbx
  struct _DEVICE_OBJECT **FileObjectExtension; // rax
  char v42; // bl
  __int64 v43; // r8
  IRP *v44; // rax
  __int64 v45; // rcx
  IRP *v46; // r14
  PIO_STATUS_BLOCK v47; // rax
  __int64 v48; // rax
  int *PoolWithQuota; // rdi
  __int64 v50; // rbx
  __int64 v51; // r8
  __int64 v52; // r9
  struct _KTHREAD *v53; // rax
  unsigned __int64 v54; // rax
  __int64 v55; // rcx
  unsigned __int8 v56; // di
  NTSTATUS v57; // ebx
  KPROCESSOR_MODE v58; // r15
  unsigned __int8 CurrentIrql; // bl
  PVOID v60; // rbx
  __int64 v61; // rdx
  __int64 v62; // r8
  __int64 v63; // r9
  struct _DEVICE_OBJECT *v64; // rcx
  __int64 v65; // rbx
  struct _IRP *v66; // r13
  KSPIN_LOCK *v67; // rdi
  _QWORD *PoolWithTag; // rbx
  KIRQL v69; // al
  KSPIN_LOCK *v70; // rcx
  struct _IRP *v71; // rdx
  struct _IRP *v72; // r8
  unsigned int Flags; // ecx
  char Type; // al
  int v75; // eax
  __int16 *v76; // rax
  PVOID v77; // rbx
  __int64 v78; // rdx
  __int64 v79; // r8
  __int64 v80; // r9
  USHORT SectorSize; // cx
  volatile __int32 *v82; // rbx
  PVOID v83; // rbx
  __int64 v84; // rdx
  __int64 v85; // r8
  __int64 v86; // r9
  char IsSandboxedToken; // bl
  struct _IRP *v88; // rdi
  struct _IRP *v89; // r15
  PVOID v90; // rdi
  char IsProcessAppContainer; // al
  PVOID v93; // rbx
  __int64 v94; // rdx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // rax
  __int64 v98; // rax
  struct _IRP *MasterIrp; // r8
  int v100; // edx
  unsigned int v101; // eax
  unsigned int v102; // eax
  unsigned int v103; // ecx
  unsigned int v104; // ecx
  struct _IRP *v105; // rcx
  NTSTATUS v106; // eax
  KPROCESSOR_MODE v107; // [rsp+30h] [rbp-108h]
  char v108; // [rsp+31h] [rbp-107h]
  int v109; // [rsp+34h] [rbp-104h]
  char v110; // [rsp+38h] [rbp-100h]
  PVOID Object; // [rsp+40h] [rbp-F8h] BYREF
  BOOLEAN v112; // [rsp+48h] [rbp-F0h]
  char v113; // [rsp+49h] [rbp-EFh]
  PDEVICE_OBJECT v114; // [rsp+50h] [rbp-E8h]
  PIRP Irp; // [rsp+58h] [rbp-E0h]
  PVOID v116; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v117; // [rsp+68h] [rbp-D0h]
  __int16 v118; // [rsp+70h] [rbp-C8h] BYREF
  char v119; // [rsp+72h] [rbp-C6h]
  int v120; // [rsp+74h] [rbp-C4h]
  _QWORD v121[2]; // [rsp+78h] [rbp-C0h] BYREF
  int v122[4]; // [rsp+88h] [rbp-B0h] BYREF
  HANDLE v123; // [rsp+98h] [rbp-A0h] BYREF
  PVOID v124; // [rsp+A0h] [rbp-98h] BYREF
  PVOID v125; // [rsp+A8h] [rbp-90h]
  __int64 v126; // [rsp+B0h] [rbp-88h] BYREF
  PVOID v127; // [rsp+B8h] [rbp-80h] BYREF
  _QWORD v128[2]; // [rsp+C0h] [rbp-78h] BYREF
  char v129[8]; // [rsp+D0h] [rbp-68h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D8h] [rbp-60h] BYREF
  void *retaddr; // [rsp+138h] [rbp+0h]

  v5 = Length;
  memset(v122, 0, sizeof(v122));
  v123 = 0LL;
  v112 = 0;
  v110 = 0;
  CurrentThread = KeGetCurrentThread();
  v117 = (__int64)CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v107 = PreviousMode;
  if ( !PreviousMode )
  {
    v8 = FileInformationClass;
    switch ( FileInformationClass )
    {
      case FileRenameInformationBypassAccessCheck:
        v8 = FileRenameInformation;
        break;
      case FileRenameInformationExBypassAccessCheck:
        v8 = FileRenameInformationEx;
        break;
      case FileLinkInformationBypassAccessCheck:
        v8 = FileLinkInformation;
        break;
      default:
LABEL_65:
        v12 = IopSetOperationAccess[v8];
        goto LABEL_25;
    }
    v110 = 1;
    goto LABEL_65;
  }
  v8 = FileInformationClass;
  if ( (unsigned int)FileInformationClass >= FileDesiredStorageClassInformation )
    return -1073741821;
  v9 = *((_BYTE *)IopSetOperationLength + (int)FileInformationClass);
  if ( !v9 )
    return -1073741821;
  if ( Length < v9 )
    return -1073741820;
  v10 = (__int64)IoStatusBlock;
  if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
    v10 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v10 = *(_DWORD *)v10;
  if ( CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[7] )
  {
    if ( !Length )
      goto LABEL_24;
    if ( Length == 1 )
      v11 = 1LL;
    else
      v11 = 4LL;
    if ( ((v11 - 1) & (unsigned __int64)FileInformation) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)FileInformation + Length <= 0x7FFFFFFF0000LL
      && (char *)FileInformation + Length >= FileInformation )
    {
      goto LABEL_24;
    }
  }
  else
  {
    if ( !Length )
      goto LABEL_24;
    if ( ((*((unsigned __int8 *)IopQuerySetAlignmentRequirement + (int)FileInformationClass) - 1) & (unsigned __int64)FileInformation) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)FileInformation + Length <= 0x7FFFFFFF0000LL
      && (char *)FileInformation + Length >= FileInformation )
    {
      goto LABEL_24;
    }
  }
  MEMORY[0x7FFFFFFF0000] = 0;
LABEL_24:
  v12 = IopSetOperationAccess[FileInformationClass];
  if ( FileInformationClass == FileLinkInformation )
  {
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    SeCaptureSubjectContextEx(CurrentThread, CurrentThread->Process, &SubjectContext);
    IsSandboxedToken = RtlIsSandboxedToken(&SubjectContext);
    SeReleaseSubjectContext(&SubjectContext);
    if ( IsSandboxedToken )
      v12 |= 0x100u;
  }
LABEL_25:
  v14 = ObReferenceObjectByHandle(FileHandle, v12, (POBJECT_TYPE)IoFileObjectType, PreviousMode, &Object, 0LL);
  v109 = v14;
  v17 = (char *)Object;
  v127 = Object;
  if ( v14 >= 0 )
  {
    v18 = (_DWORD *)*((_QWORD *)Object + 26);
    if ( v18 )
    {
      if ( (*v18 & 4) != 0 )
      {
        IsProcessAppContainer = IopIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process);
        v17 = (char *)Object;
        if ( IsProcessAppContainer )
        {
          ObfDereferenceObjectWithTag(Object, 0x746C6644u);
          v14 = -1073739504;
          v109 = -1073739504;
        }
      }
    }
  }
  LODWORD(Irp) = v14;
  if ( v14 < 0 )
    return v14;
  v19 = (unsigned int *)(v17 + 80);
  if ( (*((_DWORD *)v17 + 20) & 0x800) == 0 )
  {
    v20 = *((_QWORD *)v17 + 2);
    if ( !v20 || (v21 = *(struct _DEVICE_OBJECT **)(v20 + 8)) == 0LL )
    {
      v65 = *(_QWORD *)(*((_QWORD *)v17 + 1) + 56LL);
      if ( !v65 || (v21 = *(struct _DEVICE_OBJECT **)(v65 + 8)) == 0LL )
        v21 = (struct _DEVICE_OBJECT *)*((_QWORD *)v17 + 1);
    }
    if ( v21->AttachedDevice )
    {
      if ( *((_QWORD *)v17 + 26) )
      {
        FileObjectExtension = (struct _DEVICE_OBJECT **)IopGetFileObjectExtension(v17, 1LL, 0LL, v16);
        if ( FileObjectExtension )
        {
          v64 = *FileObjectExtension;
          v114 = v64;
          if ( v64 )
          {
            if ( (unsigned __int8)IopVerifyDeviceObjectOnStack(v21, v64) )
            {
              AttachedDevice = v114;
              goto LABEL_36;
            }
          }
        }
      }
      for ( i = v21->AttachedDevice; i; i = i->AttachedDevice )
        v21 = i;
    }
    AttachedDevice = v21;
    v114 = v21;
    goto LABEL_36;
  }
  AttachedDevice = IoGetAttachedDevice(*((PDEVICE_OBJECT *)v17 + 1));
  v114 = AttachedDevice;
LABEL_36:
  if ( (*v19 & 2) == 0 )
  {
    v118 = 1;
    v119 = 6;
    v120 = 0;
    v121[1] = v121;
    v121[0] = v121;
    v42 = 0;
    goto LABEL_67;
  }
  v24 = KeGetCurrentThread();
  --v24->KernelApcDisable;
  v25 = (volatile __int32 *)Object;
  if ( !_InterlockedExchange((volatile __int32 *)Object + 29, 1) )
  {
    v26 = (volatile signed __int64 *)((char *)Object - 48);
    if ( ObpTraceFlags )
      ObpPushStackInfo((_DWORD)Object - 48);
    v27 = _InterlockedIncrement64(v26);
    if ( v27 <= 1 )
      KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(v26 + 6), 0x10uLL, v27);
    v17 = (char *)Object;
    goto LABEL_42;
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v13, v15, v16);
  v17 = (char *)Object;
  v14 = IopAcquireFileObjectLock(Object);
  v109 = v14;
  LODWORD(Irp) = v14;
  if ( v113 )
  {
    ObfDereferenceObjectWithTag(v17, 0x746C6644u);
    return v14;
  }
LABEL_42:
  if ( v8 == FilePositionInformation )
  {
    if ( (unsigned int)v5 >= 8 )
    {
      v28 = *(_QWORD *)FileInformation;
      v128[1] = *(_QWORD *)FileInformation;
      if ( (*v19 & 8) != 0 && (SectorSize = v114->SectorSize) != 0 && ((SectorSize - 1) & (unsigned int)v28) != 0
        || v28 < 0 )
      {
        v29 = -1073741811;
      }
      else
      {
        *((_QWORD *)v17 + 13) = v28;
        IoStatusBlock->Status = 0;
        IoStatusBlock->Information = 0LL;
        v29 = v109;
      }
      v30 = KeGetCurrentThread();
      v30->OtherTransferCount += (unsigned int)v5;
      __addgsqword(0x2E78u, (unsigned int)v5);
      _InterlockedExchange((volatile __int32 *)Object + 29, 0);
      v31 = Object;
      if ( *((_DWORD *)Object + 28) )
        KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
      v32 = (__int64)v31 - 48;
      if ( ObpTraceFlags )
        ObpPushStackInfo(v32);
      v33 = _InterlockedExchangeAdd64((volatile signed __int64 *)v32, 0xFFFFFFFFFFFFFFFFuLL);
      v34 = v33 <= 1;
      v35 = v33 - 1;
      if ( v34 )
      {
        if ( *(_QWORD *)(v32 + 8) )
          KeBugCheckEx(
            0x18u,
            ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v32 + 24) ^ (unsigned __int64)BYTE1(v32)],
            (ULONG_PTR)Object,
            1uLL,
            *(_QWORD *)(v32 + 8));
        if ( v35 < 0 )
          KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 2uLL, v35);
        if ( KeAreAllApcsDisabled() )
        {
          ObpDeferObjectDeletion(v32);
        }
        else
        {
          v97 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v32);
          if ( v97 )
            ObpHandleRevocationBlockRemoveObject(v97);
          if ( ObpTraceFlags )
            ObpDeregisterObject(v32);
          ObpRemoveObjectRoutine(v32, 0LL);
        }
      }
      v36 = KeGetCurrentThread();
      v37 = v36->KernelApcDisable + 1;
      v36->KernelApcDisable = v37;
      if ( !v37
        && ($2B8565053CDC740D4E4887693DD8AC9E *)v36->ApcState.ApcListHead[0].Flink != &v36->152
        && !v36->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery(v36);
      }
      if ( ObpTraceFlags )
        ObpPushStackInfo(v32);
      v38 = _InterlockedExchangeAdd64((volatile signed __int64 *)v32, 0xFFFFFFFFFFFFFFFFuLL);
      v34 = v38 <= 1;
      v39 = v38 - 1;
      if ( v34 )
      {
        if ( *(_QWORD *)(v32 + 8) )
          KeBugCheckEx(
            0x18u,
            ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v32 + 24) ^ (unsigned __int64)BYTE1(v32)],
            (ULONG_PTR)Object,
            1uLL,
            *(_QWORD *)(v32 + 8));
        if ( v39 < 0 )
          KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 2uLL, v39);
        if ( KeAreAllApcsDisabled() )
        {
          ObpDeferObjectDeletion(v32);
        }
        else
        {
          v98 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v32);
          if ( v98 )
            ObpHandleRevocationBlockRemoveObject(v98);
          if ( ObpTraceFlags )
            ObpDeregisterObject(v32);
          ObpRemoveObjectRoutine(v32, 0LL);
        }
      }
      return v29;
    }
    _InterlockedExchange(v25 + 29, 0);
    v93 = Object;
    if ( *((_DWORD *)Object + 28) )
      KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
    ObfDereferenceObjectWithTag(v93, 0x746C6644u);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v94, v95, v96);
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
    return -1073741820;
  }
  v42 = 1;
  AttachedDevice = v114;
LABEL_67:
  v108 = v42;
  IopResetEvent((__int64)v17);
  if ( v8 == FileTrackingInformation )
  {
    if ( (unsigned int)v5 < 0x10 )
    {
      v29 = -1073741820;
    }
    else
    {
      if ( v42 )
        v76 = (__int16 *)(v17 + 152);
      else
        v76 = &v118;
      v29 = IopTrackLink((int)v17, (int)v122, (int)FileInformation, v5, (__int64)v76, v107);
      LODWORD(Irp) = v29;
      if ( v29 >= 0 )
      {
        IoStatusBlock->Information = 0LL;
        IoStatusBlock->Status = v29;
      }
    }
    if ( v42 )
    {
      _InterlockedExchange((volatile __int32 *)v17 + 29, 0);
      v77 = Object;
      if ( *((_DWORD *)Object + 28) )
        KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
      ObfDereferenceObjectWithTag(v77, 0x746C6644u);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v78, v79, v80);
      v17 = (char *)Object;
    }
    ObfDereferenceObjectWithTag(v17, 0x746C6644u);
    return v29;
  }
  LOBYTE(v43) = v42 == 0;
  v44 = (IRP *)pIoAllocateIrp(AttachedDevice, (unsigned __int8)AttachedDevice->StackSize, v43, retaddr);
  v46 = v44;
  Irp = v44;
  if ( v44 )
  {
    v44->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)v17;
    v44->Tail.Overlay.Thread = (PETHREAD)v117;
    v44->RequestorMode = v107;
    if ( v42 )
    {
      v44->UserEvent = 0LL;
      v47 = IoStatusBlock;
      v46->AllocationFlags |= 2u;
    }
    else
    {
      if ( v107 == 1 )
        v112 = KeSetKernelStackSwapEnable(0);
      v46->UserEvent = (PKEVENT)&v118;
      v47 = (PIO_STATUS_BLOCK)v122;
      v46->Flags = 4;
    }
    v46->UserIosb = v47;
    v46->Overlay.AllocationSize.QuadPart = 0LL;
    v48 = (__int64)&v46->Tail.Overlay.CurrentStackLocation[-1];
    v117 = v48;
    *(_BYTE *)v48 = 6;
    *(_QWORD *)(v48 + 48) = v17;
    v46->AssociatedIrp.MasterIrp = 0LL;
    v46->MdlAddress = 0LL;
    PoolWithQuota = (int *)IopVerifierExAllocatePoolWithQuota(v45, v5);
    v46->AssociatedIrp.MasterIrp = (struct _IRP *)PoolWithQuota;
    memmove(PoolWithQuota, FileInformation, v5);
    if ( ((unsigned int)(v8 - 19) <= 1 || v8 == FilePositionInformation) && PoolWithQuota[1] < 0 )
      RtlRaiseStatus(-1073741811);
    v46->Flags |= 0x830u;
    v50 = v117;
    *(_DWORD *)(v117 + 8) = v5;
    *(_DWORD *)(v50 + 16) = v8;
    IopQueueThreadIrp((__int64)v46);
    v53 = KeGetCurrentThread();
    ++v53->OtherOperationCount;
    __incgsdword(0x2E64u);
    if ( v8 == FileModeInformation )
    {
      MasterIrp = v46->AssociatedIrp.MasterIrp;
      v100 = *(_DWORD *)&MasterIrp->Type;
      if ( (*(_DWORD *)&MasterIrp->Type & 0xFFFFFFC9) == 0
        && ((v100 & 0x30) == 0 || (*v19 & 2) != 0)
        && ((v100 & 0x30) != 0 || (*v19 & 2) == 0)
        && (*(_DWORD *)&MasterIrp->Type & 0x30) != 0x30 )
      {
        v101 = *v19;
        if ( (*v19 & 8) == 0 )
        {
          if ( (v100 & 2) != 0 )
            v102 = v101 | 0x10;
          else
            v102 = v101 & 0xFFFFFFEF;
          *v19 = v102;
        }
        if ( (*(_DWORD *)&MasterIrp->Type & 4) != 0 )
          *v19 |= 0x20u;
        else
          *v19 &= ~0x20u;
        v103 = *v19;
        if ( (*v19 & 2) != 0 )
        {
          if ( (*(_DWORD *)&MasterIrp->Type & 0x10) != 0 )
            v104 = v103 | 4;
          else
            v104 = v103 & 0xFFFFFFFB;
          *v19 = v104;
        }
        v57 = 0;
        goto LABEL_167;
      }
      goto LABEL_166;
    }
    v54 = (unsigned int)(v8 - 10);
    if ( (unsigned int)v54 <= 0x37 && (v55 = 0x80000000200003LL, _bittest64(&v55, v54)) )
    {
      v72 = v46->AssociatedIrp.MasterIrp;
      Flags = v72->Flags;
      if ( Flags && (Flags & 1) == 0 && (int)v5 - 20 >= Flags )
      {
        if ( v8 == FileMoveClusterInformation )
        {
          *(_DWORD *)(v50 + 32) = *(_DWORD *)&v72->Type;
        }
        else
        {
          Type = v72->Type;
          if ( v8 == FileRenameInformationEx )
            Type &= 1u;
          *(_BYTE *)(v50 + 32) = Type;
          if ( v110 )
            *(_BYTE *)(v50 + 2) |= 1u;
        }
        if ( *((_WORD *)&v72->Flags + 2) == 92 || v72->MdlAddress )
        {
          v75 = IopOpenLinkOrRenameTarget(&v123, v46, v72, Object);
          v57 = v75;
          v109 = v75;
          v56 = v108;
          if ( v75 < 0 )
          {
            v46->IoStatus.Status = v75;
            goto LABEL_90;
          }
          goto LABEL_89;
        }
        goto LABEL_88;
      }
    }
    else
    {
      if ( v8 != FileShortNameInformation )
      {
        switch ( v8 )
        {
          case FileDispositionInformation:
          case FileDispositionInformationEx:
            if ( v46->AssociatedIrp.MasterIrp->Type )
              *(_QWORD *)(v50 + 32) = FileHandle;
LABEL_88:
            v56 = v108;
LABEL_89:
            v57 = IopCallDriverReference(v114, v46, v56, Object, 2);
            v109 = v57;
LABEL_90:
            v58 = v107;
LABEL_91:
            if ( v57 == 259 )
            {
              if ( v56 )
              {
                v82 = (volatile __int32 *)Object;
                v29 = IopWaitForSynchronousIo(v46);
                _InterlockedExchange(v82 + 29, 0);
                v83 = Object;
                if ( *((_DWORD *)Object + 28) )
                  KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
                ObfDereferenceObjectWithTag(v83, 0x746C6644u);
                KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v84, v85, v86);
              }
              else
              {
                v106 = KeWaitForSingleObject(&v118, Executive, v58, 0, 0LL);
                if ( v106 == 257 || v106 == 192 )
                  IopCancelAlertedRequest(&v118, v46);
                v29 = v122[0];
                *IoStatusBlock = *(PIO_STATUS_BLOCK)v122;
              }
            }
            else
            {
              if ( !v56 )
                v46->UserEvent = 0LL;
              v46->UserIosb = IoStatusBlock;
              CurrentIrql = KeGetCurrentIrql();
              __writecr8(1uLL);
              IopCompleteRequest((__int64)&v46->Tail, (__int64)v129, v128, (ULONG_PTR *)&v127, v128);
              __writecr8(CurrentIrql);
              if ( v56 )
              {
                _InterlockedExchange((volatile __int32 *)Object + 29, 0);
                v60 = Object;
                if ( *((_DWORD *)Object + 28) )
                  KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
                ObfDereferenceObjectWithTag(v60, 0x746C6644u);
                KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v61, v62, v63);
              }
              v29 = v109;
            }
            if ( v112 )
              KeSetKernelStackSwapEnable(1u);
            if ( v123 )
              ObCloseHandle(v123, 0);
            return v29;
          case FileCompletionInformation:
            v66 = v46->AssociatedIrp.MasterIrp;
            v67 = (KSPIN_LOCK *)Object;
            if ( !*((_QWORD *)Object + 22) && (*v19 & 2) == 0 )
            {
              v57 = ObReferenceObjectByHandle(*(HANDLE *)&v66->Type, 2u, IoCompletionObjectType, v107, &v116, 0LL);
              v109 = v57;
              if ( v57 >= 0 )
              {
                PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x63436F49u);
                if ( !PoolWithTag )
                {
                  ObfDereferenceObjectWithTag(v116, 0x746C6644u);
                  v57 = -1073741670;
                  goto LABEL_167;
                }
                v69 = KeAcquireSpinLockRaiseToDpc(v67 + 23);
                v70 = v67 + 23;
                if ( v67[22] )
                {
                  KeReleaseSpinLock(v70, v69);
                  ExFreePoolWithTag(PoolWithTag, 0);
                  ObfDereferenceObjectWithTag(v116, 0x746C6644u);
                  v57 = -1073741752;
                  goto LABEL_167;
                }
                *v19 &= ~0x400u;
                *PoolWithTag = v116;
                PoolWithTag[1] = v66->MdlAddress;
                PoolWithTag[2] = 0LL;
                v67[22] = (KSPIN_LOCK)PoolWithTag;
                v109 = 0;
                KeReleaseSpinLock(v70, v69);
                v57 = 0;
              }
LABEL_117:
              v46->IoStatus.Status = v57;
              v46->IoStatus.Information = 0LL;
              v56 = v108;
              goto LABEL_90;
            }
            break;
          case FileReplaceCompletionInformation:
            v89 = v46->AssociatedIrp.MasterIrp;
            v90 = 0LL;
            v125 = 0LL;
            if ( *((_QWORD *)Object + 22) )
            {
              if ( *(_QWORD *)&v89->Type )
              {
                v57 = ObReferenceObjectByHandle(*(HANDLE *)&v89->Type, 2u, IoCompletionObjectType, v107, &v124, 0LL);
                v109 = v57;
                v90 = v124;
                v125 = v124;
              }
              else
              {
                v57 = v109;
              }
              if ( v57 < 0 )
                goto LABEL_117;
              v57 = IopReplaceCompletionPort(Object, v90, v89->MdlAddress);
              v109 = v57;
              if ( !v90 )
                goto LABEL_117;
              ObfDereferenceObjectWithTag(v90, 0x746C6644u);
              v46->IoStatus.Information = 0LL;
              goto LABEL_126;
            }
            break;
          case FileIoCompletionNotificationInformation:
            v71 = v46->AssociatedIrp.MasterIrp;
            if ( (*v19 & 2) != 0 )
            {
              v57 = -1073741811;
              v109 = -1073741811;
            }
            else
            {
              v109 = 0;
              if ( (*(_DWORD *)&v71->Type & 1) != 0 )
                *v19 |= 0x2000000u;
              if ( (*(_DWORD *)&v71->Type & 2) != 0 )
                *v19 |= 0x4000000u;
              v57 = 0;
              if ( (*(_DWORD *)&v71->Type & 4) != 0 )
                *v19 |= 0x8000000u;
            }
            v46->IoStatus.Information = 0LL;
LABEL_126:
            v46->IoStatus.Status = v57;
            v56 = v108;
            goto LABEL_90;
          case FileIoStatusBlockRangeInformation:
            v58 = v107;
            if ( SeSinglePrivilegeCheck(SeLockMemoryPrivilege, v107) )
            {
              if ( (*v19 & 2) != 0 )
                v57 = -1073741811;
              else
                v57 = IopSetFileObjectIosbRange(Object, v46);
            }
            else
            {
              v57 = -1073741727;
            }
            v109 = v57;
            v46->IoStatus.Status = v57;
            v46->IoStatus.Information = 0LL;
            v56 = v108;
            goto LABEL_91;
          case FileIoPriorityHintInformation:
            v88 = v46->AssociatedIrp.MasterIrp;
            if ( *(_DWORD *)&v88->Type <= 2u )
            {
              v57 = IopAllocateFileObjectExtension(Object, &v126, v51, v52);
              v109 = v57;
              if ( v57 >= 0 )
                *(_DWORD *)(v126 + 72) = *(_DWORD *)&v88->Type + 1;
              goto LABEL_117;
            }
            break;
          default:
            goto LABEL_88;
        }
LABEL_166:
        v57 = -1073741811;
LABEL_167:
        v109 = v57;
        goto LABEL_117;
      }
      v105 = v46->AssociatedIrp.MasterIrp;
      if ( (unsigned int)(v5 - 4) >= *(_DWORD *)&v105->Type )
      {
        v56 = v108;
        if ( *(&v105->Size + 1) == 92 )
        {
          v57 = -1073741811;
          v109 = -1073741811;
          v46->IoStatus.Status = -1073741811;
          goto LABEL_90;
        }
        goto LABEL_89;
      }
    }
    v57 = -1073741811;
    v109 = -1073741811;
    goto LABEL_126;
  }
  IopAllocateIrpCleanup(v17, 0LL);
  return -1073741670;
}
