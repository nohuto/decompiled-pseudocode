/*
 * XREFs of IoSetInformation @ 0x14055B32C
 * Callers:
 *     MiAttemptPageFileReduction @ 0x140220C9C (MiAttemptPageFileReduction.c)
 *     MiAttemptPageFileExtension @ 0x1406A4E8C (MiAttemptPageFileExtension.c)
 * Callees:
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     IoGetRelatedDeviceObject @ 0x140048020 (IoGetRelatedDeviceObject.c)
 *     IopQueueThreadIrp @ 0x140048420 (IopQueueThreadIrp.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     IofCallDriver @ 0x140048540 (IofCallDriver.c)
 *     IofCompleteRequest @ 0x140048F70 (IofCompleteRequest.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ObCloseHandle @ 0x1404A4D60 (ObCloseHandle.c)
 *     IopOpenLinkOrRenameTarget @ 0x1404A6950 (IopOpenLinkOrRenameTarget.c)
 *     IopAcquireFileObjectLock @ 0x140540A5C (IopAcquireFileObjectLock.c)
 *     IopCancelAlertedRequest @ 0x14058EC70 (IopCancelAlertedRequest.c)
 *     IopAllocateIrpCleanup @ 0x140670E48 (IopAllocateIrpCleanup.c)
 */

NTSTATUS __stdcall IoSetInformation(
        PFILE_OBJECT FileObject,
        FILE_INFORMATION_CLASS FileInformationClass,
        ULONG Length,
        PVOID FileInformation)
{
  char v4; // r12
  struct _KTHREAD *CurrentThread; // rax
  char v9; // r14
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  struct _DEVICE_OBJECT *v13; // r13
  __int64 Irp; // rax
  IRP *v15; // rdi
  __int64 v16; // r14
  NTSTATUS FinalStatus; // esi
  struct _KTHREAD *v18; // rcx
  __int16 v19; // ax
  struct _KTHREAD *v21; // rcx
  __int16 v22; // ax
  NTSTATUS v23; // edi
  ULONG Flags; // ecx
  ULONG v25; // ecx
  CCHAR v26; // dl
  _BYTE v27[8]; // [rsp+30h] [rbp-40h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-38h] BYREF
  _QWORD v29[2]; // [rsp+40h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-20h] BYREF
  void *retaddr; // [rsp+A8h] [rbp+38h]
  char v32; // [rsp+B0h] [rbp+40h]

  Handle = 0LL;
  v4 = 0;
  v29[0] = 0LL;
  v29[1] = 0LL;
  ObfReferenceObject(FileObject);
  if ( (FileObject->Flags & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( _InterlockedExchange((volatile __int32 *)&FileObject->Busy, 1) )
    {
      v21 = KeGetCurrentThread();
      v22 = v21->KernelApcDisable + 1;
      v21->KernelApcDisable = v22;
      if ( !v22
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v21->ApcState.ApcListHead[0].Flink != &v21->152
        && !v21->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      v23 = IopAcquireFileObjectLock((char *)FileObject, 0, (FileObject->Flags & 4) != 0, v27);
      if ( v27[0] )
      {
        ObfDereferenceObject(FileObject);
        return v23;
      }
    }
    else
    {
      ObfReferenceObject(FileObject);
    }
    KeResetEvent(&FileObject->Event);
    v9 = 1;
    v32 = 1;
  }
  else
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v9 = 0;
    v32 = 0;
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
  v4 = 1;
LABEL_7:
  LOBYTE(v11) = RelatedDeviceObject->StackSize;
  LOBYTE(v12) = v9 == 0;
  Irp = pIoAllocateIrp(RelatedDeviceObject, v11, v12, retaddr);
  v15 = (IRP *)Irp;
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
    *(_QWORD *)(Irp + 80) = 0LL;
    *(_BYTE *)(Irp + 71) |= 2u;
  }
  else
  {
    *(_DWORD *)(Irp + 16) = 4;
    *(_QWORD *)(Irp + 80) = &Event;
  }
  v16 = *(_QWORD *)(Irp + 184);
  *(_QWORD *)(Irp + 72) = v29;
  *(_BYTE *)(v16 - 72) = 6;
  *(_QWORD *)(v16 - 24) = FileObject;
  *(_DWORD *)(Irp + 16) |= 0x10u;
  *(_QWORD *)(Irp + 24) = FileInformation;
  *(_DWORD *)(v16 - 64) = Length;
  *(_DWORD *)(v16 - 56) = FileInformationClass;
  IopQueueThreadIrp(Irp);
  if ( FileInformationClass == FileModeInformation )
  {
    Flags = FileObject->Flags;
    if ( (Flags & 8) == 0 )
    {
      if ( (*(_DWORD *)FileInformation & 2) != 0 )
        v25 = Flags | 0x10;
      else
        v25 = Flags & 0xFFFFFFEF;
      FileObject->Flags = v25;
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
    --v15->CurrentLocation;
    --v15->Tail.Overlay.CurrentStackLocation;
    FinalStatus = 0;
    v15->IoStatus.Status = 0;
    v26 = 0;
    v15->IoStatus.Information = 0LL;
    goto LABEL_57;
  }
  if ( (unsigned int)(FileInformationClass - 10) <= 1 )
  {
    if ( FileInformationClass != FileMoveClusterInformation )
    {
      *(_BYTE *)(v16 - 40) = *(_BYTE *)FileInformation;
      if ( v4 )
        *(_BYTE *)(v16 - 70) |= 1u;
      goto LABEL_53;
    }
LABEL_52:
    *(_DWORD *)(v16 - 40) = *(_DWORD *)FileInformation;
LABEL_53:
    if ( *((_WORD *)FileInformation + 10) != 92 && !*((_QWORD *)FileInformation + 1) )
      goto LABEL_13;
    FinalStatus = IopOpenLinkOrRenameTarget(&Handle, (__int64)v15, (__int64)FileInformation, FileObject);
    if ( FinalStatus >= 0 )
      goto LABEL_13;
    --v15->CurrentLocation;
    v26 = 2;
    --v15->Tail.Overlay.CurrentStackLocation;
LABEL_57:
    IofCompleteRequest(v15, v26);
    goto LABEL_14;
  }
  if ( FileInformationClass == FileMoveClusterInformation )
    goto LABEL_52;
LABEL_13:
  FinalStatus = IofCallDriver(v13, v15);
LABEL_14:
  if ( v32 )
  {
    if ( FinalStatus == 259 )
    {
      if ( KeWaitForSingleObject(&FileObject->Event, Executive, 0, (FileObject->Flags & 4) != 0, 0LL) == 257 )
        IopCancelAlertedRequest(&FileObject->Event, v15);
      FinalStatus = FileObject->FinalStatus;
    }
    _InterlockedExchange((volatile __int32 *)&FileObject->Busy, 0);
    if ( FileObject->Waiters )
      KeSetEvent(&FileObject->Lock, 0, 0);
    ObfDereferenceObject(FileObject);
    v18 = KeGetCurrentThread();
    v19 = v18->KernelApcDisable + 1;
    v18->KernelApcDisable = v19;
    if ( !v19
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v18->ApcState.ApcListHead[0].Flink != &v18->152
      && !v18->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  else if ( FinalStatus == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    FinalStatus = v29[0];
  }
  if ( Handle )
    ObCloseHandle(Handle, 0);
  return FinalStatus;
}
