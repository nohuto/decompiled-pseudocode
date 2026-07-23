/*
 * XREFs of NtFlushBuffersFileEx @ 0x14048F78C
 * Callers:
 *     NtFlushBuffersFile @ 0x14048F9EC (NtFlushBuffersFile.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140041DC0 (ExAllocatePoolWithTagPriority.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     IoGetRelatedDeviceObject @ 0x1400435F0 (IoGetRelatedDeviceObject.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     IopResetEvent @ 0x14008E840 (IopResetEvent.c)
 *     IopReferenceFileObject @ 0x1400CC3D8 (IopReferenceFileObject.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     IopSynchronousServiceTail @ 0x140437580 (IopSynchronousServiceTail.c)
 *     IopSynchronousApiServiceTail @ 0x140490974 (IopSynchronousApiServiceTail.c)
 *     IopAcquireFileObjectLock @ 0x1404AC66C (IopAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x1405F70B8 (IopAllocateIrpCleanup.c)
 */

NTSTATUS __cdecl NtFlushBuffersFileEx(
        HANDLE FileHandle,
        ULONG Flags,
        PVOID Parameters,
        ULONG ParametersSize,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  struct _KTHREAD *CurrentThread; // r13
  KPROCESSOR_MODE PreviousMode; // r14
  _DWORD *v8; // rcx
  NTSTATUS result; // eax
  struct _FILE_OBJECT *v10; // rdi
  struct _KTHREAD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  char v14; // r15
  struct _KEVENT *v15; // rsi
  PDEVICE_OBJECT RelatedDeviceObject; // r12
  __int64 v17; // rdx
  __int64 Irp; // rax
  IRP *v19; // rbx
  PIO_STATUS_BLOCK v20; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v22; // r9
  NTSTATUS v23; // ebx
  struct _KEVENT *PoolWithTagPriority; // rax
  PVOID Object; // [rsp+40h] [rbp-48h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v26; // [rsp+48h] [rbp-40h] BYREF
  _BYTE v27[16]; // [rsp+50h] [rbp-38h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]
  char v29; // [rsp+98h] [rbp+10h]
  char v30; // [rsp+A0h] [rbp+18h]

  v29 = Flags;
  if ( Parameters || ParametersSize )
    return -1073741811;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v8 = &IoStatusBlock->0;
    if ( (unsigned __int64)IoStatusBlock >= MmUserProbeAddress )
      v8 = (_DWORD *)MmUserProbeAddress;
    *v8 = *v8;
  }
  result = IopReferenceFileObject(FileHandle, 0, PreviousMode, &Object, &v26);
  if ( result >= 0 )
  {
    v10 = (struct _FILE_OBJECT *)Object;
    if ( ((((unsigned __int8)~*((_BYTE *)Object + 80) >> 5) & 4 | 2) & v26.GrantedAccess) != 0 )
    {
      if ( (*((_DWORD *)Object + 20) & 2) != 0 )
      {
        v11 = KeGetCurrentThread();
        --v11->KernelApcDisable;
        if ( !_InterlockedExchange((volatile __int32 *)Object + 29, 1) )
        {
          v10 = (struct _FILE_OBJECT *)Object;
          ObfReferenceObject(Object);
LABEL_12:
          v14 = 1;
          v15 = 0LL;
          goto LABEL_13;
        }
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        v10 = (struct _FILE_OBJECT *)Object;
        v23 = IopAcquireFileObjectLock(Object);
        if ( !v30 )
          goto LABEL_12;
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
        v15 = PoolWithTagPriority;
        if ( PoolWithTagPriority )
        {
          KeInitializeEvent(PoolWithTagPriority, SynchronizationEvent, 0);
          v14 = 0;
LABEL_13:
          IopResetEvent((__int64)v10, v12, v13);
          RelatedDeviceObject = IoGetRelatedDeviceObject(v10);
          LOBYTE(v17) = RelatedDeviceObject->StackSize;
          Irp = pIoAllocateIrp(RelatedDeviceObject, v17, 0LL, retaddr);
          v19 = (IRP *)Irp;
          if ( Irp )
          {
            *(_QWORD *)(Irp + 192) = v10;
            *(_QWORD *)(Irp + 152) = CurrentThread;
            *(_BYTE *)(Irp + 64) = PreviousMode;
            if ( v14 )
            {
              *(_QWORD *)(Irp + 80) = 0LL;
              v20 = IoStatusBlock;
            }
            else
            {
              *(_QWORD *)(Irp + 80) = v15;
              v20 = (PIO_STATUS_BLOCK)v27;
              v19->Flags = 4;
            }
            v19->UserIosb = v20;
            v19->Overlay.AllocationSize.QuadPart = 0LL;
            CurrentStackLocation = v19->Tail.Overlay.CurrentStackLocation;
            CurrentStackLocation[-1].MajorFunction = 9;
            CurrentStackLocation[-1].FileObject = v10;
            if ( (v29 & 1) != 0 )
            {
              CurrentStackLocation[-1].MinorFunction = 2;
            }
            else if ( (v29 & 2) != 0 )
            {
              CurrentStackLocation[-1].MinorFunction = 3;
            }
            result = IopSynchronousServiceTail(RelatedDeviceObject, v19, (char *)v10, 0, PreviousMode, v14, 2);
            if ( !v14 )
            {
              LOBYTE(v22) = PreviousMode;
              return IopSynchronousApiServiceTail((unsigned int)result, v15, v19, v22, v27, IoStatusBlock);
            }
          }
          else
          {
            if ( v15 )
              ExFreePoolWithTag(v15, 0);
            IopAllocateIrpCleanup(v10, 0LL);
            return -1073741670;
          }
          return result;
        }
        v23 = -1073741670;
      }
    }
    else
    {
      v23 = -1073741790;
    }
    ObfDereferenceObject(v10);
    return v23;
  }
  return result;
}
