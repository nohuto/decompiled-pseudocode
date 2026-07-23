/*
 * XREFs of ExpCheckFullProcessInformationAccess @ 0x14048DB7C
 * Callers:
 *     ExpGetProcessInformation @ 0x1404502B0 (ExpGetProcessInformation.c)
 *     NtSetDefaultLocale @ 0x140549180 (NtSetDefaultLocale.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x140086B90 (RtlCheckTokenMembership.c)
 *     RtlRunOnceExecuteOnce @ 0x14045BCD4 (RtlRunOnceExecuteOnce.c)
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
