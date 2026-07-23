/*
 * XREFs of RtlIdnToNameprepUnicode @ 0x1800E7350
 * Callers:
 *     <none>
 * Callees:
 *     RtlpNameprepAsciiWorker @ 0x180069B44 (RtlpNameprepAsciiWorker.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl RtlIdnToNameprepUnicode(
        ULONG Flags,
        PCWSTR SourceString,
        LONG SourceStringLength,
        PWSTR DestinationString,
        PLONG DestinationStringLength)
{
  return RtlpNameprepAsciiWorker(
           Flags,
           (WCHAR *)SourceString,
           *(__int64 *)&SourceStringLength,
           DestinationString,
           DestinationStringLength,
           0);
}
