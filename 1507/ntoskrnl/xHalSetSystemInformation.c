/*
 * XREFs of xHalSetSystemInformation @ 0x1405C733C
 * Callers:
 *     KiSetIntervalWorker @ 0x140133F34 (KiSetIntervalWorker.c)
 *     HvlStartBootLogicalProcessors @ 0x140163754 (HvlStartBootLogicalProcessors.c)
 *     MiInitializeNumaRanges @ 0x1401639AC (MiInitializeNumaRanges.c)
 *     BapdRecordFirmwareBootStats @ 0x1403F66C8 (BapdRecordFirmwareBootStats.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x140403C20 (PopDiagTraceFirmwareS3Stats.c)
 *     ExpQuerySystemInformation @ 0x14042E880 (ExpQuerySystemInformation.c)
 *     EtwpAddLogHeader @ 0x1404ABC40 (EtwpAddLogHeader.c)
 *     KeQueryIntervalProfile @ 0x1405605E4 (KeQueryIntervalProfile.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1406E58C8 (EtwQueryPerformanceTraceInformation.c)
 *     EtwpLogPmcCounterRundown @ 0x1406E86D4 (EtwpLogPmcCounterRundown.c)
 *     EtwpSampledProfileRunDown @ 0x1406E9678 (EtwpSampledProfileRunDown.c)
 *     ExpProfileCreate @ 0x1406F9A1C (ExpProfileCreate.c)
 *     sub_14079BAE4 @ 0x14079BAE4 (sub_14079BAE4.c)
 *     Phase1InitializationDiscard @ 0x1407D146C (Phase1InitializationDiscard.c)
 *     MmInitNucleus @ 0x1407D42F4 (MmInitNucleus.c)
 *     MiInitializeBootDefaults @ 0x1407E29A0 (MiInitializeBootDefaults.c)
 *     KiIntSteerInit @ 0x1407E6CE4 (KiIntSteerInit.c)
 *     KeNumaInitialize @ 0x1407E8A80 (KeNumaInitialize.c)
 *     PoFxRegisterDebugger @ 0x1407E8DD4 (PoFxRegisterDebugger.c)
 *     MiInitializeChannelRanges @ 0x1407E8EE0 (MiInitializeChannelRanges.c)
 *     BgkInitialize @ 0x1407FD810 (BgkInitialize.c)
 * Callees:
 *     <none>
 */

__int64 xHalSetSystemInformation()
{
  return 3221225800LL;
}
