/*
 * XREFs of IoSetInformation @ 0x1404C362C
 * Callers:
 *     MiAttemptPageFileReduction @ 0x1401DBFE8 (MiAttemptPageFileReduction.c)
 *     PopDeleteHiberFile @ 0x14051AD40 (PopDeleteHiberFile.c)
 *     MiAttemptPageFileExtension @ 0x14062543C (MiAttemptPageFileExtension.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     IoGetRelatedDeviceObject @ 0x1400435F0 (IoGetRelatedDeviceObject.c)
 *     IopQueueThreadIrp @ 0x140043B00 (IopQueueThreadIrp.c)
 *     IofCallDriver @ 0x14007E4C0 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     IofCompleteRequest @ 0x140084CE0 (IofCompleteRequest.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 *     ObCloseHandle @ 0x1403F6F34 (ObCloseHandle.c)
 *     IopAcquireFileObjectLock @ 0x1404AC66C (IopAcquireFileObjectLock.c)
 *     IopOpenLinkOrRenameTarget @ 0x1404B43D0 (IopOpenLinkOrRenameTarget.c)
 *     IopCancelAlertedRequest @ 0x1404C5FBC (IopCancelAlertedRequest.c)
 *     IopAllocateIrpCleanup @ 0x1405F70B8 (IopAllocateIrpCleanup.c)
 */

NTSTATUS __stdcall IoSetInformation(
        PFILE_OBJECT FileObject,
        FILE_INFORMATION_CLASS FileInformationClass,
        ULONG Length,
        PVOID FileInformation)
{
  char v5; // r12
  struct _KTHREAD *CurrentThread; // rax
  char v9; // r13
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  struct _DEVICE_OBJECT *v13; // rbp
  __int64 Irp; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  IRP *v17; // rdi
  __int64 v18; // r14
  ULONG v19; // eax
  NTSTATUS FinalStatus; // esi
  NTSTATUS v22; // edi
  ULONG Flags; // ecx
  ULONG v24; // ecx
  CCHAR v25; // dl
  HANDLE Handle; // [rsp+30h] [rbp-68h] BYREF
  NTSTATUS v27; // [rsp+38h] [rbp-60h] BYREF
  struct _KEVENT Event; // [rsp+48h] [rbp-50h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]
  char v30; // [rsp+A0h] [rbp+8h] BYREF
  ULONG v31; // [rsp+B0h] [rbp+18h]

  v31 = Length;
  Handle = 0LL;
  v5 = 0;
  ObfReferenceObject(FileObject);
  if ( (FileObject->Flags & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( _InterlockedExchange((volatile __int32 *)&FileObject->Busy, 1) )
    {
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v22 = IopAcquireFileObjectLock((char *)FileObject, 0, (FileObject->Flags & 4) != 0, &v30);
      if ( v30 )
      {
        ObfDereferenceObject(FileObject);
        return v22;
      }
    }
    else
    {
      ObfReferenceObject(FileObject);
    }
    KeResetEvent(&FileObject->Event);
    v9 = 1;
  }
  else
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v9 = 0;
  }
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  v13 = RelatedDeviceObject;
  if ( FileInformationClass == FileRenameInformationBypassAccessCheck )
  {
    FileInformationClass = FileRenameInformation;
  }
  else
  {
    if ( FileInformationClass != FileLinkInformationBypassAccessCheck )
      goto LABEL_7;
    FileInformationClass = FileLinkInformation;
  }
  v5 = 1;
LABEL_7:
  LOBYTE(v11) = RelatedDeviceObject->StackSize;
  LOBYTE(v12) = v9 == 0;
  Irp = pIoAllocateIrp(RelatedDeviceObject, v11, v12, retaddr);
  v17 = (IRP *)Irp;
  if ( !Irp )
  {
    IopAllocateIrpCleanup(FileObject, 0LL);
    return -1073741670;
  }
  *(_QWORD *)(Irp + 192) = FileObject;
  *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
  *(_BYTE *)(Irp + 64) = 0;
  if ( v9 )
  {
    *(_BYTE *)(Irp + 71) |= 2u;
    *(_QWORD *)(Irp + 80) = 0LL;
  }
  else
  {
    *(_DWORD *)(Irp + 16) = 4;
    *(_QWORD *)(Irp + 80) = &Event;
  }
  v18 = *(_QWORD *)(Irp + 184);
  *(_QWORD *)(Irp + 72) = &v27;
  v19 = v31;
  *(_BYTE *)(v18 - 72) = 6;
  *(_QWORD *)(v18 - 24) = FileObject;
  v17->Flags |= 0x10u;
  v17->AssociatedIrp.MasterIrp = (struct _IRP *)FileInformation;
  *(_DWORD *)(v18 - 64) = v19;
  *(_DWORD *)(v18 - 56) = FileInformationClass;
  IopQueueThreadIrp((__int64)v17, v15, v16);
  if ( FileInformationClass == FileModeInformation )
  {
    Flags = FileObject->Flags;
    if ( (Flags & 8) == 0 )
    {
      if ( (*(_DWORD *)FileInformation & 2) != 0 )
        v24 = Flags | 0x10;
      else
        v24 = Flags & 0xFFFFFFEF;
      FileObject->Flags = v24;
    }
    if ( (*(_DWORD *)FileInformation & 4) != 0 )
      FileObject->Flags |= 0x20u;
    else
      FileObject->Flags &= ~0x20u;
    if ( (*(_DWORD *)FileInformation & 2) != 0 )
    {
      if ( (*(_DWORD *)FileInformation & 0x10) != 0 )
        FileObject->Flags |= 4u;
      else
        FileObject->Flags &= ~4u;
    }
    --v17->CurrentLocation;
    FinalStatus = 0;
    v17->IoStatus.Status = 0;
    v17->IoStatus.Information = 0LL;
    --v17->Tail.Overlay.CurrentStackLocation;
    v25 = 0;
    goto LABEL_53;
  }
  if ( (unsigned int)(FileInformationClass - 10) <= 1 )
  {
    if ( FileInformationClass != FileMoveClusterInformation )
    {
      *(_BYTE *)(v18 - 40) = *(_BYTE *)FileInformation;
      if ( v5 )
        *(_BYTE *)(v18 - 70) |= 1u;
      goto LABEL_49;
    }
LABEL_48:
    *(_DWORD *)(v18 - 40) = *(_DWORD *)FileInformation;
LABEL_49:
    if ( *((_WORD *)FileInformation + 10) != 92 && !*((_QWORD *)FileInformation + 1) )
      goto LABEL_13;
    FinalStatus = IopOpenLinkOrRenameTarget(&Handle, (__int64)v17, (__int64)FileInformation, FileObject);
    if ( FinalStatus >= 0 )
      goto LABEL_13;
    --v17->CurrentLocation;
    v25 = 2;
    --v17->Tail.Overlay.CurrentStackLocation;
LABEL_53:
    IofCompleteRequest(v17, v25);
    goto LABEL_14;
  }
  if ( FileInformationClass == FileMoveClusterInformation )
    goto LABEL_48;
LABEL_13:
  FinalStatus = IofCallDriver(v13, v17);
LABEL_14:
  if ( v9 )
  {
    if ( FinalStatus == 259 )
    {
      if ( KeWaitForSingleObject(&FileObject->Event, Executive, 0, (FileObject->Flags & 4) != 0, 0LL) == 257 )
        IopCancelAlertedRequest(&FileObject->Event, v17);
      FinalStatus = FileObject->FinalStatus;
    }
    _InterlockedExchange((volatile __int32 *)&FileObject->Busy, 0);
    if ( FileObject->Waiters )
      KeSetEvent(&FileObject->Lock, 0, 0);
    ObfDereferenceObject(FileObject);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  else if ( FinalStatus == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    FinalStatus = v27;
  }
  if ( Handle )
    ObCloseHandle(Handle, 0);
  return FinalStatus;
}
