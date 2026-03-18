/*
 * XREFs of BapdRegisterEtwProvider @ 0x1401322E0
 * Callers:
 *     BapdWriteEtwEvents @ 0x140131F3C (BapdWriteEtwEvents.c)
 *     BapdRecordFirmwareBootStats @ 0x1403D316C (BapdRecordFirmwareBootStats.c)
 *     BapdpRecordIumStatus @ 0x1407A9B94 (BapdpRecordIumStatus.c)
 * Callees:
 *     EtwSetInformation @ 0x140548AE4 (EtwSetInformation.c)
 *     EtwRegister @ 0x140549F44 (EtwRegister.c)
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
