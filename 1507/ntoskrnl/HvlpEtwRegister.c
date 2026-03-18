/*
 * XREFs of HvlpEtwRegister @ 0x1401EFC38
 * Callers:
 *     HvlPhase2Initialize @ 0x140170560 (HvlPhase2Initialize.c)
 * Callees:
 *     EtwRegister @ 0x14054C680 (EtwRegister.c)
 */

NTSTATUS HvlpEtwRegister()
{
  EtwRegister(&HvlGlobalSystemEventsGuid, 0LL, 0LL, &HvlGlobalSystemEventsHandle);
  return EtwSetInformation(
           HvlGlobalSystemEventsHandle,
           EventProviderSetTraits,
           &`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits,
           (unsigned __int16)`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits);
}
