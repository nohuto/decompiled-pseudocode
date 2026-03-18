/*
 * XREFs of sub_1407E0198 @ 0x1407E0198
 * Callers:
 *     sub_1407DFED0 @ 0x1407DFED0 (sub_1407DFED0.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 */

ULONG __fastcall sub_1407E0198(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, SourceString);
  return RtlComputeCrc32(0, (PUCHAR)DestinationString.Buffer, DestinationString.Length);
}
