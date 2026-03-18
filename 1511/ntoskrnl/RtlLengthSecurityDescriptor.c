/*
 * XREFs of RtlLengthSecurityDescriptor @ 0x14042E630
 * Callers:
 *     AdtpBuildAccessReasonAuditString @ 0x14021D6EC (AdtpBuildAccessReasonAuditString.c)
 *     CmpAssignSecurityDescriptor @ 0x1403DFF74 (CmpAssignSecurityDescriptor.c)
 *     CmpFindMatchingDescriptorCell @ 0x1403E00FC (CmpFindMatchingDescriptorCell.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1403E09B8 (CmpSetSecurityDescriptorInfo.c)
 *     ExpWnfLookupPermanentName @ 0x1403E0F08 (ExpWnfLookupPermanentName.c)
 *     ObLogSecurityDescriptor @ 0x14042E2C0 (ObLogSecurityDescriptor.c)
 *     _PnpValidatePropertyData @ 0x14045C944 (_PnpValidatePropertyData.c)
 *     WmipSecurityMethod @ 0x1404C19F8 (WmipSecurityMethod.c)
 *     ExpWnfRegisterPermanentName @ 0x1404C2D98 (ExpWnfRegisterPermanentName.c)
 *     BiCreateKeySecurityDescriptor @ 0x1404FD2BC (BiCreateKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1405184F8 (_PnpGetPropertiesSecurityDescriptor.c)
 *     _CmSetDeviceRegPropWorker @ 0x14053AB90 (_CmSetDeviceRegPropWorker.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x14053F248 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1405471F8 (_PnpGetEnumSecurityDescriptor.c)
 *     ObpSetObjectAuditInfo @ 0x14062E334 (ObpSetObjectAuditInfo.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x140694860 (_CmSetInstallerClassRegPropWorker.c)
 *     DrvDbGetSecurityDescriptor @ 0x14069CA70 (DrvDbGetSecurityDescriptor.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x140769C5C (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x140769FCC (PiAuCreateStandardSecurityObject.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlLengthSecurityDescriptor(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  __int16 v1; // r9
  __int16 v2; // r8
  ULONG v3; // edx
  __int64 v4; // rax
  char *v5; // rax
  __int64 v6; // rax
  char *v7; // rax
  __int64 v8; // rax
  char *v9; // rax
  __int64 v10; // rax
  char *v11; // rax

  v1 = *((_WORD *)SecurityDescriptor + 1);
  v2 = v1 & 0x8000;
  if ( v1 >= 0 )
    v3 = 40;
  else
    v3 = 20;
  if ( v2 )
  {
    v4 = *((unsigned int *)SecurityDescriptor + 1);
    if ( !(_DWORD)v4 )
      goto LABEL_8;
    v5 = (char *)SecurityDescriptor + v4;
  }
  else
  {
    v5 = (char *)*((_QWORD *)SecurityDescriptor + 1);
  }
  if ( v5 )
    v3 += (4 * (unsigned __int8)v5[1] + 11) & 0xFFFFFFFC;
LABEL_8:
  if ( v2 )
  {
    v6 = *((unsigned int *)SecurityDescriptor + 2);
    if ( !(_DWORD)v6 )
      goto LABEL_13;
    v7 = (char *)SecurityDescriptor + v6;
  }
  else
  {
    v7 = (char *)*((_QWORD *)SecurityDescriptor + 2);
  }
  if ( v7 )
    v3 += (4 * (unsigned __int8)v7[1] + 11) & 0xFFFFFFFC;
LABEL_13:
  if ( (v1 & 4) == 0 )
    goto LABEL_19;
  if ( v2 )
  {
    v8 = *((unsigned int *)SecurityDescriptor + 4);
    if ( !(_DWORD)v8 )
      goto LABEL_19;
    v9 = (char *)SecurityDescriptor + v8;
  }
  else
  {
    v9 = (char *)*((_QWORD *)SecurityDescriptor + 4);
  }
  if ( v9 )
    v3 += (*((unsigned __int16 *)v9 + 1) + 3) & 0xFFFFFFFC;
LABEL_19:
  if ( (v1 & 0x10) != 0 )
  {
    if ( v2 )
    {
      v10 = *((unsigned int *)SecurityDescriptor + 3);
      if ( !(_DWORD)v10 )
        return v3;
      v11 = (char *)SecurityDescriptor + v10;
    }
    else
    {
      v11 = (char *)*((_QWORD *)SecurityDescriptor + 3);
    }
    if ( v11 )
      return v3 + ((*((unsigned __int16 *)v11 + 1) + 3) & 0xFFFFFFFC);
  }
  return v3;
}
