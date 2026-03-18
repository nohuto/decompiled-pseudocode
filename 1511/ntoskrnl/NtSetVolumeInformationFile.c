/*
 * XREFs of NtSetVolumeInformationFile @ 0x1404EA818
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     IoGetRelatedDeviceObject @ 0x1400435F0 (IoGetRelatedDeviceObject.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     sub_14008E44C @ 0x14008E44C (sub_14008E44C.c)
 *     IopResetEvent @ 0x14008E840 (IopResetEvent.c)
 *     sub_14008E8A8 @ 0x14008E8A8 (sub_14008E8A8.c)
 *     IopReferenceFileObject @ 0x1400CC3D8 (IopReferenceFileObject.c)
 *     sub_1400EB244 @ 0x1400EB244 (sub_1400EB244.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     IopSynchronousServiceTail @ 0x140437580 (IopSynchronousServiceTail.c)
 *     IopSynchronousApiServiceTail @ 0x140490974 (IopSynchronousApiServiceTail.c)
 *     IoGetRelatedTargetDevice @ 0x14049188C (IoGetRelatedTargetDevice.c)
 *     IopAcquireFileObjectLock @ 0x1404AC66C (IopAcquireFileObjectLock.c)
 *     IopExceptionCleanup @ 0x1404C68BC (IopExceptionCleanup.c)
 *     IoReportTargetDeviceChange @ 0x1404EABBC (IoReportTargetDeviceChange.c)
 *     IopAllocateIrpCleanup @ 0x1405F70B8 (IopAllocateIrpCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetVolumeInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FsInformation,
        ULONG Length,
        FS_INFORMATION_CLASS FsInformationClass)
{
  SIZE_T v5; // rbx
  struct _KEVENT *v8; // r12
  struct _KTHREAD *CurrentThread; // r9
  char PreviousMode; // si
  unsigned __int8 v11; // al
  _DWORD *v12; // rcx
  NTSTATUS result; // eax
  char *v14; // r14
  int RelatedTargetDevice; // eax
  struct _DEVICE_OBJECT *v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 Irp; // rax
  IRP *v21; // rsi
  struct _IO_STATUS_BLOCK *v22; // rax
  __int64 v23; // rax
  struct _IRP *v24; // rax
  char v25; // r8
  int v26; // eax
  ULONG v27; // ecx
  __int64 v28; // rdx
  char v29; // r13
  int v30; // ebx
  NTSTATUS v31; // esi
  struct _KEVENT *v32; // rax
  char v33; // [rsp+40h] [rbp-B8h] BYREF
  char v34; // [rsp+41h] [rbp-B7h]
  ULONG v35; // [rsp+44h] [rbp-B4h]
  PVOID Object; // [rsp+48h] [rbp-B0h] BYREF
  __int64 v37; // [rsp+50h] [rbp-A8h]
  PVOID P; // [rsp+58h] [rbp-A0h]
  PFILE_OBJECT FileObject; // [rsp+60h] [rbp-98h] BYREF
  struct _IO_STATUS_BLOCK *v40; // [rsp+68h] [rbp-90h]
  PDEVICE_OBJECT DeviceObject; // [rsp+70h] [rbp-88h]
  _QWORD v42[3]; // [rsp+78h] [rbp-80h] BYREF
  int NotificationStructure; // [rsp+90h] [rbp-68h] BYREF
  GUID v44; // [rsp+94h] [rbp-64h]
  __int64 v45; // [rsp+A8h] [rbp-50h]
  int v46; // [rsp+B0h] [rbp-48h]
  void *retaddr; // [rsp+F8h] [rbp+0h]

  v5 = Length;
  v35 = Length;
  v40 = IoStatusBlock;
  v8 = 0LL;
  P = 0LL;
  CurrentThread = KeGetCurrentThread();
  v37 = (__int64)CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v34 = PreviousMode;
  if ( PreviousMode )
  {
    if ( (unsigned int)FsInformationClass >= FileFsFullSizeInformationEx )
      return -1073741821;
    v11 = *((_BYTE *)IopSetFsOperationLength + (int)FsInformationClass);
    if ( !v11 )
      return -1073741821;
    if ( (unsigned int)v5 < v11 )
      return -1073741820;
    v12 = &IoStatusBlock->0;
    if ( (unsigned __int64)IoStatusBlock >= MmUserProbeAddress )
      v12 = (_DWORD *)MmUserProbeAddress;
    *v12 = *v12;
    if ( CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[7] )
    {
      if ( (_DWORD)v5 )
      {
        if ( ((unsigned __int8)FsInformation & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)FsInformation + v5 > MmUserProbeAddress || (char *)FsInformation + v5 < FsInformation )
          *(_BYTE *)MmUserProbeAddress = 0;
      }
    }
    else if ( (_DWORD)v5 )
    {
      if ( ((*((unsigned __int8 *)IopQuerySetFsAlignmentRequirement + (int)FsInformationClass) - 1) & (unsigned __int64)FsInformation) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)FsInformation + v5 > MmUserProbeAddress || (char *)FsInformation + v5 < FsInformation )
        *(_BYTE *)MmUserProbeAddress = 0;
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
  v16 = (struct _DEVICE_OBJECT *)Object;
  if ( RelatedTargetDevice < 0 )
    v16 = 0LL;
  Object = v16;
  if ( (*((_DWORD *)v14 + 20) & 2) != 0 )
  {
    if ( !sub_14008E8A8((volatile __int32 *)v14) )
    {
      v31 = IopAcquireFileObjectLock(v14, PreviousMode, (v14[80] & 4) != 0, &v33);
      if ( v33 )
      {
        ObfDereferenceObject(v14);
        if ( v16 )
          ObfDereferenceObject(v16);
        return v31;
      }
    }
    v33 = 1;
  }
  else
  {
    v32 = (struct _KEVENT *)sub_1400EB244();
    v8 = v32;
    P = v32;
    if ( !v32 )
    {
      ObfDereferenceObject(v14);
LABEL_53:
      if ( v16 )
        ObfDereferenceObject(v16);
      return -1073741670;
    }
    KeInitializeEvent(v32, SynchronizationEvent, 0);
    v33 = 0;
  }
  IopResetEvent((__int64)v14, v17, v18);
  DeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)v14);
  LOBYTE(v19) = DeviceObject->StackSize;
  Irp = pIoAllocateIrp(DeviceObject, v19, 0LL, retaddr);
  v21 = (IRP *)Irp;
  v42[2] = Irp;
  if ( !Irp )
  {
    if ( (*((_DWORD *)v14 + 20) & 2) == 0 )
      ExFreePoolWithTag(v8, 0);
    IopAllocateIrpCleanup(v14, 0LL);
    goto LABEL_53;
  }
  *(_QWORD *)(Irp + 192) = v14;
  *(_QWORD *)(Irp + 152) = v37;
  *(_BYTE *)(Irp + 64) = v34;
  v42[0] = 0LL;
  v42[1] = 0LL;
  if ( v33 )
  {
    *(_QWORD *)(Irp + 80) = 0LL;
    v22 = v40;
  }
  else
  {
    *(_QWORD *)(Irp + 80) = v8;
    v22 = (struct _IO_STATUS_BLOCK *)v42;
    v21->Flags = 4;
  }
  v21->UserIosb = v22;
  v21->Overlay.AllocationSize.QuadPart = 0LL;
  v23 = (__int64)&v21->Tail.Overlay.CurrentStackLocation[-1];
  v37 = v23;
  *(_BYTE *)v23 = 11;
  *(_QWORD *)(v23 + 48) = v14;
  v21->AssociatedIrp.MasterIrp = 0LL;
  v21->MdlAddress = 0LL;
  v24 = (struct _IRP *)sub_14008E44C(0LL, v5);
  v21->AssociatedIrp.MasterIrp = v24;
  memmove(v24, FsInformation, v5);
  v25 = v34;
  if ( !v34 || FsInformationClass != FileFsLabelInformation )
  {
    v27 = v35;
LABEL_34:
    v21->Flags |= 0x30u;
    v28 = v37;
    *(_DWORD *)(v37 + 8) = v27;
    *(_DWORD *)(v28 + 16) = FsInformationClass;
    v29 = v33;
    v30 = IopSynchronousServiceTail(DeviceObject, v21, v14, 0, v25, v33, 2);
    if ( !v29 )
      v30 = IopSynchronousApiServiceTail(v30, v8, v21, v34, (unsigned int *)v42, v40);
    if ( v16 )
    {
      if ( v30 >= 0 )
      {
        NotificationStructure = 2359297;
        v45 = 0LL;
        v46 = -1;
        v44 = GUID_IO_VOLUME_CHANGE;
        IoReportTargetDeviceChange(v16, &NotificationStructure);
      }
      ObfDereferenceObject(v16);
    }
    return v30;
  }
  v26 = *(_DWORD *)v21->AssociatedIrp.MasterIrp;
  if ( v26 >= 0 )
  {
    v27 = v35;
    if ( v26 + 4 <= v35 )
      goto LABEL_34;
  }
  IopExceptionCleanup(v14, v21, 0LL, v8);
  if ( v16 )
    ObfDereferenceObject(v16);
  return -1073741811;
}
