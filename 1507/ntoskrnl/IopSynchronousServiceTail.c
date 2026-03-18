/*
 * XREFs of IopSynchronousServiceTail @ 0x1404BDDC0
 * Callers:
 *     NtQueryVolumeInformationFile @ 0x140457400 (NtQueryVolumeInformationFile.c)
 *     NtFlushBuffersFileEx @ 0x140459AD0 (NtFlushBuffersFileEx.c)
 *     NtReadFile @ 0x14048EFE0 (NtReadFile.c)
 *     NtLockFile @ 0x1404A4FE4 (NtLockFile.c)
 *     NtQueryDirectoryFile @ 0x1404BC990 (NtQueryDirectoryFile.c)
 *     NtWriteFile @ 0x1404BCA70 (NtWriteFile.c)
 *     NtQueryEaFile @ 0x140534134 (NtQueryEaFile.c)
 *     NtUnlockFile @ 0x14053C750 (NtUnlockFile.c)
 *     NtNotifyChangeDirectoryFile @ 0x14053E7A0 (NtNotifyChangeDirectoryFile.c)
 *     NtWriteFileGather @ 0x140540320 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x140549CBC (NtReadFileScatter.c)
 *     NtSetVolumeInformationFile @ 0x14055F21C (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1406728FC (IopSetEaOrQuotaInformationFile.c)
 *     NtSetEaFile @ 0x140675B58 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x140676310 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     EtwActivityIdControlKernel @ 0x140026D54 (EtwActivityIdControlKernel.c)
 *     IopQueueThreadIrp @ 0x140048420 (IopQueueThreadIrp.c)
 *     IofCallDriver @ 0x140048540 (IofCallDriver.c)
 *     IofCompleteRequest @ 0x140048F70 (IofCompleteRequest.c)
 *     IopCompleteRequest @ 0x14004A190 (IopCompleteRequest.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     IoGetIoPriorityHint @ 0x140070020 (IoGetIoPriorityHint.c)
 *     IopGetFileObjectExtension @ 0x1400716C0 (IopGetFileObjectExtension.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400EF678 (ObDereferenceObjectDeferDelete.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     IopQueueIrpToFileObject @ 0x140107B00 (IopQueueIrpToFileObject.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     SeQueryInformationToken @ 0x140481E90 (SeQueryInformationToken.c)
 *     PsReferencePrimaryToken @ 0x14050D730 (PsReferencePrimaryToken.c)
 *     IopCancelAlertedRequest @ 0x14058EC70 (IopCancelAlertedRequest.c)
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
  char *v8; // rsi
  PIRP v11; // rcx
  __int64 *v12; // r15
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
  struct _KTHREAD *v26; // rax
  __int16 v27; // cx
  struct _KTHREAD *v29; // rax
  struct _KTHREAD *CurrentThread; // rax
  bool v31; // bl
  void *v32; // r14
  KPROCESSOR_MODE v33; // al
  NTSTATUS v34; // eax
  PETHREAD Thread; // rax
  ULONG Flags; // eax
  __int64 FileObjectExtension; // rbx
  PIO_STATUS_BLOCK UserIosb; // rcx
  PACCESS_TOKEN v39; // rbx
  __int64 v40; // r9
  bool v41; // cl
  unsigned __int8 v42; // al
  PVOID Objecta; // [rsp+38h] [rbp-49h] BYREF
  PVOID TokenInformation; // [rsp+40h] [rbp-41h] BYREF
  __int128 *v46; // [rsp+48h] [rbp-39h] BYREF
  __int64 v47; // [rsp+50h] [rbp-31h] BYREF
  PVOID v48; // [rsp+58h] [rbp-29h] BYREF
  PVOID v49; // [rsp+60h] [rbp-21h] BYREF
  char v50[8]; // [rsp+68h] [rbp-19h] BYREF
  __int128 v51; // [rsp+70h] [rbp-11h] BYREF

  UserApcRoutine = Irp->Overlay.AsynchronousParameters.UserApcRoutine;
  v8 = Object;
  Objecta = Object;
  HIDWORD(TokenInformation) = 0;
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
    if ( IopQueueIrpToFileObject((__int64)Irp, (__int64)Object) )
    {
      HIDWORD(TokenInformation) = 1;
      goto LABEL_8;
    }
    goto LABEL_46;
  }
  if ( (Irp->Flags & 0x10) != 0
    || *((_QWORD *)Object + 22)
    || !*((_QWORD *)Object + 26)
    || (FileObjectExtension = IopGetFileObjectExtension((__int64)Object, 2, 0LL)) == 0 )
  {
LABEL_46:
    v11 = Irp;
LABEL_7:
    IopQueueThreadIrp((__int64)v11);
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
        if ( IopQueueIrpToFileObject((__int64)Irp, (__int64)Objecta) )
          break;
      }
    }
    FileObjectExtension = *(_QWORD *)(FileObjectExtension + 40);
    if ( !FileObjectExtension )
      goto LABEL_46;
  }
  Irp->UserIosb = (PIO_STATUS_BLOCK)((char *)Irp->UserIosb
                                   + *(_QWORD *)(FileObjectExtension + 24)
                                   - *(_QWORD *)FileObjectExtension);
LABEL_8:
  v12 = (__int64 *)(v8 + 208);
  v13 = (_DWORD *)*((_QWORD *)v8 + 26);
  if ( v13 && (*v13 & 4) != 0 )
  {
    LODWORD(TokenInformation) = 0;
    v39 = PsReferencePrimaryToken(KeGetCurrentThread()->ApcState.Process);
    SeQueryInformationToken(v39, TokenIsAppContainer, &TokenInformation);
    ObfDereferenceObject(v39);
    if ( (_DWORD)TokenInformation )
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
  if ( *v12 && *(_DWORD *)(v15 + 64) )
  {
    v18 = Irp->Flags & 0xFFF1FFFF;
    Irp->Flags = v18;
    v19 = *(_DWORD *)(v15 + 64) << 17;
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
    if ( Thread && ((Thread->MiscFlags & 0x400) != 0 || ((__int64)Thread[1].Queue & 0x20) != 0) )
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
    EtwActivityIdControlKernel(1, &v48);
    v40 = *((_QWORD *)&Irp->Tail.CompletionKey + 10);
    v46 = &v51;
    v51 = *(_OWORD *)(v40 + 16);
    EtwActivityIdControlKernel(2, (PVOID *)&v46);
    v23 = IofCallDriver(DeviceObject, Irp);
    v49 = v48;
    EtwActivityIdControlKernel(2, &v49);
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
    IopCompleteRequest((__int64)&Irp->Tail, (__int64)v50, &v47, (ULONG_PTR *)&Objecta, &v47);
    __writecr8(CurrentIrql);
  }
  if ( a6 )
  {
    if ( v23 == 259 )
    {
      v31 = (*((_DWORD *)v8 + 20) & 4) != 0;
      v32 = v8 + 152;
      while ( 1 )
      {
        v33 = v31 ? a5 : 0;
        v34 = KeWaitForSingleObject(v32, Executive, v33, 1u, 0LL);
        if ( v34 != 257 && v34 != 192 )
          break;
        if ( !v31 )
        {
          v8 = (char *)Objecta;
          if ( (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 1) == 0 )
          {
            v41 = 0;
            v42 = KeGetCurrentIrql();
            __writecr8(1uLL);
            if ( !*((_DWORD *)Objecta + 39) )
              v41 = Irp->Cancel == 1;
            __writecr8(v42);
            if ( !v41 )
              continue;
          }
        }
        IopCancelAlertedRequest(v32, Irp);
        break;
      }
      v23 = *((_DWORD *)v8 + 14);
    }
    _InterlockedExchange((volatile __int32 *)v8 + 29, 0);
    v25 = Objecta;
    if ( *((_DWORD *)Objecta + 28) )
      KeSetEvent((PRKEVENT)((char *)Objecta + 128), 0, 0);
    ObfDereferenceObject(v25);
    v26 = KeGetCurrentThread();
    v27 = v26->KernelApcDisable + 1;
    v26->KernelApcDisable = v27;
    if ( !v27
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v26->ApcState.ApcListHead[0].Flink != &v26->152
      && !v26->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return v23;
  }
  if ( !HIDWORD(TokenInformation) || (v23 & 0xC0000000) != 0x80000000 )
    return v23;
  return 259LL;
}
