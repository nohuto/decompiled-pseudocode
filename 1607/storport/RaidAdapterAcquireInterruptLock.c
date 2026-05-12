/*
 * XREFs of RaidAdapterAcquireInterruptLock @ 0x1C0002EC4
 * Callers:
 *     StorPortNotification @ 0x1C0002580 (StorPortNotification.c)
 *     RaidAdapterFindUnit @ 0x1C0002BC8 (RaidAdapterFindUnit.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x1C0005790 (RaidAdapterPostScatterGatherExecute.c)
 *     StorportTimerDpc @ 0x1C0009610 (StorportTimerDpc.c)
 *     RaidAdapterRestartAdapter @ 0x1C000A914 (RaidAdapterRestartAdapter.c)
 *     RaidAdapterStopAdapter @ 0x1C000CAC8 (RaidAdapterStopAdapter.c)
 *     RaidAdapterStartMiniport @ 0x1C000DA54 (RaidAdapterStartMiniport.c)
 *     RaidBusEnumeratorGetLunList @ 0x1C00123A0 (RaidBusEnumeratorGetLunList.c)
 *     RaidAdapterRemoveUnit @ 0x1C0012600 (RaidAdapterRemoveUnit.c)
 *     RaidAdapterInsertUnit @ 0x1C00132B4 (RaidAdapterInsertUnit.c)
 *     RaidAdapterAcquireStartIoLock @ 0x1C0019FB4 (RaidAdapterAcquireStartIoLock.c)
 *     RaidAdapterReInitialize @ 0x1C002783C (RaidAdapterReInitialize.c)
 *     RaidAdapterRemoveNormalChildren @ 0x1C00278E4 (RaidAdapterRemoveNormalChildren.c)
 *     StorPortSynchronizeAccess @ 0x1C002E360 (StorPortSynchronizeAccess.c)
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
