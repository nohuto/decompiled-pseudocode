/*
 * XREFs of ExSystemExceptionFilter @ 0x1404A792C
 * Callers:
 *     ExpGetSystemBasicInformation @ 0x14000EEC4 (ExpGetSystemBasicInformation.c)
 *     NtGetWriteWatch @ 0x140014A70 (NtGetWriteWatch.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14005E490 (NtWaitForWorkViaWorkerFactory.c)
 *     ExpGetSystemProcessorInformation @ 0x1400877CC (ExpGetSystemProcessorInformation.c)
 *     ExpGetSystemEmulationBasicInformation @ 0x1400A7798 (ExpGetSystemEmulationBasicInformation.c)
 *     PsWow64GetSupportedArchitectures @ 0x1400F4FB0 (PsWow64GetSupportedArchitectures.c)
 *     NtSetInformationWorkerFactory @ 0x1400F5A50 (NtSetInformationWorkerFactory.c)
 *     NtShutdownWorkerFactory @ 0x1400F7D20 (NtShutdownWorkerFactory.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x1401DA294 (KeGetAffinitizedInterruptsInfo.c)
 *     SeQueryTrustedPlatformModuleInformation @ 0x14021A610 (SeQueryTrustedPlatformModuleInformation.c)
 *     EtwpApplyPayloadFilterInternal @ 0x14022B440 (EtwpApplyPayloadFilterInternal.c)
 *     EtwpApplyPredicate @ 0x14022BCB8 (EtwpApplyPredicate.c)
 *     EtwpGetFieldValue @ 0x14022C208 (EtwpGetFieldValue.c)
 *     EtwpGetSignedFieldValue @ 0x14022C26C (EtwpGetSignedFieldValue.c)
 *     NtQueryInformationWorkerFactory @ 0x14022F710 (NtQueryInformationWorkerFactory.c)
 *     ExpQuerySystemInformation @ 0x1404144E0 (ExpQuerySystemInformation.c)
 *     NtQueryInformationProcess @ 0x140421450 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

_BOOL8 ExSystemExceptionFilter()
{
  return KeGetCurrentThread()->PreviousMode != 0;
}
