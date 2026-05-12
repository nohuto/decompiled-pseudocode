/*
 * XREFs of RaidAdapterReleaseInterruptLock @ 0x1C0002CE0
 * Callers:
 *     StorPortNotification @ 0x1C0002580 (StorPortNotification.c)
 *     RaidAdapterFindUnit @ 0x1C0002BC8 (RaidAdapterFindUnit.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x1C0005790 (RaidAdapterPostScatterGatherExecute.c)
 *     StorportTimerDpc @ 0x1C0009610 (StorportTimerDpc.c)
 *     RaidAdapterRestartAdapter @ 0x1C000A914 (RaidAdapterRestartAdapter.c)
 *     RaidAdapterStopAdapter @ 0x1C000CAC8 (RaidAdapterStopAdapter.c)
 *     RaidAdapterStartMiniport @ 0x1C000DA54 (RaidAdapterStartMiniport.c)
 *     RaidInitializePerfOptsPassive @ 0x1C000DC5C (RaidInitializePerfOptsPassive.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C000FB0C (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaidBusEnumeratorGetLunList @ 0x1C00123A0 (RaidBusEnumeratorGetLunList.c)
 *     RaidAdapterRemoveUnit @ 0x1C0012600 (RaidAdapterRemoveUnit.c)
 *     RaidAdapterInsertUnit @ 0x1C00132B4 (RaidAdapterInsertUnit.c)
 *     RaidAdapterReInitialize @ 0x1C002783C (RaidAdapterReInitialize.c)
 *     RaidAdapterRemoveNormalChildren @ 0x1C00278E4 (RaidAdapterRemoveNormalChildren.c)
 *     RaidAdapterResetBus @ 0x1C0027CB0 (RaidAdapterResetBus.c)
 *     RaidpAdapterTimerDpcRoutine @ 0x1C002A4B0 (RaidpAdapterTimerDpcRoutine.c)
 *     StorPortSynchronizeAccess @ 0x1C002E360 (StorPortSynchronizeAccess.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidAdapterReleaseInterruptLock(__int64 a1, KIRQL a2)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  PKINTERRUPT *v5; // r14
  struct _KINTERRUPT *v6; // rcx

  if ( *(_BYTE *)(a1 + 4449) )
  {
    v3 = *(_QWORD *)(a1 + 4432);
    if ( *(_DWORD *)(a1 + 4416) == 2 )
    {
      v4 = *(_DWORD *)(v3 + 4) - 1;
      if ( *(_DWORD *)(v3 + 4) != 1 )
      {
        v5 = (PKINTERRUPT *)(48LL * v4 + v3 + 24);
        do
        {
          KeReleaseInterruptSpinLock(*v5, *(_BYTE *)v3);
          v5 -= 6;
          --v4;
        }
        while ( v4 );
      }
    }
    v6 = *(struct _KINTERRUPT **)(v3 + 24);
    goto LABEL_7;
  }
  v6 = *(struct _KINTERRUPT **)(a1 + 664);
  if ( v6 )
LABEL_7:
    KeReleaseInterruptSpinLock(v6, a2);
}
