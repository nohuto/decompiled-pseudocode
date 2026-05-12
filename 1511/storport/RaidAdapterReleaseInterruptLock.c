/*
 * XREFs of RaidAdapterReleaseInterruptLock @ 0x1C00068A8
 * Callers:
 *     RaidAdapterPostScatterGatherExecute @ 0x1C0005330 (RaidAdapterPostScatterGatherExecute.c)
 *     StorPortNotification @ 0x1C00059D0 (StorPortNotification.c)
 *     RaidAdapterFindUnit @ 0x1C0006838 (RaidAdapterFindUnit.c)
 *     StorportTimerDpc @ 0x1C0006AD0 (StorportTimerDpc.c)
 *     RaidAdapterStopAdapter @ 0x1C0008900 (RaidAdapterStopAdapter.c)
 *     RaidAdapterRestartAdapter @ 0x1C0008980 (RaidAdapterRestartAdapter.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C000B7E8 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaidBusEnumeratorGetLunList @ 0x1C000E3D0 (RaidBusEnumeratorGetLunList.c)
 *     RaidAdapterRemoveUnit @ 0x1C000E64C (RaidAdapterRemoveUnit.c)
 *     RaidAdapterInsertUnit @ 0x1C000F14C (RaidAdapterInsertUnit.c)
 *     RaidAdapterStartMiniport @ 0x1C0012798 (RaidAdapterStartMiniport.c)
 *     RaidInitializePerfOptsPassive @ 0x1C00129A0 (RaidInitializePerfOptsPassive.c)
 *     RaidpAdapterTimerDpcRoutine @ 0x1C00149D0 (RaidpAdapterTimerDpcRoutine.c)
 *     RaidAdapterReInitialize @ 0x1C0024450 (RaidAdapterReInitialize.c)
 *     RaidAdapterRemoveNormalChildren @ 0x1C00244F8 (RaidAdapterRemoveNormalChildren.c)
 *     RaidAdapterResetBus @ 0x1C002492C (RaidAdapterResetBus.c)
 *     StorPortSynchronizeAccess @ 0x1C002A6B0 (StorPortSynchronizeAccess.c)
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
