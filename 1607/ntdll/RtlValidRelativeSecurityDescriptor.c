/*
 * XREFs of RtlValidRelativeSecurityDescriptor @ 0x180076CB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlValidAcl @ 0x180014FB0 (RtlValidAcl.c)
 *     RtlpValidateSDOffsetAndSize @ 0x180076E20 (RtlpValidateSDOffsetAndSize.c)
 */

BOOLEAN __cdecl RtlValidRelativeSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptorInput,
        ULONG SecurityDescriptorLength,
        SECURITY_INFORMATION RequiredInformation)
{
  char v3; // r10
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx
  unsigned __int8 v9; // cl
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned __int8 v12; // cl
  __int64 v13; // rcx
  __int64 v14; // rcx
  ACL *v15; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  ACL *v19; // rcx
  unsigned int v20; // [rsp+38h] [rbp+10h] BYREF

  v3 = RequiredInformation;
  if ( SecurityDescriptorLength < 0x14
    || *(_BYTE *)SecurityDescriptorInput != 1
    || *((__int16 *)SecurityDescriptorInput + 1) >= 0 )
  {
    return 0;
  }
  v6 = *((unsigned int *)SecurityDescriptorInput + 1);
  v7 = 12LL;
  if ( (_DWORD)v6 )
  {
    if ( !(unsigned __int8)RtlpValidateSDOffsetAndSize(v6, SecurityDescriptorLength, 12LL, &v20) )
      return 0;
    if ( *((_BYTE *)SecurityDescriptorInput + v8) != 1 )
      return 0;
    v9 = *((_BYTE *)SecurityDescriptorInput + v8 + 1);
    if ( v9 > 0xFu || v20 < 4 * (unsigned int)v9 + 8 )
      return 0;
  }
  else if ( (v3 & 1) != 0 )
  {
    return 0;
  }
  v10 = *((unsigned int *)SecurityDescriptorInput + 2);
  if ( (_DWORD)v10 )
  {
    if ( !(unsigned __int8)RtlpValidateSDOffsetAndSize(v10, SecurityDescriptorLength, v7, &v20) )
      return 0;
    if ( *((_BYTE *)SecurityDescriptorInput + v11) != 1 )
      return 0;
    v12 = *((_BYTE *)SecurityDescriptorInput + v11 + 1);
    if ( v12 > 0xFu || v20 < 4 * (unsigned int)v12 + 8 )
      return 0;
  }
  else if ( (v3 & 2) != 0 )
  {
    return 0;
  }
  if ( (*((_BYTE *)SecurityDescriptorInput + 2) & 4) == 0
    || (v13 = *((unsigned int *)SecurityDescriptorInput + 4), !(_DWORD)v13)
    || (unsigned __int8)RtlpValidateSDOffsetAndSize(v13, SecurityDescriptorLength, 8LL, &v20)
    && (v15 = (ACL *)((char *)SecurityDescriptorInput + v14), v20 >= v15->AclSize)
    && RtlValidAcl(v15) )
  {
    if ( (*((_BYTE *)SecurityDescriptorInput + 2) & 0x10) == 0 )
      return 1;
    v17 = *((unsigned int *)SecurityDescriptorInput + 3);
    if ( !(_DWORD)v17 )
      return 1;
    if ( (unsigned __int8)RtlpValidateSDOffsetAndSize(v17, SecurityDescriptorLength, 8LL, &v20) )
    {
      v19 = (ACL *)((char *)SecurityDescriptorInput + v18);
      if ( v20 >= v19->AclSize )
      {
        if ( RtlValidAcl(v19) )
          return 1;
      }
    }
  }
  return 0;
}
