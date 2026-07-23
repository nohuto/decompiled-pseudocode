/*
 * XREFs of NtQueryEaFile @ 0x14046A59C
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
 *     memset @ 0x140171AC0 (memset.c)
 *     IopProbeAndLockPages_1 @ 0x1401CAC84 (IopProbeAndLockPages_1.c)
 *     IopVerifierExAllocatePool_2 @ 0x1401CACC8 (IopVerifierExAllocatePool_2.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     IopAcquireFileObjectLock @ 0x1403EE090 (IopAcquireFileObjectLock.c)
 *     IopSynchronousServiceTail @ 0x140444680 (IopSynchronousServiceTail.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 *     IopSynchronousApiServiceTail @ 0x1404AF418 (IopSynchronousApiServiceTail.c)
 *     IopAllocateIrpCleanup @ 0x140620E74 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x140621488 (IopExceptionCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryEaFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        BOOLEAN ReturnSingleEntry,
        PVOID EaList,
        ULONG EaListLength,
        PULONG EaIndex,
        BOOLEAN RestartScan)
{
  KPROCESSOR_MODE PreviousMode; // r13
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  char *v15; // rax
  UNICODE_STRING *PoolWithQuota; // rbx
  UNICODE_STRING *v17; // rdi
  signed int v18; // ecx
  NTSTATUS result; // eax
  unsigned int v20; // eax
  __int64 v21; // rdx
  signed int v22; // edi
  __int64 v23; // rdx
  NTSTATUS v24; // edi
  __int64 v25; // r8
  __int64 v26; // r9
  struct _KEVENT *v27; // rsi
  char *v28; // r15
  char v29; // r13
  struct _KEVENT *Pool_2; // rax
  __int64 v31; // rdx
  IRP *v32; // rax
  IRP *Irp; // rdi
  struct _IO_STACK_LOCATION *v34; // rsi
  struct _DEVICE_OBJECT *v35; // rbx
  ULONG Flags; // eax
  ULONG v37; // eax
  struct _IRP *v38; // rcx
  struct _MDL *Mdl; // rcx
  __int64 v40; // r9
  char v41; // [rsp+40h] [rbp-88h]
  char v42; // [rsp+41h] [rbp-87h]
  char v43[2]; // [rsp+42h] [rbp-86h] BYREF
  ULONG v44; // [rsp+44h] [rbp-84h]
  PVOID P; // [rsp+48h] [rbp-80h]
  ULONG v46; // [rsp+50h] [rbp-78h]
  PVOID v47; // [rsp+58h] [rbp-70h]
  PVOID Object; // [rsp+60h] [rbp-68h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+68h] [rbp-60h]
  PIRP v50; // [rsp+70h] [rbp-58h]
  _DWORD v51[2]; // [rsp+78h] [rbp-50h] BYREF
  __int64 v52; // [rsp+80h] [rbp-48h]
  UNICODE_STRING *v53; // [rsp+88h] [rbp-40h]
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp-38h]
  void *retaddr; // [rsp+C8h] [rbp+0h]

  v47 = 0LL;
  P = 0LL;
  v41 = 0;
  v46 = 0;
  v51[0] = 0;
  v51[1] = 0;
  v52 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v42 = PreviousMode;
  if ( !PreviousMode )
  {
    if ( EaList && EaListLength )
    {
      v41 = 1;
      PoolWithQuota = (UNICODE_STRING *)IopVerifierExAllocatePoolWithQuota((__int64)FileHandle, EaListLength);
      P = PoolWithQuota;
      memmove(PoolWithQuota, EaList, EaListLength);
    }
    else
    {
      PoolWithQuota = (UNICODE_STRING *)P;
    }
    if ( EaIndex )
      v46 = *EaIndex;
LABEL_36:
    v24 = IopReferenceFileObject(FileHandle, 8u, PreviousMode, &Object, 0LL);
    v27 = 0LL;
    if ( v24 < 0 )
    {
      if ( v41 )
        ExFreePoolWithTag(PoolWithQuota, 0);
      return v24;
    }
    v28 = (char *)Object;
    if ( (*((_DWORD *)Object + 20) & 2) != 0 )
    {
      if ( !IopAcquireFastLock((volatile __int32 *)Object, v23, v25, v26) )
      {
        v24 = IopAcquireFileObjectLock(v28, PreviousMode, (v28[80] & 4) != 0, v43);
        if ( v43[0] )
        {
          if ( v41 )
            ExFreePoolWithTag(PoolWithQuota, 0);
LABEL_50:
          ObfDereferenceObject(v28);
          return v24;
        }
      }
      v29 = 1;
    }
    else
    {
      Pool_2 = (struct _KEVENT *)IopVerifierExAllocatePool_2();
      v27 = Pool_2;
      v47 = Pool_2;
      if ( !Pool_2 )
      {
        if ( v41 )
          ExFreePoolWithTag(PoolWithQuota, 0);
        v24 = -1073741670;
        goto LABEL_50;
      }
      KeInitializeEvent(Pool_2, SynchronizationEvent, 0);
      v29 = 0;
    }
    IopResetEvent((__int64)v28);
    DeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)v28);
    LOBYTE(v31) = DeviceObject->StackSize;
    v32 = (IRP *)pIoAllocateIrp(DeviceObject, v31, 0LL, retaddr);
    Irp = v32;
    v50 = v32;
    if ( !v32 )
    {
      if ( (*((_DWORD *)v28 + 20) & 2) == 0 )
        ExFreePoolWithTag(v27, 0);
      IopAllocateIrpCleanup(v28, 0LL);
      if ( v41 )
        ExFreePoolWithTag(PoolWithQuota, 0);
      return -1073741670;
    }
    v32->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)v28;
    v32->Tail.Overlay.Thread = CurrentThread;
    v32->RequestorMode = v42;
    if ( v29 )
    {
      v32->UserEvent = 0LL;
      v32->UserIosb = IoStatusBlock;
    }
    else
    {
      v32->UserEvent = v27;
      v32->UserIosb = (PIO_STATUS_BLOCK)v51;
      v32->Flags = 4;
    }
    v32->Overlay.AllocationSize.QuadPart = 0LL;
    v34 = v32->Tail.Overlay.CurrentStackLocation - 1;
    v34->MajorFunction = 7;
    v34->FileObject = (PFILE_OBJECT)v28;
    if ( v41 )
    {
      v32->Tail.Overlay.AuxiliaryBuffer = (PCHAR)PoolWithQuota;
      v34->Parameters.QueryDirectory.FileName = PoolWithQuota;
      v34->Parameters.Read.ByteOffset.LowPart = EaListLength;
    }
    v35 = DeviceObject;
    Flags = DeviceObject->Flags;
    if ( (Flags & 4) != 0 )
    {
      v37 = Length;
      if ( !Length )
      {
        Irp->AssociatedIrp.MasterIrp = 0LL;
        Irp->Flags |= 0x50u;
LABEL_76:
        v34->Parameters.Read.Length = v37;
        v34->Parameters.Create.EaLength = v46;
        v34->Flags = 0;
        v34->Flags = RestartScan != 0;
        if ( ReturnSingleEntry )
          v34->Flags |= 2u;
        if ( EaIndex )
          v34->Flags |= 4u;
        result = IopSynchronousServiceTail(v35, Irp, (__int64)v28, 0, v42, v29, 2u);
        if ( !v29 )
        {
          LOBYTE(v40) = v42;
          return IopSynchronousApiServiceTail((unsigned int)result, v47, Irp, v40, v51, IoStatusBlock);
        }
        return result;
      }
      v38 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota(0LL, Length);
      Irp->AssociatedIrp.MasterIrp = v38;
      if ( !IopDisableBufferedIoInit )
        memset(v38, 0, Length);
      Irp->Flags |= 0x70u;
      v35 = DeviceObject;
    }
    else if ( (Flags & 0x10) != 0 )
    {
      v37 = Length;
      if ( Length )
      {
        Mdl = IoAllocateMdl(Buffer, Length, 0, 1u, Irp);
        if ( !Mdl )
          RtlRaiseStatus(-1073741670);
        IopProbeAndLockPages_1(Mdl, v42, IoWriteAccess, (__int64)v35, v34->MajorFunction);
        v37 = Length;
      }
      goto LABEL_76;
    }
    Irp->UserBuffer = Buffer;
    v37 = Length;
    goto LABEL_76;
  }
  v12 = (__int64)IoStatusBlock;
  if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
    v12 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v12 = *(_DWORD *)v12;
  ProbeForWrite(Buffer, Length, 4u);
  if ( EaIndex )
  {
    v14 = (__int64)EaIndex;
    if ( (unsigned __int64)EaIndex >= 0x7FFFFFFF0000LL )
      v14 = 0x7FFFFFFF0000LL;
    v46 = *(_DWORD *)v14;
  }
  if ( !EaList || !EaListLength )
  {
    PoolWithQuota = (UNICODE_STRING *)P;
    goto LABEL_36;
  }
  v41 = 1;
  if ( ((unsigned __int8)EaList & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v15 = (char *)EaList + EaListLength;
  if ( (unsigned __int64)v15 > 0x7FFFFFFF0000LL || v15 < EaList )
    MEMORY[0x7FFFFFFF0000] = 0;
  PoolWithQuota = (UNICODE_STRING *)IopVerifierExAllocatePoolWithQuota(v13, EaListLength);
  P = PoolWithQuota;
  memmove(PoolWithQuota, EaList, EaListLength);
  v17 = PoolWithQuota;
  v53 = PoolWithQuota;
  v18 = EaListLength;
  v44 = EaListLength;
  while ( 1 )
  {
    if ( v18 < 5 )
    {
      v44 = 0;
      ExFreePoolWithTag(PoolWithQuota, 0);
      P = 0LL;
      IoStatusBlock->Status = -2147483628;
      IoStatusBlock->Information = 0LL;
      return -2147483628;
    }
    v20 = *((unsigned __int8 *)&v17->MaximumLength + 2) + 6;
    if ( v18 < v20 )
      break;
    v21 = *(unsigned int *)&v17->Length;
    if ( !(_DWORD)v21 )
    {
      v44 = v18 - v20;
      if ( (int)(v18 - v20) >= 0 )
        goto LABEL_36;
      break;
    }
    if ( ((*((unsigned __int8 *)&v17->MaximumLength + 2) + 9) & 0xFFFFFFFC) != (_DWORD)v21 )
      break;
    if ( (int)v21 < 0 )
      break;
    v18 -= v21;
    v44 = v18;
    if ( v18 < 0 )
      break;
    v17 = (UNICODE_STRING *)((char *)v17 + v21);
    v53 = v17;
  }
  v22 = (_DWORD)v17 - (_DWORD)PoolWithQuota;
  v44 = v22;
  ExFreePoolWithTag(PoolWithQuota, 0);
  P = 0LL;
  IoStatusBlock->Status = -2147483628;
  IoStatusBlock->Information = v22;
  return -2147483628;
}
