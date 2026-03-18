/*
 * XREFs of BapdRegisterEtwProvider @ 0x1401275E8
 * Callers:
 *     BapdWriteEtwEvents @ 0x140127250 (BapdWriteEtwEvents.c)
 *     BapdRecordFirmwareBootStats @ 0x1403A6C88 (BapdRecordFirmwareBootStats.c)
 * Callees:
 *     EtwRegister @ 0x1404CC744 (EtwRegister.c)
 *     EtwSetInformation @ 0x14050D180 (EtwSetInformation.c)
 */

NTSTATUS __fastcall BapdRegisterEtwProvider(const GUID *a1, char a2, ULONGLONG *a3)
{
  NTSTATUS result; // eax

  result = EtwRegister(a1, 0LL, 0LL, a3);
  if ( result < 0 )
  {
    *a3 = 0LL;
  }
  else
  {
    if ( a2 )
      EtwSetInformation(
        *a3,
        EventProviderSetTraits,
        &`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits,
        (unsigned __int16)`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits);
    return 0;
  }
  return result;
}
