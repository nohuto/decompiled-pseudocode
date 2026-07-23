/*
 * XREFs of NtSetEaFile @ 0x1405FB5AC
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     IoGetRelatedDeviceObject @ 0x1400435F0 (IoGetRelatedDeviceObject.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     sub_14008E44C @ 0x14008E44C (sub_14008E44C.c)
 *     IopResetEvent @ 0x14008E840 (IopResetEvent.c)
 *     sub_14008E8A8 @ 0x14008E8A8 (sub_14008E8A8.c)
 *     IopReferenceFileObject @ 0x1400CC3D8 (IopReferenceFileObject.c)
 *     IoAllocateMdl @ 0x1400FC2E0 (IoAllocateMdl.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     sub_1401BCE10 @ 0x1401BCE10 (sub_1401BCE10.c)
 *     sub_1401BCE54 @ 0x1401BCE54 (sub_1401BCE54.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     IopSynchronousServiceTail @ 0x140437580 (IopSynchronousServiceTail.c)
 *     IoCheckEaBufferValidity @ 0x14043A220 (IoCheckEaBufferValidity.c)
 *     IopSynchronousApiServiceTail @ 0x140490974 (IopSynchronousApiServiceTail.c)
 *     IopAcquireFileObjectLock @ 0x1404AC66C (IopAcquireFileObjectLock.c)
 *     IopExceptionCleanup @ 0x1404C68BC (IopExceptionCleanup.c)
 *     IopAllocateIrpCleanup @ 0x1405F70B8 (IopAllocateIrpCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetEaFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock, PVOID EaBuffer, ULONG EaBufferSize)
{
  SIZE_T v4; // rbx
  struct _KEVENT *v8; // r15
  char PreviousMode; // di
  _DWORD *v10; // rcx
  NTSTATUS result; // eax
  char *v12; // r14
  __int64 v13; // rdx
  __int64 v14; // r8
  NTSTATUS v15; // ebx
  struct _KEVENT *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  IRP *Irp; // rsi
  struct _KTHREAD *v20; // rdi
  ULONG Flags; // eax
  _FILE_FULL_EA_INFORMATION *v22; // rdi
  int v23; // eax
  struct _MDL *Mdl; // rcx
  char v25; // r12
  char v26; // bl
  char v27; // [rsp+40h] [rbp-78h] BYREF
  char v28; // [rsp+41h] [rbp-77h]
  char v29; // [rsp+42h] [rbp-76h]
  NTSTATUS v30; // [rsp+44h] [rbp-74h]
  PVOID P; // [rsp+48h] [rbp-70h]
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-68h]
  ULONG ErrorOffset; // [rsp+58h] [rbp-60h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-58h]
  PVOID Object[2]; // [rsp+68h] [rbp-50h] BYREF
  _QWORD v36[3]; // [rsp+78h] [rbp-40h] BYREF
  void *retaddr; // [rsp+B8h] [rbp+0h]

  v4 = EaBufferSize;
  v8 = 0LL;
  P = 0LL;
  v36[0] = 0LL;
  v36[1] = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v28 = PreviousMode;
  if ( PreviousMode )
  {
    v10 = &IoStatusBlock->0;
    if ( (unsigned __int64)IoStatusBlock >= MmUserProbeAddress )
      v10 = (_DWORD *)MmUserProbeAddress;
    *v10 = *v10;
    if ( EaBufferSize )
    {
      if ( ((unsigned __int8)EaBuffer & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)EaBuffer + EaBufferSize > MmUserProbeAddress || (char *)EaBuffer + EaBufferSize < EaBuffer )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
  }
  result = IopReferenceFileObject(FileHandle, 0x10u, PreviousMode, Object, 0LL);
  v30 = result;
  if ( result >= 0 )
  {
    v12 = (char *)Object[0];
    if ( (*((_DWORD *)Object[0] + 20) & 2) != 0 )
    {
      if ( sub_14008E8A8((volatile __int32 *)Object[0]) )
      {
LABEL_15:
        v27 = 1;
        goto LABEL_20;
      }
      v15 = IopAcquireFileObjectLock(v12, PreviousMode, (v12[80] & 4) != 0, &v27);
      v30 = v15;
      if ( !v27 )
      {
        v4 = EaBufferSize;
        goto LABEL_15;
      }
    }
    else
    {
      v16 = (struct _KEVENT *)sub_1401BCE54();
      v8 = v16;
      P = v16;
      if ( v16 )
      {
        KeInitializeEvent(v16, SynchronizationEvent, 0);
        v27 = 0;
LABEL_20:
        IopResetEvent((__int64)v12, v13, v14);
        DeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)v12);
        LOBYTE(v17) = DeviceObject->StackSize;
        v18 = pIoAllocateIrp(DeviceObject, v17, 0LL, retaddr);
        Irp = (IRP *)v18;
        Object[1] = (PVOID)v18;
        if ( !v18 )
        {
          if ( (*((_DWORD *)v12 + 20) & 2) == 0 )
            ExFreePoolWithTag(v8, 0);
          IopAllocateIrpCleanup(v12, 0LL);
          return -1073741670;
        }
        *(_QWORD *)(v18 + 192) = v12;
        *(_QWORD *)(v18 + 152) = CurrentThread;
        *(_BYTE *)(v18 + 64) = PreviousMode;
        if ( v27 )
        {
          *(_QWORD *)(v18 + 80) = 0LL;
          *(_QWORD *)(v18 + 72) = IoStatusBlock;
        }
        else
        {
          *(_QWORD *)(v18 + 80) = v8;
          *(_QWORD *)(v18 + 72) = v36;
          *(_DWORD *)(v18 + 16) = 4;
        }
        *(_QWORD *)(v18 + 88) = 0LL;
        v20 = (struct _KTHREAD *)(*(_QWORD *)(v18 + 184) - 72LL);
        CurrentThread = v20;
        v20->Header.Type = 8;
        v20->StackLimit = v12;
        Flags = DeviceObject->Flags;
        if ( (Flags & 4) != 0 )
        {
          if ( (_DWORD)v4 )
          {
            v29 = 0;
            v22 = (_FILE_FULL_EA_INFORMATION *)sub_14008E44C(0LL, v4);
            Irp->AssociatedIrp.MasterIrp = (struct _IRP *)v22;
            memmove(v22, EaBuffer, v4);
            LODWORD(v4) = EaBufferSize;
            v23 = IoCheckEaBufferValidity(v22, EaBufferSize, &ErrorOffset);
            v30 = v23;
            if ( v23 < 0 )
            {
              v29 = 1;
              IoStatusBlock->Status = v23;
              IoStatusBlock->Information = ErrorOffset;
              RtlRaiseStatus(v23);
            }
            Irp->Flags |= 0x30u;
            v20 = CurrentThread;
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
            v25 = v28;
            sub_1401BCE10(Mdl, v28, IoReadAccess, (__int64)DeviceObject, v20->Header.Type);
            goto LABEL_40;
          }
        }
        else
        {
          Irp->UserBuffer = EaBuffer;
        }
        v25 = v28;
LABEL_40:
        LODWORD(v20->Header.WaitListHead.Flink) = v4;
        v26 = v27;
        result = IopSynchronousServiceTail(DeviceObject, Irp, v12, 0, v25, v27, 2);
        if ( !v26 )
          return IopSynchronousApiServiceTail(result, v8, Irp, v25, (unsigned int *)v36, IoStatusBlock);
        return result;
      }
      v15 = -1073741670;
    }
    ObfDereferenceObject(v12);
    return v15;
  }
  return result;
}
