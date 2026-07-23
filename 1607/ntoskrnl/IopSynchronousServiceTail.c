/*
 * XREFs of IopSynchronousServiceTail @ 0x140444680
 * Callers:
 *     NtReadFile @ 0x1404424F0 (NtReadFile.c)
 *     IopXxxControlFile @ 0x140442DD0 (IopXxxControlFile.c)
 *     NtWriteFile @ 0x1404454D0 (NtWriteFile.c)
 *     NtLockFile @ 0x140469D2C (NtLockFile.c)
 *     NtQueryEaFile @ 0x14046A59C (NtQueryEaFile.c)
 *     NtWriteFileGather @ 0x1404A917C (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1404A9848 (NtReadFileScatter.c)
 *     NtFlushBuffersFileEx @ 0x1404AF1B0 (NtFlushBuffersFileEx.c)
 *     NtUnlockFile @ 0x1404AF9D8 (NtUnlockFile.c)
 *     NtNotifyChangeDirectoryFile @ 0x1404B87E8 (NtNotifyChangeDirectoryFile.c)
 *     NtQueryDirectoryFile @ 0x1404F0330 (NtQueryDirectoryFile.c)
 *     NtQueryVolumeInformationFile @ 0x1404F4F20 (NtQueryVolumeInformationFile.c)
 *     NtSetVolumeInformationFile @ 0x140529AB4 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1406228A0 (IopSetEaOrQuotaInformationFile.c)
 *     NtSetEaFile @ 0x140625290 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x140625894 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     IofCallDriver @ 0x14002DBE0 (IofCallDriver.c)
 *     IopQueueThreadIrp @ 0x14002DCF0 (IopQueueThreadIrp.c)
 *     IopQueueIrpToFileObject @ 0x1400304E0 (IopQueueIrpToFileObject.c)
 *     IofCompleteRequest @ 0x1400530E0 (IofCompleteRequest.c)
 *     IopCompleteRequest @ 0x1400543C0 (IopCompleteRequest.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     ObDereferenceObjectDeferDelete @ 0x14005D6F0 (ObDereferenceObjectDeferDelete.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     IopGetFileObjectExtension @ 0x14007B5A0 (IopGetFileObjectExtension.c)
 *     EtwActivityIdControlKernel @ 0x140086AF0 (EtwActivityIdControlKernel.c)
 *     IopIsProcessAppContainer @ 0x1400B06B4 (IopIsProcessAppContainer.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     IoGetIoPriorityHint @ 0x1400E9B20 (IoGetIoPriorityHint.c)
 *     IoSetDiskIoAttributionFromThread @ 0x1400E9DD0 (IoSetDiskIoAttributionFromThread.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     IopCancelAlertedRequest @ 0x1404D2CCC (IopCancelAlertedRequest.c)
 */

__int64 __fastcall IopSynchronousServiceTail(
        PDEVICE_OBJECT DeviceObject,
        PIRP Irp,
        __int64 a3,
        char a4,
        char a5,
        char a6,
        unsigned int a7)
{
  PIO_APC_ROUTINE UserApcRoutine; // rax
  _QWORD *v8; // rbx
  __int64 v11; // rcx
  BOOL v12; // r12d
  PIRP v13; // rcx
  _DWORD *v14; // rax
  struct _KTHREAD *v15; // rax
  char *v16; // r14
  __int64 v17; // rax
  struct _KTHREAD *v18; // r8
  int v19; // eax
  ULONG v20; // ecx
  int v21; // eax
  IO_PRIORITY_HINT IoPriorityHint; // eax
  int v23; // edx
  _BYTE *v24; // rax
  unsigned int v25; // ebp
  bool v27; // bl
  void *v28; // rsi
  KPROCESSOR_MODE v29; // al
  NTSTATUS v30; // eax
  PVOID v31; // rbx
  struct _KTHREAD *v32; // rax
  __int16 v33; // cx
  $2B8565053CDC740D4E4887693DD8AC9E *v34; // rcx
  unsigned __int8 CurrentIrql; // bl
  ULONG DeviceType; // eax
  struct _KTHREAD *CurrentThread; // rax
  __int64 FileObjectExtension; // r14
  PETHREAD Thread; // rax
  ULONG Flags; // eax
  PIO_STATUS_BLOCK UserIosb; // rcx
  __int64 v42; // r9
  bool v43; // cl
  unsigned __int8 v44; // al
  PVOID Object; // [rsp+38h] [rbp-80h] BYREF
  __int128 *v47; // [rsp+40h] [rbp-78h] BYREF
  PVOID v48; // [rsp+48h] [rbp-70h] BYREF
  PVOID v49; // [rsp+50h] [rbp-68h] BYREF
  __int64 v50; // [rsp+58h] [rbp-60h] BYREF
  _BYTE v51[8]; // [rsp+60h] [rbp-58h] BYREF
  __int128 v52; // [rsp+68h] [rbp-50h] BYREF

  UserApcRoutine = Irp->Overlay.AsynchronousParameters.UserApcRoutine;
  v8 = (_QWORD *)a3;
  Object = (PVOID)a3;
  if ( ((unsigned __int8)UserApcRoutine & 1) != 0 )
  {
    Irp->AllocationFlags |= 0x10u;
    Irp->Overlay.AllocationSize.QuadPart = (unsigned __int64)UserApcRoutine & 0xFFFFFFFFFFFFFFFEuLL;
  }
  v11 = *(_QWORD *)(a3 + 176);
  v12 = v11 != 0;
  if ( a6 || Irp->Overlay.AllocationSize.QuadPart )
  {
    if ( (*(_DWORD *)(a3 + 80) & 2) != 0 )
      Irp->AllocationFlags |= 2u;
    v13 = Irp;
    goto LABEL_13;
  }
  if ( Irp->Overlay.AsynchronousParameters.UserApcContext && !Irp->UserEvent && v11 )
  {
    if ( IopQueueIrpToFileObject((__int64)Irp, a3) )
      goto LABEL_14;
    v13 = Irp;
    goto LABEL_13;
  }
  if ( (Irp->Flags & 0x10) != 0
    || v11
    || !*(_QWORD *)(a3 + 208)
    || (FileObjectExtension = IopGetFileObjectExtension(a3, 2, 0LL)) == 0 )
  {
LABEL_9:
    v13 = Irp;
LABEL_13:
    IopQueueThreadIrp((__int64)v13);
    goto LABEL_14;
  }
  while ( 1 )
  {
    UserIosb = Irp->UserIosb;
    if ( (unsigned __int64)UserIosb >= *(_QWORD *)FileObjectExtension
      && (unsigned __int64)&UserIosb[1] <= *(_QWORD *)(FileObjectExtension + 8) )
    {
      v8 = Object;
      if ( *(_KPROCESS **)(FileObjectExtension + 32) == KeGetCurrentThread()->ApcState.Process )
      {
        if ( IopQueueIrpToFileObject((__int64)Irp, (__int64)Object) )
          break;
      }
    }
    FileObjectExtension = *(_QWORD *)(FileObjectExtension + 40);
    if ( !FileObjectExtension )
      goto LABEL_9;
  }
  Irp->UserIosb = (PIO_STATUS_BLOCK)((char *)Irp->UserIosb
                                   + *(_QWORD *)(FileObjectExtension + 24)
                                   - *(_QWORD *)FileObjectExtension);
LABEL_14:
  v14 = (_DWORD *)v8[26];
  if ( v14 && (*v14 & 4) != 0 && IopIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process) )
  {
    v25 = -1073739504;
    Irp->IoStatus.Status = -1073739504;
    IofCompleteRequest(Irp, 0);
    v16 = (char *)Object;
    goto LABEL_31;
  }
  if ( a7 <= 1 )
  {
    DeviceType = DeviceObject->DeviceType;
    if ( DeviceType == 8 || DeviceType == 36 || DeviceType == 7 || DeviceType == 9 )
      IoSetDiskIoAttributionFromThread((__int64)Irp, KeGetCurrentThread());
    CurrentThread = KeGetCurrentThread();
    if ( a7 )
    {
      ++CurrentThread->WriteOperationCount;
      __incgsdword(0x2E60u);
    }
    else
    {
      ++CurrentThread->ReadOperationCount;
      __incgsdword(0x2E5Cu);
    }
  }
  else
  {
    v15 = KeGetCurrentThread();
    ++v15->OtherOperationCount;
    __incgsdword(0x2E64u);
  }
  v16 = (char *)Object;
  if ( !a6 )
    ObfReferenceObject(Object);
  v17 = v8[26];
  if ( v17 && *(_DWORD *)(v17 + 72) )
  {
    v20 = Irp->Flags & 0xFFF1FFFF;
    Irp->Flags = v20;
    v21 = *(_DWORD *)(v17 + 72) << 17;
  }
  else
  {
    v18 = KeGetCurrentThread();
    v19 = (*((_DWORD *)&v18[1].SwapListEntry + 2) >> 9) & 7;
    if ( (v18->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
      v19 = 0;
    if ( v19 < 2 && v18 == KeGetCurrentThread() && v18[1].Timer.DueTime.LowPart )
      v19 = 2;
    v16 = (char *)Object;
    v20 = Irp->Flags & 0xFFF1FFFF;
    v21 = (v19 << 17) + 0x20000;
  }
  Irp->Flags = v20 | v21;
  IoPriorityHint = IoGetIoPriorityHint(Irp);
  v23 = IoPriorityHint;
  if ( Irp->RequestorMode )
    goto LABEL_25;
  if ( IoPriorityHint < IoPriorityNormal )
  {
    Thread = Irp->Tail.Overlay.Thread;
    if ( Thread && ((Thread->MiscFlags & 0x400) != 0 || (*((_DWORD *)&Thread[1].SwapListEntry + 3) & 0x80u) != 0) )
    {
LABEL_25:
      if ( v23 < 2 )
      {
        if ( a7 )
        {
          if ( a7 == 1 )
            ++IoLowPriorityWriteOperationCount;
        }
        else
        {
          ++IoLowPriorityReadOperationCount;
        }
      }
      goto LABEL_26;
    }
    Flags = Irp->Flags;
    ++IoKernelIssuedIoBoostedCount;
    Irp->Flags = Flags & 0xFFF1FFFF | 0x60000;
  }
LABEL_26:
  if ( (Irp->AllocationFlags & 0x80u) == 0
    && (v24 = (_BYTE *)*((_QWORD *)&Irp->Tail.CompletionKey + 10)) != 0LL
    && (*v24 & 2) != 0 )
  {
    EtwActivityIdControlKernel(1, &v48);
    v42 = *((_QWORD *)&Irp->Tail.CompletionKey + 10);
    v47 = &v52;
    v52 = *(_OWORD *)(v42 + 24);
    EtwActivityIdControlKernel(2, (PVOID *)&v47);
    v25 = IofCallDriver(DeviceObject, Irp);
    v49 = v48;
    EtwActivityIdControlKernel(2, &v49);
  }
  else
  {
    v25 = IofCallDriver(DeviceObject, Irp);
  }
  if ( !a6 )
    ObDereferenceObjectDeferDelete(v16);
LABEL_31:
  if ( a4 && v25 != 259 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    IopCompleteRequest((__int64)&Irp->Tail, (__int64)v51, &v50, (ULONG_PTR *)&Object, &v50);
    __writecr8(CurrentIrql);
  }
  if ( a6 )
  {
    if ( v25 == 259 )
    {
      v27 = (*((_DWORD *)v16 + 20) & 4) != 0;
      v28 = v16 + 152;
      while ( 1 )
      {
        v29 = v27 ? a5 : 0;
        v30 = KeWaitForSingleObject(v28, Executive, v29, 1u, 0LL);
        if ( v30 != 257 && v30 != 192 )
          break;
        if ( !v27 )
        {
          v16 = (char *)Object;
          if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) == 0 )
          {
            v43 = 0;
            v44 = KeGetCurrentIrql();
            __writecr8(1uLL);
            if ( !*((_DWORD *)Object + 39) )
              v43 = Irp->Cancel == 1;
            __writecr8(v44);
            if ( !v43 )
              continue;
          }
        }
        IopCancelAlertedRequest(v28, Irp);
        break;
      }
      v25 = *((_DWORD *)v16 + 14);
    }
    _InterlockedExchange((volatile __int32 *)v16 + 29, 0);
    v31 = Object;
    if ( *((_DWORD *)Object + 28) )
      KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
    ObfDereferenceObject(v31);
    v32 = KeGetCurrentThread();
    v33 = v32->KernelApcDisable + 1;
    v32->KernelApcDisable = v33;
    if ( !v33 )
    {
      v34 = &v32->152;
      if ( ($2B8565053CDC740D4E4887693DD8AC9E *)v34->ApcState.ApcListHead[0].Flink != v34 && !v32->SpecialApcDisable )
        KiCheckForKernelApcDelivery((__int64)v34);
    }
  }
  else if ( v12 && (v25 & 0xC0000000) == 0x80000000 )
  {
    return 259LL;
  }
  return v25;
}
