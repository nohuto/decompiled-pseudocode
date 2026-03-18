/*
 * XREFs of NtQueryQuotaInformationFile @ 0x1405FBBAC
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
 *     ExAllocatePoolWithTagPriority @ 0x140041DC0 (ExAllocatePoolWithTagPriority.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     IoGetRelatedDeviceObject @ 0x1400435F0 (IoGetRelatedDeviceObject.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     IopResetEvent @ 0x14008E840 (IopResetEvent.c)
 *     MmProbeAndLockPages @ 0x1400A7230 (MmProbeAndLockPages.c)
 *     IopReferenceFileObject @ 0x1400CC3D8 (IopReferenceFileObject.c)
 *     IoAllocateMdl @ 0x1400FC2E0 (IoAllocateMdl.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     sub_1401BCE8C @ 0x1401BCE8C (sub_1401BCE8C.c)
 *     MmUpdateMdlTracker @ 0x1401D319C (MmUpdateMdlTracker.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
 *     IopSynchronousServiceTail @ 0x140437580 (IopSynchronousServiceTail.c)
 *     RtlValidSid @ 0x14046C1EC (RtlValidSid.c)
 *     RtlLengthRequiredSid @ 0x14046C3B0 (RtlLengthRequiredSid.c)
 *     IopSynchronousApiServiceTail @ 0x140490974 (IopSynchronousApiServiceTail.c)
 *     IopAcquireFileObjectLock @ 0x1404AC66C (IopAcquireFileObjectLock.c)
 *     IopExceptionCleanup @ 0x1404C68BC (IopExceptionCleanup.c)
 *     IopAllocateIrpCleanup @ 0x1405F70B8 (IopAllocateIrpCleanup.c)
 *     IopCheckGetQuotaBufferValidity @ 0x1405F7360 (IopCheckGetQuotaBufferValidity.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryQuotaInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        BOOLEAN ReturnSingleEntry,
        PVOID SidList,
        ULONG SidListLength,
        PSID StartSid,
        BOOLEAN RestartScan)
{
  HANDLE v12; // r13
  struct _KTHREAD *CurrentThread; // rdx
  _DWORD *v14; // rcx
  ULONG v15; // r8d
  UNICODE_STRING *v16; // r12
  char *v17; // rcx
  ULONG v18; // eax
  ULONG v19; // r14d
  ULONG v20; // r15d
  ULONG v21; // ecx
  NTSTATUS result; // eax
  char *v23; // rdi
  unsigned int *v24; // rax
  PSID v25; // rax
  char v26; // r14
  NTSTATUS v27; // esi
  struct _FILE_OBJECT *v28; // r13
  _BYTE *v29; // rsi
  struct _KTHREAD *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  NTSTATUS v33; // edi
  struct _KEVENT *PoolWithTagPriority; // rax
  __int64 v35; // rdx
  IRP *v36; // rax
  IRP *Irp; // rsi
  struct _IO_STATUS_BLOCK *v38; // rax
  struct _IO_STACK_LOCATION *v39; // r14
  struct _DEVICE_OBJECT *v40; // r15
  ULONG Flags; // eax
  struct _IRP *v42; // rcx
  struct _MDL *Mdl; // r15
  char v44; // [rsp+40h] [rbp-A8h]
  char v45; // [rsp+40h] [rbp-A8h]
  KPROCESSOR_MODE AccessMode; // [rsp+41h] [rbp-A7h]
  char v47[5]; // [rsp+43h] [rbp-A5h] BYREF
  PVOID P; // [rsp+48h] [rbp-A0h]
  ULONG MajorFunction; // [rsp+50h] [rbp-98h]
  PVOID v50; // [rsp+58h] [rbp-90h]
  PVOID Object; // [rsp+60h] [rbp-88h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+68h] [rbp-80h] BYREF
  unsigned int *v53; // [rsp+70h] [rbp-78h]
  PSID Sid; // [rsp+78h] [rbp-70h]
  struct _IO_STATUS_BLOCK *v55; // [rsp+80h] [rbp-68h]
  PIRP v56; // [rsp+88h] [rbp-60h]
  _QWORD v57[2]; // [rsp+90h] [rbp-58h] BYREF
  _DWORD *v58; // [rsp+A0h] [rbp-48h]
  struct _KTHREAD *v59; // [rsp+A8h] [rbp-40h]
  void *retaddr; // [rsp+E8h] [rbp+0h]

  v55 = IoStatusBlock;
  v12 = FileHandle;
  v50 = 0LL;
  P = 0LL;
  MajorFunction = 0;
  Sid = 0LL;
  v53 = 0LL;
  v57[0] = 0LL;
  v57[1] = 0LL;
  CurrentThread = KeGetCurrentThread();
  v59 = CurrentThread;
  AccessMode = CurrentThread->PreviousMode;
  if ( AccessMode )
  {
    v14 = &IoStatusBlock->0;
    if ( (unsigned __int64)IoStatusBlock >= MmUserProbeAddress )
      v14 = (_DWORD *)MmUserProbeAddress;
    *v14 = *v14;
    v15 = 4;
    if ( !CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[7] )
      v15 = 8;
    ProbeForWrite(Buffer, Length, v15);
    v16 = (UNICODE_STRING *)StartSid;
    if ( StartSid )
    {
      v17 = (char *)StartSid + 1;
      if ( (unsigned __int64)StartSid + 1 >= MmUserProbeAddress )
        v17 = (char *)MmUserProbeAddress;
      v44 = *v17;
      v18 = RtlLengthRequiredSid((unsigned __int8)*v17);
      v19 = v18;
      MajorFunction = v18;
      if ( v18 )
      {
        if ( ((unsigned __int8)StartSid & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)StartSid + v18 > MmUserProbeAddress || (char *)StartSid + v18 < StartSid )
          *(_BYTE *)MmUserProbeAddress = 0;
      }
    }
    else
    {
      v44 = 0;
      v19 = MajorFunction;
    }
    if ( SidList && (v20 = SidListLength) != 0 )
    {
      if ( ((unsigned __int8)SidList & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)SidList + SidListLength > MmUserProbeAddress || (char *)SidList + SidListLength < SidList )
        *(_BYTE *)MmUserProbeAddress = 0;
      v21 = (SidListLength + 3) & 0xFFFFFFFC;
      if ( v21 > -1 - v19 )
        return -1073741811;
      if ( v21 < SidListLength )
        return -1073741811;
      v23 = (char *)sub_1401BCE8C(NonPagedPoolNx, v21 + v19);
      P = v23;
      v53 = (unsigned int *)v23;
      memmove(v23, SidList, SidListLength);
    }
    else
    {
      v20 = 0;
      SidListLength = 0;
      if ( StartSid )
      {
        v23 = (char *)sub_1401BCE8C(PagedPool, v19);
        P = v23;
      }
      else
      {
        v23 = (char *)P;
      }
    }
    if ( StartSid )
    {
      Sid = &v23[(v20 + 3) & 0xFFFFFFFC];
      memmove(Sid, StartSid, v19);
      *((_BYTE *)Sid + 1) = v44;
    }
    v12 = FileHandle;
  }
  else
  {
    v20 = SidListLength;
    if ( SidList )
    {
      v24 = v53;
      if ( SidListLength )
        v24 = (unsigned int *)SidList;
      v53 = v24;
    }
    v25 = Sid;
    v16 = (UNICODE_STRING *)StartSid;
    if ( StartSid )
      v25 = StartSid;
    Sid = v25;
    v23 = (char *)P;
  }
  v26 = 1;
  if ( v53 )
  {
    DeviceObject = 0LL;
    v27 = IopCheckGetQuotaBufferValidity(v53, v20, &DeviceObject);
    if ( v27 < 0 )
    {
      v55->Information = (ULONG_PTR)DeviceObject;
LABEL_44:
      if ( v23 )
        ExFreePoolWithTag(v23, 0);
      return v27;
    }
  }
  if ( Sid && !RtlValidSid(Sid) )
  {
    if ( v23 )
      ExFreePoolWithTag(v23, 0);
    return -1073741704;
  }
  v27 = IopReferenceFileObject(v12, 0, AccessMode, &Object, 0LL);
  if ( v27 < 0 )
    goto LABEL_44;
  v28 = (struct _FILE_OBJECT *)Object;
  v29 = (char *)Object + 80;
  v58 = (char *)Object + 80;
  if ( (*((_DWORD *)Object + 20) & 2) != 0 )
  {
    v30 = KeGetCurrentThread();
    --v30->KernelApcDisable;
    if ( !_InterlockedExchange((volatile __int32 *)Object + 29, 1) )
    {
      v28 = (struct _FILE_OBJECT *)Object;
      ObfReferenceObject(Object);
LABEL_59:
      v45 = 1;
      v20 = SidListLength;
      v23 = (char *)P;
      goto LABEL_69;
    }
    KeLeaveCriticalRegion();
    v28 = (struct _FILE_OBJECT *)Object;
    v33 = IopAcquireFileObjectLock((char *)Object, AccessMode, (*v29 & 4) != 0, v47);
    if ( !v47[0] )
      goto LABEL_59;
    if ( P )
      ExFreePoolWithTag(P, 0);
LABEL_67:
    ObfDereferenceObject(v28);
    return v33;
  }
  if ( ViVerifierDriverAddedThunkListHead )
    PoolWithTagPriority = (struct _KEVENT *)ExAllocatePoolWithTagPriority(
                                              NonPagedPoolNx,
                                              0x18uLL,
                                              0x20206F49u,
                                              (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  else
    PoolWithTagPriority = (struct _KEVENT *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x20206F49u);
  v50 = PoolWithTagPriority;
  if ( !PoolWithTagPriority )
  {
    if ( v23 )
      ExFreePoolWithTag(v23, 0);
    v33 = -1073741670;
    goto LABEL_67;
  }
  KeInitializeEvent(PoolWithTagPriority, SynchronizationEvent, 0);
  v26 = 0;
  v45 = 0;
LABEL_69:
  IopResetEvent((__int64)v28, v31, v32);
  DeviceObject = IoGetRelatedDeviceObject(v28);
  LOBYTE(v35) = DeviceObject->StackSize;
  v36 = (IRP *)pIoAllocateIrp(DeviceObject, v35, 0LL, retaddr);
  Irp = v36;
  v56 = v36;
  if ( !v36 )
  {
    if ( (*v58 & 2) == 0 )
      ExFreePoolWithTag(v50, 0);
    IopAllocateIrpCleanup((char *)v28, 0LL);
    if ( v23 )
      ExFreePoolWithTag(v23, 0);
    return -1073741670;
  }
  v36->Tail.Overlay.OriginalFileObject = v28;
  v36->Tail.Overlay.Thread = v59;
  v36->RequestorMode = AccessMode;
  if ( v26 )
  {
    v36->UserEvent = 0LL;
    v38 = v55;
  }
  else
  {
    v36->UserEvent = (PKEVENT)v50;
    v38 = (struct _IO_STATUS_BLOCK *)v57;
    Irp->Flags = 4;
  }
  Irp->UserIosb = v38;
  Irp->Overlay.AllocationSize.QuadPart = 0LL;
  v39 = Irp->Tail.Overlay.CurrentStackLocation - 1;
  v39->MajorFunction = 25;
  v39->FileObject = v28;
  Irp->Tail.Overlay.AuxiliaryBuffer = v23;
  v39->Parameters.Read.ByteOffset.QuadPart = (LONGLONG)v53;
  v39->Parameters.Create.EaLength = v20;
  v40 = DeviceObject;
  Flags = DeviceObject->Flags;
  if ( (Flags & 4) != 0 )
  {
    if ( Length )
    {
      v42 = (struct _IRP *)sub_1401BCE8C(NonPagedPoolNx, Length);
      Irp->AssociatedIrp.MasterIrp = v42;
      if ( !IopDisableBufferedIoInit )
        memset(v42, 0, Length);
      Irp->Flags |= 0x70u;
    }
    else
    {
      Irp->AssociatedIrp.MasterIrp = 0LL;
    }
  }
  else if ( (Flags & 0x10) != 0 )
  {
    if ( Length )
    {
      Mdl = IoAllocateMdl(Buffer, Length, 0, 1u, Irp);
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      MajorFunction = v39->MajorFunction;
      MmProbeAndLockPages(Mdl, AccessMode, IoWriteAccess);
      if ( (MmTrackLockedPages & 1) != 0 )
        MmUpdateMdlTracker(
          (unsigned __int64)Mdl,
          (__int64)DeviceObject->DriverObject->MajorFunction[MajorFunction],
          (__int64)DeviceObject);
      v40 = DeviceObject;
    }
    goto LABEL_93;
  }
  Irp->UserBuffer = Buffer;
LABEL_93:
  v39->Parameters.Read.Length = Length;
  v39->Parameters.QueryDirectory.FileName = v16;
  v39->Flags = 0;
  v39->Flags = RestartScan != 0;
  if ( ReturnSingleEntry )
    v39->Flags |= 2u;
  if ( v16 )
    v39->Flags |= 4u;
  result = IopSynchronousServiceTail(v40, Irp, (char *)v28, 0, AccessMode, v45, 2);
  if ( !v45 )
    return IopSynchronousApiServiceTail(result, v50, Irp, AccessMode, (unsigned int *)v57, v55);
  return result;
}
