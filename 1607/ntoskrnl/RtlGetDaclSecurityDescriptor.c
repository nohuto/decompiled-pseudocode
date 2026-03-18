/*
 * XREFs of RtlGetDaclSecurityDescriptor @ 0x140009CC4
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140238284 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     ExpWnfSpecializeSecurityDescriptor @ 0x1403F6F64 (ExpWnfSpecializeSecurityDescriptor.c)
 *     ObpInsertOrLocateNamedObject @ 0x140405EE0 (ObpInsertOrLocateNamedObject.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x1404E1F74 (PipChangeDeviceObjectFromRegistryProperties.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x14052A01C (RtlpSysVolCheckOwnerAndSecurity.c)
 *     ObpCreateDosDevicesDirectory @ 0x140579BE8 (ObpCreateDosDevicesDirectory.c)
 *     CmpCopySaclToVirtualKey @ 0x1406021A4 (CmpCopySaclToVirtualKey.c)
 *     RtlReplaceSidInSd @ 0x140683A68 (RtlReplaceSidInSd.c)
 *     SepHasAllAppPackagesPresent @ 0x140694E28 (SepHasAllAppPackagesPresent.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1406CAE68 (LocalConvertSDToStringSD_Rev1.c)
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
