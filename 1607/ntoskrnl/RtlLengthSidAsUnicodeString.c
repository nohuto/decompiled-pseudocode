/*
 * XREFs of RtlLengthSidAsUnicodeString @ 0x1403F78C8
 * Callers:
 *     RtlFormatCurrentUserKeyPath @ 0x1403F68E0 (RtlFormatCurrentUserKeyPath.c)
 *     AdtpBuildSidListString @ 0x1406D1090 (AdtpBuildSidListString.c)
 * Callees:
 *     RtlValidSid @ 0x140420690 (RtlValidSid.c)
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
