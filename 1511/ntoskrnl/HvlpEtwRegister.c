/*
 * XREFs of HvlpEtwRegister @ 0x1401B4D64
 * Callers:
 *     HvlPhase2Initialize @ 0x140142738 (HvlPhase2Initialize.c)
 * Callees:
 *     EtwRegister @ 0x1404CC744 (EtwRegister.c)
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
