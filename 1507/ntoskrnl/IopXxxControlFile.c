/*
 * XREFs of IopXxxControlFile @ 0x14048DB80
 * Callers:
 *     NtFsControlFile @ 0x14042CAF8 (NtFsControlFile.c)
 *     NtDeviceIoControlFile @ 0x14048DB20 (NtDeviceIoControlFile.c)
 * Callees:
 *     IoSetIoCompletionEx2 @ 0x140013590 (IoSetIoCompletionEx2.c)
 *     ExAllocatePoolWithTagPriority @ 0x140013F48 (ExAllocatePoolWithTagPriority.c)
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     EtwActivityIdControlKernel @ 0x140026D54 (EtwActivityIdControlKernel.c)
 *     IoAllocateMdl @ 0x140033BF0 (IoAllocateMdl.c)
 *     MmProbeAndLockPages @ 0x140034050 (MmProbeAndLockPages.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140045B50 (ExAllocatePoolWithQuotaTag.c)
 *     IoGetRelatedDeviceObject @ 0x140048020 (IoGetRelatedDeviceObject.c)
 *     IopQueueThreadIrp @ 0x140048420 (IopQueueThreadIrp.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     IofCallDriver @ 0x140048540 (IofCallDriver.c)
 *     IofCompleteRequest @ 0x140048F70 (IofCompleteRequest.c)
 *     IopCompleteRequest @ 0x14004A190 (IopCompleteRequest.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     IoThreadToProcess @ 0x1400507F0 (IoThreadToProcess.c)
 *     IoGetIoPriorityHint @ 0x140070020 (IoGetIoPriorityHint.c)
 *     IopGetFileObjectExtension @ 0x1400716C0 (IopGetFileObjectExtension.c)
 *     IoGetAttachedDevice @ 0x1400D1B70 (IoGetAttachedDevice.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400EF678 (ObDereferenceObjectDeferDelete.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     IopQueueIrpToFileObject @ 0x140107B00 (IopQueueIrpToFileObject.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     IopDecrementCompletionContextUsageCount @ 0x1401F1F5C (IopDecrementCompletionContextUsageCount.c)
 *     IopIncrementCompletionContextUsageCountAndReadData @ 0x1401F2578 (IopIncrementCompletionContextUsageCountAndReadData.c)
 *     MmUpdateMdlTracker @ 0x140214574 (MmUpdateMdlTracker.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     RtlIsSandboxedToken @ 0x1404115C4 (RtlIsSandboxedToken.c)
 *     SeQueryInformationToken @ 0x140481E90 (SeQueryInformationToken.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     SeCaptureSubjectContextEx @ 0x1404CA2C0 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x1404CA4C0 (SeReleaseSubjectContext.c)
 *     PsReferencePrimaryToken @ 0x14050D730 (PsReferencePrimaryToken.c)
 *     IopAcquireFileObjectLock @ 0x140540A5C (IopAcquireFileObjectLock.c)
 *     IopCopyOffloadCapable @ 0x14055A658 (IopCopyOffloadCapable.c)
 *     IopExceptionCleanup @ 0x14055D264 (IopExceptionCleanup.c)
 *     IopCancelAlertedRequest @ 0x14058EC70 (IopCancelAlertedRequest.c)
 *     IopAllocateIrpCleanup @ 0x140670E48 (IopAllocateIrpCleanup.c)
 *     IopValidateJunctionTarget @ 0x14067350C (IopValidateJunctionTarget.c)
 *     ExRaiseAccessViolation @ 0x1406F7890 (ExRaiseAccessViolation.c)
 *     VfFastIoCheckState @ 0x140739E88 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140739F38 (VfFastIoSnapState.c)
 */

__int64 __fastcall IopXxxControlFile(
        HANDLE Handle,
        void *a2,
        __int64 a3,
        __int64 a4,
        unsigned int *a5,
        unsigned int a6,
        char *a7,
        int a8,
        char *VirtualAddress,
        ULONG a10,
        char a11)
{
  KPROCESSOR_MODE PreviousMode; // r9
  _DWORD *v13; // rcx
  unsigned int v14; // ebx
  unsigned __int64 v15; // rcx
  ULONG64 v16; // rdx
  unsigned __int64 v17; // rdx
  SIZE_T v18; // r14
  NTSTATUS v19; // edi
  struct _FILE_OBJECT *v20; // rsi
  _DWORD *v21; // rax
  struct _KPROCESS *Process; // rcx
  PACCESS_TOKEN v23; // rbx
  KPROCESSOR_MODE v24; // dl
  struct _KTHREAD *v26; // r12
  struct _KPROCESS *v27; // rax
  bool IsSandboxedToken; // r12
  int v29; // ecx
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE v31; // di
  struct _KTHREAD *v32; // rcx
  __int16 v33; // ax
  unsigned int v34; // ebx
  ULONG64 v35; // rcx
  PDEVICE_OBJECT AttachedDevice; // rax
  ULONG64 v37; // rdx
  __int64 v38; // r8
  PFAST_IO_DISPATCH FastIoDispatch; // rcx
  __int64 (__fastcall *FastIoDeviceControl)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD, _QWORD); // r12
  char *v41; // rcx
  unsigned __int64 v42; // rcx
  void *v43; // rdi
  char v44; // r12
  _DWORD *v45; // rcx
  HANDLE v46; // rbx
  PVOID v47; // rbx
  struct _KTHREAD *v48; // rcx
  __int16 v49; // ax
  int v50; // eax
  int v51; // ecx
  __int64 Irp; // rax
  __int64 v53; // rdi
  unsigned int *v54; // r12
  POOL_TYPE v55; // ecx
  PVOID PoolWithTagPriority; // rax
  struct _MDL *Mdl; // rax
  unsigned __int64 v58; // rbx
  __int64 v59; // r14
  SIZE_T v60; // rdx
  PVOID PoolWithQuotaTag; // rax
  char GrantedAccess; // cl
  int v63; // r13d
  __int64 v64; // rax
  int v65; // r14d
  __int64 FileObjectExtension; // rbx
  bool i; // zf
  unsigned __int64 v68; // rcx
  _DWORD *v69; // rax
  struct _KPROCESS *v70; // rcx
  PACCESS_TOKEN v71; // rbx
  unsigned int v72; // esi
  char *v73; // r14
  struct _KTHREAD *v74; // rax
  _DWORD *v75; // rax
  unsigned int v76; // ecx
  struct _KTHREAD *v77; // r8
  int v78; // edx
  __int64 v79; // rcx
  _BYTE *v80; // rax
  char v81; // al
  unsigned __int8 CurrentIrql; // bl
  bool v83; // bl
  void *v84; // rsi
  KPROCESSOR_MODE v85; // al
  NTSTATUS v86; // eax
  bool v87; // cl
  unsigned __int8 v88; // al
  PVOID v89; // rbx
  struct _KTHREAD *v90; // rcx
  __int16 v91; // ax
  KPROCESSOR_MODE v92; // [rsp+50h] [rbp-188h]
  char v93; // [rsp+51h] [rbp-187h]
  bool v94; // [rsp+52h] [rbp-186h]
  char v95; // [rsp+53h] [rbp-185h]
  PVOID Object; // [rsp+58h] [rbp-180h] BYREF
  SIZE_T NumberOfBytes; // [rsp+60h] [rbp-178h] BYREF
  ULONG Length; // [rsp+68h] [rbp-170h]
  _BYTE v99[8]; // [rsp+70h] [rbp-168h] BYREF
  PVOID v100; // [rsp+78h] [rbp-160h]
  unsigned int v101; // [rsp+80h] [rbp-158h]
  PDEVICE_OBJECT DeviceObject; // [rsp+88h] [rbp-150h]
  void *Src; // [rsp+90h] [rbp-148h]
  __int128 v104; // [rsp+98h] [rbp-140h] BYREF
  unsigned int *v105; // [rsp+A8h] [rbp-130h]
  ULONG *p_Flags; // [rsp+B0h] [rbp-128h]
  PVOID P; // [rsp+B8h] [rbp-120h]
  int v108; // [rsp+C0h] [rbp-118h]
  _BYTE v109[12]; // [rsp+C4h] [rbp-114h] BYREF
  PVOID TokenInformation; // [rsp+D0h] [rbp-108h] BYREF
  __int64 v111; // [rsp+D8h] [rbp-100h] BYREF
  HANDLE Handlea; // [rsp+E0h] [rbp-F8h]
  __int64 v113; // [rsp+E8h] [rbp-F0h] BYREF
  PETHREAD Thread; // [rsp+F0h] [rbp-E8h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+F8h] [rbp-E0h] BYREF
  PVOID v116; // [rsp+100h] [rbp-D8h]
  struct _FILE_OBJECT *v117; // [rsp+108h] [rbp-D0h] BYREF
  int v118[2]; // [rsp+110h] [rbp-C8h]
  PVOID v119[2]; // [rsp+118h] [rbp-C0h] BYREF
  PVOID v120; // [rsp+128h] [rbp-B0h] BYREF
  __int128 *v121; // [rsp+130h] [rbp-A8h] BYREF
  PVOID v122; // [rsp+138h] [rbp-A0h] BYREF
  PVOID v123; // [rsp+140h] [rbp-98h] BYREF
  LOCK_OPERATION v124; // [rsp+148h] [rbp-90h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+150h] [rbp-88h] BYREF
  PVOID v126; // [rsp+170h] [rbp-68h]
  char v127[8]; // [rsp+178h] [rbp-60h] BYREF
  __int128 v128; // [rsp+180h] [rbp-58h] BYREF
  void *retaddr; // [rsp+1D8h] [rbp+0h]

  Handlea = a2;
  *(_QWORD *)&v109[4] = a2;
  v105 = a5;
  Src = a7;
  LODWORD(NumberOfBytes) = a8;
  p_Flags = (ULONG *)VirtualAddress;
  Length = a10;
  v100 = 0LL;
  v101 = a6 & 3;
  Thread = KeGetCurrentThread();
  PreviousMode = Thread->PreviousMode;
  v92 = PreviousMode;
  if ( !PreviousMode )
  {
    v18 = (unsigned int)NumberOfBytes;
    v14 = Length;
    goto LABEL_27;
  }
  v13 = v105;
  if ( (unsigned __int64)v105 >= MmUserProbeAddress )
    v13 = (_DWORD *)MmUserProbeAddress;
  *v13 = *v13;
  if ( (a6 & 3) == 0 )
  {
    if ( !VirtualAddress )
    {
      v14 = 0;
      Length = 0;
      goto LABEL_17;
    }
    v14 = Length;
    if ( !Length )
      goto LABEL_17;
    v15 = (unsigned __int64)VirtualAddress;
    v16 = (ULONG64)&VirtualAddress[Length - 1];
    if ( (unsigned __int64)VirtualAddress > v16 || v16 >= MmUserProbeAddress )
    {
      if ( !KeGetCurrentThread()->ApcState.Process->SecurePid )
        ExRaiseAccessViolation();
      v14 = Length;
      goto LABEL_17;
    }
    v17 = (v16 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    do
    {
      *(_BYTE *)v15 = *(_BYTE *)v15;
      v15 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    }
    while ( v15 != v17 );
  }
  v14 = Length;
LABEL_17:
  if ( (a6 & 3) == 3 )
  {
    v18 = (unsigned int)NumberOfBytes;
  }
  else if ( a7 )
  {
    v18 = (unsigned int)NumberOfBytes;
    if ( (_DWORD)NumberOfBytes
      && ((unsigned __int64)&a7[(unsigned int)NumberOfBytes] > MmUserProbeAddress
       || &a7[(unsigned int)NumberOfBytes] < a7) )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
  }
  else
  {
    v18 = 0LL;
    LODWORD(NumberOfBytes) = 0;
  }
LABEL_27:
  v19 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)IoFileObjectType, PreviousMode, &Object, &HandleInformation);
  v20 = (struct _FILE_OBJECT *)Object;
  v126 = Object;
  if ( v19 >= 0 )
  {
    v21 = (_DWORD *)*((_QWORD *)Object + 26);
    if ( v21 )
    {
      if ( (*v21 & 4) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        LODWORD(TokenInformation) = 0;
        v23 = PsReferencePrimaryToken(Process);
        SeQueryInformationToken(v23, TokenIsAppContainer, &TokenInformation);
        ObfDereferenceObject(v23);
        v20 = (struct _FILE_OBJECT *)Object;
        if ( (_DWORD)TokenInformation )
        {
          ObfDereferenceObject(Object);
          v19 = -1073739504;
        }
        v14 = Length;
        v18 = (unsigned int)NumberOfBytes;
      }
    }
  }
  if ( v19 < 0 )
    return (unsigned int)v19;
  if ( v20->CompletionContext && (a3 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    ObfDereferenceObject(v20);
    return 3221225485LL;
  }
  v24 = v92;
  if ( v92
    && (unsigned __int16)a6 >> 14
    && (((unsigned __int16)a6 >> 14) & HandleInformation.GrantedAccess) != (unsigned __int16)a6 >> 14 )
  {
    ObfDereferenceObject(v20);
    return 3221225506LL;
  }
  if ( a6 == 606820 || a6 == 623208 )
  {
    v19 = IopCopyOffloadCapable(v20, a6);
    if ( v19 < 0 )
      goto LABEL_58;
    v24 = v92;
  }
  if ( Handlea )
  {
    v19 = ObReferenceObjectByHandle(Handlea, 2u, (POBJECT_TYPE)ExEventObjectType, v24, &v120, 0LL);
    v100 = v120;
    if ( v19 >= 0 )
    {
      KeResetEvent((PRKEVENT)v120);
      goto LABEL_48;
    }
LABEL_58:
    ObfDereferenceObject(v20);
    return (unsigned int)v19;
  }
LABEL_48:
  P = 0LL;
  v94 = 0;
  v95 = 0;
  if ( v92 && a6 == 589988 && (unsigned int)v18 >= 4 )
  {
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    v26 = Thread;
    v27 = IoThreadToProcess(Thread);
    SeCaptureSubjectContextEx(v26, v27, &SubjectContext);
    IsSandboxedToken = RtlIsSandboxedToken(&SubjectContext, v92);
    v94 = IsSandboxedToken;
    v99[2] = IsSandboxedToken;
    SeReleaseSubjectContext(&SubjectContext);
    if ( IsSandboxedToken )
    {
      v108 = 0;
      v29 = *(_DWORD *)Src;
      v108 = *(_DWORD *)Src;
      if ( v29 == -1610612733 )
      {
        v95 = 1;
        v19 = IopValidateJunctionTarget(Src, v18, (__int64)&NumberOfBytes);
        v18 = (unsigned int)NumberOfBytes;
      }
      if ( v19 < 0 )
      {
        if ( v100 )
          ObfDereferenceObject(v100);
        goto LABEL_58;
      }
    }
  }
  else
  {
    IsSandboxedToken = 0;
  }
  p_Flags = &v20->Flags;
  if ( (v20->Flags & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( _InterlockedExchange((volatile __int32 *)Object + 29, 1) )
    {
      v32 = KeGetCurrentThread();
      v33 = v32->KernelApcDisable + 1;
      v32->KernelApcDisable = v33;
      if ( !v33
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v32->ApcState.ApcListHead[0].Flink != &v32->152
        && !v32->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      v31 = v92;
      v20 = (struct _FILE_OBJECT *)Object;
      v34 = IopAcquireFileObjectLock(Object);
      if ( v99[1] )
      {
        if ( v100 )
          ObfDereferenceObject(v100);
        if ( P )
          ExFreePoolWithTag(P, 0);
        ObfDereferenceObject(v20);
        return v34;
      }
    }
    else
    {
      v20 = (struct _FILE_OBJECT *)Object;
      ObfReferenceObject(Object);
      v31 = v92;
    }
    v93 = 1;
    v18 = (unsigned int)NumberOfBytes;
    v14 = Length;
  }
  else
  {
    v93 = 0;
    v31 = v92;
    if ( v92 )
    {
      if ( KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7] )
      {
        a3 |= 1uLL;
        v35 = *v105;
        v105 = (unsigned int *)v35;
        if ( v35 >= MmUserProbeAddress )
          v35 = MmUserProbeAddress;
        *(_DWORD *)v35 = *(_DWORD *)v35;
      }
      v20 = (struct _FILE_OBJECT *)Object;
      v18 = (unsigned int)NumberOfBytes;
      v14 = Length;
    }
  }
  if ( (*p_Flags & 0x800) != 0 )
    AttachedDevice = IoGetAttachedDevice(v20->DeviceObject);
  else
    AttachedDevice = IoGetRelatedDeviceObject(v20);
  DeviceObject = AttachedDevice;
  if ( a11 )
  {
    if ( !IsSandboxedToken )
    {
      FastIoDispatch = AttachedDevice->DriverObject->FastIoDispatch;
      if ( FastIoDispatch )
      {
        FastIoDeviceControl = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD, _QWORD))FastIoDispatch->FastIoDeviceControl;
        *(_QWORD *)v118 = FastIoDeviceControl;
        if ( FastIoDeviceControl )
        {
          if ( v31 && VirtualAddress )
          {
            if ( v101 == 1 )
            {
              if ( v14 )
              {
                v41 = &VirtualAddress[v14];
                if ( (unsigned __int64)v41 > MmUserProbeAddress || v41 < VirtualAddress )
                  *(_BYTE *)MmUserProbeAddress = 0;
              }
            }
            else if ( v101 == 2 && v14 )
            {
              v42 = (unsigned __int64)VirtualAddress;
              v37 = (ULONG64)&VirtualAddress[v14 - 1];
              if ( (unsigned __int64)VirtualAddress > v37 || v37 >= MmUserProbeAddress )
              {
                if ( !KeGetCurrentThread()->ApcState.Process->SecurePid )
                  ExRaiseAccessViolation();
                v20 = (struct _FILE_OBJECT *)Object;
                v18 = (unsigned int)NumberOfBytes;
                v14 = Length;
              }
              else
              {
                v37 = (v37 & 0xFFFFFFFFFFFFF000uLL) + 4096;
                do
                {
                  *(_BYTE *)v42 = *(_BYTE *)v42;
                  v42 = (v42 & 0xFFFFFFFFFFFFF000uLL) + 4096;
                }
                while ( v42 != v37 );
                v20 = (struct _FILE_OBJECT *)Object;
                v18 = (unsigned int)NumberOfBytes;
                v14 = Length;
              }
            }
          }
          if ( a6 == 589856 )
          {
            _InterlockedIncrement((volatile signed __int32 *)0xFFFFF780000002DCLL);
            v20 = (struct _FILE_OBJECT *)Object;
            v18 = (unsigned int)NumberOfBytes;
            v14 = Length;
          }
          v104 = 0uLL;
          if ( (MmVerifierData & 0x10) != 0 )
            v43 = (void *)VfFastIoSnapState();
          else
            v43 = 0LL;
          LOBYTE(v37) = 1;
          v44 = FastIoDeviceControl(v20, v37, Src, (unsigned int)v18, VirtualAddress, v14, a6, &v104, DeviceObject);
          if ( v43 )
            VfFastIoCheckState(v43, v118[0]);
          if ( v44 )
          {
            v111 = 0LL;
            v113 = 0LL;
            v99[0] = 0;
            if ( (a3 & 1) != 0 )
            {
              v45 = v105;
              v105[1] = DWORD2(v104);
              *v45 = v104;
            }
            else
            {
              *(_OWORD *)v105 = v104;
            }
            v46 = Handlea;
            if ( v20->CompletionContext
              && ((v20->Flags & 0x2000000) == 0 || (v104 & 0xC0000000) == 0x80000000)
              && (v104 & 0xC0000000) != 0xC0000000 )
            {
              IopIncrementCompletionContextUsageCountAndReadData((ULONG_PTR)v20, v99, &v111, &v113);
            }
            if ( v46 )
            {
              if ( (v20->Flags & 0x8000000) == 0 || v111 && (v104 & 0xC0000000) == 0x80000000 )
                KeSetEvent((PRKEVENT)v100, 0, 0);
              ObfDereferenceObject(v100);
            }
            if ( v93 )
            {
              _InterlockedExchange((volatile __int32 *)&v20->Busy, 0);
              v47 = Object;
              if ( *((_DWORD *)Object + 28) )
                KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
              ObfDereferenceObject(v47);
              v48 = KeGetCurrentThread();
              v49 = v48->KernelApcDisable + 1;
              v48->KernelApcDisable = v49;
              if ( !v49
                && ($CD287064E7C9F7953DE243E927CFCB99 *)v48->ApcState.ApcListHead[0].Flink != &v48->152
                && !v48->SpecialApcDisable )
              {
                KiCheckForKernelApcDelivery();
              }
              v20 = (struct _FILE_OBJECT *)Object;
            }
            if ( v111 && a4 )
            {
              v50 = IoSetIoCompletionEx2(v111, v113, a4, v104, *((__int64 *)&v104 + 1), 1u, 0LL, 0);
              v51 = v104;
              if ( v50 < 0 )
                v51 = -1073741670;
              if ( (v51 & 0xC0000000) == 0x80000000 )
                v51 = 259;
              LODWORD(v104) = v51;
            }
            if ( v99[0] )
              IopDecrementCompletionContextUsageCount((ULONG_PTR)v20);
            ObfDereferenceObject(v20);
            return (unsigned int)v104;
          }
        }
      }
    }
  }
  if ( (*p_Flags & 0x4000000) == 0 )
    KeResetEvent(&v20->Event);
  LOBYTE(v38) = v93 == 0;
  Irp = pIoAllocateIrp(DeviceObject, (unsigned __int8)DeviceObject->StackSize, v38, retaddr);
  v53 = Irp;
  *(_QWORD *)&v109[4] = Irp;
  if ( !Irp )
  {
    IopAllocateIrpCleanup(v20, v100);
    if ( P )
      ExFreePoolWithTag(P, 0);
    return 3221225626LL;
  }
  *(_QWORD *)(Irp + 192) = v20;
  *(_QWORD *)(Irp + 152) = Thread;
  *(_QWORD *)(Irp + 160) = 0LL;
  *(_BYTE *)(Irp + 64) = v92;
  *(_BYTE *)(Irp + 65) = 0;
  *(_BYTE *)(Irp + 68) = 0;
  *(_QWORD *)(Irp + 104) = 0LL;
  *(_QWORD *)(Irp + 80) = v100;
  *(_QWORD *)(Irp + 72) = v105;
  *(_QWORD *)(Irp + 88) = a3;
  *(_QWORD *)(Irp + 96) = a4;
  v54 = (unsigned int *)(*(_QWORD *)(Irp + 184) - 72LL);
  *v54 = (a11 != 0) + 13;
  *((_QWORD *)v54 + 6) = v20;
  v54[2] = v14;
  v54[4] = v18;
  v54[6] = a6;
  v55 = NonPagedPoolNx;
  if ( a11 )
    v55 = NonPagedPoolNxCacheAligned;
  *(_QWORD *)(Irp + 8) = 0LL;
  *(_QWORD *)(Irp + 24) = 0LL;
  if ( (DeviceObject->Flags & 0x80000) != 0 && !v94 )
  {
LABEL_158:
    *(_DWORD *)(Irp + 16) = 0;
    *(_QWORD *)(Irp + 112) = VirtualAddress;
    *((_QWORD *)v54 + 4) = Src;
    goto LABEL_190;
  }
  if ( v101 )
  {
    if ( v101 > 2 )
    {
      if ( v101 != 3 )
        goto LABEL_190;
      goto LABEL_158;
    }
    *(_DWORD *)(Irp + 16) = 0;
    *((_QWORD *)v54 + 4) = 0LL;
    if ( (_DWORD)v18 && Src )
    {
      if ( ViVerifierDriverAddedThunkListHead )
      {
        PoolWithTagPriority = ExAllocatePoolWithTagPriority(
                                v55,
                                v18,
                                0x20206F49u,
                                (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
        if ( !PoolWithTagPriority )
          RtlRaiseStatus(-1073741670);
      }
      else
      {
        PoolWithTagPriority = ExAllocatePoolWithQuotaTag(v55, v18, 0x20206F49u);
      }
      v116 = PoolWithTagPriority;
      *(_QWORD *)(v53 + 24) = PoolWithTagPriority;
      memmove(PoolWithTagPriority, Src, v18);
      *(_DWORD *)(v53 + 16) = 48;
    }
    if ( v14 )
    {
      Mdl = IoAllocateMdl(VirtualAddress, v14, 0, 1u, (PIRP)v53);
      v58 = (unsigned __int64)Mdl;
      *(_QWORD *)(v53 + 8) = Mdl;
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      v124 = v101 != 1;
      v59 = *v54;
      MmProbeAndLockPages(Mdl, v92, v124);
      if ( (MmTrackLockedPages & 1) != 0 )
        MmUpdateMdlTracker(v58, (__int64)DeviceObject->DriverObject->MajorFunction[v59], (__int64)DeviceObject);
    }
  }
  else
  {
    *((_QWORD *)v54 + 4) = 0LL;
    if ( (_DWORD)v18 || v14 )
    {
      if ( P )
      {
        *(_QWORD *)(Irp + 24) = P;
      }
      else
      {
        v60 = v14;
        if ( (unsigned int)v18 > v14 )
          v60 = (unsigned int)v18;
        if ( ViVerifierDriverAddedThunkListHead )
        {
          PoolWithQuotaTag = ExAllocatePoolWithTagPriority(
                               v55,
                               v60,
                               0x20206F49u,
                               (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
          if ( !PoolWithQuotaTag )
            RtlRaiseStatus(-1073741670);
        }
        else
        {
          PoolWithQuotaTag = ExAllocatePoolWithQuotaTag(v55, v60, 0x20206F49u);
        }
        v119[1] = PoolWithQuotaTag;
        *(_QWORD *)(v53 + 24) = PoolWithQuotaTag;
        if ( Src )
          memmove(PoolWithQuotaTag, Src, (unsigned int)v18);
      }
      *(_DWORD *)(v53 + 16) = 48;
      *(_QWORD *)(v53 + 112) = VirtualAddress;
      if ( v14 )
        *(_DWORD *)(v53 + 16) = 112;
    }
    else
    {
      *(_DWORD *)(Irp + 16) = 0;
      *(_QWORD *)(Irp + 112) = 0LL;
    }
    if ( !IopDisableBufferedIoInit && (unsigned int)v18 < v14 )
      memset((void *)(*(_QWORD *)(v53 + 24) + (unsigned int)v18), 0, v14 - (unsigned int)v18);
  }
LABEL_190:
  GrantedAccess = HandleInformation.GrantedAccess;
  *((_BYTE *)v54 + 2) |= HandleInformation.GrantedAccess & 1;
  *((_BYTE *)v54 + 2) |= 2 * (GrantedAccess & 2);
  if ( !a11 )
    *(_DWORD *)(v53 + 16) |= 0x800u;
  if ( a6 == 589856 )
  {
    _InterlockedIncrement((volatile signed __int32 *)0xFFFFF780000002DCLL);
    v20 = (struct _FILE_OBJECT *)Object;
  }
  if ( v94 && !v95 && **(_DWORD **)(v53 + 24) == -1610612733 )
  {
    IopExceptionCleanup(v20, (PIRP)v53, v100, 0LL);
    return 3221225485LL;
  }
  v117 = v20;
  v63 = 0;
  v64 = *(_QWORD *)(v53 + 88);
  if ( (v64 & 1) != 0 )
  {
    *(_BYTE *)(v53 + 71) |= 0x10u;
    *(_QWORD *)(v53 + 88) = v64 & 0xFFFFFFFFFFFFFFFEuLL;
  }
  if ( v93 || *(_QWORD *)(v53 + 88) )
  {
    if ( (*p_Flags & 2) != 0 )
      *(_BYTE *)(v53 + 71) |= 2u;
  }
  else
  {
    v65 = 1;
    if ( *(_QWORD *)(v53 + 96) && !*(_QWORD *)(v53 + 80) && v20->CompletionContext )
    {
      if ( IopQueueIrpToFileObject(v53, (__int64)v20) )
      {
        v65 = 0;
        v63 = 1;
      }
    }
    else if ( (*(_DWORD *)(v53 + 16) & 0x10) == 0 && !v20->CompletionContext && v20->FileObjectExtension )
    {
      FileObjectExtension = IopGetFileObjectExtension((__int64)v20, 2, 0LL);
      for ( i = FileObjectExtension == 0; !i; i = FileObjectExtension == 0 )
      {
        v68 = *(_QWORD *)(v53 + 72);
        if ( v68 >= *(_QWORD *)FileObjectExtension && v68 + 16 <= *(_QWORD *)(FileObjectExtension + 8) )
        {
          v20 = (struct _FILE_OBJECT *)Object;
          if ( *(_KPROCESS **)(FileObjectExtension + 32) == KeGetCurrentThread()->ApcState.Process )
          {
            if ( IopQueueIrpToFileObject(v53, (__int64)Object) )
            {
              *(_QWORD *)(v53 + 72) += *(_QWORD *)(FileObjectExtension + 24) - *(_QWORD *)FileObjectExtension;
              goto LABEL_223;
            }
          }
        }
        FileObjectExtension = *(_QWORD *)(FileObjectExtension + 40);
      }
    }
    if ( !v65 )
      goto LABEL_223;
  }
  IopQueueThreadIrp(v53);
LABEL_223:
  v69 = v20->FileObjectExtension;
  if ( v69
    && (*v69 & 4) != 0
    && (v70 = KeGetCurrentThread()->ApcState.Process,
        *(_DWORD *)v109 = 0,
        v71 = PsReferencePrimaryToken(v70),
        SeQueryInformationToken(v71, TokenIsAppContainer, (PVOID *)v109),
        ObfDereferenceObject(v71),
        *(_DWORD *)v109) )
  {
    v72 = -1073739504;
    *(_DWORD *)(v53 + 48) = -1073739504;
    IofCompleteRequest((PIRP)v53, 0);
    v73 = (char *)Object;
  }
  else
  {
    v74 = KeGetCurrentThread();
    ++v74->OtherOperationCount;
    __incgsdword(0x2E64u);
    v73 = (char *)Object;
    if ( !v93 )
      ObfReferenceObject(Object);
    v75 = v20->FileObjectExtension;
    if ( v75 && v75[16] )
    {
      v76 = *(_DWORD *)(v53 + 16) & 0xFFF1FFFF;
      *(_DWORD *)(v53 + 16) = v76;
      *(_DWORD *)(v53 + 16) = v76 | (v75[16] << 17);
    }
    else
    {
      v77 = KeGetCurrentThread();
      v78 = (*((_DWORD *)&v77[1].SwapListEntry + 3) >> 9) & 7;
      if ( (v77->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
        v78 = 0;
      if ( v78 < 2 && v77 == KeGetCurrentThread() && HIDWORD(v77[1].Timer.TimerListEntry.Flink) )
        v78 = 2;
      *(_DWORD *)(v53 + 16) = *(_DWORD *)(v53 + 16) & 0xFFF1FFFF | ((v78 << 17) + 0x20000);
      v73 = (char *)Object;
    }
    if ( !*(_BYTE *)(v53 + 64) && IoGetIoPriorityHint((PIRP)v53) < IoPriorityNormal )
    {
      v79 = *(_QWORD *)(v53 + 152);
      if ( !v79 || (*(_DWORD *)(v79 + 116) & 0x400) == 0 && (*(_DWORD *)(v79 + 1728) & 0x20) == 0 )
      {
        ++IoKernelIssuedIoBoostedCount;
        *(_DWORD *)(v53 + 16) = *(_DWORD *)(v53 + 16) & 0xFFF1FFFF | 0x60000;
      }
    }
    if ( *(char *)(v53 + 71) < 0 || (v80 = *(_BYTE **)(v53 + 200)) == 0LL || (i = (*v80 & 2) == 0, v81 = 1, i) )
      v81 = 0;
    if ( v81 )
    {
      EtwActivityIdControlKernel(1, &v123);
      v128 = *(_OWORD *)(*(_QWORD *)(v53 + 200) + 16LL);
      v121 = &v128;
      EtwActivityIdControlKernel(2, (PVOID *)&v121);
      v72 = IofCallDriver(DeviceObject, (PIRP)v53);
      v122 = v123;
      EtwActivityIdControlKernel(2, &v122);
    }
    else
    {
      v72 = IofCallDriver(DeviceObject, (PIRP)v53);
    }
    if ( !v93 )
      ObDereferenceObjectDeferDelete(v73);
  }
  if ( !a11 && v72 != 259 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    IopCompleteRequest(v53 + 120, (__int64)v127, v119, (ULONG_PTR *)&v117, v119);
    __writecr8(CurrentIrql);
  }
  if ( v93 )
  {
    if ( v72 == 259 )
    {
      v83 = (*(_BYTE *)p_Flags & 4) != 0;
      v84 = v73 + 152;
      while ( 1 )
      {
        v85 = v92;
        if ( !v83 )
          v85 = 0;
        v86 = KeWaitForSingleObject(v84, Executive, v85, 1u, 0LL);
        if ( v86 != 257 && v86 != 192 )
          break;
        if ( !v83 )
        {
          v73 = (char *)Object;
          if ( (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 1) == 0 )
          {
            v87 = 0;
            v88 = KeGetCurrentIrql();
            __writecr8(1uLL);
            if ( !*((_DWORD *)Object + 39) )
              v87 = *(_BYTE *)(v53 + 68) == 1;
            __writecr8(v88);
            if ( !v87 )
              continue;
          }
        }
        IopCancelAlertedRequest(v84, (PIRP)v53);
        break;
      }
      v72 = *((_DWORD *)v73 + 14);
    }
    _InterlockedExchange((volatile __int32 *)v73 + 29, 0);
    v89 = Object;
    if ( *((_DWORD *)Object + 28) )
      KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
    ObfDereferenceObject(v89);
    v90 = KeGetCurrentThread();
    v91 = v90->KernelApcDisable + 1;
    v90->KernelApcDisable = v91;
    if ( !v91
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v90->ApcState.ApcListHead[0].Flink != &v90->152
      && !v90->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  else if ( v63 && (v72 & 0xC0000000) == 0x80000000 )
  {
    return 259;
  }
  return v72;
}
