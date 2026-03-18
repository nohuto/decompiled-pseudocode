/*
 * XREFs of RtlLengthSecurityDescriptor @ 0x140486820
 * Callers:
 *     AdtpBuildAccessReasonAuditString @ 0x14015AEB8 (AdtpBuildAccessReasonAuditString.c)
 *     ObLogSecurityDescriptor @ 0x140486480 (ObLogSecurityDescriptor.c)
 *     _PnpValidatePropertyData @ 0x1404D90AC (_PnpValidatePropertyData.c)
 *     ExpWnfLookupPermanentName @ 0x1404FE56C (ExpWnfLookupPermanentName.c)
 *     WmipSecurityMethod @ 0x140557AFC (WmipSecurityMethod.c)
 *     ExpWnfRegisterPermanentName @ 0x14055A4A8 (ExpWnfRegisterPermanentName.c)
 *     BiCreateKeySecurityDescriptor @ 0x14056FD5C (BiCreateKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x14058C9CC (_PnpGetPropertiesSecurityDescriptor.c)
 *     _CmSetDeviceRegPropWorker @ 0x1405B2384 (_CmSetDeviceRegPropWorker.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x1405B3288 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1405BE0BC (_PnpGetEnumSecurityDescriptor.c)
 *     ObpSetObjectAuditInfo @ 0x1406AC044 (ObpSetObjectAuditInfo.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x1407143F8 (_CmSetInstallerClassRegPropWorker.c)
 *     DrvDbGetSecurityDescriptor @ 0x14071D0CC (DrvDbGetSecurityDescriptor.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x1407DDE74 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x1407DE1E4 (PiAuCreateStandardSecurityObject.c)
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
