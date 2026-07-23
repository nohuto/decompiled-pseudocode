/*
 * XREFs of IopCreateUnicodeFromAnsiBuffer @ 0x14013C354
 * Callers:
 *     IopCreateArcName @ 0x1405501C4 (IopCreateArcName.c)
 *     IopMarkBootPartition @ 0x140798EDC (IopMarkBootPartition.c)
 * Callees:
 *     RtlInitAnsiString @ 0x140074D74 (RtlInitAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x1403F54C4 (RtlAnsiStringToUnicodeString.c)
 */

NTSTATUS __fastcall IopCreateUnicodeFromAnsiBuffer(PUNICODE_STRING DestinationString, const CHAR *a2)
{
  _STRING DestinationStringa; // [rsp+20h] [rbp-18h] BYREF

  RtlInitAnsiString(&DestinationStringa, a2);
  return RtlAnsiStringToUnicodeString(DestinationString, &DestinationStringa, 1u);
}
