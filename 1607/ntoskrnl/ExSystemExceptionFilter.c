/*
 * XREFs of ExSystemExceptionFilter @ 0x1404BBBFC
 * Callers:
 *     ExpGetSystemBasicInformation @ 0x14000F344 (ExpGetSystemBasicInformation.c)
 *     NtGetWriteWatch @ 0x140014EF0 (NtGetWriteWatch.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14005E910 (NtWaitForWorkViaWorkerFactory.c)
 *     ExpGetSystemProcessorInformation @ 0x140085EDC (ExpGetSystemProcessorInformation.c)
 *     ExpGetSystemEmulationBasicInformation @ 0x1400A9218 (ExpGetSystemEmulationBasicInformation.c)
 *     PsWow64GetSupportedArchitectures @ 0x1400F7170 (PsWow64GetSupportedArchitectures.c)
 *     NtSetInformationWorkerFactory @ 0x1400F7C10 (NtSetInformationWorkerFactory.c)
 *     NtShutdownWorkerFactory @ 0x1400F9F94 (NtShutdownWorkerFactory.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x1401DA468 (KeGetAffinitizedInterruptsInfo.c)
 *     SeQueryTrustedPlatformModuleInformation @ 0x14021A7E4 (SeQueryTrustedPlatformModuleInformation.c)
 *     EtwpApplyPayloadFilterInternal @ 0x14022B614 (EtwpApplyPayloadFilterInternal.c)
 *     EtwpApplyPredicate @ 0x14022BE8C (EtwpApplyPredicate.c)
 *     EtwpGetFieldValue @ 0x14022C3DC (EtwpGetFieldValue.c)
 *     EtwpGetSignedFieldValue @ 0x14022C440 (EtwpGetSignedFieldValue.c)
 *     NtQueryInformationWorkerFactory @ 0x14022F8E4 (NtQueryInformationWorkerFactory.c)
 *     ExpQuerySystemInformation @ 0x140415620 (ExpQuerySystemInformation.c)
 *     NtQueryInformationProcess @ 0x140422590 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

_BOOL8 ExSystemExceptionFilter()
{
  return KeGetCurrentThread()->PreviousMode != 0;
}
