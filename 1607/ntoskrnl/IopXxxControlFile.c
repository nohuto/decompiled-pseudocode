/*
 * XREFs of IopXxxControlFile @ 0x140442DD0
 * Callers:
 *     NtDeviceIoControlFile @ 0x140442D70 (NtDeviceIoControlFile.c)
 *     NtFsControlFile @ 0x1404EB46C (NtFsControlFile.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140012330 (ExAllocatePoolWithQuotaTag.c)
 *     IoGetAttachedDevice @ 0x14002DA40 (IoGetAttachedDevice.c)
 *     IoGetRelatedDeviceObject @ 0x14002DC60 (IoGetRelatedDeviceObject.c)
 *     KeResetEvent @ 0x14002E1B0 (KeResetEvent.c)
 *     IoAllocateMdl @ 0x14002EB10 (IoAllocateMdl.c)
 *     MmProbeAndLockPages @ 0x14002ECA0 (MmProbeAndLockPages.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     IoThreadToProcess @ 0x14005F270 (IoThreadToProcess.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     IoSetIoCompletionEx2 @ 0x14007DF40 (IoSetIoCompletionEx2.c)
 *     ExAllocatePoolWithTagPriority @ 0x14007E290 (ExAllocatePoolWithTagPriority.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x14009A334 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     IopIsProcessAppContainer @ 0x1400B06B4 (IopIsProcessAppContainer.c)
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     IopDecrementCompletionContextUsageCount @ 0x1401C48B4 (IopDecrementCompletionContextUsageCount.c)
 *     IopIncrementCompletionContextUsageCountAndReadData @ 0x1401C4DC4 (IopIncrementCompletionContextUsageCountAndReadData.c)
 *     MmUpdateMdlTracker @ 0x1401E308C (MmUpdateMdlTracker.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     IopValidateJunctionTarget @ 0x1403E2B58 (IopValidateJunctionTarget.c)
 *     IopAcquireFileObjectLock @ 0x1403EE090 (IopAcquireFileObjectLock.c)
 *     RtlIsSandboxedToken @ 0x1404118D0 (RtlIsSandboxedToken.c)
 *     SeCaptureSubjectContextEx @ 0x14041E6F0 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x14041E870 (SeReleaseSubjectContext.c)
 *     IopSynchronousServiceTail @ 0x140444680 (IopSynchronousServiceTail.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     IopCopyOffloadCapable @ 0x1404D1430 (IopCopyOffloadCapable.c)
 *     IopAllocateIrpCleanup @ 0x140620E74 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x140621488 (IopExceptionCleanup.c)
 *     ExRaiseAccessViolation @ 0x1406B6180 (ExRaiseAccessViolation.c)
 *     VfFastIoCheckState @ 0x1407058F8 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1407059A8 (VfFastIoSnapState.c)
 */

__int64 IopXxxControlFile(
        HANDLE Handle,
        void *a2,
        LARGE_INTEGER a3,
        __int64 a4,
        struct _IO_STATUS_BLOCK *a5,
        unsigned int a6,
        char *Src,
        ...)
{
  LOCK_OPERATION v8; // r15d
  KPROCESSOR_MODE PreviousMode; // r9
  __int64 v10; // rcx
  ULONG v11; // r14d
  SIZE_T v12; // rsi
  int v13; // edi
  __int64 v14; // r8
  __int64 v15; // r9
  char *v16; // rbx
  _DWORD *v17; // rax
  bool IsProcessAppContainer; // al
  __int64 v19; // rdx
  struct _KPROCESS *v21; // rax
  int v22; // ecx
  PIRP v23; // rdi
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE v25; // r12
  unsigned int v26; // edi
  struct _IO_STATUS_BLOCK *Status; // rcx
  PDEVICE_OBJECT AttachedDevice; // rax
  unsigned __int64 v29; // rdx
  __int64 v30; // r8
  PFAST_IO_DISPATCH FastIoDispatch; // rcx
  bool v32; // zf
  char *v33; // r12
  char *v34; // rcx
  unsigned __int64 v35; // rcx
  void *v36; // rdi
  char v37; // r12
  __int64 v38; // rdi
  int v39; // r9d
  PVOID v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  int v44; // eax
  int v45; // ecx
  IRP *v46; // rax
  IRP *v47; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r12
  char v49; // dl
  POOL_TYPE v50; // ecx
  struct _IRP *PoolWithTagPriority; // rax
  struct _MDL *Mdl; // rax
  unsigned __int64 v53; // rsi
  __int64 v54; // r14
  SIZE_T v55; // rdx
  struct _IRP *PoolWithQuota_0; // rax
  char GrantedAccess; // cl
  unsigned __int8 v58; // [rsp+50h] [rbp-F8h]
  char v59; // [rsp+51h] [rbp-F7h]
  bool IsSandboxedToken; // [rsp+52h] [rbp-F6h]
  char v61; // [rsp+53h] [rbp-F5h]
  char v62[4]; // [rsp+54h] [rbp-F4h] BYREF
  PVOID Object; // [rsp+58h] [rbp-F0h] BYREF
  bool v64; // [rsp+60h] [rbp-E8h]
  char v65[6]; // [rsp+62h] [rbp-E6h] BYREF
  PVOID v66; // [rsp+68h] [rbp-E0h]
  unsigned int v67; // [rsp+70h] [rbp-D8h]
  __int128 v68; // [rsp+78h] [rbp-D0h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+88h] [rbp-C0h]
  int v70; // [rsp+90h] [rbp-B8h]
  PVOID P; // [rsp+98h] [rbp-B0h] BYREF
  PIRP Irp; // [rsp+A0h] [rbp-A8h]
  __int64 v73; // [rsp+A8h] [rbp-A0h] BYREF
  PETHREAD Thread; // [rsp+B0h] [rbp-98h]
  int v75[2]; // [rsp+B8h] [rbp-90h]
  __int64 v76; // [rsp+C0h] [rbp-88h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+C8h] [rbp-80h] BYREF
  LOCK_OPERATION v78; // [rsp+D0h] [rbp-78h]
  PVOID v79[2]; // [rsp+D8h] [rbp-70h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+E8h] [rbp-60h] BYREF
  PVOID v81; // [rsp+108h] [rbp-40h]
  void *retaddr; // [rsp+148h] [rbp+0h]
  SIZE_T NumberOfBytes; // [rsp+188h] [rbp+40h] BYREF
  va_list NumberOfBytesa; // [rsp+188h] [rbp+40h]
  char *Address; // [rsp+190h] [rbp+48h]
  __int64 Length; // [rsp+198h] [rbp+50h]
  __int64 v90; // [rsp+1A0h] [rbp+58h]
  va_list va1; // [rsp+1A8h] [rbp+60h] BYREF

  va_start(va1, Src);
  va_start(NumberOfBytesa, Src);
  NumberOfBytes = va_arg(va1, _QWORD);
  Address = va_arg(va1, char *);
  Length = va_arg(va1, _QWORD);
  v90 = va_arg(va1, _QWORD);
  v8 = IoReadAccess;
  v66 = 0LL;
  v67 = a6 & 3;
  Thread = KeGetCurrentThread();
  PreviousMode = Thread->PreviousMode;
  v58 = PreviousMode;
  if ( PreviousMode )
  {
    v10 = (__int64)a5;
    if ( (unsigned __int64)a5 >= 0x7FFFFFFF0000LL )
      v10 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v10 = *(_DWORD *)v10;
    if ( (a6 & 3) != 0 )
    {
      v11 = Length;
    }
    else if ( Address )
    {
      v11 = Length;
      ProbeForWrite(Address, (unsigned int)Length, 1u);
      PreviousMode = v58;
    }
    else
    {
      v11 = 0;
      LODWORD(Length) = 0;
    }
    if ( (a6 & 3) == 3 )
    {
      v12 = (unsigned int)NumberOfBytes;
    }
    else if ( Src )
    {
      v12 = (unsigned int)NumberOfBytes;
      if ( (_DWORD)NumberOfBytes
        && ((unsigned __int64)&Src[(unsigned int)NumberOfBytes] > 0x7FFFFFFF0000LL
         || &Src[(unsigned int)NumberOfBytes] < Src) )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    else
    {
      v12 = 0LL;
      LODWORD(NumberOfBytes) = 0;
    }
  }
  else
  {
    v11 = Length;
    v12 = (unsigned int)NumberOfBytes;
  }
  v13 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)IoFileObjectType, PreviousMode, &Object, &HandleInformation);
  v16 = (char *)Object;
  v81 = Object;
  if ( v13 >= 0 )
  {
    v17 = (_DWORD *)*((_QWORD *)Object + 26);
    if ( v17 )
    {
      if ( (*v17 & 4) != 0 )
      {
        IsProcessAppContainer = IopIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process);
        v16 = (char *)Object;
        if ( IsProcessAppContainer )
        {
          ObfDereferenceObject(Object);
          v13 = -1073739504;
        }
        v12 = (unsigned int)NumberOfBytes;
        v11 = Length;
      }
    }
  }
  if ( v13 < 0 )
    return (unsigned int)v13;
  if ( *((_QWORD *)v16 + 22) && (a3.QuadPart & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    ObfDereferenceObject(v16);
    return 3221225485LL;
  }
  v19 = v58;
  if ( v58
    && (unsigned __int16)a6 >> 14
    && (((unsigned __int16)a6 >> 14) & HandleInformation.GrantedAccess) != (unsigned __int16)a6 >> 14 )
  {
    ObfDereferenceObject(v16);
    return 3221225506LL;
  }
  if ( a6 == 606820 || a6 == 623208 )
  {
    v13 = IopCopyOffloadCapable(v16, a6);
    if ( v13 < 0 )
      goto LABEL_50;
    v19 = v58;
  }
  if ( !a2 )
    goto LABEL_40;
  v13 = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)ExEventObjectType, v19, v79, 0LL);
  v66 = v79[0];
  if ( v13 < 0 )
  {
LABEL_50:
    ObfDereferenceObject(v16);
    return (unsigned int)v13;
  }
  KeResetEvent((PRKEVENT)v79[0]);
LABEL_40:
  P = 0LL;
  IsSandboxedToken = 0;
  v61 = 0;
  if ( v58 )
  {
    if ( a6 == 589988 && (unsigned int)v12 >= 4 )
    {
      memset(&SubjectContext, 0, sizeof(SubjectContext));
      v21 = IoThreadToProcess(Thread);
      SeCaptureSubjectContextEx(Thread, v21, &SubjectContext);
      IsSandboxedToken = RtlIsSandboxedToken(&SubjectContext, v58);
      v64 = IsSandboxedToken;
      SeReleaseSubjectContext(&SubjectContext);
      if ( IsSandboxedToken )
      {
        v70 = 0;
        v22 = *(_DWORD *)Src;
        v70 = *(_DWORD *)Src;
        if ( v22 == -1610612733 )
        {
          v61 = 1;
          v13 = IopValidateJunctionTarget(Src, v12, v11, &P, (SIZE_T *)NumberOfBytesa);
          v12 = (unsigned int)NumberOfBytes;
        }
        if ( v13 < 0 )
        {
          if ( v66 )
            ObfDereferenceObject(v66);
          goto LABEL_50;
        }
      }
    }
  }
  v23 = (PIRP)(v16 + 80);
  Irp = (PIRP)(v16 + 80);
  if ( (*((_DWORD *)v16 + 20) & 2) == 0 )
  {
    v59 = 0;
    v25 = v58;
    if ( v58 )
    {
      if ( KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7] )
      {
        a3.QuadPart |= 1uLL;
        Status = (struct _IO_STATUS_BLOCK *)(unsigned int)a5->Status;
        a5 = Status;
        Status->Status = Status->Status;
      }
      v11 = Length;
      v12 = (unsigned int)NumberOfBytes;
      v16 = (char *)Object;
    }
    goto LABEL_67;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !_InterlockedExchange((volatile __int32 *)Object + 29, 1) )
  {
    v16 = (char *)Object;
    ObfReferenceObject(Object);
    v25 = v58;
LABEL_62:
    v59 = 1;
    v11 = Length;
    v12 = (unsigned int)NumberOfBytes;
LABEL_67:
    if ( (*(_DWORD *)&v23->Type & 0x800) != 0 )
      AttachedDevice = IoGetAttachedDevice(*((PDEVICE_OBJECT *)v16 + 1));
    else
      AttachedDevice = IoGetRelatedDeviceObject((PFILE_OBJECT)v16);
    DeviceObject = AttachedDevice;
    if ( (_BYTE)v90 )
    {
      if ( !IsSandboxedToken )
      {
        FastIoDispatch = AttachedDevice->DriverObject->FastIoDispatch;
        if ( FastIoDispatch )
        {
          *(_QWORD *)v75 = FastIoDispatch->FastIoDeviceControl;
          if ( *(_QWORD *)v75 )
          {
            v32 = v25 == 0;
            v33 = Address;
            if ( !v32 && Address )
            {
              if ( v67 == 1 )
              {
                if ( v11 )
                {
                  v34 = &Address[v11];
                  if ( (unsigned __int64)v34 > 0x7FFFFFFF0000LL || v34 < Address )
                    MEMORY[0x7FFFFFFF0000] = 0;
                }
              }
              else if ( v67 == 2 && v11 )
              {
                v35 = (unsigned __int64)Address;
                v29 = (unsigned __int64)&Address[v11 - 1];
                if ( (unsigned __int64)Address > v29 || v29 >= 0x7FFFFFFF0000LL )
                {
                  if ( !KeGetCurrentThread()->ApcState.Process->SecurePid )
                    ExRaiseAccessViolation();
                  v11 = Length;
                  v12 = (unsigned int)NumberOfBytes;
                  v16 = (char *)Object;
                }
                else
                {
                  v29 = (v29 & 0xFFFFFFFFFFFFF000uLL) + 4096;
                  do
                  {
                    *(_BYTE *)v35 = *(_BYTE *)v35;
                    v35 = (v35 & 0xFFFFFFFFFFFFF000uLL) + 4096;
                  }
                  while ( v35 != v29 );
                  v11 = Length;
                  v12 = (unsigned int)NumberOfBytes;
                  v16 = (char *)Object;
                }
              }
            }
            if ( a6 == 589856 )
            {
              _InterlockedIncrement((volatile signed __int32 *)0xFFFFF780000002DCLL);
              v11 = Length;
              v12 = (unsigned int)NumberOfBytes;
              v16 = (char *)Object;
            }
            v68 = 0uLL;
            if ( (MmVerifierData & 0x10) != 0 )
              v36 = (void *)VfFastIoSnapState();
            else
              v36 = 0LL;
            LOBYTE(v29) = 1;
            v37 = (*(__int64 (__fastcall **)(char *, unsigned __int64, char *, _QWORD, char *, ULONG, unsigned int, __int128 *, PDEVICE_OBJECT))v75)(
                    v16,
                    v29,
                    Src,
                    (unsigned int)v12,
                    v33,
                    v11,
                    a6,
                    &v68,
                    DeviceObject);
            if ( v36 )
              VfFastIoCheckState(v36, v75[0]);
            if ( v37 )
            {
              v38 = 0LL;
              v73 = 0LL;
              v76 = 0LL;
              v62[0] = 0;
              if ( (a3.LowPart & 1) != 0 )
              {
                HIDWORD(a5->Pointer) = DWORD2(v68);
                a5->Status = v68;
              }
              else
              {
                *(_OWORD *)&a5->Status = v68;
              }
              v39 = v68;
              if ( *((_QWORD *)v16 + 22)
                && ((*((_DWORD *)v16 + 20) & 0x2000000) == 0 || (v68 & 0xC0000000) == 0x80000000)
                && (v68 & 0xC0000000) != 0xC0000000 )
              {
                IopIncrementCompletionContextUsageCountAndReadData((ULONG_PTR)v16, v62, &v73, &v76);
                v39 = v68;
                v38 = v73;
              }
              if ( a2 )
              {
                if ( (*((_DWORD *)v16 + 20) & 0x8000000) == 0 || v38 && (v39 & 0xC0000000) == 0x80000000 )
                  KeSetEvent((PRKEVENT)v66, 0, 0);
                ObfDereferenceObject(v66);
                v39 = v68;
              }
              if ( v59 )
              {
                _InterlockedExchange((volatile __int32 *)v16 + 29, 0);
                v40 = Object;
                if ( *((_DWORD *)Object + 28) )
                  KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
                ObfDereferenceObject(v40);
                KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v41, v42, v43);
                v39 = v68;
                v38 = v73;
                v16 = (char *)Object;
              }
              if ( v38 && a4 )
              {
                v44 = IoSetIoCompletionEx2(v38, v76, a4, v39, *((__int64 *)&v68 + 1), 1u, 0LL, 0);
                v45 = v68;
                if ( v44 < 0 )
                  v45 = -1073741670;
                if ( (v45 & 0xC0000000) == 0x80000000 )
                  v45 = 259;
                LODWORD(v68) = v45;
              }
              if ( v62[0] )
                IopDecrementCompletionContextUsageCount((ULONG_PTR)v16);
              ObfDereferenceObject(v16);
              return (unsigned int)v68;
            }
            v23 = Irp;
            v25 = v58;
          }
        }
      }
    }
    if ( (*(_DWORD *)&v23->Type & 0x4000000) == 0 )
      KeResetEvent((PRKEVENT)(v16 + 152));
    LOBYTE(v30) = v59 == 0;
    v46 = (IRP *)pIoAllocateIrp(DeviceObject, (unsigned __int8)DeviceObject->StackSize, v30, retaddr);
    v47 = v46;
    Irp = v46;
    if ( !v46 )
    {
      IopAllocateIrpCleanup(v16, v66);
      if ( P )
        ExFreePoolWithTag(P, 0);
      return 3221225626LL;
    }
    v46->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)v16;
    v46->Tail.Overlay.Thread = Thread;
    v46->Tail.Overlay.AuxiliaryBuffer = 0LL;
    v46->RequestorMode = v25;
    v46->PendingReturned = 0;
    v46->Cancel = 0;
    v46->CancelRoutine = 0LL;
    v46->UserEvent = (PKEVENT)v66;
    v46->UserIosb = a5;
    v46->Overlay.AllocationSize = a3;
    v46->Overlay.AsynchronousParameters.UserApcContext = (PVOID)a4;
    CurrentStackLocation = v46->Tail.Overlay.CurrentStackLocation;
    v49 = v90;
    *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = ((_BYTE)v90 != 0) + 13;
    CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v16;
    CurrentStackLocation[-1].Parameters.Read.Length = v11;
    CurrentStackLocation[-1].Parameters.Create.Options = v12;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = a6;
    v50 = NonPagedPoolNx;
    if ( v49 )
      v50 = NonPagedPoolNxCacheAligned;
    v46->MdlAddress = 0LL;
    v46->AssociatedIrp.MasterIrp = 0LL;
    if ( (DeviceObject->Flags & 0x80000) != 0 && !IsSandboxedToken )
      goto LABEL_142;
    if ( !v67 )
    {
      CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
      if ( (_DWORD)v12 || v11 )
      {
        if ( P )
        {
          v46->AssociatedIrp.MasterIrp = (struct _IRP *)P;
        }
        else
        {
          v55 = v11;
          if ( (unsigned int)v12 > v11 )
            v55 = (unsigned int)v12;
          PoolWithQuota_0 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_0(v50, v55);
          v47->AssociatedIrp.MasterIrp = PoolWithQuota_0;
          if ( Src )
            memmove(PoolWithQuota_0, Src, (unsigned int)v12);
        }
        v47->Flags = 48;
        v47->UserBuffer = Address;
        if ( v11 )
          v47->Flags = 112;
      }
      else
      {
        v46->Flags = 0;
        v46->UserBuffer = 0LL;
      }
      if ( !IopDisableBufferedIoInit && (unsigned int)v12 < v11 )
        memset((char *)v47->AssociatedIrp.MasterIrp + (unsigned int)v12, 0, v11 - (unsigned int)v12);
      goto LABEL_170;
    }
    if ( v67 <= 2 )
    {
      v46->Flags = 0;
      CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
      if ( (_DWORD)v12 && Src )
      {
        if ( ViVerifierDriverAddedThunkListHead )
        {
          PoolWithTagPriority = (struct _IRP *)ExAllocatePoolWithTagPriority(
                                                 v50,
                                                 v12,
                                                 0x20206F49u,
                                                 (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
          if ( !PoolWithTagPriority )
            RtlRaiseStatus(-1073741670);
        }
        else
        {
          PoolWithTagPriority = (struct _IRP *)ExAllocatePoolWithQuotaTag(v50, v12, 0x20206F49u);
        }
        v79[1] = PoolWithTagPriority;
        v47->AssociatedIrp.MasterIrp = PoolWithTagPriority;
        memmove(PoolWithTagPriority, Src, v12);
        v47->Flags = 48;
      }
      if ( v11 )
      {
        Mdl = IoAllocateMdl(Address, v11, 0, 1u, v47);
        v53 = (unsigned __int64)Mdl;
        v47->MdlAddress = Mdl;
        if ( !Mdl )
          RtlRaiseStatus(-1073741670);
        LOBYTE(v8) = v67 != 1;
        v78 = v8;
        v54 = *(unsigned int *)&CurrentStackLocation[-1].MajorFunction;
        MmProbeAndLockPages(Mdl, v58, v8);
        if ( (MmTrackLockedPages & 1) != 0 )
          MmUpdateMdlTracker(v53, (__int64)DeviceObject->DriverObject->MajorFunction[v54], (__int64)DeviceObject);
      }
      goto LABEL_170;
    }
    if ( v67 == 3 )
    {
LABEL_142:
      v46->Flags = 0;
      v46->UserBuffer = Address;
      CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = (PNAMED_PIPE_CREATE_PARAMETERS)Src;
    }
LABEL_170:
    GrantedAccess = HandleInformation.GrantedAccess;
    CurrentStackLocation[-1].Flags |= HandleInformation.GrantedAccess & 1;
    CurrentStackLocation[-1].Flags |= 2 * (GrantedAccess & 2);
    if ( !(_BYTE)v90 )
      v47->Flags |= 0x800u;
    if ( a6 == 589856 )
    {
      _InterlockedIncrement((volatile signed __int32 *)0xFFFFF780000002DCLL);
      v16 = (char *)Object;
    }
    if ( !IsSandboxedToken || v61 || *(_DWORD *)v47->AssociatedIrp.MasterIrp != -1610612733 )
      return IopSynchronousServiceTail(DeviceObject, v47, v58, v59, 2);
    IopExceptionCleanup(v16, v47, v66, 0LL);
    return 3221225485LL;
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v19, v14, v15);
  v25 = v58;
  v16 = (char *)Object;
  v26 = IopAcquireFileObjectLock((char *)Object, v58, (v23->Type & 4) != 0, v65);
  if ( !v65[0] )
  {
    v23 = Irp;
    goto LABEL_62;
  }
  if ( v66 )
    ObfDereferenceObject(v66);
  if ( P )
    ExFreePoolWithTag(P, 0);
  ObfDereferenceObject(v16);
  return v26;
}
