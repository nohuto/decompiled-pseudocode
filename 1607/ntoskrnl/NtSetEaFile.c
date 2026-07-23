/*
 * XREFs of NtSetEaFile @ 0x140625290
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     IoGetRelatedDeviceObject @ 0x14002DC60 (IoGetRelatedDeviceObject.c)
 *     IopResetEvent @ 0x14002E140 (IopResetEvent.c)
 *     IoAllocateMdl @ 0x14002EB10 (IoAllocateMdl.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     IopVerifierExAllocatePoolWithQuota @ 0x140079FA0 (IopVerifierExAllocatePoolWithQuota.c)
 *     IopReferenceFileObject @ 0x14007B6B0 (IopReferenceFileObject.c)
 *     IopAcquireFastLock @ 0x14007BB34 (IopAcquireFastLock.c)
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     IopProbeAndLockPages_1 @ 0x1401CAC84 (IopProbeAndLockPages_1.c)
 *     IopVerifierExAllocatePool_2 @ 0x1401CACC8 (IopVerifierExAllocatePool_2.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     IopAcquireFileObjectLock @ 0x1403EE090 (IopAcquireFileObjectLock.c)
 *     IopSynchronousServiceTail @ 0x140444680 (IopSynchronousServiceTail.c)
 *     IoCheckEaBufferValidity @ 0x14045B42C (IoCheckEaBufferValidity.c)
 *     IopSynchronousApiServiceTail @ 0x1404AF418 (IopSynchronousApiServiceTail.c)
 *     IopAllocateIrpCleanup @ 0x140620E74 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x140621488 (IopExceptionCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetEaFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock, PVOID EaBuffer, ULONG EaBufferSize)
{
  SIZE_T v4; // rdi
  struct _KEVENT *v8; // r15
  KPROCESSOR_MODE PreviousMode; // bl
  __int64 v10; // rcx
  NTSTATUS result; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  char *v15; // r14
  NTSTATUS v16; // ebx
  struct _KEVENT *Pool_2; // rax
  __int64 v18; // rdx
  IRP *v19; // rax
  IRP *Irp; // rsi
  struct _KTHREAD *v21; // rbx
  ULONG Flags; // eax
  size_t v23; // rbx
  _FILE_FULL_EA_INFORMATION *PoolWithQuota; // rdi
  int v25; // eax
  struct _MDL *Mdl; // rcx
  char v27; // r12
  char v28; // bl
  KPROCESSOR_MODE v29; // [rsp+40h] [rbp-78h]
  char v30; // [rsp+41h] [rbp-77h] BYREF
  char v31; // [rsp+42h] [rbp-76h]
  NTSTATUS v32; // [rsp+44h] [rbp-74h]
  ULONG ErrorOffset; // [rsp+48h] [rbp-70h] BYREF
  PVOID P; // [rsp+50h] [rbp-68h]
  PVOID Object; // [rsp+58h] [rbp-60h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp-50h]
  PIRP v38; // [rsp+70h] [rbp-48h]
  _QWORD v39[3]; // [rsp+78h] [rbp-40h] BYREF
  void *retaddr; // [rsp+B8h] [rbp+0h]

  v4 = EaBufferSize;
  v8 = 0LL;
  P = 0LL;
  v39[0] = 0LL;
  v39[1] = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v29 = PreviousMode;
  if ( PreviousMode )
  {
    v10 = (__int64)IoStatusBlock;
    if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
      v10 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v10 = *(_DWORD *)v10;
    if ( EaBufferSize )
    {
      if ( ((unsigned __int8)EaBuffer & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)EaBuffer + EaBufferSize > 0x7FFFFFFF0000LL || (char *)EaBuffer + EaBufferSize < EaBuffer )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  result = IopReferenceFileObject(FileHandle, 0x10u, PreviousMode, &Object, 0LL);
  v32 = result;
  if ( result >= 0 )
  {
    v15 = (char *)Object;
    if ( (*((_DWORD *)Object + 20) & 2) != 0 )
    {
      if ( IopAcquireFastLock((volatile __int32 *)Object, v12, v13, v14) )
      {
LABEL_15:
        v30 = 1;
        goto LABEL_20;
      }
      v16 = IopAcquireFileObjectLock(v15, PreviousMode, (v15[80] & 4) != 0, &v30);
      v32 = v16;
      if ( !v30 )
      {
        PreviousMode = v29;
        goto LABEL_15;
      }
    }
    else
    {
      Pool_2 = (struct _KEVENT *)IopVerifierExAllocatePool_2();
      v8 = Pool_2;
      P = Pool_2;
      if ( Pool_2 )
      {
        KeInitializeEvent(Pool_2, SynchronizationEvent, 0);
        v30 = 0;
LABEL_20:
        IopResetEvent((__int64)v15);
        DeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)v15);
        LOBYTE(v18) = DeviceObject->StackSize;
        v19 = (IRP *)pIoAllocateIrp(DeviceObject, v18, 0LL, retaddr);
        Irp = v19;
        v38 = v19;
        if ( !v19 )
        {
          if ( (*((_DWORD *)v15 + 20) & 2) == 0 )
            ExFreePoolWithTag(v8, 0);
          IopAllocateIrpCleanup(v15, 0LL);
          return -1073741670;
        }
        v19->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)v15;
        v19->Tail.Overlay.Thread = CurrentThread;
        v19->RequestorMode = PreviousMode;
        if ( v30 )
        {
          v19->UserEvent = 0LL;
          v19->UserIosb = IoStatusBlock;
        }
        else
        {
          v19->UserEvent = v8;
          v19->UserIosb = (PIO_STATUS_BLOCK)v39;
          v19->Flags = 4;
        }
        v19->Overlay.AllocationSize.QuadPart = 0LL;
        v21 = (struct _KTHREAD *)&v19->Tail.Overlay.CurrentStackLocation[-1];
        CurrentThread = v21;
        v21->Header.Type = 8;
        v21->StackLimit = v15;
        Flags = DeviceObject->Flags;
        if ( (Flags & 4) != 0 )
        {
          if ( (_DWORD)v4 )
          {
            v31 = 0;
            v23 = v4;
            PoolWithQuota = (_FILE_FULL_EA_INFORMATION *)IopVerifierExAllocatePoolWithQuota(0LL, v4);
            Irp->AssociatedIrp.MasterIrp = (struct _IRP *)PoolWithQuota;
            memmove(PoolWithQuota, EaBuffer, v23);
            v25 = IoCheckEaBufferValidity(PoolWithQuota, EaBufferSize, &ErrorOffset);
            v32 = v25;
            if ( v25 < 0 )
            {
              v31 = 1;
              IoStatusBlock->Status = v25;
              IoStatusBlock->Information = ErrorOffset;
              RtlRaiseStatus(v25);
            }
            Irp->Flags |= 0x30u;
            v21 = CurrentThread;
            LODWORD(v4) = EaBufferSize;
          }
          else
          {
            Irp->AssociatedIrp.MasterIrp = 0LL;
          }
        }
        else if ( (Flags & 0x10) != 0 )
        {
          if ( (_DWORD)v4 )
          {
            Mdl = IoAllocateMdl(EaBuffer, v4, 0, 1u, Irp);
            if ( !Mdl )
              RtlRaiseStatus(-1073741670);
            v27 = v29;
            IopProbeAndLockPages_1(Mdl, v29, IoReadAccess, (__int64)DeviceObject, v21->Header.Type);
            goto LABEL_40;
          }
        }
        else
        {
          Irp->UserBuffer = EaBuffer;
        }
        v27 = v29;
LABEL_40:
        LODWORD(v21->Header.WaitListHead.Flink) = v4;
        v28 = v30;
        result = IopSynchronousServiceTail(DeviceObject, Irp, (__int64)v15, 0, v27, v30, 2u);
        if ( !v28 )
          return IopSynchronousApiServiceTail(result, v8, Irp, v27, (unsigned int *)v39, IoStatusBlock);
        return result;
      }
      v16 = -1073741670;
    }
    ObfDereferenceObject(v15);
    return v16;
  }
  return result;
}
