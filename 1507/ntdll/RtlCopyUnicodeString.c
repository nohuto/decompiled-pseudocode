/*
 * XREFs of RtlCopyUnicodeString @ 0x18001FCD0
 * Callers:
 *     EtwpQueryUmLogger @ 0x18000A2D0 (EtwpQueryUmLogger.c)
 *     RtlConvertSidToUnicodeString @ 0x18001FD80 (RtlConvertSidToUnicodeString.c)
 *     LdrpSearchPath @ 0x18003F450 (LdrpSearchPath.c)
 *     RtlpComputeLangListCheckSum @ 0x180050794 (RtlpComputeLangListCheckSum.c)
 *     RtlCanonicalizeDomainName @ 0x18005D9C0 (RtlCanonicalizeDomainName.c)
 *     LdrGetDllFullName @ 0x18006C490 (LdrGetDllFullName.c)
 *     LdrGetDllDirectory @ 0x180072480 (LdrGetDllDirectory.c)
 *     AvrfMiniLoadDll @ 0x1800C6398 (AvrfMiniLoadDll.c)
 * Callees:
 *     memmove @ 0x180098200 (memmove.c)
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
