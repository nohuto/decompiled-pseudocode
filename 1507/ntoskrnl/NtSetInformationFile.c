/*
 * XREFs of NtSetInformationFile @ 0x14006DCE0
 * Callers:
 *     <none>
 * Callees:
 *     ObpDeferObjectDeletion @ 0x14000C780 (ObpDeferObjectDeletion.c)
 *     ExAllocatePoolWithTagPriority @ 0x140013F48 (ExAllocatePoolWithTagPriority.c)
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     EtwActivityIdControlKernel @ 0x140026D54 (EtwActivityIdControlKernel.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140045B50 (ExAllocatePoolWithQuotaTag.c)
 *     IopQueueThreadIrp @ 0x140048420 (IopQueueThreadIrp.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     IofCallDriver @ 0x140048540 (IofCallDriver.c)
 *     KeAreInterruptsEnabled @ 0x140048A30 (KeAreInterruptsEnabled.c)
 *     IopCompleteRequest @ 0x14004A190 (IopCompleteRequest.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     IoThreadToProcess @ 0x1400507F0 (IoThreadToProcess.c)
 *     KeSetKernelStackSwapEnable @ 0x14006FE90 (KeSetKernelStackSwapEnable.c)
 *     IoGetIoPriorityHint @ 0x140070020 (IoGetIoPriorityHint.c)
 *     IopGetFileObjectExtension @ 0x1400716C0 (IopGetFileObjectExtension.c)
 *     IopAllocateFileObjectExtension @ 0x140071760 (IopAllocateFileObjectExtension.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14009C420 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     IoGetAttachedDevice @ 0x1400D1B70 (IoGetAttachedDevice.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     IopVerifyDeviceObjectOnStack @ 0x140113AAC (IopVerifyDeviceObjectOnStack.c)
 *     IopPoHandleIrp @ 0x140137894 (IopPoHandleIrp.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ObpPushStackInfo @ 0x14017E550 (ObpPushStackInfo.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     IopReplaceCompletionPort @ 0x1401F6D60 (IopReplaceCompletionPort.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     IopTrackLink @ 0x14040C918 (IopTrackLink.c)
 *     RtlIsSandboxedToken @ 0x1404115C4 (RtlIsSandboxedToken.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     SeQueryInformationToken @ 0x140481E90 (SeQueryInformationToken.c)
 *     ObpRemoveObjectRoutine @ 0x14048AD40 (ObpRemoveObjectRoutine.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x1404A4D60 (ObCloseHandle.c)
 *     IopOpenLinkOrRenameTarget @ 0x1404A6950 (IopOpenLinkOrRenameTarget.c)
 *     SeCaptureSubjectContextEx @ 0x1404CA2C0 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x1404CA4C0 (SeReleaseSubjectContext.c)
 *     PsReferencePrimaryToken @ 0x14050D730 (PsReferencePrimaryToken.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x140524370 (ObpHandleRevocationBlockRemoveObject.c)
 *     IopAcquireFileObjectLock @ 0x140540A5C (IopAcquireFileObjectLock.c)
 *     IopExceptionCleanup @ 0x14055D264 (IopExceptionCleanup.c)
 *     IopCancelAlertedRequest @ 0x14058EC70 (IopCancelAlertedRequest.c)
 *     IopAllocateIrpCleanup @ 0x140670E48 (IopAllocateIrpCleanup.c)
 *     IopSetFileObjectIosbRange @ 0x140672E30 (IopSetFileObjectIosbRange.c)
 *     ObpDeregisterObject @ 0x1406AD5D0 (ObpDeregisterObject.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass)
{
  SIZE_T v5; // r12
  struct _KTHREAD *CurrentThread; // rbx
  FILE_INFORMATION_CLASS v8; // r14d
  unsigned __int8 v9; // al
  _DWORD *v10; // rcx
  __int64 v11; // rax
  ACCESS_MASK v12; // edi
  struct _KPROCESS *v13; // rax
  char IsSandboxedToken; // bl
  int v16; // esi
  __int64 v17; // r8
  struct _FILE_OBJECT *v18; // rbx
  _DWORD *v19; // rax
  struct _KPROCESS *Process; // rcx
  PACCESS_TOKEN v21; // rbx
  PVPB Vpb; // rdi
  PDEVICE_OBJECT DeviceObject; // rdi
  PVPB v24; // rdi
  PIRP p_AttachedDevice; // r9
  PDEVICE_OBJECT *FileObjectExtension; // rax
  PDEVICE_OBJECT AttachedDevice; // r13
  struct _DEVICE_OBJECT *v28; // rax
  struct _KTHREAD *v29; // rax
  volatile __int32 *v30; // rdi
  volatile signed __int64 *v31; // rbx
  signed __int64 v32; // rax
  struct _KTHREAD *v33; // rcx
  __int16 v34; // ax
  PVOID v35; // rcx
  PVOID v36; // rbx
  struct _KTHREAD *v37; // rcx
  __int16 v38; // ax
  LARGE_INTEGER v39; // rax
  USHORT SectorSize; // cx
  PIO_STATUS_BLOCK v41; // rax
  struct _KTHREAD *v42; // rcx
  PVOID v43; // rbx
  struct _KTHREAD *v44; // rcx
  __int16 v45; // ax
  char v46; // di
  NTSTATUS v47; // edi
  __int16 *p_Event; // rax
  _DWORD *v49; // rax
  PVOID v50; // rbx
  struct _KTHREAD *v51; // rcx
  __int16 v52; // ax
  IRP *v53; // rax
  ULONG_PTR v54; // rdi
  int *v55; // rax
  __int64 v56; // rax
  int *PoolWithTagPriority; // rax
  int *v58; // rbx
  __int64 v59; // rbx
  struct _KTHREAD *v60; // rax
  int *v61; // r8
  int v62; // edx
  unsigned int *v63; // r9
  unsigned int v64; // eax
  unsigned int v65; // eax
  unsigned int v66; // ecx
  unsigned int v67; // ecx
  __int64 v68; // rcx
  char v69; // bl
  __int64 v70; // rdx
  unsigned int v71; // ecx
  struct _KTHREAD *v72; // r8
  int v73; // edx
  IO_PRIORITY_HINT v74; // eax
  __int64 v75; // rcx
  _BYTE *v76; // rax
  bool v77; // zf
  char v78; // al
  int v79; // eax
  char v80; // al
  unsigned __int8 *v81; // rax
  NTSTATUS v82; // eax
  __int64 v83; // rdx
  unsigned int v84; // ecx
  struct _KTHREAD *v85; // r8
  int v86; // edx
  IO_PRIORITY_HINT v87; // eax
  __int64 v88; // rcx
  _BYTE *v89; // rax
  char v90; // al
  int v91; // eax
  char v92; // al
  unsigned __int8 *v93; // rax
  __int64 v94; // r13
  _QWORD *v95; // r14
  _QWORD *PoolWithTag; // rsi
  char *v97; // rbx
  signed __int64 v98; // rax
  bool v99; // cc
  signed __int64 v100; // rax
  char *v101; // rax
  volatile signed __int32 *v102; // rbx
  char *v103; // rbx
  signed __int64 v104; // rax
  signed __int64 v105; // rax
  char *v106; // rax
  __int64 v107; // r14
  PVOID v108; // rbx
  signed __int64 v109; // rbx
  signed __int64 v110; // rax
  signed __int64 v111; // rax
  __int64 v112; // rax
  _DWORD *v113; // rdx
  unsigned int *v114; // r8
  KPROCESSOR_MODE v115; // r13
  BOOLEAN v116; // al
  _DWORD *v117; // rbx
  __int64 v118; // rdx
  unsigned int v119; // ecx
  struct _KTHREAD *v120; // r8
  int v121; // edx
  IO_PRIORITY_HINT v122; // eax
  __int64 v123; // rcx
  _BYTE *v124; // rax
  char v125; // al
  int v126; // eax
  char v127; // al
  unsigned __int8 *v128; // rax
  char v129; // al
  unsigned __int8 *v130; // rax
  __int64 v131; // r8
  unsigned int v132; // ecx
  __int64 v133; // rdx
  unsigned int v134; // ecx
  struct _KTHREAD *v135; // r8
  int v136; // edx
  IO_PRIORITY_HINT v137; // eax
  __int64 v138; // rcx
  _BYTE *v139; // rax
  char v140; // al
  int v141; // eax
  char v142; // al
  unsigned __int8 *v143; // rax
  int v144; // eax
  __int64 v145; // rdx
  unsigned int v146; // ecx
  struct _KTHREAD *v147; // r8
  int v148; // edx
  IO_PRIORITY_HINT IoPriorityHint; // eax
  __int64 v150; // rcx
  _BYTE *v151; // rax
  char v152; // al
  int v153; // eax
  char v154; // al
  unsigned __int8 *v155; // rax
  bool v156; // bl
  _DWORD *v157; // rsi
  KPROCESSOR_MODE v158; // al
  NTSTATUS v159; // eax
  bool v160; // dl
  unsigned __int8 CurrentIrql; // r8
  PVOID v162; // rbx
  signed __int64 v163; // rbx
  signed __int64 v164; // r14
  signed __int64 v165; // r14
  __int64 v166; // rax
  struct _KTHREAD *v167; // rcx
  __int16 v168; // ax
  NTSTATUS v169; // eax
  unsigned __int8 v170; // bl
  PVOID v171; // rbx
  signed __int64 v172; // rbx
  signed __int64 v173; // r14
  signed __int64 v174; // r14
  __int64 v175; // rax
  __int16 v176; // ax
  unsigned __int8 v177; // [rsp+30h] [rbp-208h]
  char v178; // [rsp+31h] [rbp-207h]
  PVOID Object; // [rsp+38h] [rbp-200h] BYREF
  char v180; // [rsp+40h] [rbp-1F8h]
  BOOLEAN v181; // [rsp+41h] [rbp-1F7h]
  unsigned int *p_Flags; // [rsp+48h] [rbp-1F0h]
  char v183; // [rsp+50h] [rbp-1E8h]
  int v184; // [rsp+54h] [rbp-1E4h]
  PVOID v185; // [rsp+58h] [rbp-1E0h] BYREF
  void *Src; // [rsp+60h] [rbp-1D8h]
  PVOID TokenInformation; // [rsp+68h] [rbp-1D0h] BYREF
  PIO_STATUS_BLOCK v188; // [rsp+70h] [rbp-1C8h]
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-1C0h]
  PIRP Irp; // [rsp+80h] [rbp-1B8h]
  ULONG v191; // [rsp+88h] [rbp-1B0h]
  __int16 v192; // [rsp+90h] [rbp-1A8h] BYREF
  char v193; // [rsp+92h] [rbp-1A6h]
  int v194; // [rsp+94h] [rbp-1A4h]
  _QWORD v195[2]; // [rsp+98h] [rbp-1A0h] BYREF
  __int64 v196; // [rsp+A8h] [rbp-190h]
  int v197[4]; // [rsp+B0h] [rbp-188h] BYREF
  HANDLE Handle; // [rsp+C0h] [rbp-178h] BYREF
  PVOID v199; // [rsp+C8h] [rbp-170h] BYREF
  __int128 *v200; // [rsp+D0h] [rbp-168h] BYREF
  PVOID v201; // [rsp+D8h] [rbp-160h] BYREF
  HANDLE v202; // [rsp+E0h] [rbp-158h]
  PVOID v203[2]; // [rsp+E8h] [rbp-150h] BYREF
  PVOID v204; // [rsp+F8h] [rbp-140h] BYREF
  PVOID v205; // [rsp+100h] [rbp-138h] BYREF
  __int64 v206; // [rsp+108h] [rbp-130h] BYREF
  __int128 *v207; // [rsp+110h] [rbp-128h] BYREF
  __int128 *v208; // [rsp+118h] [rbp-120h] BYREF
  PVOID v209; // [rsp+120h] [rbp-118h] BYREF
  __int128 *v210; // [rsp+128h] [rbp-110h] BYREF
  __int64 v211; // [rsp+130h] [rbp-108h] BYREF
  PVOID v212; // [rsp+138h] [rbp-100h] BYREF
  PVOID v213; // [rsp+140h] [rbp-F8h] BYREF
  PVOID v214; // [rsp+148h] [rbp-F0h] BYREF
  PVOID v215; // [rsp+150h] [rbp-E8h] BYREF
  PVOID v216; // [rsp+158h] [rbp-E0h] BYREF
  PVOID v217; // [rsp+160h] [rbp-D8h] BYREF
  __int128 *v218; // [rsp+168h] [rbp-D0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+170h] [rbp-C8h] BYREF
  LARGE_INTEGER v220; // [rsp+190h] [rbp-A8h]
  char v221[8]; // [rsp+198h] [rbp-A0h] BYREF
  __int128 v222; // [rsp+1A0h] [rbp-98h] BYREF
  __int128 v223; // [rsp+1B0h] [rbp-88h] BYREF
  __int128 v224; // [rsp+1C0h] [rbp-78h] BYREF
  __int128 v225; // [rsp+1D0h] [rbp-68h] BYREF
  __int128 v226; // [rsp+1E0h] [rbp-58h] BYREF
  void *retaddr; // [rsp+238h] [rbp+0h]

  v5 = Length;
  Src = FileInformation;
  v188 = IoStatusBlock;
  v202 = FileHandle;
  v191 = Length;
  memset(v197, 0, sizeof(v197));
  Handle = 0LL;
  v181 = 0;
  v180 = 0;
  CurrentThread = KeGetCurrentThread();
  v196 = (__int64)CurrentThread;
  v177 = CurrentThread->gap0[10];
  if ( !v177 )
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
LABEL_31:
        v12 = IopSetOperationAccess[v8];
        goto LABEL_32;
      }
      v8 = FileLinkInformation;
    }
    v180 = 1;
    goto LABEL_31;
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
    IsSandboxedToken = RtlIsSandboxedToken(&SubjectContext, v177);
    SeReleaseSubjectContext(&SubjectContext);
    if ( IsSandboxedToken )
      v12 |= 0x100u;
  }
LABEL_32:
  v16 = ObReferenceObjectByHandle(FileHandle, v12, (POBJECT_TYPE)IoFileObjectType, v177, &Object, 0LL);
  v18 = (struct _FILE_OBJECT *)Object;
  v204 = Object;
  if ( v16 >= 0 )
  {
    v19 = (_DWORD *)*((_QWORD *)Object + 26);
    if ( v19 )
    {
      if ( (*v19 & 4) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        LODWORD(TokenInformation) = 0;
        v21 = PsReferencePrimaryToken(Process);
        SeQueryInformationToken(v21, TokenIsAppContainer, &TokenInformation);
        ObfDereferenceObjectWithTag(v21, 0x746C6644u);
        v18 = (struct _FILE_OBJECT *)Object;
        if ( (_DWORD)TokenInformation )
        {
          ObfDereferenceObjectWithTag(Object, 0x746C6644u);
          v16 = -1073739504;
        }
      }
    }
  }
  v184 = v16;
  if ( v16 < 0 )
    return v16;
  p_Flags = &v18->Flags;
  if ( (v18->Flags & 0x800) != 0 )
  {
    AttachedDevice = IoGetAttachedDevice(v18->DeviceObject);
  }
  else
  {
    Vpb = v18->Vpb;
    if ( !Vpb || (DeviceObject = Vpb->DeviceObject) == 0LL )
    {
      v24 = v18->DeviceObject->Vpb;
      if ( !v24 || (DeviceObject = v24->DeviceObject) == 0LL )
        DeviceObject = v18->DeviceObject;
    }
    p_AttachedDevice = (PIRP)&DeviceObject->AttachedDevice;
    Irp = (PIRP)&DeviceObject->AttachedDevice;
    if ( DeviceObject->AttachedDevice )
    {
      if ( v18->FileObjectExtension )
      {
        FileObjectExtension = (PDEVICE_OBJECT *)IopGetFileObjectExtension(v18, 1LL, 0LL);
        if ( FileObjectExtension )
        {
          AttachedDevice = *FileObjectExtension;
          if ( *FileObjectExtension )
          {
            if ( (unsigned __int8)IopVerifyDeviceObjectOnStack(DeviceObject, *FileObjectExtension) )
              goto LABEL_54;
            p_AttachedDevice = Irp;
          }
        }
      }
      v28 = *(struct _DEVICE_OBJECT **)&p_AttachedDevice->Type;
      if ( *(_QWORD *)&p_AttachedDevice->Type )
      {
        do
        {
          DeviceObject = v28;
          v28 = v28->AttachedDevice;
        }
        while ( v28 );
      }
    }
    AttachedDevice = DeviceObject;
  }
LABEL_54:
  if ( (*p_Flags & 2) != 0 )
  {
    v29 = KeGetCurrentThread();
    --v29->KernelApcDisable;
    v30 = (volatile __int32 *)Object;
    if ( _InterlockedExchange((volatile __int32 *)Object + 29, 1) )
    {
      v33 = KeGetCurrentThread();
      v34 = v33->KernelApcDisable + 1;
      v33->KernelApcDisable = v34;
      if ( !v34
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v33->ApcState.ApcListHead[0].Flink != &v33->152
        && !v33->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery(v33);
      }
      v18 = (struct _FILE_OBJECT *)Object;
      v16 = IopAcquireFileObjectLock(Object);
      v184 = v16;
      if ( v183 )
      {
        v35 = v18;
LABEL_515:
        ObfDereferenceObjectWithTag(v35, 0x746C6644u);
        return v16;
      }
    }
    else
    {
      v31 = (volatile signed __int64 *)Object;
      if ( ObpTraceFlags )
        ObpPushStackInfo((_DWORD)Object - 48);
      v32 = _InterlockedIncrement64(v31 - 6);
      if ( v32 <= 1 )
        KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)v31, 0x10uLL, v32);
      v18 = (struct _FILE_OBJECT *)Object;
    }
    if ( v8 == FilePositionInformation )
    {
      if ( (unsigned int)v5 < 8 )
      {
        _InterlockedExchange(v30 + 29, 0);
        v36 = Object;
        if ( *((_DWORD *)Object + 28) )
          KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
        ObfDereferenceObjectWithTag(v36, 0x746C6644u);
        v37 = KeGetCurrentThread();
        v38 = v37->KernelApcDisable + 1;
        v37->KernelApcDisable = v38;
        if ( !v38
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v37->ApcState.ApcListHead[0].Flink != &v37->152
          && !v37->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery(v37);
        }
        ObfDereferenceObjectWithTag(Object, 0x746C6644u);
        return -1073741820;
      }
      v39 = *(LARGE_INTEGER *)Src;
      v220 = *(LARGE_INTEGER *)Src;
      if ( (*p_Flags & 8) != 0
        && (SectorSize = AttachedDevice->SectorSize) != 0
        && ((SectorSize - 1) & v39.LowPart) != 0
        || v39.HighPart < 0 )
      {
        v16 = -1073741811;
      }
      else
      {
        v18->CurrentByteOffset = v39;
        v41 = v188;
        v188->Status = 0;
        v41->Information = 0LL;
      }
      v42 = KeGetCurrentThread();
      v42->OtherTransferCount += (unsigned int)v5;
      __addgsqword(0x2E78u, (unsigned int)v5);
      _InterlockedExchange((volatile __int32 *)Object + 29, 0);
      v43 = Object;
      if ( *((_DWORD *)Object + 28) )
        KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
      ObfDereferenceObjectWithTag(v43, 0x746C6644u);
      v44 = KeGetCurrentThread();
      v45 = v44->KernelApcDisable + 1;
      v44->KernelApcDisable = v45;
      if ( !v45
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v44->ApcState.ApcListHead[0].Flink != &v44->152
        && !v44->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery(v44);
      }
      v35 = Object;
      goto LABEL_515;
    }
    v46 = 1;
  }
  else
  {
    v192 = 1;
    v193 = 6;
    v194 = 0;
    v195[1] = v195;
    v195[0] = v195;
    v46 = 0;
  }
  v178 = v46;
  if ( (*p_Flags & 0x4000000) == 0 )
    KeResetEvent(&v18->Event);
  if ( v8 != FileTrackingInformation )
  {
    LOBYTE(v17) = v46 == 0;
    v53 = (IRP *)pIoAllocateIrp(AttachedDevice, (unsigned __int8)AttachedDevice->StackSize, v17, retaddr);
    v54 = (ULONG_PTR)v53;
    Irp = v53;
    if ( !v53 )
    {
      IopAllocateIrpCleanup(v18, 0LL);
      return -1073741670;
    }
    v53->Tail.Overlay.OriginalFileObject = v18;
    v53->Tail.Overlay.Thread = (PETHREAD)v196;
    v53->RequestorMode = v177;
    if ( v178 )
    {
      v53->UserEvent = 0LL;
      v55 = (int *)&v188->0;
      *(_BYTE *)(v54 + 71) |= 2u;
    }
    else
    {
      if ( v177 == 1 )
        v181 = KeSetKernelStackSwapEnable(0);
      *(_QWORD *)(v54 + 80) = &v192;
      v55 = v197;
      *(_DWORD *)(v54 + 16) = 4;
    }
    *(_QWORD *)(v54 + 72) = v55;
    *(_QWORD *)(v54 + 88) = 0LL;
    v56 = *(_QWORD *)(v54 + 184) - 72LL;
    v196 = v56;
    *(_BYTE *)v56 = 6;
    *(_QWORD *)(v56 + 48) = v18;
    *(_QWORD *)(v54 + 24) = 0LL;
    *(_QWORD *)(v54 + 8) = 0LL;
    if ( ViVerifierDriverAddedThunkListHead )
    {
      PoolWithTagPriority = (int *)ExAllocatePoolWithTagPriority(
                                     NonPagedPoolNx,
                                     v5,
                                     0x20206F49u,
                                     (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
      v58 = PoolWithTagPriority;
      if ( !PoolWithTagPriority )
        RtlRaiseStatus(-1073741670);
    }
    else
    {
      PoolWithTagPriority = (int *)ExAllocatePoolWithQuotaTag(NonPagedPoolNx, v5, 0x20206F49u);
      v58 = PoolWithTagPriority;
    }
    v203[1] = PoolWithTagPriority;
    *(_QWORD *)(v54 + 24) = v58;
    memmove(v58, Src, v5);
    if ( ((unsigned int)(v8 - 19) <= 1 || v8 == FilePositionInformation) && v58[1] < 0 )
      RtlRaiseStatus(-1073741811);
    *(_DWORD *)(v54 + 16) |= 0x830u;
    v59 = v196;
    *(_DWORD *)(v196 + 8) = v5;
    *(_DWORD *)(v59 + 16) = v8;
    IopQueueThreadIrp(v54);
    v60 = KeGetCurrentThread();
    ++v60->OtherOperationCount;
    __incgsdword(0x2E64u);
    if ( v8 == FileModeInformation )
    {
      v61 = *(int **)(v54 + 24);
      v62 = *v61;
      if ( (*v61 & 0xFFFFFFC9) == 0 )
      {
        v63 = p_Flags;
        if ( ((v62 & 0x30) == 0 || (*p_Flags & 2) != 0)
          && ((v62 & 0x30) != 0 || (*p_Flags & 2) == 0)
          && (*v61 & 0x30) != 0x30 )
        {
          v64 = *p_Flags;
          if ( (*p_Flags & 8) == 0 )
          {
            if ( (v62 & 2) != 0 )
              v65 = v64 | 0x10;
            else
              v65 = v64 & 0xFFFFFFEF;
            *p_Flags = v65;
          }
          if ( (*v61 & 4) != 0 )
            *v63 |= 0x20u;
          else
            *v63 &= ~0x20u;
          v66 = *v63;
          if ( (*v63 & 2) != 0 )
          {
            if ( (*v61 & 0x10) != 0 )
              v67 = v66 | 4;
            else
              v67 = v66 & 0xFFFFFFFB;
            *v63 = v67;
          }
          v16 = 0;
          goto LABEL_147;
        }
      }
LABEL_146:
      v16 = -1073741811;
LABEL_147:
      *(_QWORD *)(v54 + 56) = 0LL;
LABEL_440:
      v69 = v178;
      goto LABEL_441;
    }
    if ( (unsigned int)(v8 - 10) <= 1 || v8 == FileMoveClusterInformation )
    {
      v131 = *(_QWORD *)(v54 + 24);
      v132 = *(_DWORD *)(v131 + 16);
      if ( !v132 || (v132 & 1) != 0 || (int)v5 - 20 < v132 )
        goto LABEL_439;
      if ( v8 == FileMoveClusterInformation )
      {
        *(_DWORD *)(v59 + 32) = *(_DWORD *)v131;
      }
      else
      {
        *(_BYTE *)(v59 + 32) = *(_BYTE *)v131;
        if ( v180 )
          *(_BYTE *)(v59 + 2) |= 1u;
      }
      if ( *(_WORD *)(v131 + 20) == 92 || *(_QWORD *)(v131 + 8) )
      {
        v144 = IopOpenLinkOrRenameTarget(&Handle, v54, v131, Object);
        v16 = v144;
        v69 = v178;
        if ( v144 < 0 )
        {
          *(_DWORD *)(v54 + 48) = v144;
          goto LABEL_442;
        }
        if ( !v178 )
          ObfReferenceObjectWithTag(Object, 0x746C6644u);
        v145 = *((_QWORD *)Object + 26);
        if ( v145 && *(_DWORD *)(v145 + 64) )
        {
          v146 = *(_DWORD *)(v54 + 16) & 0xFFF1FFFF;
          *(_DWORD *)(v54 + 16) = v146;
          *(_DWORD *)(v54 + 16) = v146 | (*(_DWORD *)(v145 + 64) << 17);
        }
        else
        {
          v147 = KeGetCurrentThread();
          v148 = (*((_DWORD *)&v147[1].SwapListEntry + 3) >> 9) & 7;
          if ( (v147->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
            v148 = 0;
          if ( v148 < 2 && v147 == KeGetCurrentThread() && HIDWORD(v147[1].Timer.TimerListEntry.Flink) )
            v148 = 2;
          *(_DWORD *)(v54 + 16) = *(_DWORD *)(v54 + 16) & 0xFFF1FFFF | ((v148 + 1) << 17);
        }
        IoPriorityHint = IoGetIoPriorityHint((PIRP)v54);
        if ( !*(_BYTE *)(v54 + 64) && IoPriorityHint < IoPriorityNormal )
        {
          v150 = *(_QWORD *)(v54 + 152);
          if ( !v150 || (*(_DWORD *)(v150 + 116) & 0x400) == 0 && (*(_DWORD *)(v150 + 1728) & 0x20) == 0 )
          {
            ++IoKernelIssuedIoBoostedCount;
            *(_DWORD *)(v54 + 16) = *(_DWORD *)(v54 + 16) & 0xFFF1FFFF | 0x60000;
          }
        }
        if ( *(char *)(v54 + 71) < 0
          || (v151 = *(_BYTE **)(v54 + 200)) == 0LL
          || (v77 = (*v151 & 2) == 0, v152 = 1, v77) )
        {
          v152 = 0;
        }
        if ( v152 )
        {
          EtwActivityIdControlKernel(1, &v201);
          v223 = *(_OWORD *)(*(_QWORD *)(v54 + 200) + 16LL);
          v200 = &v223;
          EtwActivityIdControlKernel(2, (PVOID *)&v200);
          if ( pIofCallDriver )
          {
            v153 = pIofCallDriver(AttachedDevice, v54, retaddr);
          }
          else
          {
            v154 = *(_BYTE *)(v54 + 67) - 1;
            *(_BYTE *)(v54 + 67) = v154;
            if ( v154 <= 0 )
              KeBugCheckEx(0x35u, v54, 0LL, 0LL, 0LL);
            v155 = (unsigned __int8 *)(*(_QWORD *)(v54 + 184) - 72LL);
            *(_QWORD *)(v54 + 184) = v155;
            *((_QWORD *)v155 + 5) = AttachedDevice;
            if ( *v155 == 22 && (unsigned __int8)(v155[1] - 2) <= 1u )
              v153 = IopPoHandleIrp(v54);
            else
              v153 = ((__int64 (__fastcall *)(PDEVICE_OBJECT, ULONG_PTR))AttachedDevice->DriverObject->MajorFunction[*v155])(
                       AttachedDevice,
                       v54);
          }
          v16 = v153;
          v203[0] = v201;
          EtwActivityIdControlKernel(2, v203);
          goto LABEL_188;
        }
      }
      else
      {
        v69 = v178;
        if ( !v178 )
          ObfReferenceObjectWithTag(Object, 0x746C6644u);
        v133 = *((_QWORD *)Object + 26);
        if ( v133 && *(_DWORD *)(v133 + 64) )
        {
          v134 = *(_DWORD *)(v54 + 16) & 0xFFF1FFFF;
          *(_DWORD *)(v54 + 16) = v134;
          *(_DWORD *)(v54 + 16) = v134 | (*(_DWORD *)(v133 + 64) << 17);
        }
        else
        {
          v135 = KeGetCurrentThread();
          v136 = (*((_DWORD *)&v135[1].SwapListEntry + 3) >> 9) & 7;
          if ( (v135->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
            v136 = 0;
          if ( v136 < 2 && v135 == KeGetCurrentThread() && HIDWORD(v135[1].Timer.TimerListEntry.Flink) )
            v136 = 2;
          *(_DWORD *)(v54 + 16) = *(_DWORD *)(v54 + 16) & 0xFFF1FFFF | ((v136 + 1) << 17);
        }
        v137 = IoGetIoPriorityHint((PIRP)v54);
        if ( !*(_BYTE *)(v54 + 64) && v137 < IoPriorityNormal )
        {
          v138 = *(_QWORD *)(v54 + 152);
          if ( !v138 || (*(_DWORD *)(v138 + 116) & 0x400) == 0 && (*(_DWORD *)(v138 + 1728) & 0x20) == 0 )
          {
            ++IoKernelIssuedIoBoostedCount;
            *(_DWORD *)(v54 + 16) = *(_DWORD *)(v54 + 16) & 0xFFF1FFFF | 0x60000;
          }
        }
        if ( *(char *)(v54 + 71) < 0
          || (v139 = *(_BYTE **)(v54 + 200)) == 0LL
          || (v77 = (*v139 & 2) == 0, v140 = 1, v77) )
        {
          v140 = 0;
        }
        if ( v140 )
        {
          EtwActivityIdControlKernel(1, &v214);
          v222 = *(_OWORD *)(*(_QWORD *)(v54 + 200) + 16LL);
          v210 = &v222;
          EtwActivityIdControlKernel(2, (PVOID *)&v210);
          if ( pIofCallDriver )
          {
            v141 = pIofCallDriver(AttachedDevice, v54, retaddr);
          }
          else
          {
            v142 = *(_BYTE *)(v54 + 67) - 1;
            *(_BYTE *)(v54 + 67) = v142;
            if ( v142 <= 0 )
              KeBugCheckEx(0x35u, v54, 0LL, 0LL, 0LL);
            v143 = (unsigned __int8 *)(*(_QWORD *)(v54 + 184) - 72LL);
            *(_QWORD *)(v54 + 184) = v143;
            *((_QWORD *)v143 + 5) = AttachedDevice;
            if ( *v143 == 22 && (unsigned __int8)(v143[1] - 2) <= 1u )
              v141 = IopPoHandleIrp(v54);
            else
              v141 = ((__int64 (__fastcall *)(PDEVICE_OBJECT, ULONG_PTR))AttachedDevice->DriverObject->MajorFunction[*v143])(
                       AttachedDevice,
                       v54);
          }
          v16 = v141;
          v212 = v214;
          EtwActivityIdControlKernel(2, &v212);
          goto LABEL_188;
        }
      }
LABEL_186:
      v82 = IofCallDriver(AttachedDevice, (PIRP)v54);
LABEL_187:
      v16 = v82;
LABEL_188:
      if ( !v69 )
        ObDereferenceObjectDeferDeleteWithTag(Object, 0x746C6644u);
      goto LABEL_442;
    }
    switch ( v8 )
    {
      case FileShortNameInformation:
        v68 = *(_QWORD *)(v54 + 24);
        if ( (unsigned int)(v5 - 4) >= *(_DWORD *)v68 )
        {
          v69 = v178;
          if ( *(_WORD *)(v68 + 4) == 92 )
          {
            v16 = -1073741811;
LABEL_441:
            *(_DWORD *)(v54 + 48) = v16;
            goto LABEL_442;
          }
          if ( !v178 )
            ObfReferenceObjectWithTag(Object, 0x746C6644u);
          v70 = *((_QWORD *)Object + 26);
          if ( v70 && *(_DWORD *)(v70 + 64) )
          {
            v71 = *(_DWORD *)(v54 + 16) & 0xFFF1FFFF;
            *(_DWORD *)(v54 + 16) = v71;
            *(_DWORD *)(v54 + 16) = v71 | (*(_DWORD *)(v70 + 64) << 17);
          }
          else
          {
            v72 = KeGetCurrentThread();
            v73 = (*((_DWORD *)&v72[1].SwapListEntry + 3) >> 9) & 7;
            if ( (v72->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
              v73 = 0;
            if ( v73 < 2 && v72 == KeGetCurrentThread() && HIDWORD(v72[1].Timer.TimerListEntry.Flink) )
              v73 = 2;
            *(_DWORD *)(v54 + 16) = *(_DWORD *)(v54 + 16) & 0xFFF1FFFF | ((v73 + 1) << 17);
          }
          v74 = IoGetIoPriorityHint((PIRP)v54);
          if ( !*(_BYTE *)(v54 + 64) && v74 < IoPriorityNormal )
          {
            v75 = *(_QWORD *)(v54 + 152);
            if ( !v75 || (*(_DWORD *)(v75 + 116) & 0x400) == 0 && (*(_DWORD *)(v75 + 1728) & 0x20) == 0 )
            {
              ++IoKernelIssuedIoBoostedCount;
              *(_DWORD *)(v54 + 16) = *(_DWORD *)(v54 + 16) & 0xFFF1FFFF | 0x60000;
            }
          }
          if ( *(char *)(v54 + 71) < 0 || (v76 = *(_BYTE **)(v54 + 200)) == 0LL || (v77 = (*v76 & 2) == 0, v78 = 1, v77) )
            v78 = 0;
          if ( v78 )
          {
            EtwActivityIdControlKernel(1, &v215);
            v226 = *(_OWORD *)(*(_QWORD *)(v54 + 200) + 16LL);
            v218 = &v226;
            EtwActivityIdControlKernel(2, (PVOID *)&v218);
            if ( pIofCallDriver )
            {
              v79 = pIofCallDriver(AttachedDevice, v54, retaddr);
            }
            else
            {
              v80 = *(_BYTE *)(v54 + 67) - 1;
              *(_BYTE *)(v54 + 67) = v80;
              if ( v80 <= 0 )
                KeBugCheckEx(0x35u, v54, 0LL, 0LL, 0LL);
              v81 = (unsigned __int8 *)(*(_QWORD *)(v54 + 184) - 72LL);
              *(_QWORD *)(v54 + 184) = v81;
              *((_QWORD *)v81 + 5) = AttachedDevice;
              if ( *v81 == 22 && (unsigned __int8)(v81[1] - 2) <= 1u )
                v79 = IopPoHandleIrp(v54);
              else
                v79 = ((__int64 (__fastcall *)(PDEVICE_OBJECT, ULONG_PTR))AttachedDevice->DriverObject->MajorFunction[*v81])(
                        AttachedDevice,
                        v54);
            }
            v16 = v79;
            v217 = v215;
            EtwActivityIdControlKernel(2, &v217);
            goto LABEL_188;
          }
          goto LABEL_186;
        }
LABEL_439:
        v16 = -1073741811;
        goto LABEL_440;
      case FileDispositionInformation:
        if ( **(_BYTE **)(v54 + 24) )
          *(_QWORD *)(v59 + 32) = v202;
        v69 = v178;
        if ( !v178 )
          ObfReferenceObjectWithTag(Object, 0x746C6644u);
        v83 = *((_QWORD *)Object + 26);
        if ( v83 && *(_DWORD *)(v83 + 64) )
        {
          v84 = *(_DWORD *)(v54 + 16) & 0xFFF1FFFF;
          *(_DWORD *)(v54 + 16) = v84;
          *(_DWORD *)(v54 + 16) = v84 | (*(_DWORD *)(v83 + 64) << 17);
        }
        else
        {
          v85 = KeGetCurrentThread();
          v86 = (*((_DWORD *)&v85[1].SwapListEntry + 3) >> 9) & 7;
          if ( (v85->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
            v86 = 0;
          if ( v86 < 2 && v85 == KeGetCurrentThread() && HIDWORD(v85[1].Timer.TimerListEntry.Flink) )
            v86 = 2;
          *(_DWORD *)(v54 + 16) = *(_DWORD *)(v54 + 16) & 0xFFF1FFFF | ((v86 + 1) << 17);
        }
        v87 = IoGetIoPriorityHint((PIRP)v54);
        if ( !*(_BYTE *)(v54 + 64) && v87 < IoPriorityNormal )
        {
          v88 = *(_QWORD *)(v54 + 152);
          if ( !v88 || (*(_DWORD *)(v88 + 116) & 0x400) == 0 && (*(_DWORD *)(v88 + 1728) & 0x20) == 0 )
          {
            ++IoKernelIssuedIoBoostedCount;
            *(_DWORD *)(v54 + 16) = *(_DWORD *)(v54 + 16) & 0xFFF1FFFF | 0x60000;
          }
        }
        if ( *(char *)(v54 + 71) < 0 || (v89 = *(_BYTE **)(v54 + 200)) == 0LL || (v77 = (*v89 & 2) == 0, v90 = 1, v77) )
          v90 = 0;
        if ( v90 )
        {
          EtwActivityIdControlKernel(1, &v199);
          v225 = *(_OWORD *)(*(_QWORD *)(v54 + 200) + 16LL);
          v208 = &v225;
          EtwActivityIdControlKernel(2, (PVOID *)&v208);
          if ( pIofCallDriver )
          {
            v91 = pIofCallDriver(AttachedDevice, v54, retaddr);
          }
          else
          {
            v92 = *(_BYTE *)(v54 + 67) - 1;
            *(_BYTE *)(v54 + 67) = v92;
            if ( v92 <= 0 )
              KeBugCheckEx(0x35u, v54, 0LL, 0LL, 0LL);
            v93 = (unsigned __int8 *)(*(_QWORD *)(v54 + 184) - 72LL);
            *(_QWORD *)(v54 + 184) = v93;
            *((_QWORD *)v93 + 5) = AttachedDevice;
            if ( *v93 == 22 && (unsigned __int8)(v93[1] - 2) <= 1u )
              v91 = IopPoHandleIrp(v54);
            else
              v91 = ((__int64 (__fastcall *)(PDEVICE_OBJECT, ULONG_PTR))AttachedDevice->DriverObject->MajorFunction[*v93])(
                      AttachedDevice,
                      v54);
          }
          v16 = v91;
          v209 = v199;
          EtwActivityIdControlKernel(2, &v209);
          goto LABEL_188;
        }
        goto LABEL_186;
      case FileCompletionInformation:
        v94 = *(_QWORD *)(v54 + 24);
        v95 = Object;
        if ( !*((_QWORD *)Object + 22) && (*p_Flags & 2) == 0 )
        {
          v16 = ObReferenceObjectByHandle(*(HANDLE *)v94, 2u, IoCompletionObjectType, v177, &v185, 0LL);
          if ( v16 >= 0 )
          {
            PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x63436F49u);
            if ( PoolWithTag )
            {
              v102 = (volatile signed __int32 *)((char *)Object + 184);
              Src = (void *)KeGetCurrentIrql();
              __writecr8(2uLL);
              if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
              {
                KiAcquireSpinLockInstrumented((char *)Object + 184);
              }
              else if ( _interlockedbittestandset64(v102, 0LL) )
              {
                KxWaitForSpinLockAndAcquire(v102);
              }
              if ( v95[22] )
              {
                if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
                  KiReleaseSpinLockInstrumented(v102, retaddr);
                else
                  _InterlockedAnd64((volatile signed __int64 *)v102, 0LL);
                __writecr8((unsigned __int8)Src);
                ExFreePoolWithTag(PoolWithTag, 0);
                v103 = (char *)v185 - 48;
                if ( ObpTraceFlags )
                  ObpPushStackInfo((_DWORD)v185 - 48);
                v104 = _InterlockedExchangeAdd64((volatile signed __int64 *)v103, 0xFFFFFFFFFFFFFFFFuLL);
                v99 = v104 <= 1;
                v105 = v104 - 1;
                if ( v99 )
                {
                  if ( *((_QWORD *)v103 + 1) )
                    KeBugCheckEx(
                      0x18u,
                      ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v103[24] ^ (unsigned __int64)BYTE1(v103)],
                      (ULONG_PTR)v185,
                      1uLL,
                      *((_QWORD *)v103 + 1));
                  if ( v105 < 0 )
                    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)v185, 2uLL, v105);
                  if ( KeGetCurrentThread()->SpecialApcDisable
                    || !(unsigned __int8)KeAreInterruptsEnabled()
                    || KeGetCurrentIrql() )
                  {
                    ObpDeferObjectDeletion((signed __int64)v103);
                  }
                  else
                  {
                    if ( (v103[26] & 0x40) != 0 )
                    {
                      v106 = (char *)ObpInfoMaskToOffset[v103[26] & 0x7F];
                      if ( v103 != v106 )
                        ObpHandleRevocationBlockRemoveObject(v103 - v106);
                    }
                    if ( ObpTraceFlags )
                      ObpDeregisterObject(v103);
                    ObpRemoveObjectRoutine(v103, 0LL);
                  }
                }
                v16 = -1073741752;
              }
              else
              {
                *p_Flags &= ~0x400u;
                *PoolWithTag = v185;
                PoolWithTag[1] = *(_QWORD *)(v94 + 8);
                PoolWithTag[2] = 0LL;
                v95[22] = PoolWithTag;
                v16 = 0;
                if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
                  KiReleaseSpinLockInstrumented(v102, retaddr);
                else
                  _InterlockedAnd64((volatile signed __int64 *)v102, 0LL);
                __writecr8((unsigned __int8)Src);
              }
            }
            else
            {
              v97 = (char *)v185 - 48;
              if ( ObpTraceFlags )
                ObpPushStackInfo((_DWORD)v185 - 48);
              v98 = _InterlockedExchangeAdd64((volatile signed __int64 *)v97, 0xFFFFFFFFFFFFFFFFuLL);
              v99 = v98 <= 1;
              v100 = v98 - 1;
              if ( v99 )
              {
                if ( *((_QWORD *)v97 + 1) )
                  KeBugCheckEx(
                    0x18u,
                    ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v97[24] ^ (unsigned __int64)BYTE1(v97)],
                    (ULONG_PTR)v185,
                    1uLL,
                    *((_QWORD *)v97 + 1));
                if ( v100 < 0 )
                  KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)v185, 2uLL, v100);
                if ( KeGetCurrentThread()->SpecialApcDisable
                  || !(unsigned __int8)KeAreInterruptsEnabled()
                  || KeGetCurrentIrql() )
                {
                  ObpDeferObjectDeletion((signed __int64)v97);
                }
                else
                {
                  if ( (v97[26] & 0x40) != 0 )
                  {
                    v101 = (char *)ObpInfoMaskToOffset[v97[26] & 0x7F];
                    if ( v97 != v101 )
                      ObpHandleRevocationBlockRemoveObject(v97 - v101);
                  }
                  if ( ObpTraceFlags )
                    ObpDeregisterObject(v97);
                  ObpRemoveObjectRoutine(v97, 0LL);
                }
              }
              v16 = -1073741670;
            }
          }
          goto LABEL_279;
        }
        break;
      case FileReplaceCompletionInformation:
        v107 = *(_QWORD *)(v54 + 24);
        v108 = 0LL;
        BugCheckParameter2 = 0LL;
        if ( *((_QWORD *)Object + 22) )
        {
          if ( *(_QWORD *)v107 )
          {
            v16 = ObReferenceObjectByHandle(*(HANDLE *)v107, 2u, IoCompletionObjectType, v177, &v205, 0LL);
            v108 = v205;
            BugCheckParameter2 = (ULONG_PTR)v205;
          }
          if ( v16 >= 0 )
          {
            v16 = IopReplaceCompletionPort(Object, v108, *(_QWORD *)(v107 + 8));
            if ( v108 )
            {
              v109 = (signed __int64)v108 - 48;
              if ( ObpTraceFlags )
                ObpPushStackInfo(v109);
              v110 = _InterlockedExchangeAdd64((volatile signed __int64 *)v109, 0xFFFFFFFFFFFFFFFFuLL);
              v99 = v110 <= 1;
              v111 = v110 - 1;
              if ( v99 )
              {
                if ( *(_QWORD *)(v109 + 8) )
                  KeBugCheckEx(
                    0x18u,
                    ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v109 + 24) ^ (unsigned __int64)BYTE1(v109)],
                    BugCheckParameter2,
                    1uLL,
                    *(_QWORD *)(v109 + 8));
                if ( v111 < 0 )
                  KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 2uLL, v111);
                if ( KeGetCurrentThread()->SpecialApcDisable
                  || !(unsigned __int8)KeAreInterruptsEnabled()
                  || KeGetCurrentIrql() )
                {
                  ObpDeferObjectDeletion(v109);
                }
                else
                {
                  if ( (*(_BYTE *)(v109 + 26) & 0x40) != 0 )
                  {
                    v112 = ObpInfoMaskToOffset[*(_BYTE *)(v109 + 26) & 0x7F];
                    if ( v109 != v112 )
                      ObpHandleRevocationBlockRemoveObject(v109 - v112);
                  }
                  if ( ObpTraceFlags )
                    ObpDeregisterObject(v109);
                  ObpRemoveObjectRoutine(v109, 0LL);
                }
              }
            }
          }
          goto LABEL_279;
        }
        break;
      case FileIoCompletionNotificationInformation:
        v113 = *(_DWORD **)(v54 + 24);
        v114 = p_Flags;
        if ( (*p_Flags & 2) != 0 )
        {
          v16 = -1073741811;
        }
        else
        {
          v16 = 0;
          if ( (*v113 & 1) != 0 )
            *p_Flags |= 0x2000000u;
          if ( (*v113 & 2) != 0 )
            *v114 |= 0x4000000u;
          if ( (*v113 & 4) != 0 )
            *v114 |= 0x8000000u;
        }
        *(_DWORD *)(v54 + 48) = v16;
        *(_QWORD *)(v54 + 56) = 0LL;
        v69 = v178;
        goto LABEL_443;
      case FileIoStatusBlockRangeInformation:
        v115 = v177;
        v116 = SeSinglePrivilegeCheck(SeLockMemoryPrivilege, v177);
        v114 = p_Flags;
        if ( v116 )
        {
          if ( (*p_Flags & 2) != 0 )
          {
            v16 = -1073741811;
          }
          else
          {
            v16 = IopSetFileObjectIosbRange(Object, v54, p_Flags);
            v114 = p_Flags;
          }
        }
        else
        {
          v16 = -1073741727;
        }
        *(_DWORD *)(v54 + 48) = v16;
        *(_QWORD *)(v54 + 56) = 0LL;
        v69 = v178;
LABEL_444:
        if ( v16 == 259 )
        {
          if ( !v69 )
          {
            v169 = KeWaitForSingleObject(&v192, Executive, v115, 0, 0LL);
            if ( v169 == 257 || v169 == 192 )
              IopCancelAlertedRequest(&v192, (PIRP)v54);
            v16 = v197[0];
            *v188 = *(PIO_STATUS_BLOCK)v197;
            goto LABEL_511;
          }
          v156 = (*(_BYTE *)v114 & 4) != 0;
          v157 = Object;
          while ( 1 )
          {
            v158 = v177;
            if ( !v156 )
              v158 = 0;
            v159 = KeWaitForSingleObject(v157 + 38, Executive, v158, 1u, 0LL);
            if ( v159 != 257 && v159 != 192 )
              break;
            if ( !v156 && (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 1) == 0 )
            {
              v160 = 0;
              CurrentIrql = KeGetCurrentIrql();
              __writecr8(1uLL);
              if ( !v157[39] )
                v160 = *(_BYTE *)(v54 + 68) == 1;
              __writecr8(CurrentIrql);
              if ( !v160 )
                continue;
            }
            IopCancelAlertedRequest(v157 + 38, (PIRP)v54);
            break;
          }
          v16 = *((_DWORD *)Object + 14);
          _InterlockedExchange((volatile __int32 *)Object + 29, 0);
          v162 = Object;
          if ( *((_DWORD *)Object + 28) )
            KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
          v163 = (signed __int64)v162 - 48;
          if ( ObpTraceFlags )
            ObpPushStackInfo(v163);
          v164 = _InterlockedExchangeAdd64((volatile signed __int64 *)v163, 0xFFFFFFFFFFFFFFFFuLL);
          v99 = v164 <= 1;
          v165 = v164 - 1;
          if ( v99 )
          {
            if ( *(_QWORD *)(v163 + 8) )
              KeBugCheckEx(
                0x18u,
                ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v163 + 24) ^ (unsigned __int64)BYTE1(v163)],
                (ULONG_PTR)Object,
                1uLL,
                *(_QWORD *)(v163 + 8));
            if ( v165 < 0 )
              KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 2uLL, v165);
            if ( KeGetCurrentThread()->SpecialApcDisable
              || !(unsigned __int8)KeAreInterruptsEnabled()
              || KeGetCurrentIrql() )
            {
              ObpDeferObjectDeletion(v163);
            }
            else
            {
              if ( (*(_BYTE *)(v163 + 26) & 0x40) != 0 )
              {
                v166 = ObpInfoMaskToOffset[*(_BYTE *)(v163 + 26) & 0x7F];
                if ( v163 != v166 )
                  ObpHandleRevocationBlockRemoveObject(v163 - v166);
              }
              if ( ObpTraceFlags )
                ObpDeregisterObject(v163);
              ObpRemoveObjectRoutine(v163, 0LL);
            }
          }
          v167 = KeGetCurrentThread();
          v168 = v167->KernelApcDisable + 1;
          v167->KernelApcDisable = v168;
          if ( v168
            || ($CD287064E7C9F7953DE243E927CFCB99 *)v167->ApcState.ApcListHead[0].Flink == &v167->152
            || v167->SpecialApcDisable )
          {
            goto LABEL_511;
          }
        }
        else
        {
          if ( !v69 )
            *(_QWORD *)(v54 + 80) = 0LL;
          *(_QWORD *)(v54 + 72) = v188;
          v170 = KeGetCurrentIrql();
          __writecr8(1uLL);
          IopCompleteRequest(v54 + 120, (__int64)v221, &v206, (ULONG_PTR *)&v204, &v206);
          __writecr8(v170);
          if ( !v178 )
            goto LABEL_511;
          _InterlockedExchange((volatile __int32 *)Object + 29, 0);
          v171 = Object;
          if ( *((_DWORD *)Object + 28) )
            KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
          v172 = (signed __int64)v171 - 48;
          if ( ObpTraceFlags )
            ObpPushStackInfo(v172);
          v173 = _InterlockedExchangeAdd64((volatile signed __int64 *)v172, 0xFFFFFFFFFFFFFFFFuLL);
          v99 = v173 <= 1;
          v174 = v173 - 1;
          if ( v99 )
          {
            if ( *(_QWORD *)(v172 + 8) )
              KeBugCheckEx(
                0x18u,
                ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v172 + 24) ^ (unsigned __int64)BYTE1(v172)],
                (ULONG_PTR)Object,
                1uLL,
                *(_QWORD *)(v172 + 8));
            if ( v174 < 0 )
              KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 2uLL, v174);
            if ( KeGetCurrentThread()->SpecialApcDisable
              || !(unsigned __int8)KeAreInterruptsEnabled()
              || KeGetCurrentIrql() )
            {
              ObpDeferObjectDeletion(v172);
            }
            else
            {
              if ( (*(_BYTE *)(v172 + 26) & 0x40) != 0 )
              {
                v175 = ObpInfoMaskToOffset[*(_BYTE *)(v172 + 26) & 0x7F];
                if ( v172 != v175 )
                  ObpHandleRevocationBlockRemoveObject(v172 - v175);
              }
              if ( ObpTraceFlags )
                ObpDeregisterObject(v172);
              ObpRemoveObjectRoutine(v172, 0LL);
            }
          }
          v167 = KeGetCurrentThread();
          v176 = v167->KernelApcDisable + 1;
          v167->KernelApcDisable = v176;
          if ( v176
            || ($CD287064E7C9F7953DE243E927CFCB99 *)v167->ApcState.ApcListHead[0].Flink == &v167->152
            || v167->SpecialApcDisable )
          {
            goto LABEL_511;
          }
        }
        KiCheckForKernelApcDelivery(v167);
LABEL_511:
        if ( v181 )
          KeSetKernelStackSwapEnable(1u);
        if ( Handle )
          ObCloseHandle(Handle, 0);
        return v16;
      case FileIoPriorityHintInformation:
        v117 = *(_DWORD **)(v54 + 24);
        if ( *v117 <= 2u )
        {
          v16 = IopAllocateFileObjectExtension(Object, &v211);
          if ( v16 >= 0 )
            *(_DWORD *)(v211 + 64) = *v117 + 1;
          goto LABEL_147;
        }
        goto LABEL_146;
      default:
        v69 = v178;
        if ( !v178 )
          ObfReferenceObjectWithTag(Object, 0x746C6644u);
        v118 = *((_QWORD *)Object + 26);
        if ( v118 && *(_DWORD *)(v118 + 64) )
        {
          v119 = *(_DWORD *)(v54 + 16) & 0xFFF1FFFF;
          *(_DWORD *)(v54 + 16) = v119;
          *(_DWORD *)(v54 + 16) = v119 | (*(_DWORD *)(v118 + 64) << 17);
        }
        else
        {
          v120 = KeGetCurrentThread();
          v121 = (*((_DWORD *)&v120[1].SwapListEntry + 3) >> 9) & 7;
          if ( (v120->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
            v121 = 0;
          if ( v121 < 2 && v120 == KeGetCurrentThread() && HIDWORD(v120[1].Timer.TimerListEntry.Flink) )
            v121 = 2;
          *(_DWORD *)(v54 + 16) = *(_DWORD *)(v54 + 16) & 0xFFF1FFFF | ((v121 + 1) << 17);
        }
        v122 = IoGetIoPriorityHint((PIRP)v54);
        if ( !*(_BYTE *)(v54 + 64) && v122 < IoPriorityNormal )
        {
          v123 = *(_QWORD *)(v54 + 152);
          if ( !v123 || (*(_DWORD *)(v123 + 116) & 0x400) == 0 && (*(_DWORD *)(v123 + 1728) & 0x20) == 0 )
          {
            ++IoKernelIssuedIoBoostedCount;
            *(_DWORD *)(v54 + 16) = *(_DWORD *)(v54 + 16) & 0xFFF1FFFF | 0x60000;
          }
        }
        if ( *(char *)(v54 + 71) < 0
          || (v124 = *(_BYTE **)(v54 + 200)) == 0LL
          || (v77 = (*v124 & 2) == 0, v125 = 1, v77) )
        {
          v125 = 0;
        }
        if ( v125 )
        {
          EtwActivityIdControlKernel(1, &v213);
          v224 = *(_OWORD *)(*(_QWORD *)(v54 + 200) + 16LL);
          v207 = &v224;
          EtwActivityIdControlKernel(2, (PVOID *)&v207);
          if ( pIofCallDriver )
          {
            v126 = pIofCallDriver(AttachedDevice, v54, retaddr);
          }
          else
          {
            v127 = *(_BYTE *)(v54 + 67) - 1;
            *(_BYTE *)(v54 + 67) = v127;
            if ( v127 <= 0 )
              KeBugCheckEx(0x35u, v54, 0LL, 0LL, 0LL);
            v128 = (unsigned __int8 *)(*(_QWORD *)(v54 + 184) - 72LL);
            *(_QWORD *)(v54 + 184) = v128;
            *((_QWORD *)v128 + 5) = AttachedDevice;
            if ( *v128 == 22 && (unsigned __int8)(v128[1] - 2) <= 1u )
              v126 = IopPoHandleIrp(v54);
            else
              v126 = ((__int64 (__fastcall *)(PDEVICE_OBJECT, ULONG_PTR))AttachedDevice->DriverObject->MajorFunction[*v128])(
                       AttachedDevice,
                       v54);
          }
          v16 = v126;
          v216 = v213;
          EtwActivityIdControlKernel(2, &v216);
          goto LABEL_188;
        }
        if ( pIofCallDriver )
        {
          v82 = pIofCallDriver(AttachedDevice, v54, retaddr);
        }
        else
        {
          v129 = *(_BYTE *)(v54 + 67) - 1;
          *(_BYTE *)(v54 + 67) = v129;
          if ( v129 <= 0 )
            KeBugCheckEx(0x35u, v54, 0LL, 0LL, 0LL);
          v130 = (unsigned __int8 *)(*(_QWORD *)(v54 + 184) - 72LL);
          *(_QWORD *)(v54 + 184) = v130;
          *((_QWORD *)v130 + 5) = AttachedDevice;
          if ( *v130 == 22 && (unsigned __int8)(v130[1] - 2) <= 1u )
            v82 = IopPoHandleIrp(v54);
          else
            v82 = ((__int64 (__fastcall *)(PDEVICE_OBJECT, ULONG_PTR))AttachedDevice->DriverObject->MajorFunction[*v130])(
                    AttachedDevice,
                    v54);
        }
        goto LABEL_187;
    }
    v16 = -1073741811;
LABEL_279:
    *(_DWORD *)(v54 + 48) = v16;
    *(_QWORD *)(v54 + 56) = 0LL;
    v69 = v178;
LABEL_442:
    v114 = p_Flags;
LABEL_443:
    v115 = v177;
    goto LABEL_444;
  }
  if ( (unsigned int)v5 >= 0x10 )
  {
    p_Event = (__int16 *)&v18->Event;
    if ( !v46 )
      p_Event = &v192;
    v47 = IopTrackLink((int)v18, (int)v197, (int)Src, v5, (__int64)p_Event, v177);
    v184 = v47;
    if ( v47 >= 0 )
    {
      v49 = &v188->0;
      v188->Information = 0LL;
      *v49 = v47;
    }
  }
  else
  {
    v47 = -1073741820;
  }
  if ( v178 )
  {
    _InterlockedExchange((volatile __int32 *)&v18->Busy, 0);
    v50 = Object;
    if ( *((_DWORD *)Object + 28) )
      KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
    ObfDereferenceObjectWithTag(v50, 0x746C6644u);
    v51 = KeGetCurrentThread();
    v52 = v51->KernelApcDisable + 1;
    v51->KernelApcDisable = v52;
    if ( !v52
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v51->ApcState.ApcListHead[0].Flink != &v51->152
      && !v51->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery(v51);
    }
    v18 = (struct _FILE_OBJECT *)Object;
  }
  ObfDereferenceObjectWithTag(v18, 0x746C6644u);
  return v47;
}
