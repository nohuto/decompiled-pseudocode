/*
 * XREFs of IoRaiseHardError @ 0x1401F60B8
 * Callers:
 *     VerifierIoRaiseHardError @ 0x140741FB0 (VerifierIoRaiseHardError.c)
 * Callees:
 *     KeInsertQueueApc @ 0x14000CF3C (KeInsertQueueApc.c)
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     KeInitializeApc @ 0x1400215A8 (KeInitializeApc.c)
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

void __stdcall IoRaiseHardError(PIRP Irp, PVPB Vpb, PDEVICE_OBJECT RealDeviceObject)
{
  PVPB v4; // r15
  BOOL v6; // ecx
  PETHREAD Thread; // rsi
  ULONG Flags; // eax
  bool v9; // al
  PVOID PoolWithTag; // r14
  unsigned __int64 v11; // rtt
  _DWORD *Teb; // r13
  _KPROCESS *Process; // r15
  char v14; // r14
  int v15; // eax
  unsigned __int64 v16; // rtt
  struct _WORK_QUEUE_ITEM *v17; // rax
  bool v18; // [rsp+40h] [rbp-88h]
  _BYTE v19[48]; // [rsp+60h] [rbp-68h] BYREF

  v4 = Vpb;
  v6 = 0;
  Thread = Irp->Tail.Overlay.Thread;
  Flags = Irp->Flags;
  if ( (*((_DWORD *)&Thread[1].SwapListEntry + 3) & 0x10) != 0 )
  {
    if ( (Flags & 0x40) != 0 )
      Irp->IoStatus.Information = 0LL;
    goto LABEL_4;
  }
  if ( (Flags & 0x3FF1FFFF) != 0x43 && Irp->Tail.Overlay.CurrentStackLocation->MajorFunction != 18 )
  {
    v9 = KeGetCurrentThread()->WaitBlock[3].SpareLong != 0;
    v6 = v9;
    if ( !v9 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x4350414Bu);
      if ( PoolWithTag )
      {
        KeInitializeApc(
          (__int64)PoolWithTag,
          (__int64)Thread,
          Irp->ApcEnvironment,
          (__int64)PspQueueApcSpecialApc,
          (__int64)IopAbortRequest,
          (__int64)IopRaiseHardError,
          0,
          (__int64)Irp);
        KeInsertQueueApc((__int64)PoolWithTag, (__int64)v4, (__int64)RealDeviceObject, 0);
        return;
      }
LABEL_4:
      pIofCompleteRequest(Irp, 1);
      return;
    }
  }
  if ( v6 && (Thread->MiscFlags & 0x400) == 0 )
  {
    v18 = 1;
    _m_prefetchw((const void *)&Thread[1].WaitStatus);
    v11 = Thread[1].WaitStatus & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v11 == _InterlockedCompareExchange64(&Thread[1].WaitStatus, v11 + 2, v11)
      || ExfAcquireRundownProtection((PEX_RUNDOWN_REF)&Thread[1].WaitStatus) )
    {
      Teb = Thread->Teb;
      Process = Thread->Process;
      if ( Process == KeGetCurrentThread()->ApcState.Process )
      {
        v14 = 0;
      }
      else
      {
        v14 = 1;
        KiStackAttachProcess(Process, 0, (__int64)v19);
      }
      v15 = Teb[1452];
      if ( Process[1].ActiveProcessors.Bitmap[7] )
        v15 |= Teb[3018];
      v18 = (v15 & 0x10) != 0;
      if ( v14 )
        KiUnstackDetachProcess((struct _KTHREAD *)v19, 0);
      _m_prefetchw((const void *)&Thread[1].WaitStatus);
      v16 = Thread[1].WaitStatus & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v16 != _InterlockedCompareExchange64(&Thread[1].WaitStatus, v16 - 2, v16) )
        ExfReleaseRundownProtection((PEX_RUNDOWN_REF)&Thread[1].WaitStatus);
      v4 = Vpb;
    }
    if ( v18 )
    {
      Irp->IoStatus.Information = 0LL;
      goto LABEL_4;
    }
  }
  v17 = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x72456F49u);
  if ( !v17 )
    goto LABEL_4;
  v17->WorkerRoutine = (void (__fastcall *)(void *))IopStartApcHardError;
  v17->Parameter = v17;
  v17->List.Flink = 0LL;
  v17[1].List.Flink = (struct _LIST_ENTRY *)Irp;
  v17[1].List.Blink = (struct _LIST_ENTRY *)v4;
  v17[1].WorkerRoutine = (void (__fastcall *)(void *))RealDeviceObject;
  ExQueueWorkItem(v17, CriticalWorkQueue);
}
