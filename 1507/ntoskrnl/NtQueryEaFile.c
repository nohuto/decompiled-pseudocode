/*
 * XREFs of NtQueryEaFile @ 0x140534134
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140013F48 (ExAllocatePoolWithTagPriority.c)
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     IoAllocateMdl @ 0x140033BF0 (IoAllocateMdl.c)
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140045B50 (ExAllocatePoolWithQuotaTag.c)
 *     IoGetRelatedDeviceObject @ 0x140048020 (IoGetRelatedDeviceObject.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     sub_1401F8750 @ 0x1401F8750 (sub_1401F8750.c)
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
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryEaFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        BOOLEAN ReturnSingleEntry,
        PVOID EaList,
        ULONG EaListLength,
        PULONG EaIndex,
        BOOLEAN RestartScan)
{
  struct _KEVENT *v11; // rsi
  _DWORD *v12; // rcx
  ULONG *v13; // rcx
  char v14; // r12
  char *v15; // rax
  unsigned int *PoolWithTagPriority; // rax
  unsigned int *v17; // rdi
  signed int v18; // ecx
  NTSTATUS result; // eax
  unsigned int v20; // eax
  __int64 v21; // rdx
  PVOID PoolWithQuotaTag; // rax
  int v23; // edi
  _DWORD *v24; // rcx
  struct _KPROCESS *Process; // rcx
  PACCESS_TOKEN v26; // rbx
  _DWORD *v27; // rdi
  struct _KTHREAD *v28; // rax
  struct _KTHREAD *v29; // rcx
  __int16 v30; // ax
  NTSTATUS v31; // ebx
  struct _KEVENT *PoolWithTag; // rax
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  __int64 v34; // rdx
  __int64 Irp; // rax
  IRP *v36; // rbx
  KPROCESSOR_MODE v37; // di
  __int64 v38; // rsi
  ULONG Flags; // eax
  ULONG v40; // eax
  struct _IRP *v41; // rcx
  struct _MDL *Mdl; // rcx
  char v43; // [rsp+40h] [rbp-88h]
  KPROCESSOR_MODE AccessMode; // [rsp+41h] [rbp-87h]
  PVOID P; // [rsp+48h] [rbp-80h]
  char v46; // [rsp+54h] [rbp-74h]
  PVOID Object; // [rsp+58h] [rbp-70h] BYREF
  ULONG v48; // [rsp+60h] [rbp-68h]
  PVOID v49; // [rsp+68h] [rbp-60h]
  PVOID TokenInformation; // [rsp+70h] [rbp-58h] BYREF
  _QWORD v51[2]; // [rsp+78h] [rbp-50h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+88h] [rbp-40h]
  unsigned int *v53; // [rsp+90h] [rbp-38h]
  void *retaddr; // [rsp+C8h] [rbp+0h]

  v11 = 0LL;
  v49 = 0LL;
  P = 0LL;
  v43 = 0;
  v48 = 0;
  v51[0] = 0LL;
  v51[1] = 0LL;
  CurrentThread = KeGetCurrentThread();
  AccessMode = CurrentThread->PreviousMode;
  if ( AccessMode )
  {
    v12 = &IoStatusBlock->0;
    if ( (unsigned __int64)IoStatusBlock >= MmUserProbeAddress )
      v12 = (_DWORD *)MmUserProbeAddress;
    *v12 = *v12;
    ProbeForWrite(Buffer, Length, 4u);
    if ( EaIndex )
    {
      v13 = EaIndex;
      if ( (unsigned __int64)EaIndex >= MmUserProbeAddress )
        v13 = (ULONG *)MmUserProbeAddress;
      v48 = *v13;
    }
    v14 = 0;
    if ( EaList && EaListLength )
    {
      v43 = 1;
      if ( ((unsigned __int8)EaList & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v15 = (char *)EaList + EaListLength;
      if ( (unsigned __int64)v15 > MmUserProbeAddress || v15 < EaList )
        *(_BYTE *)MmUserProbeAddress = 0;
      if ( ViVerifierDriverAddedThunkListHead )
      {
        PoolWithTagPriority = (unsigned int *)ExAllocatePoolWithTagPriority(
                                                NonPagedPoolNx,
                                                EaListLength,
                                                0x20206F49u,
                                                (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
        if ( !PoolWithTagPriority )
          RtlRaiseStatus(-1073741670);
      }
      else
      {
        PoolWithTagPriority = (unsigned int *)ExAllocatePoolWithQuotaTag(NonPagedPoolNx, EaListLength, 0x20206F49u);
      }
      P = PoolWithTagPriority;
      v17 = PoolWithTagPriority;
      memmove(PoolWithTagPriority, EaList, EaListLength);
      v53 = v17;
      v18 = EaListLength;
      while ( 1 )
      {
        if ( v18 < 5 )
        {
          ExFreePoolWithTag(P, 0);
          IoStatusBlock->Status = -2147483628;
          IoStatusBlock->Information = 0LL;
          return -2147483628;
        }
        v20 = *((unsigned __int8 *)v17 + 4) + 6;
        if ( v18 < v20 )
          goto LABEL_31;
        v21 = *v17;
        if ( !(_DWORD)v21 )
          break;
        if ( ((*((unsigned __int8 *)v17 + 4) + 9) & 0xFFFFFFFC) != (_DWORD)v21 )
          goto LABEL_31;
        if ( (int)v21 < 0 )
          goto LABEL_31;
        v18 -= v21;
        if ( v18 < 0 )
          goto LABEL_31;
        v17 = (unsigned int *)((char *)v17 + v21);
        v53 = v17;
      }
      if ( (int)(v18 - v20) < 0 )
      {
LABEL_31:
        ExFreePoolWithTag(P, 0);
        IoStatusBlock->Status = -2147483628;
        IoStatusBlock->Information = (int)v17 - (int)P;
        return -2147483628;
      }
      v11 = 0LL;
    }
  }
  else
  {
    if ( EaList && EaListLength )
    {
      v43 = 1;
      if ( ViVerifierDriverAddedThunkListHead )
      {
        PoolWithQuotaTag = ExAllocatePoolWithTagPriority(
                             NonPagedPoolNx,
                             EaListLength,
                             0x20206F49u,
                             (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
        if ( !PoolWithQuotaTag )
          RtlRaiseStatus(-1073741670);
      }
      else
      {
        PoolWithQuotaTag = ExAllocatePoolWithQuotaTag(NonPagedPoolNx, EaListLength, 0x20206F49u);
      }
      P = PoolWithQuotaTag;
      memmove(PoolWithQuotaTag, EaList, EaListLength);
    }
    if ( EaIndex )
      v48 = *EaIndex;
    v14 = 0;
  }
  v23 = ObReferenceObjectByHandle(FileHandle, 8u, (POBJECT_TYPE)IoFileObjectType, AccessMode, &Object, 0LL);
  if ( v23 >= 0 )
  {
    v24 = (_DWORD *)*((_QWORD *)Object + 26);
    if ( v24 )
    {
      if ( (*v24 & 4) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        LODWORD(TokenInformation) = 0;
        v26 = PsReferencePrimaryToken(Process);
        SeQueryInformationToken(v26, TokenIsAppContainer, &TokenInformation);
        ObfDereferenceObject(v26);
        if ( (_DWORD)TokenInformation )
        {
          ObfDereferenceObject(Object);
          v23 = -1073739504;
        }
      }
    }
  }
  if ( v23 < 0 )
  {
    if ( v43 )
      ExFreePoolWithTag(P, 0);
    return v23;
  }
  v27 = Object;
  if ( (*((_DWORD *)Object + 20) & 2) != 0 )
  {
    v28 = KeGetCurrentThread();
    --v28->KernelApcDisable;
    if ( !_InterlockedExchange((volatile __int32 *)Object + 29, 1) )
    {
      ObfReferenceObject(Object);
LABEL_63:
      v14 = 1;
      goto LABEL_73;
    }
    v29 = KeGetCurrentThread();
    v30 = v29->KernelApcDisable + 1;
    v29->KernelApcDisable = v30;
    if ( !v30
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v29->ApcState.ApcListHead[0].Flink != &v29->152
      && !v29->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    v31 = IopAcquireFileObjectLock(Object);
    if ( !v46 )
      goto LABEL_63;
    if ( v43 )
      ExFreePoolWithTag(P, 0);
LABEL_71:
    ObfDereferenceObject(Object);
    return v31;
  }
  if ( ViVerifierDriverAddedThunkListHead )
    PoolWithTag = (struct _KEVENT *)ExAllocatePoolWithTagPriority(
                                      NonPagedPoolNx,
                                      0x18uLL,
                                      0x20206F49u,
                                      (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  else
    PoolWithTag = (struct _KEVENT *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x20206F49u);
  v11 = PoolWithTag;
  v49 = PoolWithTag;
  if ( !PoolWithTag )
  {
    if ( v43 )
      ExFreePoolWithTag(P, 0);
    v31 = -1073741670;
    goto LABEL_71;
  }
  KeInitializeEvent(PoolWithTag, SynchronizationEvent, 0);
LABEL_73:
  if ( (v27[20] & 0x4000000) == 0 )
    KeResetEvent((PRKEVENT)((char *)Object + 152));
  RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)Object);
  LOBYTE(v34) = RelatedDeviceObject->StackSize;
  Irp = pIoAllocateIrp(RelatedDeviceObject, v34, 0LL, retaddr);
  v36 = (IRP *)Irp;
  TokenInformation = (PVOID)Irp;
  if ( !Irp )
  {
    if ( (v27[20] & 2) == 0 )
      ExFreePoolWithTag(v11, 0);
    IopAllocateIrpCleanup(Object, 0LL);
    if ( v43 )
      ExFreePoolWithTag(P, 0);
    return -1073741670;
  }
  *(_QWORD *)(Irp + 192) = Object;
  *(_QWORD *)(Irp + 152) = CurrentThread;
  v37 = AccessMode;
  *(_BYTE *)(Irp + 64) = AccessMode;
  if ( v14 )
  {
    *(_QWORD *)(Irp + 80) = 0LL;
    *(_QWORD *)(Irp + 72) = IoStatusBlock;
  }
  else
  {
    *(_QWORD *)(Irp + 80) = v11;
    *(_QWORD *)(Irp + 72) = v51;
    *(_DWORD *)(Irp + 16) = 4;
  }
  *(_QWORD *)(Irp + 88) = 0LL;
  v38 = *(_QWORD *)(Irp + 184);
  *(_BYTE *)(v38 - 72) = 7;
  *(_QWORD *)(v38 - 24) = Object;
  if ( v43 )
  {
    *(_QWORD *)(Irp + 160) = P;
    *(_QWORD *)(v38 - 56) = P;
    *(_DWORD *)(v38 - 48) = EaListLength;
    v37 = AccessMode;
  }
  Flags = RelatedDeviceObject->Flags;
  if ( (Flags & 4) == 0 )
  {
    if ( (Flags & 0x10) != 0 )
    {
      v40 = Length;
      if ( Length )
      {
        Mdl = IoAllocateMdl(Buffer, Length, 0, 1u, v36);
        if ( !Mdl )
          RtlRaiseStatus(-1073741670);
        sub_1401F8750(Mdl, v37, IoWriteAccess, (__int64)RelatedDeviceObject, *(unsigned __int8 *)(v38 - 72));
        v40 = Length;
      }
      goto LABEL_103;
    }
    goto LABEL_102;
  }
  v40 = Length;
  if ( Length )
  {
    if ( ViVerifierDriverAddedThunkListHead )
    {
      v41 = (struct _IRP *)ExAllocatePoolWithTagPriority(
                             NonPagedPoolNx,
                             Length,
                             0x20206F49u,
                             (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
      if ( !v41 )
        RtlRaiseStatus(-1073741670);
    }
    else
    {
      v41 = (struct _IRP *)ExAllocatePoolWithQuotaTag(NonPagedPoolNx, Length, 0x20206F49u);
    }
    v36->AssociatedIrp.MasterIrp = v41;
    if ( !IopDisableBufferedIoInit )
      memset(v41, 0, Length);
    v36->Flags |= 0x70u;
LABEL_102:
    v36->UserBuffer = Buffer;
    v40 = Length;
    goto LABEL_103;
  }
  v36->AssociatedIrp.MasterIrp = 0LL;
  v36->Flags |= 0x50u;
LABEL_103:
  *(_DWORD *)(v38 - 64) = v40;
  *(_DWORD *)(v38 - 40) = v48;
  *(_BYTE *)(v38 - 70) = 0;
  *(_BYTE *)(v38 - 70) = RestartScan != 0;
  if ( ReturnSingleEntry )
    *(_BYTE *)(v38 - 70) |= 2u;
  if ( EaIndex )
    *(_BYTE *)(v38 - 70) |= 4u;
  result = IopSynchronousServiceTail(RelatedDeviceObject, v36, (char *)Object, 0, AccessMode, v14, 2);
  if ( !v14 )
    return IopSynchronousApiServiceTail(result, v49, v36, AccessMode, (unsigned int *)v51, IoStatusBlock);
  return result;
}
