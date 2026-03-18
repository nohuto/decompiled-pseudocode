/*
 * XREFs of RtlIdnToAscii @ 0x140649AE4
 * Callers:
 *     <none>
 * Callees:
 *     RtlpNameprepAsciiWorker @ 0x140649E30 (RtlpNameprepAsciiWorker.c)
 */

NTSTATUS __stdcall RtlIdnToAscii(
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
