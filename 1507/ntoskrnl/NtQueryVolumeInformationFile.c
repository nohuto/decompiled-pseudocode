/*
 * XREFs of NtQueryVolumeInformationFile @ 0x140457400
 * Callers:
 *     PfpVolumeOpenAndVerify @ 0x140456460 (PfpVolumeOpenAndVerify.c)
 *     PfSnIsVolumeMounted @ 0x1404571B4 (PfSnIsVolumeMounted.c)
 *     PfSnQueryVolumeInfo @ 0x1404572BC (PfSnQueryVolumeInfo.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140013F48 (ExAllocatePoolWithTagPriority.c)
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     IopGetMountFlag @ 0x140025EC0 (IopGetMountFlag.c)
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140045B50 (ExAllocatePoolWithQuotaTag.c)
 *     IoGetRelatedDeviceObject @ 0x140048020 (IoGetRelatedDeviceObject.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     IopGetDriverPathInformation @ 0x1401F2490 (IopGetDriverPathInformation.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     IopSynchronousApiServiceTail @ 0x140457B28 (IopSynchronousApiServiceTail.c)
 *     SeQueryInformationToken @ 0x140481E90 (SeQueryInformationToken.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     IopSynchronousServiceTail @ 0x1404BDDC0 (IopSynchronousServiceTail.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     PsReferencePrimaryToken @ 0x14050D730 (PsReferencePrimaryToken.c)
 *     IopAcquireFileObjectLock @ 0x140540A5C (IopAcquireFileObjectLock.c)
 *     IopExceptionCleanup @ 0x14055D264 (IopExceptionCleanup.c)
 *     IopAllocateIrpCleanup @ 0x140670E48 (IopAllocateIrpCleanup.c)
 *     ExRaiseAccessViolation @ 0x1406F7890 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryVolumeInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FsInformation,
        ULONG Length,
        FS_INFORMATION_CLASS FsInformationClass)
{
  NTSTATUS v8; // edi
  struct _KTHREAD *CurrentThread; // r8
  KPROCESSOR_MODE PreviousMode; // r10
  FS_INFORMATION_CLASS v11; // r13d
  unsigned __int8 v12; // al
  NTSTATUS result; // eax
  _DWORD *v14; // rcx
  unsigned __int64 v15; // rdx
  ULONG64 v16; // rcx
  unsigned __int64 v17; // rcx
  __int64 v18; // rdx
  int v19; // esi
  __int64 v20; // r8
  __int64 v21; // r9
  char *v22; // rbx
  _DWORD *v23; // rax
  struct _KPROCESS *Process; // rcx
  PACCESS_TOKEN v25; // rbx
  _DWORD *v26; // r14
  int v27; // ecx
  char MountFlag; // cl
  __int64 v29; // rsi
  int v30; // eax
  struct _KTHREAD *v31; // rax
  struct _KTHREAD *v32; // rcx
  __int16 v33; // ax
  char v34; // r13
  _BYTE *PoolWithTagPriority; // rax
  _BYTE *v36; // rsi
  NTSTATUS DriverPathInformation; // eax
  NTSTATUS v38; // r14d
  PVOID v39; // rbx
  struct _KTHREAD *v40; // rcx
  __int16 v41; // ax
  PDEVICE_OBJECT RelatedDeviceObject; // rsi
  struct _KEVENT *PoolWithTag; // rax
  IRP *v44; // rax
  IRP *v45; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  struct _IRP *PoolWithQuotaTag; // rax
  unsigned __int8 v48; // [rsp+40h] [rbp-78h]
  char v49; // [rsp+41h] [rbp-77h]
  PVOID Object; // [rsp+48h] [rbp-70h] BYREF
  NTSTATUS v51; // [rsp+50h] [rbp-68h]
  PVOID P; // [rsp+58h] [rbp-60h]
  PVOID TokenInformation; // [rsp+60h] [rbp-58h] BYREF
  _BYTE *v54; // [rsp+68h] [rbp-50h]
  PIRP Irp; // [rsp+70h] [rbp-48h]
  struct _KTHREAD *v56; // [rsp+78h] [rbp-40h]
  _QWORD v57[2]; // [rsp+80h] [rbp-38h] BYREF
  void *retaddr; // [rsp+B8h] [rbp+0h]

  v8 = 0;
  P = 0LL;
  CurrentThread = KeGetCurrentThread();
  v56 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v48 = PreviousMode;
  if ( PreviousMode )
  {
    v11 = FsInformationClass;
    if ( (unsigned int)FsInformationClass >= FileFsFullSizeInformationEx )
      return -1073741821;
    v12 = *((_BYTE *)IopQueryFsOperationLength + (int)FsInformationClass);
    if ( !v12 )
      return -1073741821;
    if ( Length < v12 )
      return -1073741820;
    v14 = &IoStatusBlock->0;
    if ( (unsigned __int64)IoStatusBlock >= MmUserProbeAddress )
      v14 = (_DWORD *)MmUserProbeAddress;
    *v14 = *v14;
    if ( CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[7] )
    {
      ProbeForWrite(FsInformation, Length, 4u);
      PreviousMode = v48;
    }
    else if ( Length )
    {
      v15 = (unsigned __int64)FsInformation;
      if ( ((*((unsigned __int8 *)IopQuerySetFsAlignmentRequirement + (int)FsInformationClass) - 1) & (unsigned int)FsInformation) != 0 )
        ExRaiseDatatypeMisalignment();
      v16 = (ULONG64)FsInformation + Length - 1;
      if ( (unsigned __int64)FsInformation > v16 || v16 >= MmUserProbeAddress )
      {
        if ( !KeGetCurrentThread()->ApcState.Process->SecurePid )
          ExRaiseAccessViolation();
      }
      else
      {
        v17 = (v16 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        do
        {
          *(_BYTE *)v15 = *(_BYTE *)v15;
          v15 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        }
        while ( v15 != v17 );
      }
    }
  }
  else
  {
    v11 = FsInformationClass;
  }
  v19 = ObReferenceObjectByHandle(
          FileHandle,
          IopQueryFsOperationAccess[v11],
          (POBJECT_TYPE)IoFileObjectType,
          PreviousMode,
          &Object,
          0LL);
  if ( v19 < 0 )
  {
LABEL_28:
    v22 = (char *)Object;
    goto LABEL_29;
  }
  v22 = (char *)Object;
  v23 = (_DWORD *)*((_QWORD *)Object + 26);
  if ( v23 && (*v23 & 4) != 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    LODWORD(TokenInformation) = 0;
    v25 = PsReferencePrimaryToken(Process);
    SeQueryInformationToken(v25, TokenIsAppContainer, &TokenInformation);
    ObfDereferenceObject(v25);
    if ( (_DWORD)TokenInformation )
    {
      ObfDereferenceObject(Object);
      return -1073739504;
    }
    goto LABEL_28;
  }
LABEL_29:
  if ( v19 < 0 )
    return v19;
  v26 = v22 + 80;
  v27 = *((_DWORD *)v22 + 20);
  if ( (v27 & 0x800) != 0 )
  {
    if ( v11 != FileFsDeviceInformation )
    {
      ObfDereferenceObject(v22);
      return -1073741808;
    }
  }
  else if ( v11 != FileFsDeviceInformation )
  {
    goto LABEL_44;
  }
  if ( (*((_DWORD *)v22 + 20) & 0x800) != 0 || *(_DWORD *)(*((_QWORD *)v22 + 1) + 72LL) != 20 )
  {
    MountFlag = 0;
    v29 = *((_QWORD *)v22 + 1);
    if ( *(_QWORD *)(v29 + 56) )
      MountFlag = IopGetMountFlag(*((_QWORD *)v22 + 1), v18, v20, v21);
    if ( Length >= 8 )
    {
      *(_DWORD *)FsInformation = *(_DWORD *)(v29 + 72);
      v30 = *(_DWORD *)(v29 + 52);
      *((_DWORD *)FsInformation + 1) = v30;
      if ( MountFlag )
        *((_DWORD *)FsInformation + 1) = v30 | 0x20;
      IoStatusBlock->Status = 0;
      IoStatusBlock->Information = 8LL;
      v51 = 0;
    }
    else
    {
      v8 = -1073741820;
    }
    ObfDereferenceObject(v22);
    return v8;
  }
LABEL_44:
  if ( (v27 & 2) != 0 )
  {
    v31 = KeGetCurrentThread();
    --v31->KernelApcDisable;
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
      v22 = (char *)Object;
      v19 = IopAcquireFileObjectLock(Object);
      if ( v49 )
      {
        ObfDereferenceObject(v22);
        return v19;
      }
    }
    else
    {
      v22 = (char *)Object;
      ObfReferenceObject(Object);
    }
    v34 = 1;
  }
  else
  {
    v34 = 0;
  }
  if ( FsInformationClass == FileFsDriverPathInformation )
  {
    v54 = 0LL;
    if ( ViVerifierDriverAddedThunkListHead )
    {
      PoolWithTagPriority = ExAllocatePoolWithTagPriority(
                              NonPagedPoolNx,
                              Length,
                              0x20206F49u,
                              (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
      v36 = PoolWithTagPriority;
      if ( !PoolWithTagPriority )
        RtlRaiseStatus(-1073741670);
    }
    else
    {
      PoolWithTagPriority = ExAllocatePoolWithQuotaTag(NonPagedPoolNx, Length, 0x20206F49u);
      v36 = PoolWithTagPriority;
    }
    v54 = PoolWithTagPriority;
    memmove(v36, FsInformation, Length);
    DriverPathInformation = IopGetDriverPathInformation((__int64)v22, (__int64)v36, Length);
    v38 = DriverPathInformation;
    v51 = DriverPathInformation;
    if ( DriverPathInformation < 0 )
      RtlRaiseStatus(DriverPathInformation);
    *(_BYTE *)FsInformation = *v36;
    IoStatusBlock->Status = 0;
    IoStatusBlock->Information = 12LL;
    if ( v36 )
      ExFreePoolWithTag(v36, 0);
    if ( (*((_DWORD *)v22 + 20) & 2) != 0 )
    {
      _InterlockedExchange((volatile __int32 *)v22 + 29, 0);
      v39 = Object;
      if ( *((_DWORD *)Object + 28) )
        KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
      ObfDereferenceObject(v39);
      v40 = KeGetCurrentThread();
      v41 = v40->KernelApcDisable + 1;
      v40->KernelApcDisable = v41;
      if ( !v41
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v40->ApcState.ApcListHead[0].Flink != &v40->152
        && !v40->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      v22 = (char *)Object;
      v38 = v51;
    }
    ObfDereferenceObject(v22);
    return v38;
  }
  if ( (*v26 & 0x4000000) == 0 )
    KeResetEvent((PRKEVENT)(v22 + 152));
  RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)v22);
  TokenInformation = RelatedDeviceObject;
  if ( (*v26 & 2) == 0 )
  {
    if ( ViVerifierDriverAddedThunkListHead )
      PoolWithTag = (struct _KEVENT *)ExAllocatePoolWithTagPriority(
                                        NonPagedPoolNx,
                                        0x18uLL,
                                        0x20206F49u,
                                        (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
    else
      PoolWithTag = (struct _KEVENT *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x20206F49u);
    P = PoolWithTag;
    if ( !PoolWithTag )
    {
      ObfDereferenceObject(v22);
      return -1073741670;
    }
    KeInitializeEvent(PoolWithTag, SynchronizationEvent, 0);
  }
  v44 = (IRP *)pIoAllocateIrp(RelatedDeviceObject, (unsigned __int8)RelatedDeviceObject->StackSize, 0LL, retaddr);
  v45 = v44;
  Irp = v44;
  if ( !v44 )
  {
    if ( (*v26 & 2) == 0 )
      ExFreePoolWithTag(P, 0);
    IopAllocateIrpCleanup(v22, 0LL);
    return -1073741670;
  }
  v44->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)v22;
  v44->Tail.Overlay.Thread = v56;
  v44->RequestorMode = v48;
  v57[0] = 0LL;
  v57[1] = 0LL;
  if ( v34 )
  {
    v44->UserEvent = 0LL;
    v44->UserIosb = IoStatusBlock;
  }
  else
  {
    v44->UserEvent = (PKEVENT)P;
    v44->UserIosb = (PIO_STATUS_BLOCK)v57;
    v44->Flags = 4;
  }
  v44->Overlay.AllocationSize.QuadPart = 0LL;
  CurrentStackLocation = v44->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].MajorFunction = 10;
  CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v22;
  v44->UserBuffer = FsInformation;
  v44->AssociatedIrp.MasterIrp = 0LL;
  v44->MdlAddress = 0LL;
  if ( ViVerifierDriverAddedThunkListHead )
  {
    PoolWithQuotaTag = (struct _IRP *)ExAllocatePoolWithTagPriority(
                                        NonPagedPoolNx,
                                        Length,
                                        0x20206F49u,
                                        (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
    if ( !PoolWithQuotaTag )
      RtlRaiseStatus(-1073741670);
  }
  else
  {
    PoolWithQuotaTag = (struct _IRP *)ExAllocatePoolWithQuotaTag(NonPagedPoolNx, Length, 0x20206F49u);
  }
  v45->AssociatedIrp.MasterIrp = PoolWithQuotaTag;
  if ( !IopDisableBufferedIoInit )
    memset(PoolWithQuotaTag, 0, Length);
  v45->Flags |= 0x870u;
  CurrentStackLocation[-1].Parameters.Read.Length = Length;
  CurrentStackLocation[-1].Parameters.Create.Options = FsInformationClass;
  result = IopSynchronousServiceTail((PDEVICE_OBJECT)TokenInformation, v45, v22, v48, v34, 2);
  if ( !v34 )
    return IopSynchronousApiServiceTail((unsigned int)result, P, v45, v48, v57, IoStatusBlock);
  return result;
}
