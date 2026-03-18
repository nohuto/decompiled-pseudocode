/*
 * XREFs of IoRaiseHardError @ 0x1401BAE90
 * Callers:
 *     VerifierIoRaiseHardError @ 0x1406C07BC (VerifierIoRaiseHardError.c)
 * Callees:
 *     KeInitializeApc @ 0x14002C320 (KeInitializeApc.c)
 *     KeInsertQueueApc @ 0x1400313A0 (KeInsertQueueApc.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KeAreApcsDisabled @ 0x140099410 (KeAreApcsDisabled.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

void __stdcall IoRaiseHardError(PIRP Irp, PVPB Vpb, PDEVICE_OBJECT RealDeviceObject)
{
  PVPB v4; // r15
  int v6; // ecx
  PETHREAD Thread; // rsi
  ULONG Flags; // eax
  BOOLEAN v9; // al
  PVOID PoolWithTag; // r14
  bool v11; // r14
  _DWORD *Teb; // r13
  _KPROCESS *Process; // r14
  char v14; // r15
  int v15; // eax
  struct _WORK_QUEUE_ITEM *v16; // rax
  $D4FCF91253F76F57393CBFE908971F67 v17; // [rsp+58h] [rbp-60h] BYREF
  PVPB v18; // [rsp+C8h] [rbp+10h]

  v18 = Vpb;
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
    v9 = KeAreApcsDisabled();
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
      LOBYTE(Vpb) = 1;
      pIofCompleteRequest(Irp, Vpb);
      return;
    }
  }
  if ( v6 && (Thread->MiscFlags & 0x400) == 0 )
  {
    v11 = 1;
    if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&Thread[1].WaitStatus) )
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
        KiStackAttachProcess(Process, 0LL, (__int64)&v17);
      }
      v15 = Teb[1452];
      if ( Process[1].ActiveProcessors.Bitmap[7] )
        v15 |= Teb[3018];
      v11 = (v15 & 0x10) != 0;
      if ( v14 )
        KiUnstackDetachProcess(&v17, 0LL);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&Thread[1].WaitStatus);
      v4 = v18;
    }
    if ( v11 )
    {
      Irp->IoStatus.Information = 0LL;
      goto LABEL_4;
    }
  }
  v16 = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x72456F49u);
  if ( !v16 )
    goto LABEL_4;
  v16->WorkerRoutine = (void (__fastcall *)(void *))IopStartApcHardError;
  v16->Parameter = v16;
  v16->List.Flink = 0LL;
  v16[1].List.Flink = (struct _LIST_ENTRY *)Irp;
  v16[1].List.Blink = (struct _LIST_ENTRY *)v4;
  v16[1].WorkerRoutine = (void (__fastcall *)(void *))RealDeviceObject;
  ExQueueWorkItem(v16, CriticalWorkQueue);
}
