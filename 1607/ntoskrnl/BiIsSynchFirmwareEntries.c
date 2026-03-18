/*
 * XREFs of BiIsSynchFirmwareEntries @ 0x14012E0D0
 * Callers:
 *     BcdCloseStore @ 0x14053C8A8 (BcdCloseStore.c)
 * Callees:
 *     <none>
 */

bool __fastcall BiIsSynchFirmwareEntries(char a1)
{
  return (a1 & 2) == 0;
}
