/*
 * XREFs of NtNotifyChangeDirectoryFile @ 0x14048FA08
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     IoGetRelatedDeviceObject @ 0x1400435F0 (IoGetRelatedDeviceObject.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 *     sub_14008E44C @ 0x14008E44C (sub_14008E44C.c)
 *     IopResetEvent @ 0x14008E840 (IopResetEvent.c)
 *     IopReferenceFileObject @ 0x1400CC3D8 (IopReferenceFileObject.c)
 *     IoAllocateMdl @ 0x1400FC2E0 (IoAllocateMdl.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     sub_1401BCD84 @ 0x1401BCD84 (sub_1401BCD84.c)
 *     sub_1401BCDC8 @ 0x1401BCDC8 (sub_1401BCDC8.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
 *     IopSynchronousServiceTail @ 0x140437580 (IopSynchronousServiceTail.c)
 *     IopAcquireFileObjectLock @ 0x1404AC66C (IopAcquireFileObjectLock.c)
 *     IopExceptionCleanup @ 0x1404C68BC (IopExceptionCleanup.c)
 *     IopAllocateIrpCleanup @ 0x1405F70B8 (IopAllocateIrpCleanup.c)
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
  struct _KTHREAD *CurrentThread; // rsi
  KPROCESSOR_MODE PreviousMode; // r14
  _DWORD *v13; // rdx
  ULONG v14; // r15d
  NTSTATUS result; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  struct _FILE_OBJECT *v18; // rdi
  int v19; // ebx
  char v20; // r12
  ULONG64 Status; // rcx
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 Irp; // rax
  __int64 v26; // rcx
  IRP *v27; // rbx
  __int64 v28; // rsi
  ULONG Flags; // eax
  struct _IRP *v30; // rcx
  struct _MDL *Mdl; // rcx
  __int64 v32; // r8
  char v33; // [rsp+40h] [rbp-48h]
  char v34; // [rsp+41h] [rbp-47h]
  PVOID v35; // [rsp+48h] [rbp-40h]
  PVOID v36; // [rsp+50h] [rbp-38h] BYREF
  PVOID Object; // [rsp+58h] [rbp-30h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]

  v35 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v13 = &IoStatusBlock->0;
    if ( (unsigned __int64)IoStatusBlock >= MmUserProbeAddress )
      v13 = (_DWORD *)MmUserProbeAddress;
    *v13 = *v13;
    v14 = BufferSize;
    if ( BufferSize )
      ProbeForWrite(Buffer, BufferSize, 4u);
    if ( (CompletionFilter & 0xFFFFF000) != 0 || !CompletionFilter )
      return -1073741811;
  }
  else
  {
    v14 = BufferSize;
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
      if ( !sub_1401BCD84((volatile __int32 *)&v18->Type) )
      {
        v19 = IopAcquireFileObjectLock(v18);
        if ( v34 )
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
          Status = (unsigned int)IoStatusBlock->Status;
          IoStatusBlock = (PIO_STATUS_BLOCK)Status;
          if ( Status >= MmUserProbeAddress )
            Status = MmUserProbeAddress;
          *(_DWORD *)Status = *(_DWORD *)Status;
        }
        v18 = (struct _FILE_OBJECT *)v36;
      }
    }
    IopResetEvent((__int64)v18, v16, v17);
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
    if ( !v14 )
      goto LABEL_42;
    Flags = RelatedDeviceObject->Flags;
    if ( (Flags & 4) != 0 )
    {
      v30 = (struct _IRP *)sub_14008E44C(v26, v14);
      v27->AssociatedIrp.MasterIrp = v30;
      if ( !IopDisableBufferedIoInit )
        memset(v30, 0, v14);
      v27->Flags = 112;
      v20 = v33;
    }
    else if ( (Flags & 0x10) != 0 )
    {
      Mdl = IoAllocateMdl(Buffer, v14, 0, 1u, v27);
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      sub_1401BCDC8(Mdl, PreviousMode, v32, (__int64)RelatedDeviceObject, *(unsigned __int8 *)(v28 - 72));
      goto LABEL_42;
    }
    v27->UserBuffer = Buffer;
LABEL_42:
    *(_DWORD *)(v28 - 64) = v14;
    *(_DWORD *)(v28 - 56) = CompletionFilter;
    if ( WatchTree )
      *(_BYTE *)(v28 - 70) = 1;
    return IopSynchronousServiceTail(RelatedDeviceObject, v27, (char *)v18, 0, PreviousMode, v20, 2);
  }
  return result;
}
