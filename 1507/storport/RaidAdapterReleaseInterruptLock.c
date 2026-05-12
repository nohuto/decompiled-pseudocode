/*
 * XREFs of RaidAdapterReleaseInterruptLock @ 0x1C00057D8
 * Callers:
 *     RaidAdapterPostScatterGatherExecute @ 0x1C00043C0 (RaidAdapterPostScatterGatherExecute.c)
 *     StorPortNotification @ 0x1C0004A70 (StorPortNotification.c)
 *     RaidAdapterFindUnit @ 0x1C0005768 (RaidAdapterFindUnit.c)
 *     StorportTimerDpc @ 0x1C0005B00 (StorportTimerDpc.c)
 *     RaidAdapterStopAdapter @ 0x1C0006BA4 (RaidAdapterStopAdapter.c)
 *     RaidAdapterRestartAdapter @ 0x1C0006C24 (RaidAdapterRestartAdapter.c)
 *     RaidAdapterStartMiniport @ 0x1C000802C (RaidAdapterStartMiniport.c)
 *     RaidInitializePerfOptsPassive @ 0x1C0008230 (RaidInitializePerfOptsPassive.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C00095D4 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaidBusEnumeratorGetLunList @ 0x1C000C160 (RaidBusEnumeratorGetLunList.c)
 *     RaidAdapterRemoveUnit @ 0x1C000C3DC (RaidAdapterRemoveUnit.c)
 *     RaidAdapterInsertUnit @ 0x1C000CEDC (RaidAdapterInsertUnit.c)
 *     RaidpAdapterTimerDpcRoutine @ 0x1C0012980 (RaidpAdapterTimerDpcRoutine.c)
 *     RaidAdapterReInitialize @ 0x1C0021EAC (RaidAdapterReInitialize.c)
 *     RaidAdapterRemoveNormalChildren @ 0x1C0021F54 (RaidAdapterRemoveNormalChildren.c)
 *     RaidAdapterResetBus @ 0x1C00223E8 (RaidAdapterResetBus.c)
 *     StorPortSynchronizeAccess @ 0x1C0028440 (StorPortSynchronizeAccess.c)
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
