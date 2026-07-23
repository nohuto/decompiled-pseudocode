/*
 * XREFs of RtlGetSaclSecurityDescriptor @ 0x1403F5EAC
 * Callers:
 *     AdtpBuildContextFromSecurityDescriptor @ 0x140238A9C (AdtpBuildContextFromSecurityDescriptor.c)
 *     ExpWnfSpecializeSecurityDescriptor @ 0x1403F5E24 (ExpWnfSpecializeSecurityDescriptor.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x1404D3B60 (PipChangeDeviceObjectFromRegistryProperties.c)
 *     NtSetSecurityObject @ 0x140503BA4 (NtSetSecurityObject.c)
 *     CmpCopySaclToVirtualKey @ 0x140602258 (CmpCopySaclToVirtualKey.c)
 *     CmpExamineSaclForAuditEvent @ 0x140602674 (CmpExamineSaclForAuditEvent.c)
 *     RtlReplaceSidInSd @ 0x140683B4C (RtlReplaceSidInSd.c)
 *     SepSDContainsAttributeACE @ 0x140695848 (SepSDContainsAttributeACE.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1406CAFA0 (LocalConvertSDToStringSD_Rev1.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlGetSaclSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PBOOLEAN SaclPresent,
        PACL *Sacl,
        PBOOLEAN SaclDefaulted)
{
  bool v4; // zf
  __int16 v6; // ax
  __int64 v7; // rdx
  ACL *v8; // rax

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v4 = (*((_BYTE *)SecurityDescriptor + 2) & 0x10) == 0;
  *SaclPresent = (*((_BYTE *)SecurityDescriptor + 2) & 0x10) != 0;
  if ( !v4 )
  {
    v6 = *((_WORD *)SecurityDescriptor + 1);
    if ( (v6 & 0x10) != 0 )
    {
      if ( v6 >= 0 )
      {
        v8 = (ACL *)*((_QWORD *)SecurityDescriptor + 3);
      }
      else
      {
        v7 = *((unsigned int *)SecurityDescriptor + 3);
        v8 = 0LL;
        if ( (_DWORD)v7 )
          v8 = (ACL *)((char *)SecurityDescriptor + v7);
      }
    }
    else
    {
      v8 = 0LL;
    }
    *Sacl = v8;
    *SaclDefaulted = (*((_BYTE *)SecurityDescriptor + 2) & 0x20) != 0;
  }
  return 0;
}
