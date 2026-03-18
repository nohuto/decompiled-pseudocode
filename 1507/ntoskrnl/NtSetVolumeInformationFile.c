/*
 * XREFs of NtSetVolumeInformationFile @ 0x14055F21C
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140013F48 (ExAllocatePoolWithTagPriority.c)
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140045B50 (ExAllocatePoolWithQuotaTag.c)
 *     IoGetRelatedDeviceObject @ 0x140048020 (IoGetRelatedDeviceObject.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     IoGetRelatedTargetDevice @ 0x14040F4FC (IoGetRelatedTargetDevice.c)
 *     IopSynchronousApiServiceTail @ 0x140457B28 (IopSynchronousApiServiceTail.c)
 *     SeQueryInformationToken @ 0x140481E90 (SeQueryInformationToken.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     IopSynchronousServiceTail @ 0x1404BDDC0 (IopSynchronousServiceTail.c)
 *     PsReferencePrimaryToken @ 0x14050D730 (PsReferencePrimaryToken.c)
 *     IopAcquireFileObjectLock @ 0x140540A5C (IopAcquireFileObjectLock.c)
 *     IopExceptionCleanup @ 0x14055D264 (IopExceptionCleanup.c)
 *     IoReportTargetDeviceChange @ 0x14055F648 (IoReportTargetDeviceChange.c)
 *     IopAllocateIrpCleanup @ 0x140670E48 (IopAllocateIrpCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetVolumeInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FsInformation,
        ULONG Length,
        FS_INFORMATION_CLASS FsInformationClass)
{
  SIZE_T v5; // r13
  struct _KEVENT *v8; // r15
  struct _KTHREAD *CurrentThread; // r11
  char PreviousMode; // r9
  unsigned __int8 v11; // al
  _DWORD *v12; // rcx
  int v13; // edi
  struct _FILE_OBJECT *v14; // rbx
  _DWORD *v15; // rax
  int RelatedTargetDevice; // eax
  struct _DEVICE_OBJECT *v17; // rsi
  ULONG *p_Flags; // rdi
  struct _KTHREAD *v19; // rax
  __int64 v20; // rdx
  IRP *v21; // rax
  IRP *v22; // rdi
  struct _IO_STATUS_BLOCK *v23; // rax
  __int64 v24; // rax
  struct _IRP *PoolWithQuotaTag; // rax
  char v26; // dl
  int v27; // eax
  __int64 v28; // rcx
  char v29; // r12
  int v30; // ebx
  struct _KPROCESS *Process; // rcx
  PACCESS_TOKEN v33; // rbx
  struct _KTHREAD *v34; // rcx
  __int16 v35; // ax
  NTSTATUS v36; // esi
  struct _KEVENT *PoolWithTagPriority; // rax
  char v38; // [rsp+40h] [rbp-C8h] BYREF
  char v39; // [rsp+41h] [rbp-C7h]
  PVOID Object; // [rsp+48h] [rbp-C0h] BYREF
  PVOID v41; // [rsp+50h] [rbp-B8h] BYREF
  PVOID TokenInformation; // [rsp+58h] [rbp-B0h] BYREF
  PVOID P; // [rsp+60h] [rbp-A8h]
  __int64 v44; // [rsp+68h] [rbp-A0h]
  struct _IO_STATUS_BLOCK *v45; // [rsp+70h] [rbp-98h]
  PIRP Irp; // [rsp+78h] [rbp-90h]
  _QWORD v47[2]; // [rsp+80h] [rbp-88h] BYREF
  ULONG *v48; // [rsp+90h] [rbp-78h]
  int NotificationStructure; // [rsp+98h] [rbp-70h] BYREF
  GUID v50; // [rsp+9Ch] [rbp-6Ch]
  __int64 v51; // [rsp+B0h] [rbp-58h]
  int v52; // [rsp+B8h] [rbp-50h]
  void *retaddr; // [rsp+108h] [rbp+0h]

  v5 = Length;
  v45 = IoStatusBlock;
  v8 = 0LL;
  P = 0LL;
  CurrentThread = KeGetCurrentThread();
  v44 = (__int64)CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v39 = PreviousMode;
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
  v13 = ObReferenceObjectByHandle(
          FileHandle,
          IopSetFsOperationAccess[FsInformationClass],
          (POBJECT_TYPE)IoFileObjectType,
          PreviousMode,
          &Object,
          0LL);
  v14 = (struct _FILE_OBJECT *)Object;
  if ( v13 >= 0 )
  {
    v15 = (_DWORD *)*((_QWORD *)Object + 26);
    if ( v15 )
    {
      if ( (*v15 & 4) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        LODWORD(TokenInformation) = 0;
        v33 = PsReferencePrimaryToken(Process);
        SeQueryInformationToken(v33, TokenIsAppContainer, &TokenInformation);
        ObfDereferenceObject(v33);
        v14 = (struct _FILE_OBJECT *)Object;
        if ( (_DWORD)TokenInformation )
        {
          ObfDereferenceObject(Object);
          v13 = -1073739504;
        }
      }
    }
  }
  if ( v13 < 0 )
    return v13;
  RelatedTargetDevice = IoGetRelatedTargetDevice(v14, &v41);
  v17 = (struct _DEVICE_OBJECT *)v41;
  if ( RelatedTargetDevice < 0 )
    v17 = 0LL;
  v41 = v17;
  p_Flags = &v14->Flags;
  v48 = &v14->Flags;
  if ( (v14->Flags & 2) == 0 )
  {
    if ( ViVerifierDriverAddedThunkListHead )
      PoolWithTagPriority = (struct _KEVENT *)ExAllocatePoolWithTagPriority(
                                                NonPagedPoolNx,
                                                0x18uLL,
                                                0x20206F49u,
                                                (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
    else
      PoolWithTagPriority = (struct _KEVENT *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x20206F49u);
    v8 = PoolWithTagPriority;
    P = PoolWithTagPriority;
    if ( !PoolWithTagPriority )
    {
      ObfDereferenceObject(v14);
LABEL_71:
      if ( v17 )
        ObfDereferenceObject(v17);
      return -1073741670;
    }
    KeInitializeEvent(PoolWithTagPriority, SynchronizationEvent, 0);
    v38 = 0;
LABEL_30:
    if ( (*p_Flags & 0x4000000) == 0 )
      KeResetEvent(&v14->Event);
    TokenInformation = IoGetRelatedDeviceObject(v14);
    LOBYTE(v20) = *((_BYTE *)TokenInformation + 76);
    v21 = (IRP *)pIoAllocateIrp(TokenInformation, v20, 0LL, retaddr);
    v22 = v21;
    Irp = v21;
    if ( v21 )
    {
      v21->Tail.Overlay.OriginalFileObject = v14;
      v21->Tail.Overlay.Thread = (PETHREAD)v44;
      v21->RequestorMode = v39;
      v47[0] = 0LL;
      v47[1] = 0LL;
      if ( v38 )
      {
        v21->UserEvent = 0LL;
        v23 = v45;
      }
      else
      {
        v21->UserEvent = v8;
        v23 = (struct _IO_STATUS_BLOCK *)v47;
        v22->Flags = 4;
      }
      v22->UserIosb = v23;
      v22->Overlay.AllocationSize.QuadPart = 0LL;
      v24 = (__int64)&v22->Tail.Overlay.CurrentStackLocation[-1];
      v44 = v24;
      *(_BYTE *)v24 = 11;
      *(_QWORD *)(v24 + 48) = v14;
      v22->AssociatedIrp.MasterIrp = 0LL;
      v22->MdlAddress = 0LL;
      if ( ViVerifierDriverAddedThunkListHead )
      {
        PoolWithQuotaTag = (struct _IRP *)ExAllocatePoolWithTagPriority(
                                            NonPagedPoolNx,
                                            v5,
                                            0x20206F49u,
                                            (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
        if ( !PoolWithQuotaTag )
          RtlRaiseStatus(-1073741670);
      }
      else
      {
        PoolWithQuotaTag = (struct _IRP *)ExAllocatePoolWithQuotaTag(NonPagedPoolNx, v5, 0x20206F49u);
      }
      v22->AssociatedIrp.MasterIrp = PoolWithQuotaTag;
      memmove(PoolWithQuotaTag, FsInformation, v5);
      v26 = v39;
      if ( v39
        && FsInformationClass == FileFsLabelInformation
        && ((v27 = *(_DWORD *)v22->AssociatedIrp.MasterIrp, v27 < 0) || v27 + 4 > (unsigned int)v5) )
      {
        IopExceptionCleanup((char *)v14, v22, 0LL, v8);
        if ( v17 )
          ObfDereferenceObject(v17);
        return -1073741811;
      }
      else
      {
        v22->Flags |= 0x30u;
        v28 = v44;
        *(_DWORD *)(v44 + 8) = v5;
        *(_DWORD *)(v28 + 16) = FsInformationClass;
        v29 = v38;
        v30 = IopSynchronousServiceTail((PDEVICE_OBJECT)TokenInformation, v22, (char *)v14, 0, v26, v38, 2);
        if ( !v29 )
          v30 = IopSynchronousApiServiceTail(v30, v8, v22, v39, (unsigned int *)v47, v45);
        if ( v17 )
        {
          if ( v30 >= 0 )
          {
            NotificationStructure = 2359297;
            v51 = 0LL;
            v52 = -1;
            v50 = GUID_IO_VOLUME_CHANGE;
            IoReportTargetDeviceChange(v17, &NotificationStructure);
          }
          ObfDereferenceObject(v17);
        }
        return v30;
      }
    }
    if ( (*v48 & 2) == 0 )
      ExFreePoolWithTag(v8, 0);
    IopAllocateIrpCleanup(v14, 0LL);
    goto LABEL_71;
  }
  v19 = KeGetCurrentThread();
  --v19->KernelApcDisable;
  if ( !_InterlockedExchange((volatile __int32 *)Object + 29, 1) )
  {
    v14 = (struct _FILE_OBJECT *)Object;
    ObfReferenceObject(Object);
LABEL_29:
    v38 = 1;
    v17 = (struct _DEVICE_OBJECT *)v41;
    goto LABEL_30;
  }
  v34 = KeGetCurrentThread();
  v35 = v34->KernelApcDisable + 1;
  v34->KernelApcDisable = v35;
  if ( !v35
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v34->ApcState.ApcListHead[0].Flink != &v34->152
    && !v34->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  v14 = (struct _FILE_OBJECT *)Object;
  v36 = IopAcquireFileObjectLock((char *)Object, v39, (*(_BYTE *)p_Flags & 4) != 0, &v38);
  if ( !v38 )
    goto LABEL_29;
  ObfDereferenceObject(v14);
  if ( v41 )
    ObfDereferenceObject(v41);
  return v36;
}
