/*
 * XREFs of RaidAdapterConfigureResources @ 0x1C001057C
 * Callers:
 *     RaidAdapterStartDeviceIrp @ 0x1C0010300 (RaidAdapterStartDeviceIrp.c)
 * Callees:
 *     RaidInitializeDeferredQueue @ 0x1C00106F0 (RaidInitializeDeferredQueue.c)
 *     RaInitializeBus @ 0x1C004FC4C (RaInitializeBus.c)
 *     RaidInitializeResourceList @ 0x1C004FC74 (RaidInitializeResourceList.c)
 */

__int64 __fastcall RaidAdapterConfigureResources(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r8

  result = RaidInitializeResourceList(a1 + 280);
  if ( (int)result >= 0 )
  {
    if ( (unsigned int)RaInitializeBus(a1 + 592, *(_QWORD *)(a1 + 24)) != -1073741637 || (*(_BYTE *)(a1 + 104) & 8) != 0 )
    {
      RaidInitializeDeferredQueue(a1 + 1088, *(_QWORD *)(a1 + 8), v3, 80LL, RaidAdapterDeferredRoutine);
      KeInitializeDpc((PRKDPC)(a1 + 1600), RaidpAdapterTimerDpcRoutine, *(PVOID *)(a1 + 8));
      KeInitializeDpc((PRKDPC)(a1 + 1728), RaidPauseTimerDpcRoutine, *(PVOID *)(a1 + 8));
      KeInitializeDpc((PRKDPC)(a1 + 1928), RaidCompletionDpcRoutine, *(PVOID *)(a1 + 8));
      KeInitializeDpc((PRKDPC)(a1 + 4280), RaidPauseTimerDpcRoutine, *(PVOID *)(a1 + 8));
      KeInitializeDpc((PRKDPC)(a1 + 1992), RaidAdapterBusChangeDpcRoutine, *(PVOID *)(a1 + 8));
      KeInitializeDpc((PRKDPC)(a1 + 1792), RaidAdapterRestartDpcRoutine, *(PVOID *)(a1 + 8));
      return 0LL;
    }
    else
    {
      return 3221225659LL;
    }
  }
  return result;
}
