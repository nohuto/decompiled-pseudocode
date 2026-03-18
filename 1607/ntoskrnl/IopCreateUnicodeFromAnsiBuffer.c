/*
 * XREFs of IopCreateUnicodeFromAnsiBuffer @ 0x14013BDE4
 * Callers:
 *     IopCreateArcName @ 0x14054FC84 (IopCreateArcName.c)
 *     IopMarkBootPartition @ 0x140798EDC (IopMarkBootPartition.c)
 * Callees:
 *     RtlInitAnsiString @ 0x140074CF4 (RtlInitAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x1403F6600 (RtlAnsiStringToUnicodeString.c)
 */

NTSTATUS __fastcall IopCreateUnicodeFromAnsiBuffer(PUNICODE_STRING DestinationString, const char *a2)
{
  STRING DestinationStringa; // [rsp+20h] [rbp-18h] BYREF

  RtlInitAnsiString(&DestinationStringa, a2);
  return RtlAnsiStringToUnicodeString(DestinationString, &DestinationStringa, 1u);
}
