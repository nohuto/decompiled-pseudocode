/*
 * XREFs of NtReadFileScatter @ 0x1404909FC
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     IoGetRelatedDeviceObject @ 0x1400435F0 (IoGetRelatedDeviceObject.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 *     IopResetEvent @ 0x14008E840 (IopResetEvent.c)
 *     MmProbeAndLockSelectedPages @ 0x1400A70B0 (MmProbeAndLockSelectedPages.c)
 *     IopReferenceFileObject @ 0x1400CC3D8 (IopReferenceFileObject.c)
 *     sub_1400CC928 @ 0x1400CC928 (sub_1400CC928.c)
 *     IoAllocateMdl @ 0x1400FC2E0 (IoAllocateMdl.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     IopExceptionFilter @ 0x1401B71BC (IopExceptionFilter.c)
 *     sub_1401BCD84 @ 0x1401BCD84 (sub_1401BCD84.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     IopSynchronousServiceTail @ 0x140437580 (IopSynchronousServiceTail.c)
 *     IopAcquireFileObjectLock @ 0x1404AC66C (IopAcquireFileObjectLock.c)
 *     IopExceptionCleanup @ 0x1404C68BC (IopExceptionCleanup.c)
 *     IopAllocateIrpCleanup @ 0x1405F70B8 (IopAllocateIrpCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
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
  __int64 i; // rdx
  unsigned __int64 DeviceType; // rcx
  ULONG v17; // r15d
  _DWORD *v18; // rcx
  PLARGE_INTEGER v19; // rsi
  USHORT SectorSize; // cx
  __int64 v21; // rbx
  FILE_SEGMENT_ELEMENT *v22; // rdi
  ULONG *v23; // rcx
  ULONG64 Status; // rcx
  int v25; // r15d
  struct _KEVENT *v26; // r14
  ULONG Flags; // eax
  char v28; // r12
  __int64 v29; // r8
  __int64 v30; // rdx
  IRP *Irp; // rax
  IRP *v32; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  struct _MDL *Mdl; // rax
  PFILE_OBJECT v35; // rbx
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-78h]
  char v37; // [rsp+41h] [rbp-77h]
  LONGLONG QuadPart; // [rsp+48h] [rbp-70h]
  FILE_SEGMENT_ELEMENT *P; // [rsp+50h] [rbp-68h]
  PFILE_OBJECT FileObject; // [rsp+58h] [rbp-60h] BYREF
  ULONG v41; // [rsp+60h] [rbp-58h]
  int v42; // [rsp+64h] [rbp-54h]
  PVOID v43; // [rsp+68h] [rbp-50h]
  PVOID Object; // [rsp+70h] [rbp-48h] BYREF
  int v45; // [rsp+78h] [rbp-40h]
  PDEVICE_OBJECT DeviceObject; // [rsp+80h] [rbp-38h]
  struct _KTHREAD *CurrentThread; // [rsp+88h] [rbp-30h]
  void *retaddr; // [rsp+B8h] [rbp+0h]

  P = 0LL;
  v43 = 0LL;
  v41 = 0;
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
  v17 = ((BufferLength & 0xFFF) != 0) + (BufferLength >> 12);
  if ( PreviousMode )
  {
    v42 = 0;
    v18 = &UserIoStatusBlock->0;
    if ( (unsigned __int64)UserIoStatusBlock >= MmUserProbeAddress )
      v18 = (_DWORD *)MmUserProbeAddress;
    *v18 = *v18;
    if ( KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7] && (v12->Flags & 2) == 0 )
    {
      UserApcRoutine = (PIO_APC_ROUTINE)((unsigned __int64)UserApcRoutine | 1);
      Status = (unsigned int)UserIoStatusBlock->Status;
      UserIoStatusBlock = (PIO_STATUS_BLOCK)Status;
      if ( Status >= MmUserProbeAddress )
        Status = MmUserProbeAddress;
      *(_DWORD *)Status = *(_DWORD *)Status;
    }
    v14 = (__int64)FileObject;
    if ( FileObject->CompletionContext && ((unsigned __int64)UserApcRoutine & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      ObfDereferenceObject(FileObject);
      return -1073741811;
    }
    v19 = ByteOffset;
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
        && ((SectorSize - 1) & BufferLength) != 0
        && (i = BufferLength % SectorSize, (_DWORD)i)
        || ByteOffset && SectorSize && ((SectorSize - 1) & (unsigned int)QuadPart) != 0 )
      {
        ObfDereferenceObject((PVOID)v14);
        return -1073741811;
      }
    }
    v21 = v17;
    if ( KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7] )
    {
      if ( v21 * 8 )
      {
        if ( ((unsigned __int8)BufferDescription & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        goto LABEL_24;
      }
    }
    else if ( v21 * 8 )
    {
      if ( ((unsigned __int8)BufferDescription & 7) != 0 )
        ExRaiseDatatypeMisalignment();
LABEL_24:
      if ( (unsigned __int64)&BufferDescription[v21] > MmUserProbeAddress || &BufferDescription[v21] < BufferDescription )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    if ( BufferLength )
    {
      v22 = (FILE_SEGMENT_ELEMENT *)sub_1400CC928(PagedPool, 8LL * v17);
      P = v22;
      memmove(v22, BufferDescription, 8LL * v17);
      BufferDescription = v22;
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        v45 = i;
        if ( (unsigned int)i >= v17 )
          break;
        if ( ((__int64)v22[i].Buffer & 0xFFFLL) != 0 )
          RtlRaiseStatus(-1073741811);
      }
    }
    else
    {
      v22 = 0LL;
    }
    v23 = Key;
    if ( Key )
    {
      if ( (unsigned __int64)Key >= MmUserProbeAddress )
        v23 = (ULONG *)MmUserProbeAddress;
      v41 = *v23;
      v22 = P;
    }
    v12 = FileObject;
    goto LABEL_53;
  }
  v19 = ByteOffset;
  if ( ByteOffset )
    QuadPart = ByteOffset->QuadPart;
  v22 = 0LL;
  if ( Key )
    v41 = *Key;
LABEL_53:
  if ( Event )
  {
    v25 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
    v26 = (struct _KEVENT *)Object;
    v43 = Object;
    if ( v25 < 0 )
    {
LABEL_80:
      ObfDereferenceObject(v12);
      if ( v22 )
        ExFreePoolWithTag(v22, 0);
      return v25;
    }
    KeResetEvent((PRKEVENT)Object);
  }
  else
  {
    v26 = (struct _KEVENT *)v43;
  }
  Flags = v12->Flags;
  if ( (Flags & 2) == 0 )
  {
    if ( !v19 && (Flags & 0x280) == 0 )
    {
      if ( v26 )
        ObfDereferenceObject(v26);
LABEL_96:
      ObfDereferenceObject(v12);
      if ( v22 )
        ExFreePoolWithTag(v22, 0);
      return -1073741811;
    }
    v28 = 0;
    goto LABEL_59;
  }
  if ( !sub_1401BCD84((volatile __int32 *)&v12->Type) )
  {
    v25 = IopAcquireFileObjectLock(v12);
    if ( v37 )
    {
      if ( v26 )
        ObfDereferenceObject(v26);
      goto LABEL_80;
    }
  }
  if ( !v19 || QuadPart == -2 )
    QuadPart = v12->CurrentByteOffset.QuadPart;
  v28 = 1;
LABEL_59:
  if ( QuadPart < 0 )
  {
    if ( v26 )
      ObfDereferenceObject(v26);
    if ( v28 )
    {
      _InterlockedExchange((volatile __int32 *)&v12->Busy, 0);
      v35 = FileObject;
      if ( FileObject->Waiters )
        KeSetEvent(&FileObject->Lock, 0, 0);
      ObfDereferenceObject(v35);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v22 = P;
      v12 = FileObject;
    }
    goto LABEL_96;
  }
  IopResetEvent((__int64)v12, i, v14);
  LOBYTE(v29) = v28 == 0;
  LOBYTE(v30) = DeviceObject->StackSize;
  Irp = (IRP *)pIoAllocateIrp(DeviceObject, v30, v29, retaddr);
  v32 = Irp;
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
    Irp->UserEvent = v26;
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
      v32->UserBuffer = BufferDescription->Buffer;
    }
    if ( v22 )
      ExFreePoolWithTag(v22, 0);
    if ( (v12->Flags & 8) != 0 )
      v32->Flags |= 0x901u;
    else
      v32->Flags |= 0x900u;
    CurrentStackLocation[-1].Parameters.Read.Length = BufferLength;
    CurrentStackLocation[-1].Parameters.Create.Options = v41;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = QuadPart;
    return IopSynchronousServiceTail(DeviceObject, v32, (char *)v12, 1, AccessMode, v28, 0);
  }
  else
  {
    IopAllocateIrpCleanup(v12, v26);
    if ( v22 )
      ExFreePoolWithTag(v22, 0);
    return -1073741670;
  }
}
