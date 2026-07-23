/*
 * XREFs of RtlValidSecurityDescriptor @ 0x180020220
 * Callers:
 *     RtlpConvertToAutoInheritSecurityObject @ 0x1800CF858 (RtlpConvertToAutoInheritSecurityObject.c)
 *     _ResCreateSecurityDescriptor @ 0x1800F9C9C (_ResCreateSecurityDescriptor.c)
 * Callees:
 *     RtlValidSid @ 0x180020320 (RtlValidSid.c)
 *     RtlValidAcl @ 0x180020360 (RtlValidAcl.c)
 */

BOOLEAN __cdecl RtlValidSecurityDescriptor(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  char *v2; // rcx
  char *v3; // rcx
  ACL *v4; // rcx
  ACL *v5; // rcx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return 0;
  if ( *((__int16 *)SecurityDescriptor + 1) >= 0 )
  {
    v2 = (char *)*((_QWORD *)SecurityDescriptor + 1);
  }
  else
  {
    if ( !*((_DWORD *)SecurityDescriptor + 1) )
      goto LABEL_7;
    v2 = (char *)SecurityDescriptor + *((unsigned int *)SecurityDescriptor + 1);
  }
  if ( v2 && !RtlValidSid(v2) )
    return 0;
LABEL_7:
  if ( (*((_WORD *)SecurityDescriptor + 1) & 0x8000) != 0 )
  {
    if ( !*((_DWORD *)SecurityDescriptor + 2) )
      goto LABEL_12;
    v3 = (char *)SecurityDescriptor + *((unsigned int *)SecurityDescriptor + 2);
  }
  else
  {
    v3 = (char *)*((_QWORD *)SecurityDescriptor + 2);
  }
  if ( v3 && !RtlValidSid(v3) )
    return 0;
LABEL_12:
  if ( (*((_BYTE *)SecurityDescriptor + 2) & 4) == 0 )
    goto LABEL_18;
  if ( (*((_WORD *)SecurityDescriptor + 1) & 0x8000) != 0 )
  {
    if ( !*((_DWORD *)SecurityDescriptor + 4) )
      goto LABEL_18;
    v4 = (ACL *)((char *)SecurityDescriptor + *((unsigned int *)SecurityDescriptor + 4));
  }
  else
  {
    v4 = (ACL *)*((_QWORD *)SecurityDescriptor + 4);
  }
  if ( v4 && !RtlValidAcl(v4) )
    return 0;
LABEL_18:
  if ( (*((_BYTE *)SecurityDescriptor + 2) & 0x10) != 0 )
  {
    if ( (*((_WORD *)SecurityDescriptor + 1) & 0x8000) != 0 )
    {
      if ( !*((_DWORD *)SecurityDescriptor + 3) )
        return 1;
      v5 = (ACL *)((char *)SecurityDescriptor + *((unsigned int *)SecurityDescriptor + 3));
    }
    else
    {
      v5 = (ACL *)*((_QWORD *)SecurityDescriptor + 3);
    }
    if ( v5 && !RtlValidAcl(v5) )
      return 0;
  }
  return 1;
}
