/*
 * XREFs of ExpCheckFullProcessInformationAccess @ 0x1403BF500
 * Callers:
 *     ExpGetProcessInformation @ 0x140409F60 (ExpGetProcessInformation.c)
 *     NtSetDefaultLocale @ 0x14050D2C4 (NtSetDefaultLocale.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x140003E6C (RtlCheckTokenMembership.c)
 *     RtlRunOnceExecuteOnce @ 0x14044897C (RtlRunOnceExecuteOnce.c)
 */

__int64 __fastcall ExpCheckFullProcessInformationAccess(char a1)
{
  char v2; // [rsp+30h] [rbp+8h]
  PVOID Context; // [rsp+38h] [rbp+10h] BYREF

  if ( a1 == 1
    && (RtlRunOnceExecuteOnce(&ExpFullProcessInfoInit, ExpInitFullProcessSecurityInfo, 0LL, &Context) >= 0
     && (int)RtlCheckTokenMembership(0LL, Context) >= 0
     && v2
     || (int)RtlCheckTokenMembership(0LL, SeAliasAdminsSid) >= 0 && v2) )
  {
    return 0LL;
  }
  else
  {
    return 3221225506LL;
  }
}
