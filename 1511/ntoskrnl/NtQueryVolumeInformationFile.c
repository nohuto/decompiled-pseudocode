/*
 * XREFs of NtQueryVolumeInformationFile @ 0x1404383A0
 * Callers:
 *     PfpVolumeOpenAndVerify @ 0x1404BB8EC (PfpVolumeOpenAndVerify.c)
 *     PfSnIsVolumeMounted @ 0x1404DBA84 (PfSnIsVolumeMounted.c)
 *     PfSnQueryVolumeInfo @ 0x1404DC1AC (PfSnQueryVolumeInfo.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     IoGetRelatedDeviceObject @ 0x1400435F0 (IoGetRelatedDeviceObject.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     sub_14008E44C @ 0x14008E44C (sub_14008E44C.c)
 *     IopGetMountFlag @ 0x14008E7A0 (IopGetMountFlag.c)
 *     IopResetEvent @ 0x14008E840 (IopResetEvent.c)
 *     sub_14008E8A8 @ 0x14008E8A8 (sub_14008E8A8.c)
 *     sub_1400EB244 @ 0x1400EB244 (sub_1400EB244.c)
 *     IopIsProcessAppContainer @ 0x1400EFD88 (IopIsProcessAppContainer.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     IopGetDriverPathInformation @ 0x1401B72B8 (IopGetDriverPathInformation.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
 *     IopSynchronousServiceTail @ 0x140437580 (IopSynchronousServiceTail.c)
 *     IopSynchronousApiServiceTail @ 0x140490974 (IopSynchronousApiServiceTail.c)
 *     IopAcquireFileObjectLock @ 0x1404AC66C (IopAcquireFileObjectLock.c)
 *     IopExceptionCleanup @ 0x1404C68BC (IopExceptionCleanup.c)
 *     IopAllocateIrpCleanup @ 0x1405F70B8 (IopAllocateIrpCleanup.c)
 *     ExRaiseAccessViolation @ 0x140673340 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
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
  _DWORD *v15; // rcx
  unsigned __int64 v16; // rdx
  ULONG64 v17; // rcx
  unsigned __int64 v18; // rcx
  __int64 v19; // rdx
  int v20; // ebx
  __int64 v21; // r8
  unsigned int *v22; // rdi
  _DWORD *v23; // rax
  __int64 v24; // rcx
  char MountFlag; // cl
  __int64 v26; // rbx
  int v27; // eax
  char v28; // r13
  _BYTE *v29; // r14
  NTSTATUS DriverPathInformation; // eax
  PVOID v31; // rbx
  PDEVICE_OBJECT RelatedDeviceObject; // rbx
  struct _KEVENT *v33; // rax
  IRP *v34; // rax
  __int64 v35; // rcx
  IRP *v36; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  struct _IRP *v38; // rax
  unsigned __int8 v39; // [rsp+40h] [rbp-78h]
  char v40; // [rsp+41h] [rbp-77h]
  NTSTATUS v41; // [rsp+44h] [rbp-74h]
  PVOID Object; // [rsp+48h] [rbp-70h] BYREF
  PVOID P; // [rsp+50h] [rbp-68h]
  _BYTE *v44; // [rsp+58h] [rbp-60h]
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp-58h]
  PIRP Irp; // [rsp+68h] [rbp-50h]
  struct _KTHREAD *v47; // [rsp+70h] [rbp-48h]
  _QWORD v48[3]; // [rsp+78h] [rbp-40h] BYREF
  void *retaddr; // [rsp+B8h] [rbp+0h]

  v8 = 0;
  v9 = 0LL;
  P = 0LL;
  CurrentThread = KeGetCurrentThread();
  v47 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v39 = PreviousMode;
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
    v15 = &IoStatusBlock->0;
    if ( (unsigned __int64)IoStatusBlock >= MmUserProbeAddress )
      v15 = (_DWORD *)MmUserProbeAddress;
    *v15 = *v15;
    if ( CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[7] )
    {
      ProbeForWrite(FsInformation, Length, 4u);
      PreviousMode = v39;
    }
    else if ( Length )
    {
      v16 = (unsigned __int64)FsInformation;
      if ( ((*((unsigned __int8 *)IopQuerySetFsAlignmentRequirement + (int)FsInformationClass) - 1) & (unsigned int)FsInformation) != 0 )
        ExRaiseDatatypeMisalignment();
      v17 = (ULONG64)FsInformation + Length - 1;
      if ( (unsigned __int64)FsInformation > v17 || v17 >= MmUserProbeAddress )
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
    v22 = (unsigned int *)Object;
    goto LABEL_29;
  }
  v22 = (unsigned int *)Object;
  v23 = (_DWORD *)*((_QWORD *)Object + 26);
  if ( v23 && (*v23 & 4) != 0 )
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
  v24 = v22[20];
  if ( (v22[20] & 0x800) != 0 )
  {
    if ( v12 != FileFsDeviceInformation )
    {
      ObfDereferenceObject(v22);
      return -1073741808;
    }
  }
  else if ( v12 != FileFsDeviceInformation )
  {
    goto LABEL_44;
  }
  if ( (v22[20] & 0x800) != 0 || *(_DWORD *)(*((_QWORD *)v22 + 1) + 72LL) != 20 )
  {
    MountFlag = 0;
    v26 = *((_QWORD *)v22 + 1);
    if ( *(_QWORD *)(v26 + 56) )
      MountFlag = IopGetMountFlag(*((_QWORD *)v22 + 1));
    if ( Length >= 8 )
    {
      *(_DWORD *)FsInformation = *(_DWORD *)(v26 + 72);
      v27 = *(_DWORD *)(v26 + 52);
      *((_DWORD *)FsInformation + 1) = v27;
      if ( MountFlag )
        *((_DWORD *)FsInformation + 1) = v27 | 0x20;
      IoStatusBlock->Status = 0;
      IoStatusBlock->Information = 8LL;
    }
    else
    {
      v8 = -1073741820;
    }
    ObfDereferenceObject(v22);
    return v8;
  }
LABEL_44:
  if ( (v24 & 2) != 0 )
  {
    if ( !sub_14008E8A8((volatile __int32 *)v22) )
    {
      v20 = IopAcquireFileObjectLock(v22);
      if ( v40 )
      {
LABEL_58:
        ObfDereferenceObject(v22);
        return v20;
      }
    }
    v28 = 1;
  }
  else
  {
    v28 = 0;
  }
  if ( FsInformationClass == FileFsDriverPathInformation )
  {
    v44 = 0LL;
    v29 = sub_14008E44C(v24, Length);
    v44 = v29;
    memmove(v29, FsInformation, Length);
    DriverPathInformation = IopGetDriverPathInformation((__int64)v22, (__int64)v29, Length);
    v20 = DriverPathInformation;
    v41 = DriverPathInformation;
    if ( DriverPathInformation < 0 )
      RtlRaiseStatus(DriverPathInformation);
    *(_BYTE *)FsInformation = *v29;
    IoStatusBlock->Status = 0;
    IoStatusBlock->Information = 12LL;
    if ( v29 )
      ExFreePoolWithTag(v29, 0);
    if ( (v22[20] & 2) != 0 )
    {
      _InterlockedExchange((volatile __int32 *)v22 + 29, 0);
      v31 = Object;
      if ( *((_DWORD *)Object + 28) )
        KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
      ObfDereferenceObject(v31);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v20 = v41;
      v22 = (unsigned int *)Object;
    }
    goto LABEL_58;
  }
  IopResetEvent((__int64)v22, v19, v21);
  RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)v22);
  DeviceObject = RelatedDeviceObject;
  if ( (v22[20] & 2) == 0 )
  {
    v33 = (struct _KEVENT *)sub_1400EB244();
    v9 = v33;
    P = v33;
    if ( !v33 )
    {
      ObfDereferenceObject(v22);
      return -1073741670;
    }
    KeInitializeEvent(v33, SynchronizationEvent, 0);
  }
  v34 = (IRP *)pIoAllocateIrp(RelatedDeviceObject, (unsigned __int8)RelatedDeviceObject->StackSize, 0LL, retaddr);
  v36 = v34;
  Irp = v34;
  if ( !v34 )
  {
    if ( (v22[20] & 2) == 0 )
      ExFreePoolWithTag(v9, 0);
    IopAllocateIrpCleanup(v22, 0LL);
    return -1073741670;
  }
  v34->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)v22;
  v34->Tail.Overlay.Thread = v47;
  v34->RequestorMode = v39;
  v48[0] = 0LL;
  v48[1] = 0LL;
  if ( v28 )
  {
    v34->UserEvent = 0LL;
    v34->UserIosb = IoStatusBlock;
  }
  else
  {
    v34->UserEvent = v9;
    v34->UserIosb = (PIO_STATUS_BLOCK)v48;
    v34->Flags = 4;
  }
  v34->Overlay.AllocationSize.QuadPart = 0LL;
  CurrentStackLocation = v34->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].MajorFunction = 10;
  CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v22;
  v34->UserBuffer = FsInformation;
  v34->AssociatedIrp.MasterIrp = 0LL;
  v34->MdlAddress = 0LL;
  v38 = (struct _IRP *)sub_14008E44C(v35, Length);
  v36->AssociatedIrp.MasterIrp = v38;
  if ( !IopDisableBufferedIoInit )
    memset(v38, 0, Length);
  v36->Flags |= 0x870u;
  CurrentStackLocation[-1].Parameters.Read.Length = Length;
  CurrentStackLocation[-1].Parameters.Create.Options = FsInformationClass;
  result = IopSynchronousServiceTail(DeviceObject, v36, (char *)v22, 1, v39, v28, 2);
  if ( !v28 )
    return IopSynchronousApiServiceTail((unsigned int)result, P, v36, v39, v48, IoStatusBlock);
  return result;
}
