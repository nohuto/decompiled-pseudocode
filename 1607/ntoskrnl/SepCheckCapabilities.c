/*
 * XREFs of SepCheckCapabilities @ 0x1403E1D20
 * Callers:
 *     NtCreateLowBoxToken @ 0x14047AAA8 (NtCreateLowBoxToken.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1404E6774 (SepIsImpersonationAllowedDueToCapability.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x14000D278 (RtlSubAuthoritySid.c)
 *     RtlEqualSid @ 0x14000F0F0 (RtlEqualSid.c)
 *     RtlSubAuthorityCountSid @ 0x14002CDC8 (RtlSubAuthorityCountSid.c)
 *     RtlCompareMemory @ 0x1401679D0 (RtlCompareMemory.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     SeQueryInformationToken @ 0x140438EC0 (SeQueryInformationToken.c)
 */

__int64 __fastcall SepCheckCapabilities(void *a1, unsigned int a2, PSID *a3, __int64 a4, char *a5)
{
  PSID *v5; // rdi
  char v8; // r12
  NTSTATUS v9; // eax
  unsigned int *v10; // rsi
  unsigned int v11; // r15d
  char v12; // bl
  unsigned int v13; // r13d
  unsigned int v14; // ebp
  PSID v15; // rax
  __int64 v16; // r12
  NTSTATUS v18; // eax
  PSID v19; // rbx
  PULONG v20; // rbx
  PULONG v21; // rax
  PVOID TokenInformation; // [rsp+20h] [rbp-58h] BYREF
  PVOID v23; // [rsp+28h] [rbp-50h] BYREF
  PSID i; // [rsp+30h] [rbp-48h]
  char v27; // [rsp+98h] [rbp+20h]

  TokenInformation = 0LL;
  v5 = 0LL;
  v23 = 0LL;
  v8 = 1;
  v27 = 1;
  *a5 = 0;
  v9 = SeQueryInformationToken(a1, TokenCapabilities, &TokenInformation);
  v10 = (unsigned int *)TokenInformation;
  v11 = v9;
  if ( v9 >= 0 )
  {
    LODWORD(TokenInformation) = 0;
    v12 = 1;
    if ( a2 )
    {
      do
      {
        v13 = *v10;
        v12 = 0;
        v14 = 0;
        if ( *v10 )
        {
          v15 = *a3;
          for ( i = *a3; ; v15 = i )
          {
            v16 = 4LL * v14;
            if ( RtlEqualSid(*(PSID *)&v10[v16 + 2], v15) && v10[v16 + 4] == *((_DWORD *)a3 + 2) )
            {
              v8 = v27;
              v12 = 1;
              goto LABEL_10;
            }
            if ( ++v14 >= v13 )
              break;
          }
          v8 = v27;
        }
        if ( *((_BYTE *)*a3 + 1) != 9 || *RtlSubAuthoritySid(*a3, 0) != 3 )
          break;
        if ( !v5 )
        {
          v18 = SeQueryInformationToken(a1, TokenAppContainerSid, &v23);
          v5 = (PSID *)v23;
          v11 = v18;
          if ( v18 < 0 )
            goto LABEL_12;
        }
        v19 = *v5;
        if ( *RtlSubAuthorityCountSid(*v5) < 8u
          || (v20 = RtlSubAuthoritySid(v19, 1u),
              v21 = RtlSubAuthoritySid(*a3, 1u),
              RtlCompareMemory(v21, v20, 0x1CuLL) != 28) )
        {
          v8 = 0;
          v27 = 0;
        }
        v12 = v8;
        if ( !v8 )
          break;
LABEL_10:
        a3 += 2;
        LODWORD(TokenInformation) = (_DWORD)TokenInformation + 1;
      }
      while ( (unsigned int)TokenInformation < a2 );
    }
    *a5 = v12;
  }
LABEL_12:
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return v11;
}
