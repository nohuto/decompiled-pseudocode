/*
 * XREFs of RtlValidSecurityDescriptor @ 0x1404C8FB0
 * Callers:
 *     _PnpOpenPropertiesKey @ 0x14043E2E0 (_PnpOpenPropertiesKey.c)
 *     ObInsertObjectEx @ 0x140487BC0 (ObInsertObjectEx.c)
 *     ObOpenObjectByName @ 0x1404902E0 (ObOpenObjectByName.c)
 *     ObpAdjustAccessMask @ 0x1404ECC5C (ObpAdjustAccessMask.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x14058C9CC (_PnpGetPropertiesSecurityDescriptor.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x1405B3288 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1405BE0BC (_PnpGetEnumSecurityDescriptor.c)
 *     ObpSetObjectAuditInfo @ 0x1406AC044 (ObpSetObjectAuditInfo.c)
 *     CMFCreateSecurityDescriptor @ 0x1406FA710 (CMFCreateSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x14071D0CC (DrvDbGetSecurityDescriptor.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x1407DDE74 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x1407DE1E4 (PiAuCreateStandardSecurityObject.c)
 * Callees:
 *     RtlValidAcl @ 0x1404C9610 (RtlValidAcl.c)
 *     RtlValidSid @ 0x1404CA0C0 (RtlValidSid.c)
 */

BOOLEAN __stdcall RtlValidSecurityDescriptor(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  __int16 v2; // si
  __int16 v3; // di
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  ACL *v7; // rcx
  __int16 v8; // ax
  __int64 v10; // rax
  ACL *v11; // rcx
  char *v12; // rcx
  char *v13; // rcx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return 0;
  v2 = *((_WORD *)SecurityDescriptor + 1);
  v3 = v2 & 0x8000;
  if ( v2 >= 0 )
  {
    v12 = (char *)*((_QWORD *)SecurityDescriptor + 1);
  }
  else
  {
    v4 = *((unsigned int *)SecurityDescriptor + 1);
    if ( !(_DWORD)v4 )
      goto LABEL_4;
    v12 = (char *)SecurityDescriptor + v4;
  }
  if ( v12 && !RtlValidSid(v12) )
    return 0;
LABEL_4:
  if ( v3 )
  {
    v5 = *((unsigned int *)SecurityDescriptor + 2);
    if ( !(_DWORD)v5 )
      goto LABEL_6;
    v13 = (char *)SecurityDescriptor + v5;
  }
  else
  {
    v13 = (char *)*((_QWORD *)SecurityDescriptor + 2);
  }
  if ( v13 && !RtlValidSid(v13) )
    return 0;
LABEL_6:
  if ( (v2 & 4) != 0 )
  {
    if ( !v3 )
    {
      v7 = (ACL *)*((_QWORD *)SecurityDescriptor + 4);
      goto LABEL_10;
    }
    v6 = *((unsigned int *)SecurityDescriptor + 4);
    if ( (_DWORD)v6 )
    {
      v7 = (ACL *)((char *)SecurityDescriptor + v6);
LABEL_10:
      if ( v7 && !RtlValidAcl(v7) )
        return 0;
    }
  }
  v8 = *((_WORD *)SecurityDescriptor + 1);
  if ( (v8 & 0x10) == 0 )
    return 1;
  if ( v8 < 0 )
  {
    v10 = *((unsigned int *)SecurityDescriptor + 3);
    if ( !(_DWORD)v10 )
      return 1;
    v11 = (ACL *)((char *)SecurityDescriptor + v10);
  }
  else
  {
    v11 = (ACL *)*((_QWORD *)SecurityDescriptor + 3);
  }
  return !v11 || RtlValidAcl(v11);
}
