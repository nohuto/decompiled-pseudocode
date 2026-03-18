/*
 * XREFs of RtlGetAce @ 0x1400CEFDC
 * Callers:
 *     SepAppendAceToTokenDefaultDacl @ 0x140007EA4 (SepAppendAceToTokenDefaultDacl.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14026CFDC (AdtpBuildAccessReasonAuditStringInternal.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1404CF990 (SepAppendAceToTokenObjectAcl.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x14056032C (RtlpSysVolCheckOwnerAndSecurity.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1405A50A0 (CmpHiveRootSecurityDescriptor.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x1405C0314 (PopCreateHiberFileSecurityDescriptor.c)
 *     SepBuildDaclWithAllApplicationPackageSid @ 0x1406D71A0 (SepBuildDaclWithAllApplicationPackageSid.c)
 *     ObInitSystem @ 0x1407C266C (ObInitSystem.c)
 *     ObpGetDosDevicesProtection @ 0x1407E27EC (ObpGetDosDevicesProtection.c)
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
