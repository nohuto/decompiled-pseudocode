/*
 * XREFs of NtNotifyChangeDirectoryFile @ 0x1404B87E8
 * Callers:
 *     <none>
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x14002DC60 (IoGetRelatedDeviceObject.c)
 *     IopResetEvent @ 0x14002E140 (IopResetEvent.c)
 *     KeResetEvent @ 0x14002E1B0 (KeResetEvent.c)
 *     IoAllocateMdl @ 0x14002EB10 (IoAllocateMdl.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     IopVerifierExAllocatePoolWithQuota @ 0x140079FA0 (IopVerifierExAllocatePoolWithQuota.c)
 *     IopReferenceFileObject @ 0x14007B6B0 (IopReferenceFileObject.c)
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     IopProbeAndLockPages_0 @ 0x1401CAC3C (IopProbeAndLockPages_0.c)
 *     IopAcquireFastLock_1 @ 0x1401CAD48 (IopAcquireFastLock_1.c)
 *     IopAcquireFileObjectLock @ 0x1403EE090 (IopAcquireFileObjectLock.c)
 *     IopSynchronousServiceTail @ 0x140444680 (IopSynchronousServiceTail.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     IopAllocateIrpCleanup @ 0x140620E74 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x140621488 (IopExceptionCleanup.c)
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
  KPROCESSOR_MODE PreviousMode; // r14
  __int64 v12; // rdx
  ULONG v13; // r12d
  NTSTATUS result; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  struct _FILE_OBJECT *v18; // rdi
  NTSTATUS v19; // ebx
  char v20; // r15
  struct _IO_STATUS_BLOCK *Status; // rcx
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 Irp; // rax
  __int64 v26; // rcx
  IRP *v27; // rbx
  __int64 v28; // rsi
  ULONG Flags; // eax
  struct _IRP *PoolWithQuota; // rcx
  struct _MDL *Mdl; // rcx
  __int64 v32; // r8
  char v33; // [rsp+40h] [rbp-58h]
  _BYTE v34[7]; // [rsp+41h] [rbp-57h] BYREF
  PVOID v35; // [rsp+48h] [rbp-50h]
  PVOID v36; // [rsp+50h] [rbp-48h] BYREF
  PVOID Object; // [rsp+58h] [rbp-40h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-38h]
  void *retaddr; // [rsp+98h] [rbp+0h]

  v35 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v12 = (__int64)IoStatusBlock;
    if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
      v12 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v12 = *(_DWORD *)v12;
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
  result = IopReferenceFileObject(FileHandle, 1u, PreviousMode, &v36, 0LL);
  if ( result >= 0 )
  {
    v18 = (struct _FILE_OBJECT *)v36;
    if ( *((_QWORD *)v36 + 22) && ((unsigned __int64)ApcRoutine & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      v19 = -1073741811;
LABEL_22:
      ObfDereferenceObject(v18);
      return v19;
    }
    if ( Event )
    {
      v19 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
      v35 = Object;
      if ( v19 < 0 )
        goto LABEL_22;
      KeResetEvent((PRKEVENT)Object);
    }
    if ( (v18->Flags & 2) != 0 )
    {
      if ( !IopAcquireFastLock_1((volatile __int32 *)&v18->Type, v15, v16, v17) )
      {
        v19 = IopAcquireFileObjectLock((char *)v18, PreviousMode, (v18->Flags & 4) != 0, v34);
        if ( v34[0] )
        {
          if ( v35 )
            ObfDereferenceObject(v35);
          goto LABEL_22;
        }
      }
      v20 = 1;
      v33 = 1;
    }
    else
    {
      v20 = 0;
      v33 = 0;
      if ( PreviousMode )
      {
        if ( KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7] )
        {
          ApcRoutine = (PIO_APC_ROUTINE)((unsigned __int64)ApcRoutine | 1);
          Status = (struct _IO_STATUS_BLOCK *)(unsigned int)IoStatusBlock->Status;
          IoStatusBlock = Status;
          Status->Status = Status->Status;
        }
        v18 = (struct _FILE_OBJECT *)v36;
      }
    }
    IopResetEvent((__int64)v18);
    RelatedDeviceObject = IoGetRelatedDeviceObject(v18);
    LOBYTE(v23) = v20 == 0;
    LOBYTE(v24) = RelatedDeviceObject->StackSize;
    Irp = pIoAllocateIrp(RelatedDeviceObject, v24, v23, retaddr);
    v27 = (IRP *)Irp;
    Object = (PVOID)Irp;
    if ( !Irp )
    {
      IopAllocateIrpCleanup(v18, v35);
      return -1073741670;
    }
    *(_QWORD *)(Irp + 192) = v18;
    *(_QWORD *)(Irp + 152) = CurrentThread;
    *(_BYTE *)(Irp + 64) = PreviousMode;
    *(_QWORD *)(Irp + 80) = v35;
    *(_QWORD *)(Irp + 72) = IoStatusBlock;
    *(_QWORD *)(Irp + 88) = ApcRoutine;
    *(_QWORD *)(Irp + 96) = ApcContext;
    v28 = *(_QWORD *)(Irp + 184);
    *(_WORD *)(v28 - 72) = 524;
    *(_QWORD *)(v28 - 24) = v18;
    if ( !v13 )
      goto LABEL_40;
    Flags = RelatedDeviceObject->Flags;
    if ( (Flags & 4) != 0 )
    {
      PoolWithQuota = (struct _IRP *)IopVerifierExAllocatePoolWithQuota(v26, v13);
      v27->AssociatedIrp.MasterIrp = PoolWithQuota;
      if ( !IopDisableBufferedIoInit )
        memset(PoolWithQuota, 0, v13);
      v27->Flags = 112;
      v20 = v33;
    }
    else if ( (Flags & 0x10) != 0 )
    {
      Mdl = IoAllocateMdl(Buffer, v13, 0, 1u, v27);
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      IopProbeAndLockPages_0(Mdl, PreviousMode, v32, (__int64)RelatedDeviceObject, *(unsigned __int8 *)(v28 - 72));
      goto LABEL_40;
    }
    v27->UserBuffer = Buffer;
LABEL_40:
    *(_DWORD *)(v28 - 64) = v13;
    *(_DWORD *)(v28 - 56) = CompletionFilter;
    if ( WatchTree )
      *(_BYTE *)(v28 - 70) = 1;
    return IopSynchronousServiceTail(RelatedDeviceObject, v27, (__int64)v18, 0, PreviousMode, v20, 2u);
  }
  return result;
}
