/*
 * XREFs of RaidAdapterAcquireInterruptLock @ 0x1C000595C
 * Callers:
 *     RaidAdapterPostScatterGatherExecute @ 0x1C00043C0 (RaidAdapterPostScatterGatherExecute.c)
 *     StorPortNotification @ 0x1C0004A70 (StorPortNotification.c)
 *     RaidAdapterFindUnit @ 0x1C0005768 (RaidAdapterFindUnit.c)
 *     StorportTimerDpc @ 0x1C0005B00 (StorportTimerDpc.c)
 *     RaidAdapterStopAdapter @ 0x1C0006BA4 (RaidAdapterStopAdapter.c)
 *     RaidAdapterRestartAdapter @ 0x1C0006C24 (RaidAdapterRestartAdapter.c)
 *     RaidAdapterStartMiniport @ 0x1C000802C (RaidAdapterStartMiniport.c)
 *     RaidBusEnumeratorGetLunList @ 0x1C000C160 (RaidBusEnumeratorGetLunList.c)
 *     RaidAdapterRemoveUnit @ 0x1C000C3DC (RaidAdapterRemoveUnit.c)
 *     RaidAdapterInsertUnit @ 0x1C000CEDC (RaidAdapterInsertUnit.c)
 *     RaidpAdapterTimerDpcRoutine @ 0x1C0012980 (RaidpAdapterTimerDpcRoutine.c)
 *     RaidAdapterAcquireStartIoLock @ 0x1C00210D8 (RaidAdapterAcquireStartIoLock.c)
 *     RaidAdapterReInitialize @ 0x1C0021EAC (RaidAdapterReInitialize.c)
 *     RaidAdapterRemoveNormalChildren @ 0x1C0021F54 (RaidAdapterRemoveNormalChildren.c)
 *     StorPortSynchronizeAccess @ 0x1C0028440 (StorPortSynchronizeAccess.c)
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
