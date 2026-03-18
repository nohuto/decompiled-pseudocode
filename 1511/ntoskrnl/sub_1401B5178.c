/*
 * XREFs of sub_1401B5178 @ 0x1401B5178
 * Callers:
 *     HvlPhase2Initialize @ 0x140142738 (HvlPhase2Initialize.c)
 *     HvlpLogHypervisorLaunchError @ 0x1401B4DA4 (HvlpLogHypervisorLaunchError.c)
 *     HvlpLogIommuEvent @ 0x1401B4DFC (HvlpLogIommuEvent.c)
 *     HvlpLogIommuInitStatus @ 0x1401B4F1C (HvlpLogIommuInitStatus.c)
 *     HvlpLogProcessorStartupFailure @ 0x1401B50B8 (HvlpLogProcessorStartupFailure.c)
 * Callees:
 *     EtwWrite @ 0x14009DEC0 (EtwWrite.c)
 */

NTSTATUS __fastcall sub_1401B5178(
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
