/*
 * XREFs of IopCreateUnicodeFromAnsiBuffer @ 0x140133CE4
 * Callers:
 *     IopCreateArcName @ 0x140522480 (IopCreateArcName.c)
 *     IopMarkBootPartition @ 0x140753448 (IopMarkBootPartition.c)
 * Callees:
 *     RtlInitAnsiString @ 0x140092408 (RtlInitAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x1403E1384 (RtlAnsiStringToUnicodeString.c)
 */

NTSTATUS __fastcall IopCreateUnicodeFromAnsiBuffer(PUNICODE_STRING DestinationString, const CHAR *a2)
{
  _STRING DestinationStringa; // [rsp+20h] [rbp-18h] BYREF

  RtlInitAnsiString(&DestinationStringa, a2);
  return RtlAnsiStringToUnicodeString(DestinationString, &DestinationStringa, 1u);
}
