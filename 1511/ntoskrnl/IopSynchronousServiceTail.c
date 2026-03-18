/*
 * XREFs of IopSynchronousServiceTail @ 0x140437580
 * Callers:
 *     NtReadFile @ 0x140412000 (NtReadFile.c)
 *     NtWriteFile @ 0x140436150 (NtWriteFile.c)
 *     NtQueryDirectoryFile @ 0x1404374A0 (NtQueryDirectoryFile.c)
 *     NtQueryVolumeInformationFile @ 0x1404383A0 (NtQueryVolumeInformationFile.c)
 *     NtQueryEaFile @ 0x14048E36C (NtQueryEaFile.c)
 *     NtLockFile @ 0x14048F14C (NtLockFile.c)
 *     NtFlushBuffersFileEx @ 0x14048F78C (NtFlushBuffersFileEx.c)
 *     NtNotifyChangeDirectoryFile @ 0x14048FA08 (NtNotifyChangeDirectoryFile.c)
 *     NtWriteFileGather @ 0x140490124 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1404909FC (NtReadFileScatter.c)
 *     NtUnlockFile @ 0x1404911DC (NtUnlockFile.c)
 *     NtSetVolumeInformationFile @ 0x1404EA818 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1405F8964 (IopSetEaOrQuotaInformationFile.c)
 *     NtSetEaFile @ 0x1405FB5AC (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x1405FBBAC (NtQueryQuotaInformationFile.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x14001B460 (ObDereferenceObjectDeferDelete.c)
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     IopQueueThreadIrp @ 0x140043B00 (IopQueueThreadIrp.c)
 *     IoGetIoPriorityHint @ 0x140077CE0 (IoGetIoPriorityHint.c)
 *     IopGetFileObjectExtension @ 0x14007CDA0 (IopGetFileObjectExtension.c)
 *     IofCallDriver @ 0x14007E4C0 (IofCallDriver.c)
 *     IofCompleteRequest @ 0x140084CE0 (IofCompleteRequest.c)
 *     IopCompleteRequest @ 0x140086090 (IopCompleteRequest.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     IopWaitForSynchronousIo @ 0x14008E3A0 (IopWaitForSynchronousIo.c)
 *     IopQueueIrpToFileObject @ 0x14008F8D0 (IopQueueIrpToFileObject.c)
 *     IopIsProcessAppContainer @ 0x1400EFD88 (IopIsProcessAppContainer.c)
 *     EtwActivityIdControlKernel @ 0x1400FF658 (EtwActivityIdControlKernel.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall IopSynchronousServiceTail(
        PDEVICE_OBJECT DeviceObject,
        PIRP Irp,
        char *Object,
        char a4,
        char a5,
        char a6,
        int a7)
{
  PIO_APC_ROUTINE UserApcRoutine; // rax
  char *v8; // r14
  PIRP v11; // rcx
  __int64 *v12; // rbx
  _DWORD *v13; // rax
  struct _KTHREAD *v14; // rax
  __int64 v15; // rax
  struct _KTHREAD *v16; // r8
  int v17; // eax
  ULONG v18; // ecx
  int v19; // eax
  IO_PRIORITY_HINT IoPriorityHint; // eax
  int v21; // edx
  _BYTE *v22; // rax
  unsigned int v23; // r15d
  unsigned __int8 CurrentIrql; // bl
  PVOID v25; // rbx
  struct _KTHREAD *v26; // rcx
  __int16 v27; // ax
  struct _KTHREAD *v29; // rax
  struct _KTHREAD *CurrentThread; // rax
  PETHREAD Thread; // rax
  ULONG Flags; // eax
  __int64 FileObjectExtension; // rbx
  PIO_STATUS_BLOCK UserIosb; // rcx
  __int64 v35; // r9
  PVOID Objecta; // [rsp+40h] [rbp-49h] BYREF
  int v38; // [rsp+48h] [rbp-41h]
  PVOID v39; // [rsp+50h] [rbp-39h] BYREF
  __int64 v40; // [rsp+58h] [rbp-31h] BYREF
  __int128 *v41; // [rsp+60h] [rbp-29h] BYREF
  PVOID v42; // [rsp+68h] [rbp-21h] BYREF
  char v43[8]; // [rsp+70h] [rbp-19h] BYREF
  __int128 v44; // [rsp+78h] [rbp-11h] BYREF

  UserApcRoutine = Irp->Overlay.AsynchronousParameters.UserApcRoutine;
  v8 = Object;
  Objecta = Object;
  v38 = 0;
  if ( ((unsigned __int8)UserApcRoutine & 1) != 0 )
  {
    Irp->AllocationFlags |= 0x10u;
    Irp->Overlay.AllocationSize.QuadPart = (unsigned __int64)UserApcRoutine & 0xFFFFFFFFFFFFFFFEuLL;
  }
  if ( a6 || Irp->Overlay.AllocationSize.QuadPart )
  {
    if ( (*((_DWORD *)Object + 20) & 2) != 0 )
      Irp->AllocationFlags |= 2u;
    v11 = Irp;
    goto LABEL_7;
  }
  if ( Irp->Overlay.AsynchronousParameters.UserApcContext && !Irp->UserEvent && *((_QWORD *)Object + 22) )
  {
    if ( IopQueueIrpToFileObject((__int64)Irp, (__int64)Object, (__int64)Object) )
    {
      v38 = 1;
      goto LABEL_8;
    }
    goto LABEL_54;
  }
  if ( (Irp->Flags & 0x10) != 0
    || *((_QWORD *)Object + 22)
    || !*((_QWORD *)Object + 26)
    || (FileObjectExtension = IopGetFileObjectExtension((__int64)Object, 2, 0LL)) == 0 )
  {
LABEL_54:
    v11 = Irp;
LABEL_7:
    IopQueueThreadIrp((__int64)v11, (__int64)Irp, (__int64)Object);
    goto LABEL_8;
  }
  while ( 1 )
  {
    UserIosb = Irp->UserIosb;
    if ( (unsigned __int64)UserIosb >= *(_QWORD *)FileObjectExtension
      && (unsigned __int64)&UserIosb[1] <= *(_QWORD *)(FileObjectExtension + 8) )
    {
      v8 = (char *)Objecta;
      if ( *(_KPROCESS **)(FileObjectExtension + 32) == KeGetCurrentThread()->ApcState.Process )
      {
        if ( IopQueueIrpToFileObject((__int64)Irp, (__int64)Objecta, (__int64)Object) )
          break;
      }
    }
    FileObjectExtension = *(_QWORD *)(FileObjectExtension + 40);
    if ( !FileObjectExtension )
      goto LABEL_54;
  }
  Irp->UserIosb = (PIO_STATUS_BLOCK)((char *)Irp->UserIosb
                                   + *(_QWORD *)(FileObjectExtension + 24)
                                   - *(_QWORD *)FileObjectExtension);
LABEL_8:
  v12 = (__int64 *)(v8 + 208);
  v13 = (_DWORD *)*((_QWORD *)v8 + 26);
  if ( v13 && (*v13 & 4) != 0 )
  {
    if ( IopIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process) )
    {
      v23 = -1073739504;
      Irp->IoStatus.Status = -1073739504;
      IofCompleteRequest(Irp, 0);
      v8 = (char *)Objecta;
      goto LABEL_29;
    }
    v8 = (char *)Objecta;
  }
  if ( a7 )
  {
    if ( a7 == 1 )
    {
      CurrentThread = KeGetCurrentThread();
      ++CurrentThread->WriteOperationCount;
      __incgsdword(0x2E60u);
    }
    else
    {
      if ( a7 != 2 )
        goto LABEL_14;
      v14 = KeGetCurrentThread();
      ++v14->OtherOperationCount;
      __incgsdword(0x2E64u);
    }
  }
  else
  {
    v29 = KeGetCurrentThread();
    ++v29->ReadOperationCount;
    __incgsdword(0x2E5Cu);
  }
  v8 = (char *)Objecta;
LABEL_14:
  if ( !a6 )
    ObfReferenceObject(v8);
  v15 = *v12;
  if ( *v12 && *(_DWORD *)(v15 + 72) )
  {
    v18 = Irp->Flags & 0xFFF1FFFF;
    Irp->Flags = v18;
    v19 = *(_DWORD *)(v15 + 72) << 17;
  }
  else
  {
    v16 = KeGetCurrentThread();
    v17 = (*((_DWORD *)&v16[1].SwapListEntry + 3) >> 9) & 7;
    if ( (v16->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
      v17 = 0;
    if ( v17 < 2 && v16 == KeGetCurrentThread() && HIDWORD(v16[1].Timer.TimerListEntry.Flink) )
      v17 = 2;
    v8 = (char *)Objecta;
    v18 = Irp->Flags & 0xFFF1FFFF;
    v19 = (v17 << 17) + 0x20000;
  }
  Irp->Flags = v18 | v19;
  IoPriorityHint = IoGetIoPriorityHint(Irp);
  v21 = IoPriorityHint;
  if ( Irp->RequestorMode )
    goto LABEL_22;
  if ( IoPriorityHint < IoPriorityNormal )
  {
    Thread = Irp->Tail.Overlay.Thread;
    if ( Thread && ((Thread->MiscFlags & 0x400) != 0 || ((__int64)Thread[1].Queue & 0x40) != 0) )
    {
LABEL_22:
      if ( v21 < 2 )
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
      goto LABEL_23;
    }
    Flags = Irp->Flags;
    ++IoKernelIssuedIoBoostedCount;
    Irp->Flags = Flags & 0xFFF1FFFF | 0x60000;
  }
LABEL_23:
  if ( (Irp->AllocationFlags & 0x80u) == 0
    && (v22 = (_BYTE *)*((_QWORD *)&Irp->Tail.CompletionKey + 10)) != 0LL
    && (*v22 & 2) != 0 )
  {
    EtwActivityIdControlKernel(1, &v39);
    v35 = *((_QWORD *)&Irp->Tail.CompletionKey + 10);
    v41 = &v44;
    v44 = *(_OWORD *)(v35 + 16);
    EtwActivityIdControlKernel(2, (PVOID *)&v41);
    v23 = IofCallDriver(DeviceObject, Irp);
    v42 = v39;
    EtwActivityIdControlKernel(2, &v42);
  }
  else
  {
    v23 = IofCallDriver(DeviceObject, Irp);
  }
  if ( !a6 )
    ObDereferenceObjectDeferDelete(v8);
LABEL_29:
  if ( v23 != 259 && a4 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    IopCompleteRequest((__int64)&Irp->Tail, (__int64)v43, (__int64)&v40, (ULONG_PTR *)&Objecta, &v40);
    __writecr8(CurrentIrql);
  }
  if ( a6 )
  {
    if ( v23 == 259 )
      v23 = IopWaitForSynchronousIo(Irp, (__int64)v8, a5);
    _InterlockedExchange((volatile __int32 *)v8 + 29, 0);
    v25 = Objecta;
    if ( *((_DWORD *)Objecta + 28) )
      KeSetEvent((PRKEVENT)((char *)Objecta + 128), 0, 0);
    ObfDereferenceObject(v25);
    v26 = KeGetCurrentThread();
    v27 = v26->KernelApcDisable + 1;
    v26->KernelApcDisable = v27;
    if ( !v27
      && ($E81C3296F15336D9BF9B2D43BB137B25 *)v26->ApcState.ApcListHead[0].Flink != &v26->152
      && !v26->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery((__int64)v26);
    }
    return v23;
  }
  if ( !v38 || (v23 & 0xC0000000) != 0x80000000 )
    return v23;
  return 259LL;
}
