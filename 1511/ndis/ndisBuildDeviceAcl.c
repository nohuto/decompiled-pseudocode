/*
 * XREFs of ndisBuildDeviceAcl @ 0x1C009B74C
 * Callers:
 *     ndisCreateSecurityDescriptorEx @ 0x1C009A390 (ndisCreateSecurityDescriptorEx.c)
 *     ndisCreateSecurityDescriptor @ 0x1C009B5F0 (ndisCreateSecurityDescriptor.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     memset @ 0x1C0026F40 (memset.c)
 */

__int64 __fastcall ndisBuildDeviceAcl(ACL **a1, char a2)
{
  _DWORD *v2; // r15
  _DWORD *v3; // r13
  GENERIC_MAPPING *FileObjectGenericMapping; // rax
  ULONG v6; // edi
  int v7; // r12d
  ULONG v8; // eax
  _DWORD *PoolWithTag; // rax
  int v10; // r14d
  ACL *v11; // rax
  ACL *v12; // rsi
  NTSTATUS Acl; // ebx
  ULONG v15; // ebx
  ULONG v16; // ebx
  ULONG v17; // ebx
  ULONG v18; // eax
  _DWORD *v19; // rax
  ACCESS_MASK AccessMask; // [rsp+20h] [rbp-30h] BYREF
  int v21; // [rsp+24h] [rbp-2Ch]
  int v22; // [rsp+28h] [rbp-28h]
  int v23; // [rsp+2Ch] [rbp-24h]
  int v24; // [rsp+30h] [rbp-20h]
  int v25; // [rsp+34h] [rbp-1Ch]
  ACL **v26; // [rsp+38h] [rbp-18h]
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+40h] [rbp-10h] BYREF

  v26 = a1;
  v2 = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v3 = 0LL;
  AccessMask = 0x10000000;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  FileObjectGenericMapping = IoGetFileObjectGenericMapping();
  RtlMapGenericMask(&AccessMask, FileObjectGenericMapping);
  v6 = RtlLengthSid(SeExports->SeAliasAdminsSid) + 16;
  v24 = a2 & 2;
  if ( (a2 & 2) != 0 )
    v6 += RtlLengthSid(SeExports->SeLocalSystemSid) + 8;
  v7 = a2 & 8;
  if ( (a2 & 8) != 0 )
    v6 += RtlLengthSid(SeExports->SeNetworkServiceSid) + 8;
  v25 = a2 & 0x10;
  if ( (a2 & 0x10) != 0 )
  {
    v15 = RtlLengthSid(&unk_1C0070518);
    v16 = RtlLengthSid(&unk_1C0070538) + v15;
    v17 = RtlLengthSid(&unk_1C0070558) + v16;
    v6 += v17 + RtlLengthSid(&unk_1C0070578) + 32;
  }
  v21 = a2 & 4;
  if ( (a2 & 4) != 0 )
  {
    v8 = RtlLengthRequiredSid(2u);
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v8, 0x7363444Eu);
    v2 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    if ( RtlInitializeSid(PoolWithTag, &IdentifierAuthority, 2u) )
      goto LABEL_39;
    v2[2] = 32;
    v2[3] = 556;
    v6 += RtlLengthSid(v2) + 8;
  }
  v22 = a2 & 0x20;
  if ( (a2 & 0x20) != 0 )
    v6 += RtlLengthSid(SeExports->SeLocalServiceSid) + 8;
  v23 = a2 & 0x40;
  if ( (a2 & 0x40) == 0 )
    goto LABEL_14;
  v18 = RtlLengthRequiredSid(2u);
  v19 = ExAllocatePoolWithTag(NonPagedPoolNx, v18, 0x6C70444Eu);
  v3 = v19;
  if ( v19 )
  {
    if ( RtlInitializeSid(v19, &IdentifierAuthority, 2u) )
      goto LABEL_43;
    v3[2] = 32;
    v3[3] = 559;
    v6 += RtlLengthSid(v3) + 8;
LABEL_14:
    v10 = a2 & 0x80;
    if ( v10 )
      v6 += RtlLengthSid(&unk_1C0070598) + 8;
    v11 = (ACL *)ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x6573444Eu);
    v12 = v11;
    if ( v11 )
    {
      memset(v11, 0, v6);
      Acl = RtlCreateAcl(v12, v6, 2u);
      if ( Acl < 0 )
      {
        ExFreePoolWithTag(v12, 0);
      }
      else
      {
        RtlAddAccessAllowedAce(v12, 2u, AccessMask, SeExports->SeAliasAdminsSid);
        Acl = 0;
        if ( v24 )
          RtlAddAccessAllowedAce(v12, 2u, AccessMask, SeExports->SeLocalSystemSid);
        if ( v7 )
          RtlAddAccessAllowedAce(v12, 2u, AccessMask, SeExports->SeNetworkServiceSid);
        if ( v25 )
        {
          RtlAddAccessAllowedAce(v12, 2u, AccessMask, &unk_1C0070578);
          RtlAddAccessAllowedAce(v12, 2u, AccessMask, &unk_1C0070558);
          RtlAddAccessAllowedAce(v12, 2u, AccessMask, &unk_1C0070538);
          RtlAddAccessAllowedAce(v12, 2u, AccessMask, &unk_1C0070518);
        }
        if ( v21 )
          RtlAddAccessAllowedAce(v12, 2u, AccessMask, v2);
        if ( v22 )
          RtlAddAccessAllowedAce(v12, 2u, AccessMask, SeExports->SeLocalServiceSid);
        if ( v23 )
          RtlAddAccessAllowedAce(v12, 2u, AccessMask, v3);
        if ( v10 )
          RtlAddAccessAllowedAce(v12, 2u, AccessMask, &unk_1C0070598);
        *v26 = v12;
      }
      goto LABEL_33;
    }
LABEL_43:
    Acl = -1073741670;
LABEL_33:
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
    goto LABEL_35;
  }
LABEL_39:
  Acl = -1073741670;
LABEL_35:
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  return (unsigned int)Acl;
}
