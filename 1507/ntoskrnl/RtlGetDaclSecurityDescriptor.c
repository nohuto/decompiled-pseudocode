/*
 * XREFs of RtlGetDaclSecurityDescriptor @ 0x1400EE24C
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14026CFDC (AdtpBuildAccessReasonAuditStringInternal.c)
 *     ObpInsertOrLocateNamedObject @ 0x1404D0FD4 (ObpInsertOrLocateNamedObject.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x1404E47C4 (PipChangeDeviceObjectFromRegistryProperties.c)
 *     ExpWnfSpecializeSecurityDescriptor @ 0x140501188 (ExpWnfSpecializeSecurityDescriptor.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x14056032C (RtlpSysVolCheckOwnerAndSecurity.c)
 *     CmpCopySaclToVirtualKey @ 0x140659314 (CmpCopySaclToVirtualKey.c)
 *     RtlReplaceSidInSd @ 0x1406C9B90 (RtlReplaceSidInSd.c)
 *     SepHasAllAppPackagesPresent @ 0x1406D7590 (SepHasAllAppPackagesPresent.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1407097E4 (LocalConvertSDToStringSD_Rev1.c)
 *     ObpCreateDosDevicesDirectory @ 0x1407E2610 (ObpCreateDosDevicesDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlGetDaclSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PBOOLEAN DaclPresent,
        PACL *Dacl,
        PBOOLEAN DaclDefaulted)
{
  bool v4; // zf
  __int16 v5; // ax
  __int64 v6; // rdx
  ACL *v7; // rax

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v4 = (*((_BYTE *)SecurityDescriptor + 2) & 4) == 0;
  *DaclPresent = (*((_BYTE *)SecurityDescriptor + 2) & 4) != 0;
  if ( !v4 )
  {
    v5 = *((_WORD *)SecurityDescriptor + 1);
    if ( (v5 & 4) != 0 )
    {
      if ( v5 >= 0 )
      {
        v7 = (ACL *)*((_QWORD *)SecurityDescriptor + 4);
      }
      else
      {
        v6 = *((unsigned int *)SecurityDescriptor + 4);
        v7 = 0LL;
        if ( (_DWORD)v6 )
          v7 = (ACL *)((char *)SecurityDescriptor + v6);
      }
    }
    else
    {
      v7 = 0LL;
    }
    *Dacl = v7;
    *DaclDefaulted = (*((_BYTE *)SecurityDescriptor + 2) & 8) != 0;
  }
  return 0;
}
