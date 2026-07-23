/*
 * XREFs of AdtpLookupKnownPrivilegeNameQuickly @ 0x140238F88
 * Callers:
 *     AdtpBuildPrivilegeAuditString @ 0x1406D090C (AdtpBuildPrivilegeAuditString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AdtpLookupKnownPrivilegeNameQuickly(int *a1, _OWORD *a2)
{
  int v2; // r9d
  unsigned int v3; // r8d

  v2 = *a1;
  v3 = 0;
  if ( a1[1] || (unsigned int)(v2 - 2) > 0x22 )
    return (unsigned int)-1073741728;
  else
    *a2 = *(_OWORD *)((char *)&AdtpKnownPrivilege + 24 * (unsigned int)(v2 - 2));
  return v3;
}
