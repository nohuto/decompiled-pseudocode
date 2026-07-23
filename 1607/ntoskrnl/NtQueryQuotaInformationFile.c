/*
 * XREFs of NtQueryQuotaInformationFile @ 0x140625894
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     IoGetRelatedDeviceObject @ 0x14002DC60 (IoGetRelatedDeviceObject.c)
 *     IopResetEvent @ 0x14002E140 (IopResetEvent.c)
 *     IoAllocateMdl @ 0x14002EB10 (IoAllocateMdl.c)
 *     MmProbeAndLockPages @ 0x14002ECA0 (MmProbeAndLockPages.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     IopReferenceFileObject @ 0x14007B6B0 (IopReferenceFileObject.c)
 *     ExAllocatePoolWithTagPriority @ 0x14007E290 (ExAllocatePoolWithTagPriority.c)
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     IopVerifierExAllocatePoolWithQuota_3 @ 0x1401CAD00 (IopVerifierExAllocatePoolWithQuota_3.c)
 *     MmUpdateMdlTracker @ 0x1401E308C (MmUpdateMdlTracker.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     IopAcquireFileObjectLock @ 0x1403EE090 (IopAcquireFileObjectLock.c)
 *     RtlValidSid @ 0x140420690 (RtlValidSid.c)
 *     IopSynchronousServiceTail @ 0x140444680 (IopSynchronousServiceTail.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 *     RtlLengthRequiredSid @ 0x1404781C0 (RtlLengthRequiredSid.c)
 *     IopSynchronousApiServiceTail @ 0x1404AF418 (IopSynchronousApiServiceTail.c)
 *     IopAllocateIrpCleanup @ 0x140620E74 (IopAllocateIrpCleanup.c)
 *     IopCheckGetQuotaBufferValidity @ 0x14062111C (IopCheckGetQuotaBufferValidity.c)
 *     IopExceptionCleanup @ 0x140621488 (IopExceptionCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
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
  __int64 v14; // rcx
  ULONG v15; // r8d
  UNICODE_STRING *v16; // r12
  __int64 v17; // rax
  ULONG v18; // eax
  ULONG v19; // r14d
  ULONG v20; // r15d
  ULONG v21; // ecx
  NTSTATUS result; // eax
  char *PoolWithQuota_3; // rdi
  unsigned int *v24; // rax
  PSID v25; // rax
  char v26; // r14
  NTSTATUS v27; // esi
  struct _FILE_OBJECT *v28; // r13
  _BYTE *v29; // rsi
  struct _KTHREAD *v30; // rax
  NTSTATUS v31; // edi
  struct _KEVENT *PoolWithTagPriority; // rax
  __int64 v33; // rdx
  IRP *v34; // rax
  IRP *Irp; // rsi
  struct _IO_STATUS_BLOCK *v36; // rax
  struct _IO_STACK_LOCATION *v37; // r14
  struct _DEVICE_OBJECT *v38; // r15
  ULONG Flags; // eax
  struct _IRP *v40; // rcx
  struct _MDL *Mdl; // r15
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-A8h]
  char v43; // [rsp+41h] [rbp-A7h]
  char v44; // [rsp+41h] [rbp-A7h]
  char v45[5]; // [rsp+43h] [rbp-A5h] BYREF
  PVOID P; // [rsp+48h] [rbp-A0h]
  ULONG MajorFunction; // [rsp+50h] [rbp-98h]
  PVOID v48; // [rsp+58h] [rbp-90h]
  PVOID Object; // [rsp+60h] [rbp-88h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+68h] [rbp-80h] BYREF
  unsigned int *v51; // [rsp+70h] [rbp-78h]
  PSID Sid; // [rsp+78h] [rbp-70h]
  struct _IO_STATUS_BLOCK *v53; // [rsp+80h] [rbp-68h]
  PIRP v54; // [rsp+88h] [rbp-60h]
  _QWORD v55[2]; // [rsp+90h] [rbp-58h] BYREF
  _DWORD *v56; // [rsp+A0h] [rbp-48h]
  struct _KTHREAD *v57; // [rsp+A8h] [rbp-40h]
  void *retaddr; // [rsp+E8h] [rbp+0h]

  v53 = IoStatusBlock;
  v12 = FileHandle;
  v48 = 0LL;
  P = 0LL;
  MajorFunction = 0;
  Sid = 0LL;
  v51 = 0LL;
  v55[0] = 0LL;
  v55[1] = 0LL;
  CurrentThread = KeGetCurrentThread();
  v57 = CurrentThread;
  AccessMode = CurrentThread->PreviousMode;
  if ( AccessMode )
  {
    v14 = (__int64)IoStatusBlock;
    if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
      v14 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v14 = *(_DWORD *)v14;
    v15 = 4;
    if ( !CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[7] )
      v15 = 8;
    ProbeForWrite(Buffer, Length, v15);
    v16 = (UNICODE_STRING *)StartSid;
    if ( StartSid )
    {
      v17 = (__int64)StartSid + 1;
      if ( (unsigned __int64)StartSid + 1 >= 0x7FFFFFFF0000LL )
        v17 = 0x7FFFFFFF0000LL;
      v43 = *(_BYTE *)v17;
      v18 = RtlLengthRequiredSid(*(unsigned __int8 *)v17);
      v19 = v18;
      MajorFunction = v18;
      if ( v18 )
      {
        if ( ((unsigned __int8)StartSid & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)StartSid + v18 > 0x7FFFFFFF0000LL || (char *)StartSid + v18 < StartSid )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    else
    {
      v43 = 0;
      v19 = MajorFunction;
    }
    if ( SidList && (v20 = SidListLength) != 0 )
    {
      if ( ((unsigned __int8)SidList & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)SidList + SidListLength > 0x7FFFFFFF0000LL || (char *)SidList + SidListLength < SidList )
        MEMORY[0x7FFFFFFF0000] = 0;
      v21 = (SidListLength + 3) & 0xFFFFFFFC;
      if ( v21 > -1 - v19 )
        return -1073741811;
      if ( v21 < SidListLength )
        return -1073741811;
      PoolWithQuota_3 = (char *)IopVerifierExAllocatePoolWithQuota_3(NonPagedPoolNx, v21 + v19);
      P = PoolWithQuota_3;
      v51 = (unsigned int *)PoolWithQuota_3;
      memmove(PoolWithQuota_3, SidList, SidListLength);
    }
    else
    {
      v20 = 0;
      SidListLength = 0;
      if ( StartSid )
      {
        PoolWithQuota_3 = (char *)IopVerifierExAllocatePoolWithQuota_3(PagedPool, v19);
        P = PoolWithQuota_3;
      }
      else
      {
        PoolWithQuota_3 = (char *)P;
      }
    }
    if ( StartSid )
    {
      Sid = &PoolWithQuota_3[(v20 + 3) & 0xFFFFFFFC];
      memmove(Sid, StartSid, v19);
      *((_BYTE *)Sid + 1) = v43;
    }
    v12 = FileHandle;
  }
  else
  {
    v20 = SidListLength;
    if ( SidList )
    {
      v24 = v51;
      if ( SidListLength )
        v24 = (unsigned int *)SidList;
      v51 = v24;
    }
    v25 = Sid;
    v16 = (UNICODE_STRING *)StartSid;
    if ( StartSid )
      v25 = StartSid;
    Sid = v25;
    PoolWithQuota_3 = (char *)P;
  }
  v26 = 1;
  if ( v51 )
  {
    DeviceObject = 0LL;
    v27 = IopCheckGetQuotaBufferValidity(v51, v20, &DeviceObject);
    if ( v27 < 0 )
    {
      v53->Information = (ULONG_PTR)DeviceObject;
LABEL_44:
      if ( PoolWithQuota_3 )
        ExFreePoolWithTag(PoolWithQuota_3, 0);
      return v27;
    }
  }
  if ( Sid && !RtlValidSid(Sid) )
  {
    if ( PoolWithQuota_3 )
      ExFreePoolWithTag(PoolWithQuota_3, 0);
    return -1073741704;
  }
  v27 = IopReferenceFileObject(v12, 0, AccessMode, &Object, 0LL);
  if ( v27 < 0 )
    goto LABEL_44;
  v28 = (struct _FILE_OBJECT *)Object;
  v29 = (char *)Object + 80;
  v56 = (char *)Object + 80;
  if ( (*((_DWORD *)Object + 20) & 2) != 0 )
  {
    v30 = KeGetCurrentThread();
    --v30->KernelApcDisable;
    if ( !_InterlockedExchange((volatile __int32 *)Object + 29, 1) )
    {
      v28 = (struct _FILE_OBJECT *)Object;
      ObfReferenceObject(Object);
LABEL_59:
      v44 = 1;
      v20 = SidListLength;
      PoolWithQuota_3 = (char *)P;
      goto LABEL_69;
    }
    KeLeaveCriticalRegion();
    v28 = (struct _FILE_OBJECT *)Object;
    v31 = IopAcquireFileObjectLock((char *)Object, AccessMode, (*v29 & 4) != 0, v45);
    if ( !v45[0] )
      goto LABEL_59;
    if ( P )
      ExFreePoolWithTag(P, 0);
LABEL_67:
    ObfDereferenceObject(v28);
    return v31;
  }
  if ( ViVerifierDriverAddedThunkListHead )
    PoolWithTagPriority = (struct _KEVENT *)ExAllocatePoolWithTagPriority(
                                              NonPagedPoolNx,
                                              0x18uLL,
                                              0x20206F49u,
                                              (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  else
    PoolWithTagPriority = (struct _KEVENT *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x20206F49u);
  v48 = PoolWithTagPriority;
  if ( !PoolWithTagPriority )
  {
    if ( PoolWithQuota_3 )
      ExFreePoolWithTag(PoolWithQuota_3, 0);
    v31 = -1073741670;
    goto LABEL_67;
  }
  KeInitializeEvent(PoolWithTagPriority, SynchronizationEvent, 0);
  v26 = 0;
  v44 = 0;
LABEL_69:
  IopResetEvent((__int64)v28);
  DeviceObject = IoGetRelatedDeviceObject(v28);
  LOBYTE(v33) = DeviceObject->StackSize;
  v34 = (IRP *)pIoAllocateIrp(DeviceObject, v33, 0LL, retaddr);
  Irp = v34;
  v54 = v34;
  if ( !v34 )
  {
    if ( (*v56 & 2) == 0 )
      ExFreePoolWithTag(v48, 0);
    IopAllocateIrpCleanup((char *)v28, 0LL);
    if ( PoolWithQuota_3 )
      ExFreePoolWithTag(PoolWithQuota_3, 0);
    return -1073741670;
  }
  v34->Tail.Overlay.OriginalFileObject = v28;
  v34->Tail.Overlay.Thread = v57;
  v34->RequestorMode = AccessMode;
  if ( v26 )
  {
    v34->UserEvent = 0LL;
    v36 = v53;
  }
  else
  {
    v34->UserEvent = (PKEVENT)v48;
    v36 = (struct _IO_STATUS_BLOCK *)v55;
    Irp->Flags = 4;
  }
  Irp->UserIosb = v36;
  Irp->Overlay.AllocationSize.QuadPart = 0LL;
  v37 = Irp->Tail.Overlay.CurrentStackLocation - 1;
  v37->MajorFunction = 25;
  v37->FileObject = v28;
  Irp->Tail.Overlay.AuxiliaryBuffer = PoolWithQuota_3;
  v37->Parameters.Read.ByteOffset.QuadPart = (LONGLONG)v51;
  v37->Parameters.Create.EaLength = v20;
  v38 = DeviceObject;
  Flags = DeviceObject->Flags;
  if ( (Flags & 4) != 0 )
  {
    if ( Length )
    {
      v40 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_3(NonPagedPoolNx, Length);
      Irp->AssociatedIrp.MasterIrp = v40;
      if ( !IopDisableBufferedIoInit )
        memset(v40, 0, Length);
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
      MajorFunction = v37->MajorFunction;
      MmProbeAndLockPages(Mdl, AccessMode, IoWriteAccess);
      if ( (MmTrackLockedPages & 1) != 0 )
        MmUpdateMdlTracker(
          (unsigned __int64)Mdl,
          (__int64)DeviceObject->DriverObject->MajorFunction[MajorFunction],
          (__int64)DeviceObject);
      v38 = DeviceObject;
    }
    goto LABEL_93;
  }
  Irp->UserBuffer = Buffer;
LABEL_93:
  v37->Parameters.Read.Length = Length;
  v37->Parameters.QueryDirectory.FileName = v16;
  v37->Flags = 0;
  v37->Flags = RestartScan != 0;
  if ( ReturnSingleEntry )
    v37->Flags |= 2u;
  if ( v16 )
    v37->Flags |= 4u;
  result = IopSynchronousServiceTail(v38, Irp, (__int64)v28, 0, AccessMode, v44, 2u);
  if ( !v44 )
    return IopSynchronousApiServiceTail(result, v48, Irp, AccessMode, (unsigned int *)v55, v53);
  return result;
}
