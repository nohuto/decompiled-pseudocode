/*
 * XREFs of ExpCheckFullProcessInformationAccess @ 0x14048D0EC
 * Callers:
 *     ExpGetProcessInformation @ 0x1404513E0 (ExpGetProcessInformation.c)
 *     NtSetDefaultLocale @ 0x140548C40 (NtSetDefaultLocale.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x1400852A4 (RtlCheckTokenMembership.c)
 *     RtlRunOnceExecuteOnce @ 0x14045CE04 (RtlRunOnceExecuteOnce.c)
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
