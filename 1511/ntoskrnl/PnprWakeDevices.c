/*
 * XREFs of PnprWakeDevices @ 0x1403B0D18
 * Callers:
 *     PnprQuiesceWorker @ 0x1403B0C00 (PnprQuiesceWorker.c)
 *     PnpReplacePartitionUnit @ 0x14060ECC8 (PnpReplacePartitionUnit.c)
 * Callees:
 *     PoBroadcastSystemState @ 0x1403A49B4 (PoBroadcastSystemState.c)
 *     PnprGetMillisecondCounter @ 0x1403AF924 (PnprGetMillisecondCounter.c)
 *     PoUnblockConsoleSwitch @ 0x1404F551C (PoUnblockConsoleSwitch.c)
 *     PoEndPowerStateTasks @ 0x1404F553C (PoEndPowerStateTasks.c)
 *     PoClearBroadcast @ 0x1404F8D9C (PoClearBroadcast.c)
 *     PoEndPartitionReplace @ 0x1406364EC (PoEndPartitionReplace.c)
 */

__int64 __fastcall PnprWakeDevices(__int64 a1)
{
  int MillisecondCounter; // eax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  MillisecondCounter = PnprGetMillisecondCounter(0);
  v3 = PnprContext;
  *(_DWORD *)(PnprContext + 10792) = MillisecondCounter;
  *(_BYTE *)(a1 + 29) = 1;
  PoBroadcastSystemState(a1 + 4, v3, v4, v5);
  PoClearBroadcast();
  PoEndPartitionReplace(a1 + 36, *(unsigned int *)(a1 + 32));
  PoEndPowerStateTasks(a1 + 36);
  PoUnblockConsoleSwitch(a1 + 36, *(unsigned int *)(a1 + 32));
  *(_DWORD *)(PnprContext + 10796) = PnprGetMillisecondCounter(0);
  return 0LL;
}
