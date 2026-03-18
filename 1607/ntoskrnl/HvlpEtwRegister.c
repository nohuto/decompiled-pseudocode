/*
 * XREFs of HvlpEtwRegister @ 0x1401C0BF0
 * Callers:
 *     HvlPhase2Initialize @ 0x14014C4A8 (HvlPhase2Initialize.c)
 * Callees:
 *     EtwRegister @ 0x140549F44 (EtwRegister.c)
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
