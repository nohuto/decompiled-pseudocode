/*
 * XREFs of PopFanWorker @ 0x1406BB3D4
 * Callers:
 *     <none>
 * Callees:
 *     IofCallDriver @ 0x140048540 (IofCallDriver.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     DbgPrint @ 0x140131E68 (DbgPrint.c)
 *     PopPrepareIoctl @ 0x1405C41B0 (PopPrepareIoctl.c)
 *     PopFanUpdateRunningState @ 0x1406BB248 (PopFanUpdateRunningState.c)
 */

void __fastcall PopFanWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v5; // rdi
  IRP *v6; // r15
  struct _DEVICE_OBJECT *v7; // r12
  char v9; // r14
  char v10; // bp
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  int Status; // eax
  char v18; // al
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  signed __int64 v20; // rax
  signed __int64 v21; // rcx
  unsigned __int64 v22; // rtt
  struct _KTHREAD *v23; // rcx
  __int16 v24; // ax

  CurrentThread = KeGetCurrentThread();
  v5 = (unsigned __int64 *)(a1 + 112);
  v6 = *(IRP **)(a1 + 56);
  v7 = *(struct _DEVICE_OBJECT **)(a1 + 48);
  v9 = 0;
  v10 = 0;
  --CurrentThread->KernelApcDisable;
  v11 = KeAbPreAcquire(a1 + 112, 0LL, 0LL, a4);
  v13 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5, v11, (ULONG_PTR)v5, v12);
  if ( v13 )
    *(_BYTE *)(v13 + 26) |= 1u;
  v5[1] = (unsigned __int64)KeGetCurrentThread();
  if ( *(_BYTE *)(a1 + 152) )
  {
    if ( *(_BYTE *)(a1 + 72) )
    {
      v10 = 1;
      *(_BYTE *)(a1 + 72) = 0;
      v9 = 0;
    }
    if ( (PoDebug & 0x20) != 0 )
      DbgPrint("Fan %p is being removed\n", (const void *)a1);
LABEL_10:
    KeSetEvent((PRKEVENT)(a1 + 128), 0, 0);
    goto LABEL_20;
  }
  Status = v6->IoStatus.Status;
  if ( Status < 0 )
  {
    if ( Status != -1073741667 && Status != -1073741536 )
    {
      if ( (PoDebug & 1) != 0 )
        DbgPrint("Fan %p: unexpected error %x\n", (const void *)a1, v6->IoStatus.Status);
      if ( *(_BYTE *)(a1 + 72) )
      {
        v10 = 1;
        *(_BYTE *)(a1 + 72) = 0;
        v9 = 0;
      }
      goto LABEL_10;
    }
  }
  else
  {
    if ( !*(_BYTE *)(a1 + 72) )
    {
      v18 = *(_BYTE *)(a1 + 68);
      if ( !v18 )
        goto LABEL_17;
      goto LABEL_16;
    }
    v18 = *(_BYTE *)(a1 + 68);
    if ( !v18 )
    {
LABEL_16:
      v10 = 1;
      *(_BYTE *)(a1 + 72) = v18;
      v9 = v18;
    }
  }
LABEL_17:
  PopPrepareIoctl(*(IRP **)(a1 + 56), 0x294240u, 1, (struct _IRP *)(a1 + 64), 8u, 8u);
  if ( (PoDebug & 0x20) != 0 )
    DbgPrint("Fan %p: Sending Query Status - Stamp = 0x%x\n", (const void *)a1, *(_DWORD *)(a1 + 64));
  CurrentStackLocation = v6->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)PopFanIrpComplete;
  CurrentStackLocation[-1].Context = (PVOID)a1;
  CurrentStackLocation[-1].Control = -32;
  IofCallDriver(v7, v6);
LABEL_20:
  if ( v10 )
    PopFanUpdateRunningState(v9, v14, v15, v16);
  if ( v5[1] )
    v5[1] = 0LL;
  _m_prefetchw(v5);
  v20 = *v5;
  v21 = *v5 - 16;
  if ( (*v5 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v21 = 0LL;
  if ( (v20 & 2) != 0 || (v22 = *v5, v22 != _InterlockedCompareExchange64((volatile signed __int64 *)v5, v21, v20)) )
    ExfReleasePushLock(v5, v14);
  KeAbPostRelease((ULONG_PTR)v5);
  v23 = KeGetCurrentThread();
  v24 = v23->KernelApcDisable + 1;
  v23->KernelApcDisable = v24;
  if ( !v24
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v23->ApcState.ApcListHead[0].Flink != &v23->152
    && !v23->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
