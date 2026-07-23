/*
 * XREFs of PopSpoilBatteryEstimate @ 0x140534BC4
 * Callers:
 *     PopSpoilEstimatesOnPowerStateTransitionWorker @ 0x140534BB8 (PopSpoilEstimatesOnPowerStateTransitionWorker.c)
 *     PopUpdateConsoleDisplayState @ 0x140547D14 (PopUpdateConsoleDisplayState.c)
 * Callees:
 *     DbgPrintEx @ 0x140084C90 (DbgPrintEx.c)
 *     PopBatteryQueueWork @ 0x140131E08 (PopBatteryQueueWork.c)
 */

void __fastcall PopSpoilBatteryEstimate(int a1, char a2)
{
  unsigned int v4; // eax
  const char *v5; // r9

  if ( a1 < 2 )
  {
    v4 = (unsigned __int8)(1 << a1);
    if ( a2 )
      _InterlockedOr(&PopEstimateSpoilerMask, v4);
    else
      _InterlockedAnd(&PopEstimateSpoilerMask, ~v4);
    PopBatteryQueueWork(4u);
    v5 = "indefinitely";
    if ( !a2 )
      v5 = "temporarily";
    DbgPrintEx(0x92u, 3u, "Battery estimates spoiled %s by %d; mask=%x\n", v5, a1, PopEstimateSpoilerMask);
  }
}
