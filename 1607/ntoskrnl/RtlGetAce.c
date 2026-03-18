/*
 * XREFs of RtlGetAce @ 0x14000C24C
 * Callers:
 *     SepAppendAceToTokenDefaultDacl @ 0x1400807C0 (SepAppendAceToTokenDefaultDacl.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140238284 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140406AA0 (SepAppendAceToTokenObjectAcl.c)
 *     LocalGetAclForString @ 0x1404D6D44 (LocalGetAclForString.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x14052A01C (RtlpSysVolCheckOwnerAndSecurity.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14055E73C (CmpHiveRootSecurityDescriptor.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x14056E550 (PopCreateHiberFileSecurityDescriptor.c)
 *     ObpGetDosDevicesProtection @ 0x140579E48 (ObpGetDosDevicesProtection.c)
 *     SepBuildDaclWithAllApplicationPackageSid @ 0x14069492C (SepBuildDaclWithAllApplicationPackageSid.c)
 *     ObInitSystem @ 0x1407A0370 (ObInitSystem.c)
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
