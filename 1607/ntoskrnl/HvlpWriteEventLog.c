/*
 * XREFs of HvlpWriteEventLog @ 0x1401C1260
 * Callers:
 *     HvlPhase2Initialize @ 0x14014C4A8 (HvlPhase2Initialize.c)
 *     HvlpCheckTscSync @ 0x1401C0AC8 (HvlpCheckTscSync.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x1401C0C30 (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpLogHypervisorLaunchError @ 0x1401C0E20 (HvlpLogHypervisorLaunchError.c)
 *     HvlpLogHypervisorSchedulerType @ 0x1401C0E90 (HvlpLogHypervisorSchedulerType.c)
 *     HvlpLogIommuEvent @ 0x1401C0EE4 (HvlpLogIommuEvent.c)
 *     HvlpLogIommuInitStatus @ 0x1401C1004 (HvlpLogIommuInitStatus.c)
 *     HvlpLogProcessorStartupFailure @ 0x1401C11A0 (HvlpLogProcessorStartupFailure.c)
 * Callees:
 *     EtwWrite @ 0x140013320 (EtwWrite.c)
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
