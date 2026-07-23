/*
 * XREFs of RtlValidSecurityDescriptor @ 0x1404A8A74
 * Callers:
 *     ObpAdjustAccessMask @ 0x1403E4704 (ObpAdjustAccessMask.c)
 *     ObOpenObjectByNameEx @ 0x140417F30 (ObOpenObjectByNameEx.c)
 *     ObInsertObjectEx @ 0x14041DDC0 (ObInsertObjectEx.c)
 *     _PnpOpenPropertiesKey @ 0x1404DDBBC (_PnpOpenPropertiesKey.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x140571390 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14057B5F8 (_PnpGetEnumSecurityDescriptor.c)
 *     ObpSetObjectAuditInfo @ 0x140666460 (ObpSetObjectAuditInfo.c)
 *     CMFCreateSecurityDescriptor @ 0x1406B89D4 (CMFCreateSecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1406DFDA4 (_PnpGetPropertiesSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x1406E3790 (DrvDbGetSecurityDescriptor.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x1407B33F4 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x1407B375C (PiAuCreateStandardSecurityObject.c)
 * Callees:
 *     RtlValidSid @ 0x140420690 (RtlValidSid.c)
 *     RtlValidAcl @ 0x140420800 (RtlValidAcl.c)
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
