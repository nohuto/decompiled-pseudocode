/*
 * XREFs of SepCreateImpersonationTokenDacl @ 0x14041FB20
 * Callers:
 *     NtOpenThreadTokenEx @ 0x140412440 (NtOpenThreadTokenEx.c)
 * Callees:
 *     RtlEqualSid @ 0x14000F0F0 (RtlEqualSid.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlCreateAcl @ 0x14041F978 (RtlCreateAcl.c)
 *     RtlpAddKnownAce @ 0x1404206C0 (RtlpAddKnownAce.c)
 *     RtlAddAccessAllowedAce @ 0x14048DBDC (RtlAddAccessAllowedAce.c)
 */

__int64 __fastcall SepCreateImpersonationTokenDacl(__int64 a1, __int64 a2, ACL **a3)
{
  unsigned __int8 *v4; // r14
  unsigned __int8 *v5; // rbp
  unsigned __int8 *v8; // r13
  ULONG v9; // r15d
  ACL *PoolWithTag; // rax
  ACL *v11; // rbx
  void *Src; // [rsp+60h] [rbp+8h]

  v4 = 0LL;
  v5 = 0LL;
  Src = **(void ***)(a2 + 152);
  if ( (*(_DWORD *)(a2 + 200) & 0x4000) != 0 )
    v5 = *(unsigned __int8 **)(a2 + 784);
  v8 = **(unsigned __int8 ***)(a1 + 152);
  if ( (*(_DWORD *)(a1 + 200) & 0x4000) != 0 )
    v4 = *(unsigned __int8 **)(a1 + 784);
  v9 = 4
     * (*(unsigned __int8 *)(**(_QWORD **)(a2 + 152) + 1LL)
      + v8[1]
      + *((unsigned __int8 *)SeLocalSystemSid + 1)
      + *((unsigned __int8 *)SeAliasAdminsSid + 1)
      + *((unsigned __int8 *)SeRestrictedSid + 1))
     + 88;
  if ( v4 )
    v9 += 4 * v4[1] + 16;
  if ( v5 )
  {
    if ( v4 && RtlEqualSid(v5, v4) )
      v5 = 0LL;
    else
      v9 += 4 * v5[1] + 16;
  }
  PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v9, 0x20206553u);
  v11 = PoolWithTag;
  if ( PoolWithTag )
  {
    RtlCreateAcl(PoolWithTag, v9, 2u);
    RtlpAddKnownAce((int)v11, 2, 0, 983551, Src, 0);
    RtlpAddKnownAce((int)v11, 2, 0, 983551, v8, 0);
    RtlpAddKnownAce((int)v11, 2, 0, 983551, SeAliasAdminsSid, 0);
    RtlpAddKnownAce((int)v11, 2, 0, 983551, SeLocalSystemSid, 0);
    if ( v4 )
      RtlAddAccessAllowedAce(v11, 2u, 0xF01FFu, v4);
    if ( v5 )
      RtlAddAccessAllowedAce(v11, 2u, 0xF01FFu, v5);
    if ( *(_QWORD *)(a2 + 160) || *(_QWORD *)(a1 + 160) )
      RtlAddAccessAllowedAce(v11, 2u, 0xF01FFu, SeRestrictedSid);
    *a3 = v11;
    return 0LL;
  }
  else
  {
    *a3 = 0LL;
    return 3221225626LL;
  }
}
