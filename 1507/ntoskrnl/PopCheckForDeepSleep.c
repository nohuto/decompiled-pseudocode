/*
 * XREFs of PopCheckForDeepSleep @ 0x140241D1C
 * Callers:
 *     PoFxSendSystemLatencyUpdate @ 0x1400ED21C (PoFxSendSystemLatencyUpdate.c)
 *     PpmCheckPreConditionsForDeepSleep @ 0x1402340E0 (PpmCheckPreConditionsForDeepSleep.c)
 * Callees:
 *     <none>
 */

bool PopCheckForDeepSleep()
{
  char v0; // cl

  v0 = 0;
  if ( PopDeepSleepIsEnabled && PopDeepSleepIsEngaged )
    return PopPendingSetPowerDeviceIrps == 0;
  return v0;
}
