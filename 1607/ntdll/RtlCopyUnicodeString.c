/*
 * XREFs of RtlCopyUnicodeString @ 0x180015210
 * Callers:
 *     LdrpSearchPath @ 0x18000EBE0 (LdrpSearchPath.c)
 *     RtlpComputeLangListCheckSum @ 0x180011944 (RtlpComputeLangListCheckSum.c)
 *     RtlConvertSidToUnicodeString @ 0x1800149D0 (RtlConvertSidToUnicodeString.c)
 *     EtwpQueryUmLogger @ 0x180051CDC (EtwpQueryUmLogger.c)
 *     RtlCanonicalizeDomainName @ 0x180055600 (RtlCanonicalizeDomainName.c)
 *     LdrGetDllFullName @ 0x180079B20 (LdrGetDllFullName.c)
 *     LdrGetDllDirectory @ 0x1800820C0 (LdrGetDllDirectory.c)
 *     AvrfMiniLoadDll @ 0x1800D76D4 (AvrfMiniLoadDll.c)
 *     QueryFeatureOverride @ 0x1800E2C74 (QueryFeatureOverride.c)
 * Callees:
 *     memmove @ 0x1800AC980 (memmove.c)
 */

void __cdecl RtlCopyUnicodeString(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  unsigned int Length; // eax
  wchar_t *Buffer; // rsi
  wchar_t *v5; // rdx
  wchar_t *v6; // rcx
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
