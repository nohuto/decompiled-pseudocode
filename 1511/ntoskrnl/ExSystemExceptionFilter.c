/*
 * XREFs of ExSystemExceptionFilter @ 0x14049E9B4
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x14007F570 (NtWaitForWorkViaWorkerFactory.c)
 *     ExpGetSystemBasicInformation @ 0x14009DC58 (ExpGetSystemBasicInformation.c)
 *     NtGetWriteWatch @ 0x1400B66D0 (NtGetWriteWatch.c)
 *     NtShutdownWorkerFactory @ 0x1400C501C (NtShutdownWorkerFactory.c)
 *     NtSetInformationWorkerFactory @ 0x1400C5D50 (NtSetInformationWorkerFactory.c)
 *     ExpGetSystemProcessorInformation @ 0x1400E6D6C (ExpGetSystemProcessorInformation.c)
 *     ExpGetSystemEmulationBasicInformation @ 0x1400E9BC0 (ExpGetSystemEmulationBasicInformation.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x1401CA838 (KeGetAffinitizedInterruptsInfo.c)
 *     SeQueryTrustedPlatformModuleInformation @ 0x140200D54 (SeQueryTrustedPlatformModuleInformation.c)
 *     EtwpApplyPayloadFilterInternal @ 0x140211B20 (EtwpApplyPayloadFilterInternal.c)
 *     sub_140212384 @ 0x140212384 (sub_140212384.c)
 *     sub_1402128D4 @ 0x1402128D4 (sub_1402128D4.c)
 *     sub_140212938 @ 0x140212938 (sub_140212938.c)
 *     NtQueryInformationWorkerFactory @ 0x140215810 (NtQueryInformationWorkerFactory.c)
 * Callees:
 *     <none>
 */

_BOOL8 ExSystemExceptionFilter()
{
  return KeGetCurrentThread()->PreviousMode != 0;
}
