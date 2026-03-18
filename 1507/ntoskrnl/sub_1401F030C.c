/*
 * XREFs of sub_1401F030C @ 0x1401F030C
 * Callers:
 *     HvlPhase2Initialize @ 0x140170560 (HvlPhase2Initialize.c)
 *     HvlpLogHypervisorLaunchError @ 0x1401EFC78 (HvlpLogHypervisorLaunchError.c)
 *     HvlpLogIommuEvent @ 0x1401EFCD0 (HvlpLogIommuEvent.c)
 *     HvlpLogIommuInitStatus @ 0x1401EFDF0 (HvlpLogIommuInitStatus.c)
 *     HvlpLogProcessorStartupFailure @ 0x1401F024C (HvlpLogProcessorStartupFailure.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 */

NTSTATUS __fastcall sub_1401F030C(
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
