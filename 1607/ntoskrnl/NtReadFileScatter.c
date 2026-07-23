/*
 * XREFs of NtReadFileScatter @ 0x1404A9848
 * Callers:
 *     <none>
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x14002DC60 (IoGetRelatedDeviceObject.c)
 *     IopResetEvent @ 0x14002E140 (IopResetEvent.c)
 *     KeResetEvent @ 0x14002E1B0 (KeResetEvent.c)
 *     IoAllocateMdl @ 0x14002EB10 (IoAllocateMdl.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     IopReferenceFileObject @ 0x14007B6B0 (IopReferenceFileObject.c)
 *     MmProbeAndLockSelectedPages @ 0x140099DD4 (MmProbeAndLockSelectedPages.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x14009A334 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     IopExceptionFilter @ 0x1401C4BE0 (IopExceptionFilter.c)
 *     IopAcquireFastLock_1 @ 0x1401CAD48 (IopAcquireFastLock_1.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     IopAcquireFileObjectLock @ 0x1403EE090 (IopAcquireFileObjectLock.c)
 *     IopSynchronousServiceTail @ 0x140444680 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     IopAllocateIrpCleanup @ 0x140620E74 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x140621488 (IopExceptionCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtReadFileScatter(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE UserApcRoutine,
        PVOID UserApcContext,
        PIO_STATUS_BLOCK UserIoStatusBlock,
        FILE_SEGMENT_ELEMENT BufferDescription[],
        ULONG BufferLength,
        PLARGE_INTEGER ByteOffset,
        PULONG Key)
{
  KPROCESSOR_MODE PreviousMode; // r14
  NTSTATUS result; // eax
  PFILE_OBJECT v12; // rbx
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 i; // rdx
  unsigned __int64 DeviceType; // rcx
  ULONG v18; // r15d
  __int64 v19; // rcx
  PLARGE_INTEGER v20; // rsi
  USHORT SectorSize; // cx
  __int64 v22; // rbx
  FILE_SEGMENT_ELEMENT *PoolWithQuota_0; // rdi
  __int64 v24; // rax
  struct _IO_STATUS_BLOCK *Status; // rcx
  NTSTATUS v26; // r15d
  struct _KEVENT *v27; // r14
  ULONG Flags; // eax
  char v29; // r12
  __int64 v30; // r8
  __int64 v31; // rdx
  IRP *Irp; // rax
  IRP *v33; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  struct _MDL *Mdl; // rax
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  PFILE_OBJECT v39; // rbx
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-78h]
  _BYTE v41[7]; // [rsp+41h] [rbp-77h] BYREF
  LONGLONG QuadPart; // [rsp+48h] [rbp-70h]
  PFILE_OBJECT FileObject; // [rsp+50h] [rbp-68h] BYREF
  PVOID P; // [rsp+58h] [rbp-60h]
  ULONG v45; // [rsp+60h] [rbp-58h]
  int v46; // [rsp+64h] [rbp-54h]
  int v47; // [rsp+68h] [rbp-50h]
  PVOID v48; // [rsp+70h] [rbp-48h]
  PVOID Object; // [rsp+78h] [rbp-40h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+80h] [rbp-38h]
  struct _KTHREAD *CurrentThread; // [rsp+88h] [rbp-30h]
  void *retaddr; // [rsp+B8h] [rbp+0h]

  P = 0LL;
  v48 = 0LL;
  v45 = 0;
  QuadPart = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  AccessMode = PreviousMode;
  result = IopReferenceFileObject(FileHandle, 1u, PreviousMode, (PVOID *)&FileObject, 0LL);
  if ( result < 0 )
    return result;
  v12 = FileObject;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  i = (__int64)RelatedDeviceObject;
  DeviceObject = RelatedDeviceObject;
  if ( (v12->Flags & 0xA) != 8
    || (RelatedDeviceObject->Flags & 4) != 0
    || ((DeviceType = RelatedDeviceObject->DeviceType, (unsigned int)DeviceType > 0x36)
     || (v14 = 0x40000100100348LL, !_bittest64(&v14, DeviceType)))
    && (_DWORD)DeviceType != 83 )
  {
    ObfDereferenceObject(v12);
    return -1073741811;
  }
  v18 = ((BufferLength & 0xFFF) != 0) + (BufferLength >> 12);
  if ( PreviousMode )
  {
    v46 = 0;
    v19 = (__int64)UserIoStatusBlock;
    if ( (unsigned __int64)UserIoStatusBlock >= 0x7FFFFFFF0000LL )
      v19 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v19 = *(_DWORD *)v19;
    if ( KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7] && (v12->Flags & 2) == 0 )
    {
      UserApcRoutine = (PIO_APC_ROUTINE)((unsigned __int64)UserApcRoutine | 1);
      Status = (struct _IO_STATUS_BLOCK *)(unsigned int)UserIoStatusBlock->Status;
      UserIoStatusBlock = Status;
      Status->Status = Status->Status;
    }
    v14 = (__int64)FileObject;
    if ( FileObject->CompletionContext && ((unsigned __int64)UserApcRoutine & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      ObfDereferenceObject(FileObject);
      return -1073741811;
    }
    v20 = ByteOffset;
    if ( ByteOffset )
    {
      if ( ((unsigned __int8)ByteOffset & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      QuadPart = ByteOffset->QuadPart;
      v14 = (__int64)FileObject;
    }
    if ( (v12->Flags & 8) != 0 )
    {
      if ( (SectorSize = RelatedDeviceObject->SectorSize) != 0
        && (v15 = SectorSize, ((SectorSize - 1) & BufferLength) != 0)
        && (i = BufferLength % SectorSize) != 0
        || ByteOffset && SectorSize && ((SectorSize - 1) & (unsigned int)QuadPart) != 0 )
      {
        ObfDereferenceObject((PVOID)v14);
        return -1073741811;
      }
    }
    v22 = v18;
    if ( KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7] )
    {
      if ( v22 * 8 )
      {
        if ( ((unsigned __int8)BufferDescription & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        goto LABEL_24;
      }
    }
    else if ( v22 * 8 )
    {
      if ( ((unsigned __int8)BufferDescription & 7) != 0 )
        ExRaiseDatatypeMisalignment();
LABEL_24:
      if ( (unsigned __int64)&BufferDescription[v22] > 0x7FFFFFFF0000LL || &BufferDescription[v22] < BufferDescription )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    if ( BufferLength )
    {
      PoolWithQuota_0 = (FILE_SEGMENT_ELEMENT *)IopVerifierExAllocatePoolWithQuota_0(PagedPool, 8LL * v18);
      P = PoolWithQuota_0;
      memmove(PoolWithQuota_0, BufferDescription, 8LL * v18);
      BufferDescription = PoolWithQuota_0;
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        v47 = i;
        if ( (unsigned int)i >= v18 )
          break;
        if ( ((__int64)PoolWithQuota_0[i].Buffer & 0xFFFLL) != 0 )
          RtlRaiseStatus(-1073741811);
      }
    }
    else
    {
      PoolWithQuota_0 = (FILE_SEGMENT_ELEMENT *)P;
    }
    v24 = (__int64)Key;
    if ( Key )
    {
      if ( (unsigned __int64)Key >= 0x7FFFFFFF0000LL )
        v24 = 0x7FFFFFFF0000LL;
      v45 = *(_DWORD *)v24;
      PoolWithQuota_0 = (FILE_SEGMENT_ELEMENT *)P;
    }
    v12 = FileObject;
    goto LABEL_51;
  }
  v20 = ByteOffset;
  if ( ByteOffset )
    QuadPart = ByteOffset->QuadPart;
  PoolWithQuota_0 = (FILE_SEGMENT_ELEMENT *)P;
  if ( Key )
    v45 = *Key;
LABEL_51:
  if ( Event )
  {
    v26 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
    v27 = (struct _KEVENT *)Object;
    v48 = Object;
    if ( v26 < 0 )
    {
LABEL_78:
      ObfDereferenceObject(v12);
      if ( PoolWithQuota_0 )
        ExFreePoolWithTag(PoolWithQuota_0, 0);
      return v26;
    }
    KeResetEvent((PRKEVENT)Object);
  }
  else
  {
    v27 = (struct _KEVENT *)v48;
  }
  Flags = v12->Flags;
  if ( (Flags & 2) == 0 )
  {
    if ( !v20 && (Flags & 0x280) == 0 )
    {
      if ( v27 )
        ObfDereferenceObject(v27);
LABEL_94:
      ObfDereferenceObject(v12);
      if ( PoolWithQuota_0 )
        ExFreePoolWithTag(PoolWithQuota_0, 0);
      return -1073741811;
    }
    v29 = 0;
    goto LABEL_57;
  }
  if ( !IopAcquireFastLock_1((volatile __int32 *)&v12->Type, i, v14, v15) )
  {
    v26 = IopAcquireFileObjectLock((char *)v12, AccessMode, (v12->Flags & 4) != 0, v41);
    if ( v41[0] )
    {
      if ( v27 )
        ObfDereferenceObject(v27);
      goto LABEL_78;
    }
  }
  if ( !v20 || QuadPart == -2 )
    QuadPart = v12->CurrentByteOffset.QuadPart;
  v29 = 1;
LABEL_57:
  if ( QuadPart < 0 )
  {
    if ( v27 )
      ObfDereferenceObject(v27);
    if ( v29 )
    {
      _InterlockedExchange((volatile __int32 *)&v12->Busy, 0);
      v39 = FileObject;
      if ( FileObject->Waiters )
        KeSetEvent(&FileObject->Lock, 0, 0);
      ObfDereferenceObject(v39);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v36, v37, v38);
      PoolWithQuota_0 = (FILE_SEGMENT_ELEMENT *)P;
      v12 = FileObject;
    }
    goto LABEL_94;
  }
  IopResetEvent((__int64)v12);
  LOBYTE(v30) = v29 == 0;
  LOBYTE(v31) = DeviceObject->StackSize;
  Irp = (IRP *)pIoAllocateIrp(DeviceObject, v31, v30, retaddr);
  v33 = Irp;
  Object = Irp;
  if ( Irp )
  {
    Irp->Tail.Overlay.OriginalFileObject = v12;
    Irp->Tail.Overlay.Thread = CurrentThread;
    Irp->Tail.Overlay.AuxiliaryBuffer = 0LL;
    Irp->RequestorMode = AccessMode;
    Irp->PendingReturned = 0;
    Irp->Cancel = 0;
    Irp->CancelRoutine = 0LL;
    Irp->UserEvent = v27;
    Irp->UserIosb = UserIoStatusBlock;
    Irp->Overlay.AllocationSize.QuadPart = (LONGLONG)UserApcRoutine;
    Irp->Overlay.AsynchronousParameters.UserApcContext = UserApcContext;
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = 3;
    CurrentStackLocation[-1].FileObject = v12;
    Irp->AssociatedIrp.MasterIrp = 0LL;
    Irp->MdlAddress = 0LL;
    Irp->Flags = 0;
    if ( BufferLength )
    {
      Mdl = IoAllocateMdl(BufferDescription->Buffer, BufferLength, 0, 1u, Irp);
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      MmProbeAndLockSelectedPages(Mdl, BufferDescription, AccessMode, IoWriteAccess);
      v33->UserBuffer = BufferDescription->Buffer;
    }
    if ( PoolWithQuota_0 )
      ExFreePoolWithTag(PoolWithQuota_0, 0);
    if ( (v12->Flags & 8) != 0 )
      v33->Flags |= 0x901u;
    else
      v33->Flags |= 0x900u;
    CurrentStackLocation[-1].Parameters.Read.Length = BufferLength;
    CurrentStackLocation[-1].Parameters.Create.Options = v45;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = QuadPart;
    return IopSynchronousServiceTail(DeviceObject, v33, (__int64)v12, 1, AccessMode, v29, 0);
  }
  else
  {
    IopAllocateIrpCleanup(v12, v27);
    if ( PoolWithQuota_0 )
      ExFreePoolWithTag(PoolWithQuota_0, 0);
    return -1073741670;
  }
}
