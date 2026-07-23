/*
 * XREFs of RtlLengthSidAsUnicodeString @ 0x1405009D4
 * Callers:
 *     RtlFormatCurrentUserKeyPath @ 0x1404FF914 (RtlFormatCurrentUserKeyPath.c)
 *     AdtpBuildSidListString @ 0x14070CA9C (AdtpBuildSidListString.c)
 * Callees:
 *     RtlValidSid @ 0x1404CA0C0 (RtlValidSid.c)
 */

NTSTATUS __cdecl RtlLengthSidAsUnicodeString(PSID Sid, PULONG StringLength)
{
  int v4; // ecx

  if ( RtlValidSid(Sid) != 1 )
    return -1073741704;
  if ( *((_BYTE *)Sid + 2) || (v4 = 10, *((_BYTE *)Sid + 3)) )
    v4 = 14;
  *StringLength = 2 * (v4 + 11 * *((unsigned __int8 *)Sid + 1)) + 8;
  return 0;
}
