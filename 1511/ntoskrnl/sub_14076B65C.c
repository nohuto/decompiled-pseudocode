/*
 * XREFs of sub_14076B65C @ 0x14076B65C
 * Callers:
 *     sub_14076B394 @ 0x14076B394 (sub_14076B394.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 */

ULONG __fastcall sub_14076B65C(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, SourceString);
  return RtlComputeCrc32(0, (PUCHAR)DestinationString.Buffer, DestinationString.Length);
}
