/*
 * XREFs of IopSetEaOrQuotaInformationFile @ 0x1406728FC
 * Callers:
 *     NtSetQuotaInformationFile @ 0x140676C0C (NtSetQuotaInformationFile.c)
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
 *     sub_1401F8750 @ 0x1401F8750 (sub_1401F8750.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     IopSynchronousApiServiceTail @ 0x140457B28 (IopSynchronousApiServiceTail.c)
 *     SeQueryInformationToken @ 0x140481E90 (SeQueryInformationToken.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     IopSynchronousServiceTail @ 0x1404BDDC0 (IopSynchronousServiceTail.c)
 *     PsReferencePrimaryToken @ 0x14050D730 (PsReferencePrimaryToken.c)
 *     IopAcquireFileObjectLock @ 0x140540A5C (IopAcquireFileObjectLock.c)
 *     IopExceptionCleanup @ 0x14055D264 (IopExceptionCleanup.c)
 *     IopAllocateIrpCleanup @ 0x140670E48 (IopAllocateIrpCleanup.c)
 *     IoCheckQuotaBufferValidity @ 0x140673DA4 (IoCheckQuotaBufferValidity.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall IopSetEaOrQuotaInformationFile(HANDLE Handle, ULONG64 a2, char *a3, unsigned int a4)
{
  SIZE_T v4; // r15
  _OWORD *v6; // r13
  struct _KEVENT *v8; // rsi
  KPROCESSOR_MODE PreviousMode; // r12
  _DWORD *v10; // rcx
  NTSTATUS v11; // edi
  _DWORD *v12; // rcx
  struct _KPROCESS *Process; // rcx
  PACCESS_TOKEN v14; // rbx
  __int64 result; // rax
  _BYTE *v16; // rdi
  struct _KTHREAD *v17; // rax
  struct _KTHREAD *v18; // rcx
  __int16 v19; // ax
  unsigned int v20; // ebx
  struct _KEVENT *PoolWithTagPriority; // rax
  __int64 v22; // rdx
  __int64 Irp; // rax
  IRP *v24; // rbx
  __int64 v25; // r12
  PDEVICE_OBJECT v26; // rdi
  ULONG Flags; // eax
  _FILE_QUOTA_INFORMATION *PoolWithQuotaTag; // rdi
  int v29; // eax
  _DWORD *v30; // rdx
  struct _MDL *Mdl; // rcx
  __int64 v32; // r9
  char v33; // di
  char v34; // r14
  char v35; // [rsp+40h] [rbp-78h] BYREF
  char v36; // [rsp+41h] [rbp-77h]
  PVOID Object; // [rsp+48h] [rbp-70h] BYREF
  unsigned int v38; // [rsp+50h] [rbp-68h]
  PVOID TokenInformation; // [rsp+58h] [rbp-60h] BYREF
  PVOID P; // [rsp+60h] [rbp-58h]
  ULONG ErrorOffset; // [rsp+68h] [rbp-50h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+70h] [rbp-48h]
  _DWORD *v43; // [rsp+78h] [rbp-40h]
  struct _KTHREAD *CurrentThread; // [rsp+80h] [rbp-38h]
  _QWORD v45[3]; // [rsp+88h] [rbp-30h] BYREF
  void *retaddr; // [rsp+B8h] [rbp+0h]
  KPROCESSOR_MODE v48; // [rsp+E0h] [rbp+28h]

  v4 = a4;
  v6 = (_OWORD *)a2;
  v43 = (_DWORD *)a2;
  v8 = 0LL;
  P = 0LL;
  v45[0] = 0LL;
  v45[1] = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v48 = PreviousMode;
  if ( PreviousMode )
  {
    v10 = (_DWORD *)a2;
    if ( a2 >= MmUserProbeAddress )
      v10 = (_DWORD *)MmUserProbeAddress;
    *v10 = *v10;
    if ( a4 )
    {
      if ( ((unsigned __int8)a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&a3[a4] > MmUserProbeAddress || &a3[a4] < a3 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
  }
  v11 = ObReferenceObjectByHandle(Handle, 2u, (POBJECT_TYPE)IoFileObjectType, PreviousMode, &Object, 0LL);
  if ( v11 >= 0 )
  {
    v12 = (_DWORD *)*((_QWORD *)Object + 26);
    if ( v12 )
    {
      if ( (*v12 & 4) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        LODWORD(TokenInformation) = 0;
        v14 = PsReferencePrimaryToken(Process);
        SeQueryInformationToken(v14, TokenIsAppContainer, &TokenInformation);
        ObfDereferenceObject(v14);
        if ( (_DWORD)TokenInformation )
        {
          ObfDereferenceObject(Object);
          v11 = -1073739504;
        }
      }
    }
  }
  v38 = v11;
  if ( v11 < 0 )
    return (unsigned int)v11;
  v16 = Object;
  if ( (*((_DWORD *)Object + 20) & 2) != 0 )
  {
    v17 = KeGetCurrentThread();
    --v17->KernelApcDisable;
    if ( !_InterlockedExchange((volatile __int32 *)Object + 29, 1) )
    {
      ObfReferenceObject(Object);
LABEL_25:
      v35 = 1;
      goto LABEL_33;
    }
    v18 = KeGetCurrentThread();
    v19 = v18->KernelApcDisable + 1;
    v18->KernelApcDisable = v19;
    if ( !v19
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v18->ApcState.ApcListHead[0].Flink != &v18->152
      && !v18->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    v20 = IopAcquireFileObjectLock((char *)Object, PreviousMode, (v16[80] & 4) != 0, &v35);
    v38 = v20;
    if ( !v35 )
      goto LABEL_25;
LABEL_31:
    ObfDereferenceObject(Object);
    return v20;
  }
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
    v20 = -1073741670;
    goto LABEL_31;
  }
  KeInitializeEvent(PoolWithTagPriority, SynchronizationEvent, 0);
  v35 = 0;
LABEL_33:
  if ( (*((_DWORD *)v16 + 20) & 0x4000000) == 0 )
    KeResetEvent((PRKEVENT)((char *)Object + 152));
  DeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)Object);
  LOBYTE(v22) = DeviceObject->StackSize;
  Irp = pIoAllocateIrp(DeviceObject, v22, 0LL, retaddr);
  v24 = (IRP *)Irp;
  TokenInformation = (PVOID)Irp;
  if ( !Irp )
  {
    if ( (*((_DWORD *)v16 + 20) & 2) == 0 )
      ExFreePoolWithTag(v8, 0);
    IopAllocateIrpCleanup((char *)Object, 0LL);
    return 3221225626LL;
  }
  *(_QWORD *)(Irp + 192) = Object;
  *(_QWORD *)(Irp + 152) = CurrentThread;
  *(_BYTE *)(Irp + 64) = PreviousMode;
  if ( v35 )
  {
    *(_QWORD *)(Irp + 80) = 0LL;
    *(_QWORD *)(Irp + 72) = v6;
    *(_BYTE *)(Irp + 71) |= 2u;
  }
  else
  {
    *(_QWORD *)(Irp + 80) = v8;
    *(_QWORD *)(Irp + 72) = v45;
    *(_DWORD *)(Irp + 16) = 4;
  }
  *(_QWORD *)(Irp + 88) = 0LL;
  v25 = *(_QWORD *)(Irp + 184);
  *(_BYTE *)(v25 - 72) = 26;
  *(_QWORD *)(v25 - 24) = Object;
  v26 = DeviceObject;
  Flags = DeviceObject->Flags;
  if ( (Flags & 4) != 0 )
  {
    if ( (_DWORD)v4 )
    {
      v36 = 0;
      if ( ViVerifierDriverAddedThunkListHead )
      {
        PoolWithQuotaTag = (_FILE_QUOTA_INFORMATION *)ExAllocatePoolWithTagPriority(
                                                        NonPagedPoolNx,
                                                        v4,
                                                        0x20206F49u,
                                                        (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
        if ( !PoolWithQuotaTag )
          RtlRaiseStatus(-1073741670);
      }
      else
      {
        PoolWithQuotaTag = (_FILE_QUOTA_INFORMATION *)ExAllocatePoolWithQuotaTag(NonPagedPoolNx, v4, 0x20206F49u);
      }
      v24->AssociatedIrp.MasterIrp = (struct _IRP *)PoolWithQuotaTag;
      memmove(PoolWithQuotaTag, a3, v4);
      v29 = IoCheckQuotaBufferValidity(PoolWithQuotaTag, v4, &ErrorOffset);
      v38 = v29;
      if ( v29 < 0 )
      {
        v36 = 1;
        v30 = v43;
        *v43 = v29;
        *((_QWORD *)v30 + 1) = ErrorOffset;
        RtlRaiseStatus(v29);
      }
      v24->Flags |= 0x30u;
      v6 = v43;
      goto LABEL_58;
    }
    v24->AssociatedIrp.MasterIrp = 0LL;
    goto LABEL_57;
  }
  if ( (Flags & 0x10) == 0 )
  {
LABEL_57:
    v24->UserBuffer = a3;
    goto LABEL_58;
  }
  if ( (_DWORD)v4 )
  {
    Mdl = IoAllocateMdl(a3, v4, 0, 1u, v24);
    if ( !Mdl )
      RtlRaiseStatus(-1073741670);
    v32 = (__int64)v26;
    v33 = v48;
    sub_1401F8750(Mdl, v48, IoReadAccess, v32, *(unsigned __int8 *)(v25 - 72));
    goto LABEL_59;
  }
LABEL_58:
  v33 = v48;
LABEL_59:
  *(_DWORD *)(v25 - 64) = v4;
  v34 = v35;
  result = IopSynchronousServiceTail(DeviceObject, v24, (char *)Object, 0, v33, v35, 2);
  if ( !v34 )
    return IopSynchronousApiServiceTail(result, v8, v24, v33, (unsigned int *)v45, v6);
  return result;
}
