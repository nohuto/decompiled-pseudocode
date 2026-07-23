/*
 * XREFs of NtSetVolumeInformationFile @ 0x140529AB4
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     IoGetRelatedDeviceObject @ 0x14002DC60 (IoGetRelatedDeviceObject.c)
 *     IopResetEvent @ 0x14002E140 (IopResetEvent.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     IopVerifierExAllocatePoolWithQuota @ 0x140079FA0 (IopVerifierExAllocatePoolWithQuota.c)
 *     IopReferenceFileObject @ 0x14007B6B0 (IopReferenceFileObject.c)
 *     IopAcquireFastLock @ 0x14007BB34 (IopAcquireFastLock.c)
 *     IopVerifierExAllocatePool_0 @ 0x1400AA480 (IopVerifierExAllocatePool_0.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     IopAcquireFileObjectLock @ 0x1403EE090 (IopAcquireFileObjectLock.c)
 *     IoGetRelatedTargetDevice @ 0x1403F01C8 (IoGetRelatedTargetDevice.c)
 *     IopSynchronousServiceTail @ 0x140444680 (IopSynchronousServiceTail.c)
 *     IopSynchronousApiServiceTail @ 0x1404AF418 (IopSynchronousApiServiceTail.c)
 *     IoReportTargetDeviceChange @ 0x140529E58 (IoReportTargetDeviceChange.c)
 *     IopAllocateIrpCleanup @ 0x140620E74 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x140621488 (IopExceptionCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetVolumeInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FsInformation,
        ULONG Length,
        FS_INFORMATION_CLASS FsInformationClass)
{
  SIZE_T v5; // rbx
  struct _KEVENT *v8; // r15
  struct _KTHREAD *CurrentThread; // r9
  char PreviousMode; // si
  unsigned __int8 v11; // al
  __int64 v12; // rcx
  NTSTATUS result; // eax
  char *v14; // r14
  int RelatedTargetDevice; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  struct _DEVICE_OBJECT *v19; // rdi
  __int64 v20; // rdx
  IRP *v21; // rax
  IRP *v22; // rsi
  struct _IO_STATUS_BLOCK *v23; // rax
  __int64 v24; // rax
  struct _IRP *PoolWithQuota; // rax
  char v26; // r8
  int v27; // eax
  ULONG v28; // edx
  __int64 v29; // rcx
  char v30; // r13
  int v31; // ebx
  NTSTATUS v32; // esi
  struct _KEVENT *Pool_0; // rax
  char v34; // [rsp+40h] [rbp-B8h] BYREF
  char v35; // [rsp+41h] [rbp-B7h]
  ULONG v36; // [rsp+44h] [rbp-B4h]
  PVOID Object; // [rsp+48h] [rbp-B0h] BYREF
  __int64 v38; // [rsp+50h] [rbp-A8h]
  struct _IO_STATUS_BLOCK *v39; // [rsp+58h] [rbp-A0h]
  PVOID P; // [rsp+60h] [rbp-98h]
  PFILE_OBJECT FileObject; // [rsp+68h] [rbp-90h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+70h] [rbp-88h]
  PIRP Irp; // [rsp+78h] [rbp-80h]
  _QWORD v44[2]; // [rsp+80h] [rbp-78h] BYREF
  int NotificationStructure; // [rsp+90h] [rbp-68h] BYREF
  GUID v46; // [rsp+94h] [rbp-64h]
  __int64 v47; // [rsp+A8h] [rbp-50h]
  int v48; // [rsp+B0h] [rbp-48h]
  void *retaddr; // [rsp+F8h] [rbp+0h]

  v5 = Length;
  v36 = Length;
  v39 = IoStatusBlock;
  v8 = 0LL;
  P = 0LL;
  CurrentThread = KeGetCurrentThread();
  v38 = (__int64)CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v35 = PreviousMode;
  if ( PreviousMode )
  {
    if ( (unsigned int)FsInformationClass >= FileFsFullSizeInformationEx )
      return -1073741821;
    v11 = *((_BYTE *)IopSetFsOperationLength + (int)FsInformationClass);
    if ( !v11 )
      return -1073741821;
    if ( (unsigned int)v5 < v11 )
      return -1073741820;
    v12 = (__int64)IoStatusBlock;
    if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
      v12 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v12 = *(_DWORD *)v12;
    if ( CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[7] )
    {
      if ( (_DWORD)v5 )
      {
        if ( ((unsigned __int8)FsInformation & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)FsInformation + v5 > 0x7FFFFFFF0000LL || (char *)FsInformation + v5 < FsInformation )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    else if ( (_DWORD)v5 )
    {
      if ( ((*((unsigned __int8 *)IopQuerySetFsAlignmentRequirement + (int)FsInformationClass) - 1) & (unsigned __int64)FsInformation) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)FsInformation + v5 > 0x7FFFFFFF0000LL || (char *)FsInformation + v5 < FsInformation )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  result = IopReferenceFileObject(
             FileHandle,
             IopSetFsOperationAccess[FsInformationClass],
             PreviousMode,
             (PVOID *)&FileObject,
             0LL);
  if ( result < 0 )
    return result;
  v14 = (char *)FileObject;
  RelatedTargetDevice = IoGetRelatedTargetDevice(FileObject, &Object);
  v19 = (struct _DEVICE_OBJECT *)Object;
  if ( RelatedTargetDevice < 0 )
    v19 = 0LL;
  Object = v19;
  if ( (*((_DWORD *)v14 + 20) & 2) != 0 )
  {
    if ( !IopAcquireFastLock((volatile __int32 *)v14, v16, v17, v18) )
    {
      v32 = IopAcquireFileObjectLock(v14, PreviousMode, (v14[80] & 4) != 0, &v34);
      if ( v34 )
      {
        ObfDereferenceObject(v14);
        if ( v19 )
          ObfDereferenceObject(v19);
        return v32;
      }
    }
    v34 = 1;
  }
  else
  {
    Pool_0 = (struct _KEVENT *)IopVerifierExAllocatePool_0();
    v8 = Pool_0;
    P = Pool_0;
    if ( !Pool_0 )
    {
      ObfDereferenceObject(v14);
LABEL_53:
      if ( v19 )
        ObfDereferenceObject(v19);
      return -1073741670;
    }
    KeInitializeEvent(Pool_0, SynchronizationEvent, 0);
    v34 = 0;
  }
  IopResetEvent((__int64)v14);
  DeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)v14);
  LOBYTE(v20) = DeviceObject->StackSize;
  v21 = (IRP *)pIoAllocateIrp(DeviceObject, v20, 0LL, retaddr);
  v22 = v21;
  Irp = v21;
  if ( !v21 )
  {
    if ( (*((_DWORD *)v14 + 20) & 2) == 0 )
      ExFreePoolWithTag(v8, 0);
    IopAllocateIrpCleanup(v14, 0LL);
    goto LABEL_53;
  }
  v21->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)v14;
  v21->Tail.Overlay.Thread = (PETHREAD)v38;
  v21->RequestorMode = v35;
  v44[0] = 0LL;
  v44[1] = 0LL;
  if ( v34 )
  {
    v21->UserEvent = 0LL;
    v23 = v39;
  }
  else
  {
    v21->UserEvent = v8;
    v23 = (struct _IO_STATUS_BLOCK *)v44;
    v22->Flags = 4;
  }
  v22->UserIosb = v23;
  v22->Overlay.AllocationSize.QuadPart = 0LL;
  v24 = (__int64)&v22->Tail.Overlay.CurrentStackLocation[-1];
  v38 = v24;
  *(_BYTE *)v24 = 11;
  *(_QWORD *)(v24 + 48) = v14;
  v22->AssociatedIrp.MasterIrp = 0LL;
  v22->MdlAddress = 0LL;
  PoolWithQuota = (struct _IRP *)IopVerifierExAllocatePoolWithQuota(0LL, v5);
  v22->AssociatedIrp.MasterIrp = PoolWithQuota;
  memmove(PoolWithQuota, FsInformation, v5);
  v26 = v35;
  if ( !v35 || FsInformationClass != FileFsLabelInformation )
  {
    v28 = v36;
LABEL_34:
    v22->Flags |= 0x30u;
    v29 = v38;
    *(_DWORD *)(v38 + 8) = v28;
    *(_DWORD *)(v29 + 16) = FsInformationClass;
    v30 = v34;
    v31 = IopSynchronousServiceTail(DeviceObject, v22, (__int64)v14, 0, v26, v34, 2u);
    if ( !v30 )
      v31 = IopSynchronousApiServiceTail(v31, v8, v22, v35, (unsigned int *)v44, v39);
    if ( v19 )
    {
      if ( v31 >= 0 )
      {
        NotificationStructure = 2359297;
        v47 = 0LL;
        v48 = -1;
        v46 = GUID_IO_VOLUME_CHANGE;
        IoReportTargetDeviceChange(v19, &NotificationStructure);
      }
      ObfDereferenceObject(v19);
    }
    return v31;
  }
  v27 = *(_DWORD *)v22->AssociatedIrp.MasterIrp;
  if ( v27 >= 0 )
  {
    v28 = v36;
    if ( v27 + 4 <= v36 )
      goto LABEL_34;
  }
  IopExceptionCleanup(v14, v22, 0LL, v8);
  if ( v19 )
    ObfDereferenceObject(v19);
  return -1073741811;
}
