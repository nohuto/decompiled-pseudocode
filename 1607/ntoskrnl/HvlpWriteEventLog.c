/*
 * XREFs of HvlpWriteEventLog @ 0x1401C1144
 * Callers:
 *     HvlPhase2Initialize @ 0x14014CA18 (HvlPhase2Initialize.c)
 *     HvlpCheckTscSync @ 0x1401C09AC (HvlpCheckTscSync.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x1401C0B14 (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpLogHypervisorLaunchError @ 0x1401C0D04 (HvlpLogHypervisorLaunchError.c)
 *     HvlpLogHypervisorSchedulerType @ 0x1401C0D74 (HvlpLogHypervisorSchedulerType.c)
 *     HvlpLogIommuEvent @ 0x1401C0DC8 (HvlpLogIommuEvent.c)
 *     HvlpLogIommuInitStatus @ 0x1401C0EE8 (HvlpLogIommuInitStatus.c)
 *     HvlpLogProcessorStartupFailure @ 0x1401C1084 (HvlpLogProcessorStartupFailure.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 */

NTSTATUS __fastcall HvlpWriteEventLog(
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  NTSTATUS result; // eax

  result = (int)EventDescriptor;
  if ( HvlGlobalSystemEventsHandle )
    return EtwWrite(HvlGlobalSystemEventsHandle, EventDescriptor, 0LL, UserDataCount, UserData);
  return result;
}
