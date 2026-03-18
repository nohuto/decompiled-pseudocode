/*
 * XREFs of PnprWakeDevices @ 0x1404013F4
 * Callers:
 *     PnprQuiesceWorker @ 0x1404012DC (PnprQuiesceWorker.c)
 *     PnpReplacePartitionUnit @ 0x14068E9D4 (PnpReplacePartitionUnit.c)
 * Callees:
 *     PoBroadcastSystemState @ 0x1403EE2D4 (PoBroadcastSystemState.c)
 *     PnprGetMillisecondCounter @ 0x1403FFF10 (PnprGetMillisecondCounter.c)
 *     PoClearBroadcast @ 0x140565E40 (PoClearBroadcast.c)
 *     PoUnblockConsoleSwitch @ 0x1405699AC (PoUnblockConsoleSwitch.c)
 *     PoEndPowerStateTasks @ 0x1405699CC (PoEndPowerStateTasks.c)
 *     PoEndPartitionReplace @ 0x1406B5DFC (PoEndPartitionReplace.c)
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
