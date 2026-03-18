/*
 * XREFs of PopCheckForDeepSleep @ 0x1401F3C40
 * Callers:
 *     PoFxSendSystemLatencyUpdate @ 0x1400970CC (PoFxSendSystemLatencyUpdate.c)
 *     PpmCheckPreConditionsForDeepSleep @ 0x1401E6E34 (PpmCheckPreConditionsForDeepSleep.c)
 * Callees:
 *     <none>
 */

bool PopCheckForDeepSleep()
{
  char v0; // cl

  v0 = 0;
  if ( PopDeepSleepIsEnabled
    && PopDeepSleepIsEngaged
    && !PopPendingSetPowerDeviceIrps
    && !PopPendingPowerSettingUpdates
    && !dword_1402DEB0C )
  {
    return byte_1402DE081 == 0;
  }
  return v0;
}
