/*
 * XREFs of xHalSetSystemInformation @ 0x140581DF0
 * Callers:
 *     MiInitializeNumaRanges @ 0x1400B3A90 (MiInitializeNumaRanges.c)
 *     KiSetIntervalWorker @ 0x14010F884 (KiSetIntervalWorker.c)
 *     HvlStartBootLogicalProcessors @ 0x140139CA4 (HvlStartBootLogicalProcessors.c)
 *     BapdRecordFirmwareBootStats @ 0x1403D316C (BapdRecordFirmwareBootStats.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x1403DF66C (PopDiagTraceFirmwareS3Stats.c)
 *     ExpQuerySystemInformation @ 0x1404144E0 (ExpQuerySystemInformation.c)
 *     EtwpAddLogHeader @ 0x1404948D8 (EtwpAddLogHeader.c)
 *     KeQueryIntervalProfile @ 0x14052A810 (KeQueryIntervalProfile.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1406A3390 (EtwQueryPerformanceTraceInformation.c)
 *     EtwpLogPmcCounterRundown @ 0x1406A710C (EtwpLogPmcCounterRundown.c)
 *     EtwpSampledProfileRunDown @ 0x1406A8034 (EtwpSampledProfileRunDown.c)
 *     ExpProfileCreate @ 0x1406B7D44 (ExpProfileCreate.c)
 *     sub_140778D9C @ 0x140778D9C (sub_140778D9C.c)
 *     MiInitializeCacheOverrides @ 0x14078F594 (MiInitializeCacheOverrides.c)
 *     MiInitializeChannelRanges @ 0x14078FBD4 (MiInitializeChannelRanges.c)
 *     KiIntSteerInit @ 0x14079266C (KiIntSteerInit.c)
 *     PoFxRegisterDebugger @ 0x1407B21AC (PoFxRegisterDebugger.c)
 *     KeNumaInitialize @ 0x1407BCE94 (KeNumaInitialize.c)
 *     VslpIumPhase0Initialize @ 0x1407CE270 (VslpIumPhase0Initialize.c)
 *     BgkInitialize @ 0x1407D3DF4 (BgkInitialize.c)
 * Callees:
 *     <none>
 */

__int64 xHalSetSystemInformation()
{
  return 3221225800LL;
}
