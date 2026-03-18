/*
 * XREFs of RtlLengthSecurityDescriptor @ 0x14041FFE0
 * Callers:
 *     AdtpBuildAccessReasonAuditString @ 0x140237DBC (AdtpBuildAccessReasonAuditString.c)
 *     ExpWnfLookupPermanentName @ 0x1403F620C (ExpWnfLookupPermanentName.c)
 *     ObLogSecurityDescriptor @ 0x14041FCF0 (ObLogSecurityDescriptor.c)
 *     _PnpValidatePropertyData @ 0x1404893D0 (_PnpValidatePropertyData.c)
 *     WmipSecurityMethod @ 0x1404E1DBC (WmipSecurityMethod.c)
 *     ExpWnfRegisterPermanentName @ 0x1404EF04C (ExpWnfRegisterPermanentName.c)
 *     BiCreateKeySecurityDescriptor @ 0x14053E018 (BiCreateKeySecurityDescriptor.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x140570E50 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _CmSetDeviceRegPropWorker @ 0x140571500 (_CmSetDeviceRegPropWorker.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14057B14C (_PnpGetEnumSecurityDescriptor.c)
 *     ObpSetObjectAuditInfo @ 0x14066637C (ObpSetObjectAuditInfo.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x1406D9788 (_CmSetInstallerClassRegPropWorker.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1406DFC6C (_PnpGetPropertiesSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x1406E3658 (DrvDbGetSecurityDescriptor.c)
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
