/*
 * XREFs of RaidAdapterAcquireInterruptLock @ 0x1C0006A2C
 * Callers:
 *     RaidAdapterPostScatterGatherExecute @ 0x1C0005330 (RaidAdapterPostScatterGatherExecute.c)
 *     StorPortNotification @ 0x1C00059D0 (StorPortNotification.c)
 *     RaidAdapterFindUnit @ 0x1C0006838 (RaidAdapterFindUnit.c)
 *     StorportTimerDpc @ 0x1C0006AD0 (StorportTimerDpc.c)
 *     RaidAdapterStopAdapter @ 0x1C0008900 (RaidAdapterStopAdapter.c)
 *     RaidAdapterRestartAdapter @ 0x1C0008980 (RaidAdapterRestartAdapter.c)
 *     RaidBusEnumeratorGetLunList @ 0x1C000E3D0 (RaidBusEnumeratorGetLunList.c)
 *     RaidAdapterRemoveUnit @ 0x1C000E64C (RaidAdapterRemoveUnit.c)
 *     RaidAdapterInsertUnit @ 0x1C000F14C (RaidAdapterInsertUnit.c)
 *     RaidAdapterStartMiniport @ 0x1C0012798 (RaidAdapterStartMiniport.c)
 *     RaidpAdapterTimerDpcRoutine @ 0x1C00149D0 (RaidpAdapterTimerDpcRoutine.c)
 *     RaidAdapterAcquireStartIoLock @ 0x1C0023494 (RaidAdapterAcquireStartIoLock.c)
 *     RaidAdapterReInitialize @ 0x1C0024450 (RaidAdapterReInitialize.c)
 *     RaidAdapterRemoveNormalChildren @ 0x1C00244F8 (RaidAdapterRemoveNormalChildren.c)
 *     StorPortSynchronizeAccess @ 0x1C002A6B0 (StorPortSynchronizeAccess.c)
 * Callees:
 *     <none>
 */

KIRQL __fastcall RaidAdapterAcquireInterruptLock(__int64 a1)
{
  KIRQL v1; // bl
  __int64 v3; // rsi
  unsigned int i; // edi
  struct _KINTERRUPT *v6; // rcx

  v1 = 0;
  if ( *(_BYTE *)(a1 + 4449) )
  {
    v3 = *(_QWORD *)(a1 + 4432);
    v1 = KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(v3 + 24));
    if ( *(_DWORD *)(a1 + 4416) == 2 )
    {
      for ( i = 1; i < *(_DWORD *)(v3 + 4); ++i )
        KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(v3 + 48LL * i + 24));
    }
  }
  else
  {
    v6 = *(struct _KINTERRUPT **)(a1 + 664);
    if ( v6 )
      return KeAcquireInterruptSpinLock(v6);
  }
  return v1;
}
