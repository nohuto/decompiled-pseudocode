/*
 * XREFs of ObpIsUnsecureName @ 0x1405445C8
 * Callers:
 *     ObpLookupObjectName @ 0x14044F450 (ObpLookupObjectName.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     RtlPrefixUnicodeString @ 0x1404FDFD0 (RtlPrefixUnicodeString.c)
 */

char __fastcall ObpIsUnsecureName(PCUNICODE_STRING String2, BOOLEAN a2)
{
  const WCHAR *v4; // rbx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  if ( !ObpUnsecureGlobalNamesBuffer )
    return 0;
  v4 = &ObpUnsecureGlobalNamesBuffer;
  while ( 1 )
  {
    RtlInitUnicodeString(&DestinationString, v4);
    if ( DestinationString.Length )
    {
      if ( RtlPrefixUnicodeString(&DestinationString, String2, a2) )
        break;
    }
    v4 += ((unsigned __int64)DestinationString.Length + 2) >> 1;
    if ( !DestinationString.Length )
      return 0;
  }
  return 1;
}
