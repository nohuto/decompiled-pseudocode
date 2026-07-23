/*
 * XREFs of RtlCopyUnicodeString @ 0x180019A70
 * Callers:
 *     LdrpSearchPath @ 0x18000BF00 (LdrpSearchPath.c)
 *     RtlpComputeLangListCheckSum @ 0x1800107E8 (RtlpComputeLangListCheckSum.c)
 *     RtlConvertSidToUnicodeString @ 0x180019220 (RtlConvertSidToUnicodeString.c)
 *     EtwpQueryUmLogger @ 0x1800448A8 (EtwpQueryUmLogger.c)
 *     RtlCanonicalizeDomainName @ 0x180069350 (RtlCanonicalizeDomainName.c)
 *     LdrGetDllFullName @ 0x180078250 (LdrGetDllFullName.c)
 *     LdrGetDllDirectory @ 0x18007E0F0 (LdrGetDllDirectory.c)
 *     AvrfMiniLoadDll @ 0x1800CF6C8 (AvrfMiniLoadDll.c)
 * Callees:
 *     memmove @ 0x1800AB5C0 (memmove.c)
 */

void __cdecl RtlCopyUnicodeString(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  unsigned int Length; // eax
  unsigned __int16 *Buffer; // rsi
  unsigned __int16 *v5; // rdx
  unsigned __int16 *v6; // rcx
  unsigned __int64 v7; // rdi

  if ( SourceString )
  {
    Length = SourceString->Length;
    Buffer = DestinationString->Buffer;
    if ( (unsigned __int16)Length > DestinationString->MaximumLength )
      Length = DestinationString->MaximumLength;
    v5 = SourceString->Buffer;
    v6 = DestinationString->Buffer;
    DestinationString->Length = Length;
    v7 = Length;
    memmove(v6, v5, Length);
    if ( (unsigned __int64)DestinationString->Length + 2 <= DestinationString->MaximumLength )
      Buffer[v7 >> 1] = 0;
  }
  else
  {
    DestinationString->Length = 0;
  }
}
