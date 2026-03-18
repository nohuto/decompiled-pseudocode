/*
 * XREFs of IopXxxControlFile @ 0x140410C30
 * Callers:
 *     NtDeviceIoControlFile @ 0x140411FA0 (NtDeviceIoControlFile.c)
 *     NtFsControlFile @ 0x1404D8658 (NtFsControlFile.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x14001B460 (ObDereferenceObjectDeferDelete.c)
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
 *     IoThreadToProcess @ 0x1400284B0 (IoThreadToProcess.c)
 *     ExAllocatePoolWithTagPriority @ 0x140041DC0 (ExAllocatePoolWithTagPriority.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     IoGetRelatedDeviceObject @ 0x1400435F0 (IoGetRelatedDeviceObject.c)
 *     IopQueueThreadIrp @ 0x140043B00 (IopQueueThreadIrp.c)
 *     IoGetIoPriorityHint @ 0x140077CE0 (IoGetIoPriorityHint.c)
 *     IopGetFileObjectExtension @ 0x14007CDA0 (IopGetFileObjectExtension.c)
 *     IofCallDriver @ 0x14007E4C0 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     IofCompleteRequest @ 0x140084CE0 (IofCompleteRequest.c)
 *     IopCompleteRequest @ 0x140086090 (IopCompleteRequest.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14008E480 (ExAllocatePoolWithQuotaTag.c)
 *     IopQueueIrpToFileObject @ 0x14008F8D0 (IopQueueIrpToFileObject.c)
 *     IoSetIoCompletionEx2 @ 0x140093370 (IoSetIoCompletionEx2.c)
 *     IoGetAttachedDevice @ 0x140097FE0 (IoGetAttachedDevice.c)
 *     MmProbeAndLockPages @ 0x1400A7230 (MmProbeAndLockPages.c)
 *     IopIsProcessAppContainer @ 0x1400EFD88 (IopIsProcessAppContainer.c)
 *     IoAllocateMdl @ 0x1400FC2E0 (IoAllocateMdl.c)
 *     EtwActivityIdControlKernel @ 0x1400FF658 (EtwActivityIdControlKernel.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     MmUpdateMdlTracker @ 0x1401D319C (MmUpdateMdlTracker.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     SeReleaseSubjectContext @ 0x140435320 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x140470510 (SeCaptureSubjectContextEx.c)
 *     RtlIsSandboxedToken @ 0x140478894 (RtlIsSandboxedToken.c)
 *     IopAcquireFileObjectLock @ 0x1404AC66C (IopAcquireFileObjectLock.c)
 *     IopCopyOffloadCapable @ 0x1404C4ECC (IopCopyOffloadCapable.c)
 *     IopCancelAlertedRequest @ 0x1404C5FBC (IopCancelAlertedRequest.c)
 *     IopExceptionCleanup @ 0x1404C68BC (IopExceptionCleanup.c)
 *     IopAllocateIrpCleanup @ 0x1405F70B8 (IopAllocateIrpCleanup.c)
 *     IopValidateJunctionTarget @ 0x1405F93B0 (IopValidateJunctionTarget.c)
 *     ExRaiseAccessViolation @ 0x140673340 (ExRaiseAccessViolation.c)
 *     VfFastIoCheckState @ 0x1406B9854 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1406B9904 (VfFastIoSnapState.c)
 */

__int64 __fastcall IopXxxControlFile(
        HANDLE Handle,
        IRP *a2,
        LARGE_INTEGER a3,
        __int64 a4,
        struct _IO_STATUS_BLOCK *a5,
        unsigned int a6,
        char *a7,
        int a8,
        void *a9,
        ULONG a10,
        unsigned __int8 a11)
{
  KPROCESSOR_MODE PreviousMode; // r11
  _DWORD *v13; // rcx
  unsigned int v14; // esi
  unsigned __int64 v15; // rcx
  ULONG64 v16; // rdx
  unsigned __int64 v17; // rdx
  SIZE_T v18; // r14
  NTSTATUS v19; // edi
  struct _FILE_OBJECT *v20; // rbx
  _DWORD *v21; // rax
  bool IsProcessAppContainer; // al
  unsigned int v23; // r13d
  KPROCESSOR_MODE v24; // dl
  struct _KPROCESS *v26; // rax
  int v27; // ecx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v29; // edi
  KPROCESSOR_MODE v30; // di
  ULONG64 Status; // rcx
  PDEVICE_OBJECT AttachedDevice; // rax
  ULONG64 v33; // rdx
  __int64 v34; // r8
  PFAST_IO_DISPATCH FastIoDispatch; // rcx
  ULONG64 v36; // rcx
  unsigned __int64 v37; // rcx
  void *v38; // rdi
  char v39; // r12
  struct _IO_STATUS_BLOCK *v40; // rcx
  int v41; // r9d
  __int64 *CompletionContext; // rcx
  __int64 v43; // rdi
  __int64 v44; // rsi
  PVOID v45; // rbx
  int v46; // eax
  int v47; // ecx
  IRP *v48; // rax
  __int64 v49; // r8
  __int64 v50; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r12
  __int64 v52; // rdx
  POOL_TYPE v53; // ecx
  PVOID PoolWithQuotaTag; // rax
  struct _MDL *Mdl; // rax
  unsigned __int64 v56; // rsi
  __int64 v57; // r14
  SIZE_T v58; // rdx
  PVOID PoolWithTagPriority; // rax
  char GrantedAccess; // cl
  bool v61; // r14
  int v62; // r12d
  __int64 v63; // rax
  char v64; // si
  int v65; // r14d
  __int64 FileObjectExtension; // rsi
  bool i; // zf
  unsigned __int64 v68; // rcx
  _DWORD *v69; // rax
  char *v70; // rsi
  struct _KTHREAD *v71; // rax
  _DWORD *v72; // rax
  unsigned int v73; // ecx
  struct _KTHREAD *v74; // r8
  int v75; // edx
  __int64 v76; // rcx
  _BYTE *v77; // rax
  char v78; // al
  unsigned __int8 CurrentIrql; // bl
  bool v80; // bl
  void *v81; // r14
  KPROCESSOR_MODE v82; // al
  NTSTATUS v83; // eax
  bool v84; // cl
  unsigned __int8 v85; // al
  PVOID v86; // rbx
  struct _KTHREAD *v87; // rcx
  __int16 v88; // ax
  char v89; // [rsp+50h] [rbp-178h]
  KPROCESSOR_MODE v90; // [rsp+51h] [rbp-177h]
  char v91; // [rsp+52h] [rbp-176h]
  char IsSandboxedToken; // [rsp+53h] [rbp-175h]
  PVOID Object; // [rsp+58h] [rbp-170h] BYREF
  SIZE_T NumberOfBytes; // [rsp+60h] [rbp-168h] BYREF
  ULONG Length; // [rsp+68h] [rbp-160h]
  char v96; // [rsp+71h] [rbp-157h]
  char v97; // [rsp+72h] [rbp-156h]
  PVOID v98; // [rsp+78h] [rbp-150h]
  unsigned int v99; // [rsp+80h] [rbp-148h]
  PDEVICE_OBJECT DeviceObject; // [rsp+88h] [rbp-140h]
  void *Src; // [rsp+90h] [rbp-138h]
  struct _IO_STATUS_BLOCK *v102; // [rsp+98h] [rbp-130h]
  __int128 v103; // [rsp+A0h] [rbp-128h] BYREF
  PVOID P; // [rsp+B0h] [rbp-118h]
  int v105; // [rsp+B8h] [rbp-110h]
  PIRP Irp; // [rsp+C0h] [rbp-108h]
  PVOID VirtualAddress; // [rsp+C8h] [rbp-100h]
  ULONG *p_Flags; // [rsp+D0h] [rbp-F8h]
  PETHREAD Thread; // [rsp+D8h] [rbp-F0h]
  HANDLE Handlea; // [rsp+E0h] [rbp-E8h]
  int v111[2]; // [rsp+E8h] [rbp-E0h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+F0h] [rbp-D8h] BYREF
  __int128 *v113; // [rsp+F8h] [rbp-D0h] BYREF
  struct _FILE_OBJECT *v114; // [rsp+100h] [rbp-C8h] BYREF
  _QWORD v115[3]; // [rsp+108h] [rbp-C0h] BYREF
  LOCK_OPERATION v116; // [rsp+120h] [rbp-A8h]
  PVOID v117; // [rsp+128h] [rbp-A0h] BYREF
  PVOID v118; // [rsp+130h] [rbp-98h] BYREF
  PVOID v119; // [rsp+138h] [rbp-90h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+140h] [rbp-88h] BYREF
  PVOID v121; // [rsp+160h] [rbp-68h]
  char v122[8]; // [rsp+168h] [rbp-60h] BYREF
  __int128 v123; // [rsp+170h] [rbp-58h] BYREF
  void *retaddr; // [rsp+1C8h] [rbp+0h]

  Handlea = a2;
  Irp = a2;
  v102 = a5;
  Src = a7;
  LODWORD(NumberOfBytes) = a8;
  VirtualAddress = a9;
  Length = a10;
  v98 = 0LL;
  v99 = a6 & 3;
  Thread = KeGetCurrentThread();
  PreviousMode = Thread->PreviousMode;
  v90 = PreviousMode;
  if ( !PreviousMode )
  {
    v18 = (unsigned int)NumberOfBytes;
    v14 = Length;
    goto LABEL_27;
  }
  v13 = &v102->0;
  if ( (unsigned __int64)v102 >= MmUserProbeAddress )
    v13 = (_DWORD *)MmUserProbeAddress;
  *v13 = *v13;
  if ( (a6 & 3) == 0 )
  {
    if ( !a9 )
    {
      v14 = 0;
      Length = 0;
      goto LABEL_17;
    }
    v14 = Length;
    if ( !Length )
      goto LABEL_17;
    v15 = (unsigned __int64)a9;
    v16 = (ULONG64)a9 + Length - 1;
    if ( (unsigned __int64)a9 > v16 || v16 >= MmUserProbeAddress )
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
  v121 = Object;
  if ( v19 >= 0 )
  {
    v21 = (_DWORD *)*((_QWORD *)Object + 26);
    if ( v21 )
    {
      if ( (*v21 & 4) != 0 )
      {
        IsProcessAppContainer = IopIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process);
        v20 = (struct _FILE_OBJECT *)Object;
        if ( IsProcessAppContainer )
        {
          ObfDereferenceObject(Object);
          v23 = -1073739504;
          v19 = -1073739504;
          v18 = (unsigned int)NumberOfBytes;
          v14 = Length;
          goto LABEL_34;
        }
        v18 = (unsigned int)NumberOfBytes;
        v14 = Length;
      }
    }
  }
  v23 = -1073739504;
LABEL_34:
  if ( v19 < 0 )
    return (unsigned int)v19;
  if ( v20->CompletionContext && (a3.QuadPart & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    ObfDereferenceObject(v20);
    return 3221225485LL;
  }
  v24 = v90;
  if ( v90
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
      goto LABEL_59;
    v24 = v90;
  }
  if ( Handlea )
  {
    v19 = ObReferenceObjectByHandle(Handlea, 2u, (POBJECT_TYPE)ExEventObjectType, v24, &v119, 0LL);
    v98 = v119;
    if ( v19 >= 0 )
    {
      KeResetEvent((PRKEVENT)v119);
      goto LABEL_49;
    }
LABEL_59:
    ObfDereferenceObject(v20);
    return (unsigned int)v19;
  }
LABEL_49:
  P = 0LL;
  IsSandboxedToken = 0;
  v91 = 0;
  if ( v90 )
  {
    if ( a6 == 589988 && (unsigned int)v18 >= 4 )
    {
      memset(&SubjectContext, 0, sizeof(SubjectContext));
      v26 = IoThreadToProcess(Thread);
      SeCaptureSubjectContextEx(Thread, v26, &SubjectContext);
      IsSandboxedToken = RtlIsSandboxedToken(&SubjectContext);
      v96 = IsSandboxedToken;
      SeReleaseSubjectContext(&SubjectContext);
      if ( IsSandboxedToken )
      {
        v105 = 0;
        v27 = *(_DWORD *)Src;
        v105 = *(_DWORD *)Src;
        if ( v27 == -1610612733 )
        {
          v91 = 1;
          v19 = IopValidateJunctionTarget(Src, v18, (__int64)&NumberOfBytes);
          v18 = (unsigned int)NumberOfBytes;
        }
        if ( v19 < 0 )
        {
          if ( v98 )
            ObfDereferenceObject(v98);
          goto LABEL_59;
        }
      }
    }
  }
  p_Flags = &v20->Flags;
  if ( (v20->Flags & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( _InterlockedExchange((volatile __int32 *)Object + 29, 1) )
    {
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v20 = (struct _FILE_OBJECT *)Object;
      v29 = IopAcquireFileObjectLock(Object);
      if ( v97 )
      {
        if ( v98 )
          ObfDereferenceObject(v98);
        if ( P )
          ExFreePoolWithTag(P, 0);
        ObfDereferenceObject(v20);
        return v29;
      }
    }
    else
    {
      v20 = (struct _FILE_OBJECT *)Object;
      ObfReferenceObject(Object);
    }
    v89 = 1;
    v18 = (unsigned int)NumberOfBytes;
    v14 = Length;
    v30 = v90;
  }
  else
  {
    v89 = 0;
    v30 = v90;
    if ( v90 )
    {
      if ( KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7] )
      {
        a3.QuadPart |= 1uLL;
        Status = (unsigned int)v102->Status;
        v102 = (struct _IO_STATUS_BLOCK *)Status;
        if ( Status >= MmUserProbeAddress )
          Status = MmUserProbeAddress;
        *(_DWORD *)Status = *(_DWORD *)Status;
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
        *(_QWORD *)v111 = FastIoDispatch->FastIoDeviceControl;
        if ( *(_QWORD *)v111 )
        {
          if ( v30 && a9 )
          {
            if ( v99 == 1 )
            {
              if ( v14 )
              {
                v36 = (ULONG64)a9 + v14;
                if ( v36 > MmUserProbeAddress || v36 < (unsigned __int64)a9 )
                  *(_BYTE *)MmUserProbeAddress = 0;
              }
            }
            else if ( v99 == 2 && v14 )
            {
              v37 = (unsigned __int64)a9;
              v33 = (ULONG64)a9 + v14 - 1;
              if ( (unsigned __int64)a9 > v33 || v33 >= MmUserProbeAddress )
              {
                if ( !KeGetCurrentThread()->ApcState.Process->SecurePid )
                  ExRaiseAccessViolation();
                v20 = (struct _FILE_OBJECT *)Object;
                v18 = (unsigned int)NumberOfBytes;
                v14 = Length;
              }
              else
              {
                v33 = (v33 & 0xFFFFFFFFFFFFF000uLL) + 4096;
                do
                {
                  *(_BYTE *)v37 = *(_BYTE *)v37;
                  v37 = (v37 & 0xFFFFFFFFFFFFF000uLL) + 4096;
                }
                while ( v37 != v33 );
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
          if ( (MmVerifierData & 0x10) != 0 )
            v38 = (void *)VfFastIoSnapState();
          else
            v38 = 0LL;
          LOBYTE(v33) = 1;
          v39 = (*(__int64 (__fastcall **)(struct _FILE_OBJECT *, ULONG64, void *, _QWORD, void *, unsigned int, unsigned int, __int128 *, PDEVICE_OBJECT))v111)(
                  v20,
                  v33,
                  Src,
                  (unsigned int)v18,
                  a9,
                  v14,
                  a6,
                  &v103,
                  DeviceObject);
          if ( v38 )
            VfFastIoCheckState(v38, v111[0]);
          if ( v39 )
          {
            if ( (a3.LowPart & 1) != 0 )
            {
              v40 = v102;
              HIDWORD(v102->Pointer) = DWORD2(v103);
              v40->Status = v103;
            }
            else
            {
              *(_OWORD *)&v102->Status = v103;
            }
            v41 = v103;
            CompletionContext = (__int64 *)v20->CompletionContext;
            if ( !CompletionContext
              || (v20->Flags & 0x2000000) != 0 && (v103 & 0xC0000000) != 0x80000000
              || (v103 & 0xC0000000) == 0xC0000000 )
            {
              v43 = 0LL;
              v44 = 0LL;
            }
            else
            {
              v43 = *CompletionContext;
              v44 = CompletionContext[1];
            }
            if ( Handlea )
            {
              if ( (v20->Flags & 0x8000000) == 0 || v43 && (v103 & 0xC0000000) == 0x80000000 )
                KeSetEvent((PRKEVENT)v98, 0, 0);
              ObfDereferenceObject(v98);
              v41 = v103;
            }
            if ( v89 )
            {
              _InterlockedExchange((volatile __int32 *)&v20->Busy, 0);
              v45 = Object;
              if ( *((_DWORD *)Object + 28) )
                KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
              ObfDereferenceObject(v45);
              KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
              v41 = v103;
              v20 = (struct _FILE_OBJECT *)Object;
            }
            if ( v43 && a4 )
            {
              v46 = IoSetIoCompletionEx2(v43, v44, a4, v41, *((__int64 *)&v103 + 1), 1u, 0LL, 0);
              v47 = v103;
              if ( v46 < 0 )
                v47 = -1073741670;
              if ( (v47 & 0xC0000000) == 0x80000000 )
                v47 = 259;
              LODWORD(v103) = v47;
            }
            ObfDereferenceObject(v20);
            return (unsigned int)v103;
          }
        }
      }
    }
  }
  if ( (*p_Flags & 0x4000000) == 0 )
    KeResetEvent(&v20->Event);
  LOBYTE(v34) = v89 == 0;
  v48 = (IRP *)pIoAllocateIrp(DeviceObject, (unsigned __int8)DeviceObject->StackSize, v34, retaddr);
  v50 = (__int64)v48;
  Irp = v48;
  if ( !v48 )
  {
    IopAllocateIrpCleanup(v20, v98);
    if ( P )
      ExFreePoolWithTag(P, 0);
    return 3221225626LL;
  }
  v48->Tail.Overlay.OriginalFileObject = v20;
  v48->Tail.Overlay.Thread = Thread;
  v48->Tail.Overlay.AuxiliaryBuffer = 0LL;
  v48->RequestorMode = v90;
  v48->PendingReturned = 0;
  v48->Cancel = 0;
  v48->CancelRoutine = 0LL;
  v48->UserEvent = (PKEVENT)v98;
  v48->UserIosb = v102;
  v48->Overlay.AllocationSize = a3;
  v48->Overlay.AsynchronousParameters.UserApcContext = (PVOID)a4;
  CurrentStackLocation = v48->Tail.Overlay.CurrentStackLocation;
  v52 = a11;
  *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = (a11 != 0) + 13;
  CurrentStackLocation[-1].FileObject = v20;
  CurrentStackLocation[-1].Parameters.Read.Length = v14;
  CurrentStackLocation[-1].Parameters.Create.Options = v18;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = a6;
  v53 = NonPagedPoolNx;
  if ( a11 )
    v53 = NonPagedPoolNxCacheAligned;
  v48->MdlAddress = 0LL;
  v48->AssociatedIrp.MasterIrp = 0LL;
  if ( (DeviceObject->Flags & 0x80000) != 0 && !IsSandboxedToken )
    goto LABEL_149;
  if ( !v99 )
  {
    CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
    if ( (_DWORD)v18 || v14 )
    {
      if ( P )
      {
        v48->AssociatedIrp.MasterIrp = (struct _IRP *)P;
      }
      else
      {
        v58 = v14;
        if ( (unsigned int)v18 > v14 )
          v58 = (unsigned int)v18;
        if ( ViVerifierDriverAddedThunkListHead )
        {
          PoolWithTagPriority = ExAllocatePoolWithTagPriority(
                                  v53,
                                  v58,
                                  0x20206F49u,
                                  (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
          if ( !PoolWithTagPriority )
            RtlRaiseStatus(-1073741670);
        }
        else
        {
          PoolWithTagPriority = ExAllocatePoolWithQuotaTag(v53, v58, 0x20206F49u);
        }
        v115[1] = PoolWithTagPriority;
        *(_QWORD *)(v50 + 24) = PoolWithTagPriority;
        if ( Src )
          memmove(PoolWithTagPriority, Src, (unsigned int)v18);
      }
      *(_DWORD *)(v50 + 16) = 48;
      *(_QWORD *)(v50 + 112) = VirtualAddress;
      if ( v14 )
        *(_DWORD *)(v50 + 16) = 112;
    }
    else
    {
      v48->Flags = 0;
      v48->UserBuffer = 0LL;
    }
    if ( !IopDisableBufferedIoInit && (unsigned int)v18 < v14 )
      memset((void *)(*(_QWORD *)(v50 + 24) + (unsigned int)v18), 0, v14 - (unsigned int)v18);
    goto LABEL_181;
  }
  if ( v99 <= 2 )
  {
    v48->Flags = 0;
    CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
    if ( (_DWORD)v18 && Src )
    {
      if ( ViVerifierDriverAddedThunkListHead )
      {
        PoolWithQuotaTag = ExAllocatePoolWithTagPriority(
                             v53,
                             v18,
                             0x20206F49u,
                             (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
        if ( !PoolWithQuotaTag )
          RtlRaiseStatus(-1073741670);
      }
      else
      {
        PoolWithQuotaTag = ExAllocatePoolWithQuotaTag(v53, v18, 0x20206F49u);
      }
      v115[2] = PoolWithQuotaTag;
      *(_QWORD *)(v50 + 24) = PoolWithQuotaTag;
      memmove(PoolWithQuotaTag, Src, v18);
      *(_DWORD *)(v50 + 16) = 48;
    }
    if ( v14 )
    {
      Mdl = IoAllocateMdl(VirtualAddress, v14, 0, 1u, (PIRP)v50);
      v56 = (unsigned __int64)Mdl;
      *(_QWORD *)(v50 + 8) = Mdl;
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      v116 = v99 != 1;
      v57 = *(unsigned int *)&CurrentStackLocation[-1].MajorFunction;
      MmProbeAndLockPages(Mdl, v90, v116);
      if ( (MmTrackLockedPages & 1) != 0 )
        MmUpdateMdlTracker(v56, (__int64)DeviceObject->DriverObject->MajorFunction[v57], (__int64)DeviceObject);
    }
    goto LABEL_181;
  }
  if ( v99 == 3 )
  {
LABEL_149:
    v48->Flags = 0;
    v48->UserBuffer = VirtualAddress;
    CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = (PNAMED_PIPE_CREATE_PARAMETERS)Src;
  }
LABEL_181:
  GrantedAccess = HandleInformation.GrantedAccess;
  CurrentStackLocation[-1].Flags |= HandleInformation.GrantedAccess & 1;
  CurrentStackLocation[-1].Flags |= 2 * (GrantedAccess & 2);
  if ( !a11 )
    *(_DWORD *)(v50 + 16) |= 0x800u;
  if ( a6 == 589856 )
  {
    _InterlockedIncrement((volatile signed __int32 *)0xFFFFF780000002DCLL);
    v20 = (struct _FILE_OBJECT *)Object;
  }
  if ( IsSandboxedToken && !v91 && **(_DWORD **)(v50 + 24) == -1610612733 )
  {
    IopExceptionCleanup(v20, (PIRP)v50, v98, 0LL);
    return 3221225485LL;
  }
  v61 = a11 == 0;
  v114 = v20;
  v62 = 0;
  v63 = *(_QWORD *)(v50 + 88);
  if ( (v63 & 1) != 0 )
  {
    *(_BYTE *)(v50 + 71) |= 0x10u;
    *(_QWORD *)(v50 + 88) = v63 & 0xFFFFFFFFFFFFFFFEuLL;
  }
  v64 = v89;
  if ( v89 || *(_QWORD *)(v50 + 88) )
  {
    if ( (*p_Flags & 2) != 0 )
      *(_BYTE *)(v50 + 71) |= 2u;
    IopQueueThreadIrp(v50, v52, v49);
  }
  else
  {
    v65 = 1;
    if ( *(_QWORD *)(v50 + 96) && !*(_QWORD *)(v50 + 80) && v20->CompletionContext )
    {
      if ( IopQueueIrpToFileObject(v50, (__int64)v20, v49) )
      {
        v65 = 0;
        v62 = 1;
      }
    }
    else if ( (*(_DWORD *)(v50 + 16) & 0x10) == 0 && !v20->CompletionContext && v20->FileObjectExtension )
    {
      FileObjectExtension = IopGetFileObjectExtension((__int64)v20, 2, 0LL);
      for ( i = FileObjectExtension == 0; !i; i = FileObjectExtension == 0 )
      {
        v68 = *(_QWORD *)(v50 + 72);
        if ( v68 >= *(_QWORD *)FileObjectExtension && v68 + 16 <= *(_QWORD *)(FileObjectExtension + 8) )
        {
          v20 = (struct _FILE_OBJECT *)Object;
          if ( *(_KPROCESS **)(FileObjectExtension + 32) == KeGetCurrentThread()->ApcState.Process )
          {
            if ( IopQueueIrpToFileObject(v50, (__int64)Object, v49) )
            {
              *(_QWORD *)(v50 + 72) += *(_QWORD *)(FileObjectExtension + 24) - *(_QWORD *)FileObjectExtension;
              goto LABEL_214;
            }
          }
        }
        FileObjectExtension = *(_QWORD *)(FileObjectExtension + 40);
      }
    }
    if ( v65 )
      IopQueueThreadIrp(v50, v52, v49);
LABEL_214:
    v61 = a11 == 0;
    v64 = 0;
  }
  v69 = v20->FileObjectExtension;
  if ( v69 && (*v69 & 4) != 0 && IopIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process) )
  {
    *(_DWORD *)(v50 + 48) = -1073739504;
    IofCompleteRequest((PIRP)v50, 0);
    v70 = (char *)Object;
  }
  else
  {
    v71 = KeGetCurrentThread();
    ++v71->OtherOperationCount;
    __incgsdword(0x2E64u);
    i = v64 == 0;
    v70 = (char *)Object;
    if ( i )
      ObfReferenceObject(Object);
    v72 = v20->FileObjectExtension;
    if ( v72 && v72[18] )
    {
      v73 = *(_DWORD *)(v50 + 16) & 0xFFF1FFFF;
      *(_DWORD *)(v50 + 16) = v73;
      *(_DWORD *)(v50 + 16) = v73 | (v72[18] << 17);
    }
    else
    {
      v74 = KeGetCurrentThread();
      v75 = (*((_DWORD *)&v74[1].SwapListEntry + 3) >> 9) & 7;
      if ( (v74->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
        v75 = 0;
      if ( v75 < 2 && v74 == KeGetCurrentThread() && HIDWORD(v74[1].Timer.TimerListEntry.Flink) )
        v75 = 2;
      *(_DWORD *)(v50 + 16) = *(_DWORD *)(v50 + 16) & 0xFFF1FFFF | ((v75 << 17) + 0x20000);
      v70 = (char *)Object;
    }
    if ( !*(_BYTE *)(v50 + 64) && IoGetIoPriorityHint((PIRP)v50) < IoPriorityNormal )
    {
      v76 = *(_QWORD *)(v50 + 152);
      if ( !v76 || (*(_DWORD *)(v76 + 116) & 0x400) == 0 && (*(_DWORD *)(v76 + 1728) & 0x40) == 0 )
      {
        ++IoKernelIssuedIoBoostedCount;
        *(_DWORD *)(v50 + 16) = *(_DWORD *)(v50 + 16) & 0xFFF1FFFF | 0x60000;
      }
    }
    if ( *(char *)(v50 + 71) < 0 || (v77 = *(_BYTE **)(v50 + 200)) == 0LL || (i = (*v77 & 2) == 0, v78 = 1, i) )
      v78 = 0;
    if ( v78 )
    {
      EtwActivityIdControlKernel(1, &v118);
      v123 = *(_OWORD *)(*(_QWORD *)(v50 + 200) + 16LL);
      v113 = &v123;
      EtwActivityIdControlKernel(2, (PVOID *)&v113);
      v23 = IofCallDriver(DeviceObject, (PIRP)v50);
      v117 = v118;
      EtwActivityIdControlKernel(2, &v117);
    }
    else
    {
      v23 = IofCallDriver(DeviceObject, (PIRP)v50);
    }
    if ( !v89 )
      ObDereferenceObjectDeferDelete(v70);
  }
  if ( v61 && v23 != 259 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    IopCompleteRequest(v50 + 120, (__int64)v122, (__int64)v115, (ULONG_PTR *)&v114, v115);
    __writecr8(CurrentIrql);
  }
  if ( v89 )
  {
    if ( v23 == 259 )
    {
      v80 = (*(_BYTE *)p_Flags & 4) != 0;
      v81 = v70 + 152;
      while ( 1 )
      {
        v82 = v90;
        if ( !v80 )
          v82 = 0;
        v83 = KeWaitForSingleObject(v81, Executive, v82, 1u, 0LL);
        if ( v83 != 257 && v83 != 192 )
          break;
        if ( !v80 )
        {
          v70 = (char *)Object;
          if ( (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 1) == 0 )
          {
            v84 = 0;
            v85 = KeGetCurrentIrql();
            __writecr8(1uLL);
            if ( !*((_DWORD *)Object + 39) )
              v84 = *(_BYTE *)(v50 + 68) == 1;
            __writecr8(v85);
            if ( !v84 )
              continue;
          }
        }
        IopCancelAlertedRequest(v81, (PIRP)v50);
        break;
      }
      v23 = *((_DWORD *)v70 + 14);
    }
    _InterlockedExchange((volatile __int32 *)v70 + 29, 0);
    v86 = Object;
    if ( *((_DWORD *)Object + 28) )
      KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
    ObfDereferenceObject(v86);
    v87 = KeGetCurrentThread();
    v88 = v87->KernelApcDisable + 1;
    v87->KernelApcDisable = v88;
    if ( !v88
      && ($E81C3296F15336D9BF9B2D43BB137B25 *)v87->ApcState.ApcListHead[0].Flink != &v87->152
      && !v87->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery((__int64)v87);
    }
  }
  else if ( v62 && (v23 & 0xC0000000) == 0x80000000 )
  {
    return 259;
  }
  return v23;
}
