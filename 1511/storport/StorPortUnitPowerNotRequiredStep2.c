/*
 * XREFs of StorPortUnitPowerNotRequiredStep2 @ 0x1C002EFAC
 * Callers:
 *     StorPortUnitPowerNotRequiredStep1 @ 0x1C002EED0 (StorPortUnitPowerNotRequiredStep1.c)
 *     StorPortUnitPowerNotRequiredStep2Passive @ 0x1C002F1E0 (StorPortUnitPowerNotRequiredStep2Passive.c)
 * Callees:
 *     RaidAdapterPoFxIdleComponent @ 0x1C00078B0 (RaidAdapterPoFxIdleComponent.c)
 *     Template_pqcccq @ 0x1C002F4C8 (Template_pqcccq.c)
 */

void __fastcall StorPortUnitPowerNotRequiredStep2(char *Context)
{
  char v2; // r14
  __int64 v3; // rax
  int v4; // edx
  __int64 v5; // rcx
  char v6; // al
  NTSTATUS v7; // esi
  __int64 v8; // rax
  int v9; // r8d
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-38h] BYREF

  v2 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 4, &LockHandle);
  v3 = *((_QWORD *)Context + 182);
  v4 = *(_DWORD *)(v3 + 32);
  if ( (v4 & 4) != 0 && (*(_DWORD *)(*(_QWORD *)(v3 + 8) + 12LL) & 2) != 0 )
  {
    KeCancelTimer((PKTIMER)(Context + 664));
    Context[145] |= 0x20u;
    v5 = *((_QWORD *)Context + 3);
    v6 = Context[145];
    if ( *(_QWORD *)(v5 + 5088) && (v6 & 8) != 0 )
    {
      Context[145] = v6 & 0xF7;
      RaidAdapterPoFxIdleComponent(v5, 0LL, 0LL);
    }
    goto LABEL_16;
  }
  if ( *((_DWORD *)Context + 47) != 1 )
  {
LABEL_16:
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    *((_QWORD *)Context + 216) = MEMORY[0xFFFFF78000000008];
    v8 = *((_QWORD *)Context + 182);
    if ( *(char *)(*((_QWORD *)Context + 3) + 108LL) >= 0 )
    {
      *(_DWORD *)(v8 + 32) &= ~0x20u;
    }
    else
    {
      *(_DWORD *)(v8 + 32) |= 0x20u;
      if ( !*((_QWORD *)Context + 213) )
        *((_QWORD *)Context + 213) = *((_QWORD *)Context + 216);
    }
    PoFxCompleteDevicePowerNotRequired(**((_QWORD **)Context + 182));
    if ( StorEtwLoggingEnabled )
    {
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
        Template_pqcccq(
          *((_QWORD *)Context + 3),
          (unsigned int)&EventUnitPowerNotRequiredStop,
          v9,
          **((_QWORD **)Context + 182),
          *(_DWORD *)(*((_QWORD *)Context + 3) + 56LL),
          Context[88],
          Context[89],
          Context[90],
          v2);
    }
    return;
  }
  if ( (v4 & 1) == 0 )
  {
    v7 = 0;
    goto LABEL_13;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( !KeGetCurrentIrql() )
  {
    v7 = PoRequestPowerIrp(
           *((PDEVICE_OBJECT *)Context + 1),
           0,
           (POWER_STATE)1,
           (PREQUEST_POWER_COMPLETE)StorPortUnitPoFxWaitWakeCompletion,
           Context,
           (PIRP *)(*((_QWORD *)Context + 182) + 64LL));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 4, &LockHandle);
LABEL_13:
    if ( v7 >= 0
      && PoRequestPowerIrp(
           *((PDEVICE_OBJECT *)Context + 1),
           2u,
           (POWER_STATE)4,
           (PREQUEST_POWER_COMPLETE)StorPortUnitPoFxD3Completion,
           Context,
           0LL) == 259 )
    {
      Context[145] |= 1u;
      v2 = 1;
      _InterlockedExchange((volatile __int32 *)Context + 369, 0);
    }
    goto LABEL_16;
  }
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)Context + 404, 1, 0) )
    IoQueueWorkItem(
      *((PIO_WORKITEM *)Context + 200),
      StorPortUnitPowerNotRequiredStep2Passive,
      DelayedWorkQueue,
      Context);
}
