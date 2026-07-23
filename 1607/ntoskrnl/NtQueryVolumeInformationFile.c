/*
 * XREFs of NtQueryVolumeInformationFile @ 0x1404F4F20
 * Callers:
 *     PfpVolumeOpenAndVerify @ 0x1403EEF00 (PfpVolumeOpenAndVerify.c)
 *     PfSnQueryVolumeInfo @ 0x1404D8438 (PfSnQueryVolumeInfo.c)
 *     PfSnIsVolumeMounted @ 0x1404D857C (PfSnIsVolumeMounted.c)
 * Callees:
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     IoGetRelatedDeviceObject @ 0x14002DC60 (IoGetRelatedDeviceObject.c)
 *     IopResetEvent @ 0x14002E140 (IopResetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     IopVerifierExAllocatePoolWithQuota @ 0x140079FA0 (IopVerifierExAllocatePoolWithQuota.c)
 *     IopAcquireFastLock @ 0x14007BB34 (IopAcquireFastLock.c)
 *     IopVerifierExAllocatePool_0 @ 0x1400AA480 (IopVerifierExAllocatePool_0.c)
 *     IopIsProcessAppContainer @ 0x1400B06B4 (IopIsProcessAppContainer.c)
 *     IopGetMountFlag @ 0x1400EC860 (IopGetMountFlag.c)
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     IopGetDriverPathInformation @ 0x1401C4CDC (IopGetDriverPathInformation.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     IopAcquireFileObjectLock @ 0x1403EE090 (IopAcquireFileObjectLock.c)
 *     IopSynchronousServiceTail @ 0x140444680 (IopSynchronousServiceTail.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     IopSynchronousApiServiceTail @ 0x1404AF418 (IopSynchronousApiServiceTail.c)
 *     IopAllocateIrpCleanup @ 0x140620E74 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x140621488 (IopExceptionCleanup.c)
 *     ExRaiseAccessViolation @ 0x1406B6180 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryVolumeInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FsInformation,
        ULONG Length,
        FS_INFORMATION_CLASS FsInformationClass)
{
  NTSTATUS v8; // esi
  struct _KEVENT *v9; // r14
  struct _KTHREAD *CurrentThread; // r8
  KPROCESSOR_MODE PreviousMode; // r10
  FS_INFORMATION_CLASS v12; // r13d
  unsigned __int8 v13; // al
  NTSTATUS result; // eax
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  __int64 v19; // rdx
  NTSTATUS v20; // ebx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int *v23; // rdi
  _DWORD *v24; // rax
  __int64 v25; // rcx
  char MountFlag; // cl
  __int64 v27; // rbx
  int v28; // eax
  char v29; // r13
  _BYTE *PoolWithQuota; // r14
  NTSTATUS DriverPathInformation; // eax
  PVOID v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  PDEVICE_OBJECT RelatedDeviceObject; // rbx
  struct _KEVENT *Pool_0; // rax
  IRP *v38; // rax
  __int64 v39; // rcx
  IRP *v40; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  struct _IRP *v42; // rax
  KPROCESSOR_MODE v43; // [rsp+40h] [rbp-78h]
  char v44[3]; // [rsp+41h] [rbp-77h] BYREF
  NTSTATUS v45; // [rsp+44h] [rbp-74h]
  PVOID Object; // [rsp+48h] [rbp-70h] BYREF
  PVOID P; // [rsp+50h] [rbp-68h]
  _BYTE *v48; // [rsp+58h] [rbp-60h]
  struct _KTHREAD *v49; // [rsp+60h] [rbp-58h]
  PDEVICE_OBJECT DeviceObject; // [rsp+68h] [rbp-50h]
  PIRP Irp; // [rsp+70h] [rbp-48h]
  _QWORD v52[3]; // [rsp+78h] [rbp-40h] BYREF
  void *retaddr; // [rsp+B8h] [rbp+0h]

  v8 = 0;
  v9 = 0LL;
  P = 0LL;
  CurrentThread = KeGetCurrentThread();
  v49 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v43 = PreviousMode;
  if ( PreviousMode )
  {
    v12 = FsInformationClass;
    if ( (unsigned int)FsInformationClass >= FileFsFullSizeInformationEx )
      return -1073741821;
    v13 = *((_BYTE *)IopQueryFsOperationLength + (int)FsInformationClass);
    if ( !v13 )
      return -1073741821;
    if ( Length < v13 )
      return -1073741820;
    v15 = (__int64)IoStatusBlock;
    if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v15 = *(_DWORD *)v15;
    if ( CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[7] )
    {
      ProbeForWrite(FsInformation, Length, 4u);
      PreviousMode = v43;
    }
    else if ( Length )
    {
      v16 = (unsigned __int64)FsInformation;
      if ( ((*((unsigned __int8 *)IopQuerySetFsAlignmentRequirement + (int)FsInformationClass) - 1) & (unsigned int)FsInformation) != 0 )
        ExRaiseDatatypeMisalignment();
      v17 = (unsigned __int64)FsInformation + Length - 1;
      if ( (unsigned __int64)FsInformation > v17 || v17 >= 0x7FFFFFFF0000LL )
      {
        if ( !KeGetCurrentThread()->ApcState.Process->SecurePid )
          ExRaiseAccessViolation();
      }
      else
      {
        v18 = (v17 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        do
        {
          *(_BYTE *)v16 = *(_BYTE *)v16;
          v16 = (v16 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        }
        while ( v16 != v18 );
      }
    }
  }
  else
  {
    v12 = FsInformationClass;
  }
  v20 = ObReferenceObjectByHandle(
          FileHandle,
          IopQueryFsOperationAccess[v12],
          (POBJECT_TYPE)IoFileObjectType,
          PreviousMode,
          &Object,
          0LL);
  if ( v20 < 0 )
  {
LABEL_28:
    v23 = (unsigned int *)Object;
    goto LABEL_29;
  }
  v23 = (unsigned int *)Object;
  v24 = (_DWORD *)*((_QWORD *)Object + 26);
  if ( v24 && (*v24 & 4) != 0 )
  {
    if ( IopIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process) )
    {
      ObfDereferenceObject(Object);
      return -1073739504;
    }
    goto LABEL_28;
  }
LABEL_29:
  if ( v20 < 0 )
    return v20;
  v25 = v23[20];
  if ( (v23[20] & 0x800) != 0 )
  {
    if ( v12 != FileFsDeviceInformation )
    {
      ObfDereferenceObject(v23);
      return -1073741808;
    }
  }
  else if ( v12 != FileFsDeviceInformation )
  {
    goto LABEL_44;
  }
  if ( (v23[20] & 0x800) != 0 || *(_DWORD *)(*((_QWORD *)v23 + 1) + 72LL) != 20 )
  {
    MountFlag = 0;
    v27 = *((_QWORD *)v23 + 1);
    if ( *(_QWORD *)(v27 + 56) )
      MountFlag = IopGetMountFlag(*((_QWORD *)v23 + 1));
    if ( Length >= 8 )
    {
      *(_DWORD *)FsInformation = *(_DWORD *)(v27 + 72);
      v28 = *(_DWORD *)(v27 + 52);
      *((_DWORD *)FsInformation + 1) = v28;
      if ( MountFlag )
        *((_DWORD *)FsInformation + 1) = v28 | 0x20;
      IoStatusBlock->Status = 0;
      IoStatusBlock->Information = 8LL;
      v45 = 0;
    }
    else
    {
      v8 = -1073741820;
    }
    ObfDereferenceObject(v23);
    return v8;
  }
LABEL_44:
  if ( (v25 & 2) != 0 )
  {
    if ( !IopAcquireFastLock((volatile __int32 *)v23, v19, v21, v22) )
    {
      v20 = IopAcquireFileObjectLock((char *)v23, v43, (v23[20] & 4) != 0, v44);
      if ( v44[0] )
      {
LABEL_58:
        ObfDereferenceObject(v23);
        return v20;
      }
    }
    v29 = 1;
  }
  else
  {
    v29 = 0;
  }
  if ( FsInformationClass == FileFsDriverPathInformation )
  {
    v48 = 0LL;
    PoolWithQuota = IopVerifierExAllocatePoolWithQuota(v25, Length);
    v48 = PoolWithQuota;
    memmove(PoolWithQuota, FsInformation, Length);
    DriverPathInformation = IopGetDriverPathInformation((__int64)v23, (__int64)PoolWithQuota, Length);
    v20 = DriverPathInformation;
    v45 = DriverPathInformation;
    if ( DriverPathInformation < 0 )
      RtlRaiseStatus(DriverPathInformation);
    *(_BYTE *)FsInformation = *PoolWithQuota;
    IoStatusBlock->Status = 0;
    IoStatusBlock->Information = 12LL;
    if ( PoolWithQuota )
      ExFreePoolWithTag(PoolWithQuota, 0);
    if ( (v23[20] & 2) != 0 )
    {
      _InterlockedExchange((volatile __int32 *)v23 + 29, 0);
      v32 = Object;
      if ( *((_DWORD *)Object + 28) )
        KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
      ObfDereferenceObject(v32);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v33, v34, v35);
      v20 = v45;
      v23 = (unsigned int *)Object;
    }
    goto LABEL_58;
  }
  IopResetEvent((__int64)v23);
  RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)v23);
  DeviceObject = RelatedDeviceObject;
  if ( (v23[20] & 2) == 0 )
  {
    Pool_0 = (struct _KEVENT *)IopVerifierExAllocatePool_0();
    v9 = Pool_0;
    P = Pool_0;
    if ( !Pool_0 )
    {
      ObfDereferenceObject(v23);
      return -1073741670;
    }
    KeInitializeEvent(Pool_0, SynchronizationEvent, 0);
  }
  v38 = (IRP *)pIoAllocateIrp(RelatedDeviceObject, (unsigned __int8)RelatedDeviceObject->StackSize, 0LL, retaddr);
  v40 = v38;
  Irp = v38;
  if ( !v38 )
  {
    if ( (v23[20] & 2) == 0 )
      ExFreePoolWithTag(v9, 0);
    IopAllocateIrpCleanup(v23, 0LL);
    return -1073741670;
  }
  v38->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)v23;
  v38->Tail.Overlay.Thread = v49;
  v38->RequestorMode = v43;
  v52[0] = 0LL;
  v52[1] = 0LL;
  if ( v29 )
  {
    v38->UserEvent = 0LL;
    v38->UserIosb = IoStatusBlock;
  }
  else
  {
    v38->UserEvent = v9;
    v38->UserIosb = (PIO_STATUS_BLOCK)v52;
    v38->Flags = 4;
  }
  v38->Overlay.AllocationSize.QuadPart = 0LL;
  CurrentStackLocation = v38->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].MajorFunction = 10;
  CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v23;
  v38->UserBuffer = FsInformation;
  v38->AssociatedIrp.MasterIrp = 0LL;
  v38->MdlAddress = 0LL;
  v42 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota(v39, Length);
  v40->AssociatedIrp.MasterIrp = v42;
  if ( !IopDisableBufferedIoInit )
    memset(v42, 0, Length);
  v40->Flags |= 0x870u;
  CurrentStackLocation[-1].Parameters.Read.Length = Length;
  CurrentStackLocation[-1].Parameters.Create.Options = FsInformationClass;
  result = IopSynchronousServiceTail(DeviceObject, v40, (__int64)v23, 1, v43, v29, 2u);
  if ( !v29 )
    return IopSynchronousApiServiceTail(result, P, v40, v43, (unsigned int *)v52, IoStatusBlock);
  return result;
}
