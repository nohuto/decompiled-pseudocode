/*
 * XREFs of NtFlushBuffersFileEx @ 0x1404C9430
 * Callers:
 *     NtFlushBuffersFile @ 0x1404C9414 (NtFlushBuffersFile.c)
 * Callees:
 *     KeInitializeEvent @ 0x14002DEA0 (KeInitializeEvent.c)
 *     IoGetRelatedDeviceObject @ 0x14002E0E0 (IoGetRelatedDeviceObject.c)
 *     IopResetEvent @ 0x14002E5C0 (IopResetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfReferenceObject @ 0x14006A060 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     IopReferenceFileObject @ 0x14007B630 (IopReferenceFileObject.c)
 *     ExAllocatePoolWithTagPriority @ 0x14007E210 (ExAllocatePoolWithTagPriority.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     IopAcquireFileObjectLock @ 0x1403ECA60 (IopAcquireFileObjectLock.c)
 *     IopSynchronousServiceTail @ 0x1404457B0 (IopSynchronousServiceTail.c)
 *     IopSynchronousApiServiceTail @ 0x1404C9698 (IopSynchronousApiServiceTail.c)
 *     IopAllocateIrpCleanup @ 0x140620DC0 (IopAllocateIrpCleanup.c)
 */

__int64 __fastcall NtFlushBuffersFileEx(void *a1, char a2, __int64 a3, int a4, unsigned __int64 a5)
{
  struct _KTHREAD *CurrentThread; // r13
  KPROCESSOR_MODE PreviousMode; // r14
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  struct _FILE_OBJECT *v13; // rdi
  __int64 v14; // rdx
  struct _KTHREAD *v15; // rax
  char v16; // r15
  struct _KEVENT *v17; // rsi
  __int64 v18; // rdx
  __int64 Irp; // rax
  IRP *v20; // rbx
  struct _IO_STATUS_BLOCK *v21; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v23; // r9
  struct _KEVENT *PoolWithTagPriority; // rax
  unsigned int v25; // ebx
  char v26; // r8
  PVOID Object; // [rsp+40h] [rbp-48h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v28; // [rsp+48h] [rbp-40h] BYREF
  _QWORD v29[2]; // [rsp+50h] [rbp-38h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]
  PDEVICE_OBJECT DeviceObject; // [rsp+A0h] [rbp+18h] BYREF

  v29[0] = 0LL;
  v29[1] = 0LL;
  if ( a3 || a4 )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v9 = a5;
    if ( a5 >= 0x7FFFFFFF0000LL )
      v9 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v9 = *(_DWORD *)v9;
  }
  result = IopReferenceFileObject(a1, 0, PreviousMode, &Object, &v28);
  if ( (int)result >= 0 )
  {
    v13 = (struct _FILE_OBJECT *)Object;
    v14 = *((unsigned int *)Object + 20);
    if ( ((((unsigned __int8)~*((_BYTE *)Object + 80) >> 5) & 4 | 2) & v28.GrantedAccess) != 0 )
    {
      if ( (v14 & 2) != 0 )
      {
        v15 = KeGetCurrentThread();
        --v15->KernelApcDisable;
        if ( !_InterlockedExchange((volatile __int32 *)Object + 29, 1) )
        {
          v13 = (struct _FILE_OBJECT *)Object;
          ObfReferenceObject(Object);
LABEL_12:
          v16 = 1;
          v17 = 0LL;
          goto LABEL_13;
        }
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v14, v11, v12);
        v26 = (v13->Flags & 4) != 0;
        v13 = (struct _FILE_OBJECT *)Object;
        v25 = IopAcquireFileObjectLock((char *)Object, PreviousMode, v26, &DeviceObject);
        if ( !(_BYTE)DeviceObject )
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
        v17 = PoolWithTagPriority;
        if ( PoolWithTagPriority )
        {
          KeInitializeEvent(PoolWithTagPriority, SynchronizationEvent, 0);
          v16 = 0;
LABEL_13:
          IopResetEvent((__int64)v13);
          DeviceObject = IoGetRelatedDeviceObject(v13);
          LOBYTE(v18) = DeviceObject->StackSize;
          Irp = pIoAllocateIrp(DeviceObject, v18, 0LL, retaddr);
          v20 = (IRP *)Irp;
          if ( Irp )
          {
            *(_QWORD *)(Irp + 192) = v13;
            *(_QWORD *)(Irp + 152) = CurrentThread;
            *(_BYTE *)(Irp + 64) = PreviousMode;
            if ( v16 )
            {
              *(_QWORD *)(Irp + 80) = 0LL;
              v21 = (struct _IO_STATUS_BLOCK *)a5;
            }
            else
            {
              *(_QWORD *)(Irp + 80) = v17;
              v21 = (struct _IO_STATUS_BLOCK *)v29;
              v20->Flags = 4;
            }
            v20->UserIosb = v21;
            v20->Overlay.AllocationSize.QuadPart = 0LL;
            CurrentStackLocation = v20->Tail.Overlay.CurrentStackLocation;
            CurrentStackLocation[-1].MajorFunction = 9;
            CurrentStackLocation[-1].FileObject = v13;
            if ( (a2 & 1) != 0 )
            {
              CurrentStackLocation[-1].MinorFunction = 2;
            }
            else if ( (a2 & 2) != 0 )
            {
              CurrentStackLocation[-1].MinorFunction = 3;
            }
            else if ( (a2 & 4) != 0 )
            {
              CurrentStackLocation[-1].MinorFunction = 4;
            }
            result = IopSynchronousServiceTail(DeviceObject, v20, (__int64)v13, 0, PreviousMode, v16, 2u);
            if ( !v16 )
            {
              LOBYTE(v23) = PreviousMode;
              return IopSynchronousApiServiceTail((unsigned int)result, v17, v20, v23, v29, a5);
            }
          }
          else
          {
            if ( v17 )
              ExFreePoolWithTag(v17, 0);
            IopAllocateIrpCleanup(v13, 0LL);
            return 3221225626LL;
          }
          return result;
        }
        v25 = -1073741670;
      }
    }
    else
    {
      v25 = -1073741790;
    }
    ObfDereferenceObject(v13);
    return v25;
  }
  return result;
}
