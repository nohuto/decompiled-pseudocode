/*
 * XREFs of RtlGetAce @ 0x140003350
 * Callers:
 *     SepAppendAceToTokenDefaultDacl @ 0x1400033B0 (SepAppendAceToTokenDefaultDacl.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14021DBB4 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140420AE0 (SepAppendAceToTokenObjectAcl.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1404EBADC (RtlpSysVolCheckOwnerAndSecurity.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14051E508 (CmpHiveRootSecurityDescriptor.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x140549098 (PopCreateHiberFileSecurityDescriptor.c)
 *     SepBuildDaclWithAllApplicationPackageSid @ 0x1406552F4 (SepBuildDaclWithAllApplicationPackageSid.c)
 *     LocalGetAclForString @ 0x1406859BC (LocalGetAclForString.c)
 *     ObInitSystem @ 0x140758E84 (ObInitSystem.c)
 *     ObpGetDosDevicesProtection @ 0x14076D55C (ObpGetDosDevicesProtection.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlGetAce(PACL Acl, ULONG AceIndex, PVOID *Ace)
{
  ULONG v4; // edx

  if ( (unsigned __int8)(Acl->AclRevision - 2) <= 2u && AceIndex < Acl->AceCount )
  {
    v4 = 0;
    *Ace = &Acl[1];
    if ( !AceIndex )
      return *Ace >= (char *)Acl + Acl->AclSize ? 0xC000000D : 0;
    while ( *Ace < (char *)Acl + Acl->AclSize )
    {
      ++v4;
      *Ace = (char *)*Ace + *((unsigned __int16 *)*Ace + 1);
      if ( v4 >= AceIndex )
        return *Ace >= (char *)Acl + Acl->AclSize ? 0xC000000D : 0;
    }
  }
  return -1073741811;
}
