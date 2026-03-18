/*
 * XREFs of xHalSetSystemInformation @ 0x14054F598
 * Callers:
 *     KiSetIntervalWorker @ 0x140103D7C (KiSetIntervalWorker.c)
 *     MiInitializeNumaRanges @ 0x140132088 (MiInitializeNumaRanges.c)
 *     HvlStartBootLogicalProcessors @ 0x140136B70 (HvlStartBootLogicalProcessors.c)
 *     BapdRecordFirmwareBootStats @ 0x1403A6C88 (BapdRecordFirmwareBootStats.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x1403B2980 (PopDiagTraceFirmwareS3Stats.c)
 *     ExpQuerySystemInformation @ 0x140472CC0 (ExpQuerySystemInformation.c)
 *     EtwpAddLogHeader @ 0x1404C79EC (EtwpAddLogHeader.c)
 *     KeQueryIntervalProfile @ 0x1404E3464 (KeQueryIntervalProfile.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1406627B0 (EtwQueryPerformanceTraceInformation.c)
 *     EtwpLogPmcCounterRundown @ 0x1406655E0 (EtwpLogPmcCounterRundown.c)
 *     EtwpSampledProfileRunDown @ 0x140666490 (EtwpSampledProfileRunDown.c)
 *     ExpProfileCreate @ 0x1406752BC (ExpProfileCreate.c)
 *     sub_14072EAFC @ 0x14072EAFC (sub_14072EAFC.c)
 *     KiIntSteerInit @ 0x14074EC6C (KiIntSteerInit.c)
 *     PoFxRegisterDebugger @ 0x140766334 (PoFxRegisterDebugger.c)
 *     MiInitializeCacheOverrides @ 0x14076EF1C (MiInitializeCacheOverrides.c)
 *     KeNumaInitialize @ 0x140771FE4 (KeNumaInitialize.c)
 *     MiInitializeChannelRanges @ 0x14077235C (MiInitializeChannelRanges.c)
 *     HvlpInitializeIum @ 0x1407829C0 (HvlpInitializeIum.c)
 *     BgkInitialize @ 0x140787C58 (BgkInitialize.c)
 * Callees:
 *     <none>
 */

__int64 xHalSetSystemInformation()
{
  return 3221225800LL;
}
