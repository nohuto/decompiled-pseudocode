/*
 * XREFs of PopBatteryEstimatesSpoiled @ 0x140636AA4
 * Callers:
 *     PopBatteryWorker @ 0x1404F9510 (PopBatteryWorker.c)
 *     PopEstimateChargeTime @ 0x14063727C (PopEstimateChargeTime.c)
 * Callees:
 *     DbgPrintEx @ 0x1400E6934 (DbgPrintEx.c)
 */

char PopBatteryEstimatesSpoiled()
{
  char v0; // bl

  if ( (unsigned __int64)PopEstimateSpoiledUntilTime < MEMORY[0xFFFFF78000000008] )
    return 0;
  v0 = 1;
  DbgPrintEx(0x92u, 3u, "Battery estimate suppressed\n");
  return v0;
}
