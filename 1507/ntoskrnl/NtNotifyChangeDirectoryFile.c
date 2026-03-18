/*
 * XREFs of NtNotifyChangeDirectoryFile @ 0x14053E7A0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140013F48 (ExAllocatePoolWithTagPriority.c)
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     IoAllocateMdl @ 0x140033BF0 (IoAllocateMdl.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140045B50 (ExAllocatePoolWithQuotaTag.c)
 *     IoGetRelatedDeviceObject @ 0x140048020 (IoGetRelatedDeviceObject.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     memset @ 0x140195A80 (memset.c)
 *     sub_1401F8708 @ 0x1401F8708 (sub_1401F8708.c)
 *     SeQueryInformationToken @ 0x140481E90 (SeQueryInformationToken.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     IopSynchronousServiceTail @ 0x1404BDDC0 (IopSynchronousServiceTail.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     PsReferencePrimaryToken @ 0x14050D730 (PsReferencePrimaryToken.c)
 *     IopAcquireFileObjectLock @ 0x140540A5C (IopAcquireFileObjectLock.c)
 *     IopExceptionCleanup @ 0x14055D264 (IopExceptionCleanup.c)
 *     IopAllocateIrpCleanup @ 0x140670E48 (IopAllocateIrpCleanup.c)
 */

NTSTATUS __stdcall NtNotifyChangeDirectoryFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG BufferSize,
        ULONG CompletionFilter,
        BOOLEAN WatchTree)
{
  KPROCESSOR_MODE PreviousMode; // r12
  _DWORD *v12; // rdx
  ULONG v13; // r15d
  int v15; // edi
  struct _FILE_OBJECT *v16; // rbx
  _DWORD *v17; // rax
  struct _KPROCESS *Process; // rcx
  PACCESS_TOKEN v19; // rbx
  ULONG *p_Flags; // rsi
  struct _KTHREAD *v21; // rax
  struct _KTHREAD *v22; // rcx
  __int16 v23; // ax
  char v24; // r14
  ULONG64 Status; // rcx
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 Irp; // rax
  IRP *v30; // rdi
  __int64 v31; // rsi
  ULONG Flags; // eax
  struct _IRP *PoolWithTagPriority; // rcx
  struct _MDL *Mdl; // rcx
  __int64 v35; // r8
  char v36; // [rsp+40h] [rbp-68h]
  char v37; // [rsp+41h] [rbp-67h]
  PVOID Object; // [rsp+48h] [rbp-60h] BYREF
  PVOID v39; // [rsp+50h] [rbp-58h]
  PVOID TokenInformation; // [rsp+58h] [rbp-50h] BYREF
  PVOID v41; // [rsp+60h] [rbp-48h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp-40h]
  PVOID v43; // [rsp+70h] [rbp-38h]
  void *retaddr; // [rsp+A8h] [rbp+0h]

  v39 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v12 = &IoStatusBlock->0;
    if ( (unsigned __int64)IoStatusBlock >= MmUserProbeAddress )
      v12 = (_DWORD *)MmUserProbeAddress;
    *v12 = *v12;
    v13 = BufferSize;
    if ( BufferSize )
      ProbeForWrite(Buffer, BufferSize, 4u);
    if ( (CompletionFilter & 0xFFFFF000) != 0 || !CompletionFilter )
      return -1073741811;
  }
  else
  {
    v13 = BufferSize;
  }
  v15 = ObReferenceObjectByHandle(FileHandle, 1u, (POBJECT_TYPE)IoFileObjectType, PreviousMode, &Object, 0LL);
  v16 = (struct _FILE_OBJECT *)Object;
  v43 = Object;
  if ( v15 >= 0 )
  {
    v17 = (_DWORD *)*((_QWORD *)Object + 26);
    if ( v17 )
    {
      if ( (*v17 & 4) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        LODWORD(TokenInformation) = 0;
        v19 = PsReferencePrimaryToken(Process);
        SeQueryInformationToken(v19, TokenIsAppContainer, &TokenInformation);
        ObfDereferenceObject(v19);
        v16 = (struct _FILE_OBJECT *)Object;
        if ( (_DWORD)TokenInformation )
        {
          ObfDereferenceObject(Object);
          v15 = -1073739504;
        }
      }
    }
  }
  if ( v15 < 0 )
    return v15;
  if ( v16->CompletionContext && ((unsigned __int64)ApcRoutine & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    v15 = -1073741811;
LABEL_33:
    ObfDereferenceObject(v16);
    return v15;
  }
  if ( Event )
  {
    v15 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v41, 0LL);
    v39 = v41;
    if ( v15 < 0 )
      goto LABEL_33;
    KeResetEvent((PRKEVENT)v41);
  }
  p_Flags = &v16->Flags;
  if ( (v16->Flags & 2) != 0 )
  {
    v21 = KeGetCurrentThread();
    --v21->KernelApcDisable;
    if ( _InterlockedExchange((volatile __int32 *)Object + 29, 1) )
    {
      v22 = KeGetCurrentThread();
      v23 = v22->KernelApcDisable + 1;
      v22->KernelApcDisable = v23;
      if ( !v23
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v22->ApcState.ApcListHead[0].Flink != &v22->152
        && !v22->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      v16 = (struct _FILE_OBJECT *)Object;
      v15 = IopAcquireFileObjectLock(Object);
      if ( v37 )
      {
        if ( v39 )
          ObfDereferenceObject(v39);
        goto LABEL_33;
      }
    }
    else
    {
      v16 = (struct _FILE_OBJECT *)Object;
      ObfReferenceObject(Object);
    }
    v24 = 1;
    v36 = 1;
  }
  else
  {
    v24 = 0;
    v36 = 0;
    if ( PreviousMode )
    {
      if ( KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7] )
      {
        ApcRoutine = (PIO_APC_ROUTINE)((unsigned __int64)ApcRoutine | 1);
        Status = (unsigned int)IoStatusBlock->Status;
        IoStatusBlock = (PIO_STATUS_BLOCK)Status;
        if ( Status >= MmUserProbeAddress )
          Status = MmUserProbeAddress;
        *(_DWORD *)Status = *(_DWORD *)Status;
      }
      v16 = (struct _FILE_OBJECT *)Object;
    }
  }
  if ( (*p_Flags & 0x4000000) == 0 )
    KeResetEvent(&v16->Event);
  RelatedDeviceObject = IoGetRelatedDeviceObject(v16);
  LOBYTE(v27) = v24 == 0;
  LOBYTE(v28) = RelatedDeviceObject->StackSize;
  Irp = pIoAllocateIrp(RelatedDeviceObject, v28, v27, retaddr);
  v30 = (IRP *)Irp;
  TokenInformation = (PVOID)Irp;
  if ( !Irp )
  {
    IopAllocateIrpCleanup(v16, v39);
    return -1073741670;
  }
  *(_QWORD *)(Irp + 192) = v16;
  *(_QWORD *)(Irp + 152) = CurrentThread;
  *(_BYTE *)(Irp + 64) = PreviousMode;
  *(_QWORD *)(Irp + 80) = v39;
  *(_QWORD *)(Irp + 72) = IoStatusBlock;
  *(_QWORD *)(Irp + 88) = ApcRoutine;
  *(_QWORD *)(Irp + 96) = ApcContext;
  v31 = *(_QWORD *)(Irp + 184);
  *(_WORD *)(v31 - 72) = 524;
  *(_QWORD *)(v31 - 24) = v16;
  if ( v13 )
  {
    Flags = RelatedDeviceObject->Flags;
    if ( (Flags & 4) != 0 )
    {
      if ( ViVerifierDriverAddedThunkListHead )
      {
        PoolWithTagPriority = (struct _IRP *)ExAllocatePoolWithTagPriority(
                                               NonPagedPoolNx,
                                               v13,
                                               0x20206F49u,
                                               (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
        if ( !PoolWithTagPriority )
          RtlRaiseStatus(-1073741670);
      }
      else
      {
        PoolWithTagPriority = (struct _IRP *)ExAllocatePoolWithQuotaTag(NonPagedPoolNx, v13, 0x20206F49u);
      }
      v30->AssociatedIrp.MasterIrp = PoolWithTagPriority;
      if ( !IopDisableBufferedIoInit )
        memset(PoolWithTagPriority, 0, v13);
      v30->Flags = 112;
      v24 = v36;
    }
    else if ( (Flags & 0x10) != 0 )
    {
      Mdl = IoAllocateMdl(Buffer, v13, 0, 1u, v30);
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      sub_1401F8708(Mdl, PreviousMode, v35, (__int64)RelatedDeviceObject, *(unsigned __int8 *)(v31 - 72));
      goto LABEL_59;
    }
    v30->UserBuffer = Buffer;
  }
LABEL_59:
  *(_DWORD *)(v31 - 64) = v13;
  *(_DWORD *)(v31 - 56) = CompletionFilter;
  if ( WatchTree )
    *(_BYTE *)(v31 - 70) = 1;
  return IopSynchronousServiceTail(RelatedDeviceObject, v30, (char *)v16, 0, PreviousMode, v24, 2);
}
