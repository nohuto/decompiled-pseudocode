/*
 * XREFs of PopBatteryEstimatesSpoiled @ 0x14066EE80
 * Callers:
 *     PopBatteryWorker @ 0x140543B90 (PopBatteryWorker.c)
 *     PopEstimateChargeTime @ 0x14066F6A0 (PopEstimateChargeTime.c)
 * Callees:
 *     DbgPrintEx @ 0x140081B0C (DbgPrintEx.c)
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
