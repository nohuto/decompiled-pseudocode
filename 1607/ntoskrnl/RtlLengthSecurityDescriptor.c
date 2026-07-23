/*
 * XREFs of RtlLengthSecurityDescriptor @ 0x14041EEA0
 * Callers:
 *     AdtpBuildAccessReasonAuditString @ 0x140237BE8 (AdtpBuildAccessReasonAuditString.c)
 *     ExpWnfLookupPermanentName @ 0x1403F50D0 (ExpWnfLookupPermanentName.c)
 *     ObLogSecurityDescriptor @ 0x14041EBB0 (ObLogSecurityDescriptor.c)
 *     WmipSecurityMethod @ 0x1404C53C0 (WmipSecurityMethod.c)
 *     ExpWnfRegisterPermanentName @ 0x1404D1140 (ExpWnfRegisterPermanentName.c)
 *     _PnpValidatePropertyData @ 0x140511B44 (_PnpValidatePropertyData.c)
 *     BiCreateKeySecurityDescriptor @ 0x14053E558 (BiCreateKeySecurityDescriptor.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x140571390 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _CmSetDeviceRegPropWorker @ 0x140571A40 (_CmSetDeviceRegPropWorker.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14057B5F8 (_PnpGetEnumSecurityDescriptor.c)
 *     ObpSetObjectAuditInfo @ 0x140666460 (ObpSetObjectAuditInfo.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x1406D98C0 (_CmSetInstallerClassRegPropWorker.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1406DFDA4 (_PnpGetPropertiesSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x1406E3790 (DrvDbGetSecurityDescriptor.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x1407B33F4 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x1407B375C (PiAuCreateStandardSecurityObject.c)
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
