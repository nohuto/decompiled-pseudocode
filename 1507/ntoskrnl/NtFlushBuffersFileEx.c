/*
 * XREFs of NtFlushBuffersFileEx @ 0x140459AD0
 * Callers:
 *     NtFlushBuffersFile @ 0x140459AB4 (NtFlushBuffersFile.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140013F48 (ExAllocatePoolWithTagPriority.c)
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     IoGetRelatedDeviceObject @ 0x140048020 (IoGetRelatedDeviceObject.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     IopSynchronousApiServiceTail @ 0x140457B28 (IopSynchronousApiServiceTail.c)
 *     SeQueryInformationToken @ 0x140481E90 (SeQueryInformationToken.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     IopSynchronousServiceTail @ 0x1404BDDC0 (IopSynchronousServiceTail.c)
 *     PsReferencePrimaryToken @ 0x14050D730 (PsReferencePrimaryToken.c)
 *     IopAcquireFileObjectLock @ 0x140540A5C (IopAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140670E48 (IopAllocateIrpCleanup.c)
 */

NTSTATUS __cdecl NtFlushBuffersFileEx(
        HANDLE FileHandle,
        ULONG Flags,
        PVOID Parameters,
        ULONG ParametersSize,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  char v5; // r12
  char v7; // si
  struct _KTHREAD *CurrentThread; // r13
  KPROCESSOR_MODE PreviousMode; // r14
  _DWORD *v10; // rcx
  int v11; // edi
  _DWORD *v12; // rcx
  _DWORD *v13; // r15
  struct _KTHREAD *v14; // rax
  struct _KEVENT *v15; // rdi
  PDEVICE_OBJECT RelatedDeviceObject; // r15
  __int64 v17; // rdx
  IRP *Irp; // rbx
  PIO_STATUS_BLOCK v19; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  NTSTATUS result; // eax
  struct _KEVENT *PoolWithTagPriority; // rax
  struct _KPROCESS *Process; // rcx
  PACCESS_TOKEN v24; // rbx
  NTSTATUS v25; // ebx
  struct _KTHREAD *v26; // rcx
  __int16 v27; // ax
  PVOID TokenInformation; // [rsp+40h] [rbp-58h] BYREF
  PVOID Object; // [rsp+48h] [rbp-50h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+50h] [rbp-48h] BYREF
  _QWORD v31[3]; // [rsp+58h] [rbp-40h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]
  char v33; // [rsp+B0h] [rbp+18h]

  v5 = Flags;
  v31[0] = 0LL;
  v31[1] = 0LL;
  v7 = 0;
  if ( Parameters || ParametersSize )
    return -1073741811;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v10 = &IoStatusBlock->0;
    if ( (unsigned __int64)IoStatusBlock >= MmUserProbeAddress )
      v10 = (_DWORD *)MmUserProbeAddress;
    *v10 = *v10;
  }
  v11 = ObReferenceObjectByHandle(
          FileHandle,
          0,
          (POBJECT_TYPE)IoFileObjectType,
          PreviousMode,
          &Object,
          &HandleInformation);
  if ( v11 >= 0 )
  {
    v12 = (_DWORD *)*((_QWORD *)Object + 26);
    if ( v12 )
    {
      if ( (*v12 & 4) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        LODWORD(TokenInformation) = 0;
        v24 = PsReferencePrimaryToken(Process);
        SeQueryInformationToken(v24, TokenIsAppContainer, &TokenInformation);
        ObfDereferenceObject(v24);
        if ( (_DWORD)TokenInformation )
        {
          ObfDereferenceObject(Object);
          v11 = -1073739504;
        }
      }
    }
  }
  if ( v11 < 0 )
    return v11;
  v13 = Object;
  if ( ((((unsigned __int8)~*((_BYTE *)Object + 80) >> 5) & 4 | 2) & HandleInformation.GrantedAccess) == 0 )
  {
    v25 = -1073741790;
    goto LABEL_44;
  }
  if ( (*((_DWORD *)Object + 20) & 2) == 0 )
  {
    if ( ViVerifierDriverAddedThunkListHead )
      PoolWithTagPriority = (struct _KEVENT *)ExAllocatePoolWithTagPriority(
                                                NonPagedPoolNx,
                                                0x18uLL,
                                                0x20206F49u,
                                                (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
    else
      PoolWithTagPriority = (struct _KEVENT *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x20206F49u);
    v15 = PoolWithTagPriority;
    if ( PoolWithTagPriority )
    {
      KeInitializeEvent(PoolWithTagPriority, SynchronizationEvent, 0);
      goto LABEL_15;
    }
    v25 = -1073741670;
    goto LABEL_44;
  }
  v14 = KeGetCurrentThread();
  --v14->KernelApcDisable;
  if ( _InterlockedExchange((volatile __int32 *)Object + 29, 1) )
  {
    v26 = KeGetCurrentThread();
    v27 = v26->KernelApcDisable + 1;
    v26->KernelApcDisable = v27;
    if ( !v27
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v26->ApcState.ApcListHead[0].Flink != &v26->152
      && !v26->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    v25 = IopAcquireFileObjectLock(Object);
    if ( !v33 )
      goto LABEL_14;
LABEL_44:
    ObfDereferenceObject(Object);
    return v25;
  }
  ObfReferenceObject(Object);
LABEL_14:
  v7 = 1;
  v15 = 0LL;
LABEL_15:
  if ( (v13[20] & 0x4000000) == 0 )
    KeResetEvent((PRKEVENT)((char *)Object + 152));
  RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)Object);
  LOBYTE(v17) = RelatedDeviceObject->StackSize;
  Irp = (IRP *)pIoAllocateIrp(RelatedDeviceObject, v17, 0LL, retaddr);
  if ( Irp )
  {
    Irp->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)Object;
    Irp->Tail.Overlay.Thread = CurrentThread;
    Irp->RequestorMode = PreviousMode;
    if ( v7 )
    {
      Irp->UserEvent = 0LL;
      v19 = IoStatusBlock;
    }
    else
    {
      Irp->UserEvent = v15;
      v19 = (PIO_STATUS_BLOCK)v31;
      Irp->Flags = 4;
    }
    Irp->UserIosb = v19;
    Irp->Overlay.AllocationSize.QuadPart = 0LL;
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].MajorFunction = 9;
    CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)Object;
    if ( (v5 & 1) != 0 )
    {
      CurrentStackLocation[-1].MinorFunction = 2;
    }
    else if ( (v5 & 2) != 0 )
    {
      CurrentStackLocation[-1].MinorFunction = 3;
    }
    result = IopSynchronousServiceTail(RelatedDeviceObject, Irp, Object, PreviousMode, v7, 2);
    if ( !v7 )
      return IopSynchronousApiServiceTail(result, v15, Irp, PreviousMode, (unsigned int *)v31, IoStatusBlock);
  }
  else
  {
    if ( v15 )
      ExFreePoolWithTag(v15, 0);
    IopAllocateIrpCleanup(Object, 0LL);
    return -1073741670;
  }
  return result;
}
