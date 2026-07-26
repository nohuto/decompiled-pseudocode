/*
 * XREFs of ndisCreateAcl @ 0x1C01032BC
 * Callers:
 *     DriverEntry @ 0x1C01023B0 (DriverEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 */

ACL *__fastcall ndisCreateAcl(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, char a6, ACCESS_MASK AccessMask)
{
  ACL *v7; // rdi
  ULONG v8; // ebx
  ULONG v9; // ebx
  ULONG v10; // ebx
  ULONG v11; // ebx
  ULONG v12; // eax
  _DWORD *PoolWithTag; // rax
  _DWORD *v14; // rsi
  ULONG v15; // ebp
  ACL *v16; // rax
  ACL *v17; // rbx
  NTSTATUS Acl; // eax
  NTSTATUS v19; // eax
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+20h] [rbp-18h] BYREF

  v7 = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  v8 = RtlLengthSid(SeExports->SeAliasAdminsSid) + 16;
  v9 = RtlLengthSid(SeExports->SeLocalSystemSid) + 16 + v8;
  v10 = RtlLengthSid(SeExports->SeLocalServiceSid) + 16 + v9;
  v11 = RtlLengthSid(SeExports->SeNetworkServiceSid) + 16 + v10;
  v12 = RtlLengthRequiredSid(2u);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v12, 0x7363444Eu);
  v14 = PoolWithTag;
  if ( PoolWithTag )
  {
    if ( RtlInitializeSid(PoolWithTag, &IdentifierAuthority, 2u) )
      goto LABEL_15;
    v14[2] = 32;
    v14[3] = 556;
    v15 = v11 + RtlLengthSid(v14) + 16;
    if ( a6 )
      v15 += RtlLengthSid(SeExports->SeAliasUsersSid) + 16;
    v16 = (ACL *)ExAllocatePoolWithTag(PagedPool, v15, 0x6573444Eu);
    v17 = v16;
    if ( !v16 )
      goto LABEL_15;
    Acl = RtlCreateAcl(v16, v15, 2u);
    if ( Acl < 0 )
    {
      DbgPrint("RtlCreateAcl failed, Status %lx.\n", (unsigned int)Acl);
    }
    else
    {
      v19 = RtlAddAccessAllowedAce(v17, 2u, 0x1FFFFFu, SeExports->SeAliasAdminsSid);
      if ( v19 >= 0 )
      {
        v19 = RtlAddAccessAllowedAce(v17, 2u, 0x1FFFFFu, SeExports->SeLocalSystemSid);
        if ( v19 >= 0 )
        {
          v19 = RtlAddAccessAllowedAce(v17, 2u, 0x1FFFFFu, SeExports->SeLocalServiceSid);
          if ( v19 >= 0 )
          {
            v19 = RtlAddAccessAllowedAce(v17, 2u, 0x1FFFFFu, SeExports->SeNetworkServiceSid);
            if ( v19 >= 0 )
            {
              v19 = RtlAddAccessAllowedAce(v17, 2u, 0x1FFFFFu, v14);
              if ( v19 >= 0 )
              {
                if ( !a6 || (v19 = RtlAddAccessAllowedAce(v17, 2u, AccessMask, SeExports->SeAliasUsersSid), v19 >= 0) )
                {
                  v7 = v17;
LABEL_15:
                  ExFreePoolWithTag(v14, 0);
                  return v7;
                }
              }
            }
          }
        }
      }
      DbgPrint("RtlAddAccessAllowedAce failed, Status %lx.\n", (unsigned int)v19);
    }
    ExFreePoolWithTag(v17, 0);
    goto LABEL_15;
  }
  return v7;
}
