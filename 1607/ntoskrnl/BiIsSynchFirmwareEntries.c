/*
 * XREFs of BiIsSynchFirmwareEntries @ 0x14012E640
 * Callers:
 *     BcdCloseStore @ 0x14053CDE8 (BcdCloseStore.c)
 * Callees:
 *     <none>
 */

bool __fastcall BiIsSynchFirmwareEntries(char a1)
{
  return (a1 & 2) == 0;
}
