/*
 * XREFs of IopSetEaOrQuotaInformationFile @ 0x1406227EC
 * Callers:
 *     NtSetQuotaInformationFile @ 0x140625F20 (NtSetQuotaInformationFile.c)
 * Callees:
 *     KeInitializeEvent @ 0x14002DEA0 (KeInitializeEvent.c)
 *     IoGetRelatedDeviceObject @ 0x14002E0E0 (IoGetRelatedDeviceObject.c)
 *     IopResetEvent @ 0x14002E5C0 (IopResetEvent.c)
 *     IoAllocateMdl @ 0x14002EF90 (IoAllocateMdl.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     IopReferenceFileObject @ 0x14007B630 (IopReferenceFileObject.c)
 *     IopAcquireFastLock @ 0x14007BAB4 (IopAcquireFastLock.c)
 *     ExAllocatePoolWithTagPriority @ 0x14007E210 (ExAllocatePoolWithTagPriority.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x14009AB34 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     RtlRaiseStatus @ 0x1400F6738 (RtlRaiseStatus.c)
 *     memmove @ 0x140171280 (memmove.c)
 *     IopProbeAndLockPages_0 @ 0x1401C5358 (IopProbeAndLockPages_0.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     IopAcquireFileObjectLock @ 0x1403ECA60 (IopAcquireFileObjectLock.c)
 *     IopSynchronousServiceTail @ 0x1404457B0 (IopSynchronousServiceTail.c)
 *     IopSynchronousApiServiceTail @ 0x1404C9698 (IopSynchronousApiServiceTail.c)
 *     IopAllocateIrpCleanup @ 0x140620DC0 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x1406213D4 (IopExceptionCleanup.c)
 *     IoCheckQuotaBufferValidity @ 0x140623490 (IoCheckQuotaBufferValidity.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6058 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall IopSetEaOrQuotaInformationFile(void *a1, unsigned __int64 a2, char *a3, ULONG a4)
{
  SIZE_T v4; // rbx
  struct _IO_STATUS_BLOCK *v6; // rdi
  struct _KEVENT *v8; // r15
  KPROCESSOR_MODE PreviousMode; // r13
  __int64 v10; // rcx
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  char *v15; // r14
  unsigned int v16; // ebx
  struct _KEVENT *PoolWithTagPriority; // rax
  __int64 v18; // rdx
  IRP *v19; // rax
  IRP *Irp; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  ULONG Flags; // eax
  struct _FILE_QUOTA_INFORMATION *PoolWithQuota_0; // rdi
  int v24; // eax
  struct _IO_STATUS_BLOCK *v25; // rdx
  struct _MDL *Mdl; // rcx
  char v27; // r12
  char v28; // bl
  char v29; // [rsp+40h] [rbp-78h] BYREF
  char v30; // [rsp+41h] [rbp-77h]
  int v31; // [rsp+44h] [rbp-74h]
  PVOID P; // [rsp+48h] [rbp-70h]
  ULONG ErrorOffset; // [rsp+50h] [rbp-68h] BYREF
  PVOID Object; // [rsp+58h] [rbp-60h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp-58h]
  struct _IO_STATUS_BLOCK *v36; // [rsp+68h] [rbp-50h]
  PIRP v37; // [rsp+70h] [rbp-48h]
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp-40h]
  _QWORD v39[2]; // [rsp+80h] [rbp-38h] BYREF
  void *retaddr; // [rsp+B8h] [rbp+0h]
  KPROCESSOR_MODE v42; // [rsp+E0h] [rbp+28h]

  v4 = a4;
  v6 = (struct _IO_STATUS_BLOCK *)a2;
  v36 = (struct _IO_STATUS_BLOCK *)a2;
  v8 = 0LL;
  P = 0LL;
  v39[0] = 0LL;
  v39[1] = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v42 = PreviousMode;
  if ( PreviousMode )
  {
    v10 = a2;
    if ( a2 >= 0x7FFFFFFF0000LL )
      v10 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v10 = *(_DWORD *)v10;
    if ( a4 )
    {
      if ( ((unsigned __int8)a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&a3[a4] > 0x7FFFFFFF0000LL || &a3[a4] < a3 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  result = IopReferenceFileObject(a1, 2u, PreviousMode, &Object, 0LL);
  v31 = result;
  if ( (int)result >= 0 )
  {
    v15 = (char *)Object;
    if ( (*((_DWORD *)Object + 20) & 2) != 0 )
    {
      if ( IopAcquireFastLock((volatile __int32 *)Object, v12, v13, v14) )
      {
LABEL_15:
        v29 = 1;
        goto LABEL_23;
      }
      v16 = IopAcquireFileObjectLock(v15, PreviousMode, (v15[80] & 4) != 0, &v29);
      v31 = v16;
      if ( !v29 )
      {
        v4 = a4;
        goto LABEL_15;
      }
    }
    else
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
      if ( PoolWithTagPriority )
      {
        KeInitializeEvent(PoolWithTagPriority, SynchronizationEvent, 0);
        v29 = 0;
LABEL_23:
        IopResetEvent((__int64)v15);
        DeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)v15);
        LOBYTE(v18) = DeviceObject->StackSize;
        v19 = (IRP *)pIoAllocateIrp(DeviceObject, v18, 0LL, retaddr);
        Irp = v19;
        v37 = v19;
        if ( !v19 )
        {
          if ( (*((_DWORD *)v15 + 20) & 2) == 0 )
            ExFreePoolWithTag(v8, 0);
          IopAllocateIrpCleanup(v15, 0LL);
          return 3221225626LL;
        }
        v19->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)v15;
        v19->Tail.Overlay.Thread = CurrentThread;
        v19->RequestorMode = PreviousMode;
        if ( v29 )
        {
          v19->UserEvent = 0LL;
          v19->UserIosb = v6;
          v19->AllocationFlags |= 2u;
        }
        else
        {
          v19->UserEvent = v8;
          v19->UserIosb = (PIO_STATUS_BLOCK)v39;
          v19->Flags = 4;
        }
        v19->Overlay.AllocationSize.QuadPart = 0LL;
        CurrentStackLocation = v19->Tail.Overlay.CurrentStackLocation;
        CurrentStackLocation[-1].MajorFunction = 26;
        CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v15;
        Flags = DeviceObject->Flags;
        if ( (Flags & 4) != 0 )
        {
          if ( (_DWORD)v4 )
          {
            v30 = 0;
            PoolWithQuota_0 = (struct _FILE_QUOTA_INFORMATION *)IopVerifierExAllocatePoolWithQuota_0(NonPagedPoolNx, v4);
            Irp->AssociatedIrp.MasterIrp = (struct _IRP *)PoolWithQuota_0;
            memmove(PoolWithQuota_0, a3, v4);
            LODWORD(v4) = a4;
            v24 = IoCheckQuotaBufferValidity(PoolWithQuota_0, a4, &ErrorOffset);
            v31 = v24;
            if ( v24 < 0 )
            {
              v30 = 1;
              v25 = v36;
              v36->Status = v24;
              v25->Information = ErrorOffset;
              RtlRaiseStatus(v24);
            }
            Irp->Flags |= 0x30u;
            v6 = v36;
            goto LABEL_42;
          }
          Irp->AssociatedIrp.MasterIrp = 0LL;
        }
        else if ( (Flags & 0x10) != 0 )
        {
          if ( (_DWORD)v4 )
          {
            Mdl = IoAllocateMdl(a3, v4, 0, 1u, Irp);
            if ( !Mdl )
              RtlRaiseStatus(-1073741670);
            v27 = v42;
            IopProbeAndLockPages_0(
              Mdl,
              v42,
              IoReadAccess,
              (__int64)DeviceObject,
              CurrentStackLocation[-1].MajorFunction);
            goto LABEL_43;
          }
LABEL_42:
          v27 = v42;
LABEL_43:
          CurrentStackLocation[-1].Parameters.Read.Length = v4;
          v28 = v29;
          result = IopSynchronousServiceTail(DeviceObject, Irp, (__int64)v15, 0, v27, v29, 2u);
          if ( !v28 )
            return IopSynchronousApiServiceTail(result, v8, Irp, v27, (unsigned int *)v39, v6);
          return result;
        }
        Irp->UserBuffer = a3;
        goto LABEL_42;
      }
      v16 = -1073741670;
    }
    ObfDereferenceObject(v15);
    return v16;
  }
  return result;
}
