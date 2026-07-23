/*
 * XREFs of RtlIdnToAscii @ 0x18005D910
 * Callers:
 *     <none>
 * Callees:
 *     RtlpNameprepAsciiWorker @ 0x18005E190 (RtlpNameprepAsciiWorker.c)
 */

NTSTATUS __cdecl RtlIdnToAscii(
        ULONG Flags,
        PCWSTR SourceString,
        LONG SourceStringLength,
        PWSTR DestinationString,
        PLONG DestinationStringLength)
{
  char v6; // [rsp+28h] [rbp-10h]

  v6 = 1;
  return RtlpNameprepAsciiWorker(
           Flags,
           SourceString,
           SourceStringLength,
           DestinationString,
           DestinationStringLength,
           v6);
}
