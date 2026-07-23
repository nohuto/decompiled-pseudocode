/*
 * XREFs of RtlCreateUnicodeString @ 0x180018FF0
 * Callers:
 *     LdrSetDllDirectory @ 0x180001750 (LdrSetDllDirectory.c)
 *     RtlConvertSidToUnicodeString @ 0x180019220 (RtlConvertSidToUnicodeString.c)
 *     RtlpInitUnicodeStringUsingBuffer @ 0x18001CBC4 (RtlpInitUnicodeStringUsingBuffer.c)
 *     LdrpLogDllStateEx2 @ 0x18002FABC (LdrpLogDllStateEx2.c)
 *     EtwpInitLoggerContext @ 0x1800472B8 (EtwpInitLoggerContext.c)
 *     EtwpAddInstanceIdToLogFileName @ 0x180047608 (EtwpAddInstanceIdToLogFileName.c)
 *     RtlCanonicalizeDomainName @ 0x180069350 (RtlCanonicalizeDomainName.c)
 *     LdrpMakeUnicodeStringFromPathElement @ 0x1800CA534 (LdrpMakeUnicodeStringFromPathElement.c)
 *     EtwpGenerateFileName @ 0x1800F4734 (EtwpGenerateFileName.c)
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x180018174 (NtdllpAllocateStringRoutine.c)
 *     NtdllpFreeStringRoutine @ 0x1800207A0 (NtdllpFreeStringRoutine.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 */

BOOLEAN __cdecl RtlCreateUnicodeString(PUNICODE_STRING DestinationString, PCWSTR SourceString)
{
  __int64 v4; // rax
  unsigned int v5; // edi
  unsigned __int16 *StringRoutine; // rax

  v4 = -1LL;
  do
    ++v4;
  while ( SourceString[v4] );
  v5 = 2 * v4 + 2;
  if ( (unsigned int)(2 * v4 + 1) > 0xFFFD )
    return 0;
  StringRoutine = (unsigned __int16 *)NtdllpAllocateStringRoutine(v5);
  DestinationString->Buffer = StringRoutine;
  if ( !StringRoutine )
    return 0;
  DestinationString->MaximumLength = v5;
  memmove(StringRoutine, SourceString, v5);
  DestinationString->Length = v5 - 2;
  return 1;
}
