/*
 * XREFs of ExSystemExceptionFilter @ 0x14040A5E8
 * Callers:
 *     ExpGetSystemProcessorInformation @ 0x1400143B0 (ExpGetSystemProcessorInformation.c)
 *     ExpGetSystemBasicInformation @ 0x1400144D0 (ExpGetSystemBasicInformation.c)
 *     NtGetWriteWatch @ 0x14003C8B0 (NtGetWriteWatch.c)
 *     NtSetInformationWorkerFactory @ 0x14006CC00 (NtSetInformationWorkerFactory.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14009D900 (NtWaitForWorkViaWorkerFactory.c)
 *     ExpGetSystemEmulationBasicInformation @ 0x14012705C (ExpGetSystemEmulationBasicInformation.c)
 *     NtShutdownWorkerFactory @ 0x14012B508 (NtShutdownWorkerFactory.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x140209394 (KeGetAffinitizedInterruptsInfo.c)
 *     SeQueryTrustedPlatformModuleInformation @ 0x14024FC38 (SeQueryTrustedPlatformModuleInformation.c)
 *     EtwpApplyPayloadFilterInternal @ 0x1402610C8 (EtwpApplyPayloadFilterInternal.c)
 *     sub_140261938 @ 0x140261938 (sub_140261938.c)
 *     sub_140261E88 @ 0x140261E88 (sub_140261E88.c)
 *     sub_140261EEC @ 0x140261EEC (sub_140261EEC.c)
 *     NtQueryInformationWorkerFactory @ 0x140265974 (NtQueryInformationWorkerFactory.c)
 *     NtQueryInformationProcess @ 0x14050D9A0 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

_BOOL8 ExSystemExceptionFilter()
{
  return KeGetCurrentThread()->PreviousMode != 0;
}
