/*
 * XREFs of ExpCheckFullProcessInformationAccess @ 0x140413094
 * Callers:
 *     ExpGetProcessInformation @ 0x140497410 (ExpGetProcessInformation.c)
 *     NtSetDefaultLocale @ 0x14056C478 (NtSetDefaultLocale.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x1400083B0 (RtlCheckTokenMembership.c)
 *     RtlRunOnceExecuteOnce @ 0x14050B5E8 (RtlRunOnceExecuteOnce.c)
 */

__int64 __fastcall ExpCheckFullProcessInformationAccess(char a1)
{
  BOOLEAN IsMember; // [rsp+30h] [rbp+8h] BYREF
  PVOID Context; // [rsp+38h] [rbp+10h] BYREF

  if ( a1 == 1
    && (RtlRunOnceExecuteOnce(&ExpFullProcessInfoInit, ExpInitFullProcessSecurityInfo, 0LL, &Context) >= 0
     && RtlCheckTokenMembership(0LL, Context, &IsMember) >= 0
     && IsMember
     || RtlCheckTokenMembership(0LL, SeAliasAdminsSid, &IsMember) >= 0 && IsMember) )
  {
    return 0LL;
  }
  else
  {
    return 3221225506LL;
  }
}
