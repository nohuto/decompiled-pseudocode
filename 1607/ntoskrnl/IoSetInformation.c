/*
 * XREFs of IoSetInformation @ 0x1404CA404
 * Callers:
 *     MiAttemptPageFileReduction @ 0x1401EDC04 (MiAttemptPageFileReduction.c)
 *     MiAttemptPageFileExtension @ 0x14065ADBC (MiAttemptPageFileExtension.c)
 * Callees:
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x14002DBE0 (IofCallDriver.c)
 *     IoGetRelatedDeviceObject @ 0x14002DC60 (IoGetRelatedDeviceObject.c)
 *     IopQueueThreadIrp @ 0x14002DCF0 (IopQueueThreadIrp.c)
 *     KeResetEvent @ 0x14002E1B0 (KeResetEvent.c)
 *     IofCompleteRequest @ 0x1400530E0 (IofCompleteRequest.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     IopAcquireFileObjectLock @ 0x1403EE090 (IopAcquireFileObjectLock.c)
 *     IopOpenLinkOrRenameTarget @ 0x1404BCA54 (IopOpenLinkOrRenameTarget.c)
 *     IopCancelAlertedRequest @ 0x1404D2CCC (IopCancelAlertedRequest.c)
 *     ObCloseHandle @ 0x1404EF6CC (ObCloseHandle.c)
 *     IopAllocateIrpCleanup @ 0x140620E74 (IopAllocateIrpCleanup.c)
 */

NTSTATUS __stdcall IoSetInformation(
        PFILE_OBJECT FileObject,
        FILE_INFORMATION_CLASS FileInformationClass,
        ULONG Length,
        PVOID FileInformation)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _KTHREAD *CurrentThread; // rax
  char v11; // r15
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  struct _DEVICE_OBJECT *v15; // r13
  __int64 Irp; // rax
  IRP *v17; // rdi
  __int64 v18; // r15
  NTSTATUS FinalStatus; // esi
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  NTSTATUS v24; // edi
  ULONG Flags; // ecx
  ULONG v26; // ecx
  CCHAR v27; // dl
  char v28; // al
  char v29; // [rsp+30h] [rbp-40h]
  _BYTE v30[7]; // [rsp+31h] [rbp-3Fh] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-38h] BYREF
  _QWORD v32[2]; // [rsp+40h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-20h] BYREF
  void *retaddr; // [rsp+98h] [rbp+28h]
  char v35; // [rsp+A0h] [rbp+30h]

  Handle = 0LL;
  v32[0] = 0LL;
  v32[1] = 0LL;
  v35 = 0;
  ObfReferenceObject(FileObject);
  if ( (FileObject->Flags & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( _InterlockedExchange((volatile __int32 *)&FileObject->Busy, 1) )
    {
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v7, v8, v9);
      v24 = IopAcquireFileObjectLock((char *)FileObject, 0, (FileObject->Flags & 4) != 0, v30);
      if ( v30[0] )
      {
        ObfDereferenceObject(FileObject);
        return v24;
      }
    }
    else
    {
      ObfReferenceObject(FileObject);
    }
    KeResetEvent(&FileObject->Event);
    v11 = 1;
  }
  else
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v11 = 0;
  }
  v29 = v11;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  v15 = RelatedDeviceObject;
  switch ( FileInformationClass )
  {
    case FileRenameInformationBypassAccessCheck:
      FileInformationClass = FileRenameInformation;
      break;
    case FileRenameInformationExBypassAccessCheck:
      FileInformationClass = FileRenameInformationEx;
      break;
    case FileLinkInformationBypassAccessCheck:
      FileInformationClass = FileLinkInformation;
      break;
    default:
      goto LABEL_8;
  }
  v35 = 1;
LABEL_8:
  LOBYTE(v13) = RelatedDeviceObject->StackSize;
  LOBYTE(v14) = v11 == 0;
  Irp = pIoAllocateIrp(RelatedDeviceObject, v13, v14, retaddr);
  v17 = (IRP *)Irp;
  if ( !Irp )
  {
    IopAllocateIrpCleanup(FileObject, 0LL);
    return -1073741670;
  }
  *(_QWORD *)(Irp + 192) = FileObject;
  *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
  *(_BYTE *)(Irp + 64) = 0;
  if ( v11 )
  {
    *(_QWORD *)(Irp + 80) = 0LL;
    *(_BYTE *)(Irp + 71) |= 2u;
  }
  else
  {
    *(_DWORD *)(Irp + 16) = 4;
    *(_QWORD *)(Irp + 80) = &Event;
  }
  v18 = *(_QWORD *)(Irp + 184);
  *(_QWORD *)(Irp + 72) = v32;
  *(_BYTE *)(v18 - 72) = 6;
  *(_QWORD *)(v18 - 24) = FileObject;
  *(_DWORD *)(Irp + 16) |= 0x10u;
  *(_QWORD *)(Irp + 24) = FileInformation;
  *(_DWORD *)(v18 - 64) = Length;
  *(_DWORD *)(v18 - 56) = FileInformationClass;
  IopQueueThreadIrp(Irp);
  if ( FileInformationClass == FileModeInformation )
  {
    Flags = FileObject->Flags;
    if ( (Flags & 8) == 0 )
    {
      if ( (*(_DWORD *)FileInformation & 2) != 0 )
        v26 = Flags | 0x10;
      else
        v26 = Flags & 0xFFFFFFEF;
      FileObject->Flags = v26;
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
    v27 = 0;
    goto LABEL_57;
  }
  if ( (unsigned int)(FileInformationClass - 10) <= 1 || FileInformationClass == FileRenameInformationEx )
  {
    if ( FileInformationClass != FileMoveClusterInformation )
    {
      v28 = *(_BYTE *)FileInformation;
      if ( FileInformationClass == FileRenameInformationEx )
        v28 &= 1u;
      *(_BYTE *)(v18 - 40) = v28;
      if ( v35 )
        *(_BYTE *)(v18 - 70) |= 1u;
      goto LABEL_53;
    }
LABEL_58:
    *(_DWORD *)(v18 - 40) = *(_DWORD *)FileInformation;
LABEL_53:
    if ( *((_WORD *)FileInformation + 10) != 92 && !*((_QWORD *)FileInformation + 1) )
      goto LABEL_15;
    FinalStatus = IopOpenLinkOrRenameTarget(&Handle, (__int64)v17, (__int64)FileInformation, FileObject);
    if ( FinalStatus >= 0 )
      goto LABEL_15;
    --v17->CurrentLocation;
    v27 = 2;
    --v17->Tail.Overlay.CurrentStackLocation;
LABEL_57:
    IofCompleteRequest(v17, v27);
    goto LABEL_16;
  }
  if ( FileInformationClass == FileMoveClusterInformation )
    goto LABEL_58;
LABEL_15:
  FinalStatus = IofCallDriver(v15, v17);
LABEL_16:
  if ( v29 )
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
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v20, v21, v22);
  }
  else if ( FinalStatus == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    FinalStatus = v32[0];
  }
  if ( Handle )
    ObCloseHandle(Handle, 0);
  return FinalStatus;
}
