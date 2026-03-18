/*
 * XREFs of SepCheckCapabilities @ 0x140408A80
 * Callers:
 *     SepIsImpersonationAllowedDueToCapability @ 0x14040FC40 (SepIsImpersonationAllowedDueToCapability.c)
 *     NtCreateLowBoxToken @ 0x140412A24 (NtCreateLowBoxToken.c)
 * Callees:
 *     RtlEqualSid @ 0x140014CF0 (RtlEqualSid.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     SeQueryInformationToken @ 0x140481E90 (SeQueryInformationToken.c)
 */

__int64 __fastcall SepCheckCapabilities(void *a1, unsigned int a2, __int64 a3, __int64 a4, char *a5)
{
  char *v5; // r15
  NTSTATUS v8; // eax
  PSID *v9; // rbx
  unsigned int v10; // r13d
  unsigned int v11; // r14d
  char v12; // di
  unsigned int v13; // r12d
  unsigned int v14; // ebp
  PVOID v15; // rax
  PVOID P; // [rsp+20h] [rbp-38h] BYREF

  v5 = a5;
  P = 0LL;
  *a5 = 0;
  v8 = SeQueryInformationToken(a1, TokenCapabilities, &P);
  v9 = (PSID *)P;
  v10 = v8;
  if ( v8 >= 0 )
  {
    v11 = 0;
    v12 = 1;
    if ( a2 )
    {
      v13 = *(_DWORD *)P;
      do
      {
        v12 = 0;
        v14 = 0;
        if ( !v13 )
          break;
        v15 = *(PVOID *)a3;
        P = *(PVOID *)a3;
        while ( !RtlEqualSid(v9[2 * v14 + 1], v15) || LODWORD(v9[2 * v14 + 2]) != *(_DWORD *)(a3 + 8) )
        {
          if ( ++v14 >= v13 )
            goto LABEL_11;
          v15 = P;
        }
        ++v11;
        a3 += 16LL;
        v12 = 1;
      }
      while ( v11 < a2 );
LABEL_11:
      v5 = a5;
    }
    *v5 = v12;
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return v10;
}
