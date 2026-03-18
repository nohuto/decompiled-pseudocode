/*
 * XREFs of NtQueryQuotaInformationFile @ 0x140676310
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140013F48 (ExAllocatePoolWithTagPriority.c)
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     IoAllocateMdl @ 0x140033BF0 (IoAllocateMdl.c)
 *     MmProbeAndLockPages @ 0x140034050 (MmProbeAndLockPages.c)
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140045B50 (ExAllocatePoolWithQuotaTag.c)
 *     IoGetRelatedDeviceObject @ 0x140048020 (IoGetRelatedDeviceObject.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     MmUpdateMdlTracker @ 0x140214574 (MmUpdateMdlTracker.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     IopSynchronousApiServiceTail @ 0x140457B28 (IopSynchronousApiServiceTail.c)
 *     RtlLengthRequiredSid @ 0x140470D24 (RtlLengthRequiredSid.c)
 *     SeQueryInformationToken @ 0x140481E90 (SeQueryInformationToken.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     IopSynchronousServiceTail @ 0x1404BDDC0 (IopSynchronousServiceTail.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     RtlValidSid @ 0x1404CA0C0 (RtlValidSid.c)
 *     PsReferencePrimaryToken @ 0x14050D730 (PsReferencePrimaryToken.c)
 *     IopAcquireFileObjectLock @ 0x140540A5C (IopAcquireFileObjectLock.c)
 *     IopExceptionCleanup @ 0x14055D264 (IopExceptionCleanup.c)
 *     IopAllocateIrpCleanup @ 0x140670E48 (IopAllocateIrpCleanup.c)
 *     IopCheckGetQuotaBufferValidity @ 0x140671158 (IopCheckGetQuotaBufferValidity.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
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
  HANDLE v12; // r14
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v14; // r15
  _DWORD *v15; // rcx
  ULONG v16; // r8d
  UNICODE_STRING *v17; // r13
  char *v18; // rcx
  ULONG v19; // eax
  ULONG v20; // r14d
  char *v21; // rax
  ULONG v22; // ecx
  NTSTATUS result; // eax
  SIZE_T v24; // rdx
  unsigned int *PoolWithTagPriority; // rax
  unsigned int *v26; // rbx
  unsigned int *PoolWithQuotaTag; // rax
  unsigned int *v28; // rax
  PSID v29; // rax
  NTSTATUS v30; // esi
  _DWORD *v31; // rcx
  struct _KPROCESS *Process; // rcx
  PACCESS_TOKEN v33; // rbx
  _BYTE *v34; // r14
  struct _KTHREAD *v35; // rax
  struct _KTHREAD *v36; // rcx
  __int16 v37; // ax
  NTSTATUS v38; // ebx
  struct _KEVENT *PoolWithTag; // rax
  PDEVICE_OBJECT RelatedDeviceObject; // r15
  __int64 v41; // rdx
  __int64 Irp; // rax
  IRP *v43; // rsi
  struct _IO_STATUS_BLOCK *v44; // rax
  struct _IO_STACK_LOCATION *v45; // r14
  ULONG Flags; // eax
  struct _IRP *v47; // rcx
  struct _MDL *Mdl; // rax
  unsigned __int64 v49; // rbx
  unsigned int MajorFunction; // r15d
  __int64 v51; // rcx
  char v52; // [rsp+40h] [rbp-A8h]
  KPROCESSOR_MODE AccessMode; // [rsp+41h] [rbp-A7h]
  char v54; // [rsp+42h] [rbp-A6h]
  char v55[5]; // [rsp+43h] [rbp-A5h] BYREF
  PVOID Object; // [rsp+48h] [rbp-A0h] BYREF
  PVOID P; // [rsp+50h] [rbp-98h]
  PVOID v58; // [rsp+58h] [rbp-90h]
  PDEVICE_OBJECT v59; // [rsp+60h] [rbp-88h] BYREF
  unsigned int *v60; // [rsp+68h] [rbp-80h]
  PVOID TokenInformation; // [rsp+70h] [rbp-78h] BYREF
  ULONG v62; // [rsp+78h] [rbp-70h]
  PSID Sid; // [rsp+80h] [rbp-68h]
  struct _IO_STATUS_BLOCK *v64; // [rsp+88h] [rbp-60h]
  _QWORD v65[2]; // [rsp+90h] [rbp-58h] BYREF
  struct _KTHREAD *v66; // [rsp+A0h] [rbp-48h]
  void *retaddr; // [rsp+E8h] [rbp+0h]

  v64 = IoStatusBlock;
  v12 = FileHandle;
  v58 = 0LL;
  P = 0LL;
  v62 = 0;
  Sid = 0LL;
  v60 = 0LL;
  v65[0] = 0LL;
  v65[1] = 0LL;
  CurrentThread = KeGetCurrentThread();
  v66 = CurrentThread;
  v14 = (unsigned __int8)CurrentThread->gap0[10];
  AccessMode = v14;
  if ( (_BYTE)v14 )
  {
    v15 = &IoStatusBlock->0;
    if ( (unsigned __int64)IoStatusBlock >= MmUserProbeAddress )
      v15 = (_DWORD *)MmUserProbeAddress;
    *v15 = *v15;
    v16 = 4;
    if ( !CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[7] )
      v16 = 8;
    ProbeForWrite(Buffer, Length, v16);
    v17 = (UNICODE_STRING *)StartSid;
    if ( StartSid )
    {
      v18 = (char *)StartSid + 1;
      if ( (unsigned __int64)StartSid + 1 >= MmUserProbeAddress )
        v18 = (char *)MmUserProbeAddress;
      v54 = *v18;
      v19 = RtlLengthRequiredSid((unsigned __int8)*v18);
      v20 = v19;
      v62 = v19;
      if ( v19 )
      {
        if ( ((unsigned __int8)StartSid & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)StartSid + v19 > MmUserProbeAddress || (char *)StartSid + v19 < StartSid )
          *(_BYTE *)MmUserProbeAddress = 0;
      }
    }
    else
    {
      v54 = 0;
      v20 = v62;
    }
    if ( SidList && SidListLength )
    {
      if ( ((unsigned __int8)SidList & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v21 = (char *)SidList + SidListLength;
      if ( (unsigned __int64)v21 > MmUserProbeAddress || v21 < SidList )
        *(_BYTE *)MmUserProbeAddress = 0;
      v22 = (SidListLength + 3) & 0xFFFFFFFC;
      if ( v22 > -1 - v20 )
        return -1073741811;
      if ( v22 < SidListLength )
        return -1073741811;
      v24 = v22 + v20;
      if ( ViVerifierDriverAddedThunkListHead )
      {
        PoolWithTagPriority = (unsigned int *)ExAllocatePoolWithTagPriority(
                                                NonPagedPoolNx,
                                                v24,
                                                0x20206F49u,
                                                (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
        v26 = PoolWithTagPriority;
        if ( !PoolWithTagPriority )
          RtlRaiseStatus(-1073741670);
      }
      else
      {
        PoolWithTagPriority = (unsigned int *)ExAllocatePoolWithQuotaTag(NonPagedPoolNx, v24, 0x20206F49u);
        v26 = PoolWithTagPriority;
      }
      P = PoolWithTagPriority;
      v60 = v26;
      memmove(v26, SidList, SidListLength);
    }
    else
    {
      SidListLength = 0;
      if ( StartSid )
      {
        if ( ViVerifierDriverAddedThunkListHead )
        {
          PoolWithQuotaTag = (unsigned int *)ExAllocatePoolWithTagPriority(
                                               PagedPool,
                                               v20,
                                               0x20206F49u,
                                               (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
          v26 = PoolWithQuotaTag;
          if ( !PoolWithQuotaTag )
            RtlRaiseStatus(-1073741670);
        }
        else
        {
          PoolWithQuotaTag = (unsigned int *)ExAllocatePoolWithQuotaTag(PagedPool, v20, 0x20206F49u);
          v26 = PoolWithQuotaTag;
        }
        P = PoolWithQuotaTag;
      }
      else
      {
        v26 = (unsigned int *)P;
      }
    }
    if ( StartSid )
    {
      Sid = (char *)v26 + ((SidListLength + 3) & 0xFFFFFFFC);
      memmove(Sid, StartSid, v20);
      *((_BYTE *)Sid + 1) = v54;
    }
    v12 = FileHandle;
  }
  else
  {
    if ( SidList )
    {
      v28 = v60;
      if ( SidListLength )
        v28 = (unsigned int *)SidList;
      v60 = v28;
    }
    v29 = Sid;
    v17 = (UNICODE_STRING *)StartSid;
    if ( StartSid )
      v29 = StartSid;
    Sid = v29;
    v26 = (unsigned int *)P;
  }
  if ( v60 )
  {
    v59 = 0LL;
    v30 = IopCheckGetQuotaBufferValidity(v60, SidListLength, &v59);
    if ( v30 < 0 )
    {
      v64->Information = (ULONG_PTR)v59;
LABEL_52:
      if ( v26 )
        ExFreePoolWithTag(v26, 0);
      return v30;
    }
  }
  if ( Sid && !RtlValidSid(Sid) )
  {
    if ( v26 )
      ExFreePoolWithTag(v26, 0);
    return -1073741704;
  }
  v30 = ObReferenceObjectByHandle(v12, 0, (POBJECT_TYPE)IoFileObjectType, v14, &Object, 0LL);
  if ( v30 >= 0 )
  {
    v31 = (_DWORD *)*((_QWORD *)Object + 26);
    if ( v31 )
    {
      if ( (*v31 & 4) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        LODWORD(TokenInformation) = 0;
        v33 = PsReferencePrimaryToken(Process);
        SeQueryInformationToken(v33, TokenIsAppContainer, &TokenInformation);
        ObfDereferenceObject(v33);
        if ( (_DWORD)TokenInformation )
        {
          ObfDereferenceObject(Object);
          v30 = -1073739504;
        }
        v26 = (unsigned int *)P;
      }
    }
  }
  if ( v30 < 0 )
    goto LABEL_52;
  v34 = Object;
  if ( (*((_DWORD *)Object + 20) & 2) != 0 )
  {
    v35 = KeGetCurrentThread();
    --v35->KernelApcDisable;
    if ( !_InterlockedExchange((volatile __int32 *)Object + 29, 1) )
    {
      ObfReferenceObject(Object);
LABEL_77:
      v52 = 1;
      v26 = (unsigned int *)P;
      goto LABEL_87;
    }
    v36 = KeGetCurrentThread();
    v37 = v36->KernelApcDisable + 1;
    v36->KernelApcDisable = v37;
    if ( !v37
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v36->ApcState.ApcListHead[0].Flink != &v36->152
      && !v36->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    v38 = IopAcquireFileObjectLock((char *)Object, v14, (v34[80] & 4) != 0, v55);
    if ( !v55[0] )
      goto LABEL_77;
    if ( P )
      ExFreePoolWithTag(P, 0);
LABEL_85:
    ObfDereferenceObject(Object);
    return v38;
  }
  if ( ViVerifierDriverAddedThunkListHead )
    PoolWithTag = (struct _KEVENT *)ExAllocatePoolWithTagPriority(
                                      NonPagedPoolNx,
                                      0x18uLL,
                                      0x20206F49u,
                                      (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  else
    PoolWithTag = (struct _KEVENT *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x20206F49u);
  v58 = PoolWithTag;
  if ( !PoolWithTag )
  {
    if ( v26 )
      ExFreePoolWithTag(v26, 0);
    v38 = -1073741670;
    goto LABEL_85;
  }
  KeInitializeEvent(PoolWithTag, SynchronizationEvent, 0);
  v52 = 0;
LABEL_87:
  if ( (*((_DWORD *)v34 + 20) & 0x4000000) == 0 )
    KeResetEvent((PRKEVENT)((char *)Object + 152));
  RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)Object);
  v59 = RelatedDeviceObject;
  LOBYTE(v41) = RelatedDeviceObject->StackSize;
  Irp = pIoAllocateIrp(RelatedDeviceObject, v41, 0LL, retaddr);
  v43 = (IRP *)Irp;
  TokenInformation = (PVOID)Irp;
  if ( !Irp )
  {
    if ( (*((_DWORD *)v34 + 20) & 2) == 0 )
      ExFreePoolWithTag(v58, 0);
    IopAllocateIrpCleanup((char *)Object, 0LL);
    if ( v26 )
      ExFreePoolWithTag(v26, 0);
    return -1073741670;
  }
  *(_QWORD *)(Irp + 192) = Object;
  *(_QWORD *)(Irp + 152) = v66;
  *(_BYTE *)(Irp + 64) = AccessMode;
  if ( v52 )
  {
    *(_QWORD *)(Irp + 80) = 0LL;
    v44 = v64;
  }
  else
  {
    *(_QWORD *)(Irp + 80) = v58;
    v44 = (struct _IO_STATUS_BLOCK *)v65;
    v43->Flags = 4;
  }
  v43->UserIosb = v44;
  v43->Overlay.AllocationSize.QuadPart = 0LL;
  v45 = v43->Tail.Overlay.CurrentStackLocation - 1;
  v45->MajorFunction = 25;
  v45->FileObject = (PFILE_OBJECT)Object;
  v43->Tail.Overlay.AuxiliaryBuffer = (PCHAR)v26;
  v45->Parameters.Read.ByteOffset.QuadPart = (LONGLONG)v60;
  v45->Parameters.Create.EaLength = SidListLength;
  Flags = RelatedDeviceObject->Flags;
  if ( (Flags & 4) != 0 )
  {
    if ( Length )
    {
      if ( ViVerifierDriverAddedThunkListHead )
      {
        v47 = (struct _IRP *)ExAllocatePoolWithTagPriority(
                               NonPagedPoolNx,
                               Length,
                               0x20206F49u,
                               (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
        if ( !v47 )
          RtlRaiseStatus(-1073741670);
      }
      else
      {
        v47 = (struct _IRP *)ExAllocatePoolWithQuotaTag(NonPagedPoolNx, Length, 0x20206F49u);
      }
      v43->AssociatedIrp.MasterIrp = v47;
      if ( !IopDisableBufferedIoInit )
        memset(v47, 0, Length);
      v43->Flags |= 0x70u;
    }
    else
    {
      v43->AssociatedIrp.MasterIrp = 0LL;
    }
  }
  else if ( (Flags & 0x10) != 0 )
  {
    if ( Length )
    {
      Mdl = IoAllocateMdl(Buffer, Length, 0, 1u, v43);
      v49 = (unsigned __int64)Mdl;
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      MajorFunction = v45->MajorFunction;
      MmProbeAndLockPages(Mdl, AccessMode, IoWriteAccess);
      if ( (MmTrackLockedPages & 1) != 0 )
      {
        v51 = MajorFunction;
        RelatedDeviceObject = v59;
        MmUpdateMdlTracker(v49, (__int64)v59->DriverObject->MajorFunction[v51], (__int64)v59);
      }
      else
      {
        RelatedDeviceObject = v59;
      }
    }
    goto LABEL_117;
  }
  v43->UserBuffer = Buffer;
LABEL_117:
  v45->Parameters.Read.Length = Length;
  v45->Parameters.QueryDirectory.FileName = v17;
  v45->Flags = 0;
  v45->Flags = RestartScan != 0;
  if ( ReturnSingleEntry )
    v45->Flags |= 2u;
  if ( v17 )
    v45->Flags |= 4u;
  result = IopSynchronousServiceTail(RelatedDeviceObject, v43, (char *)Object, 0, AccessMode, v52, 2);
  if ( !v52 )
    return IopSynchronousApiServiceTail(result, v58, v43, AccessMode, (unsigned int *)v65, v64);
  return result;
}
