/*
 * XREFs of AuthzBasepAddSecurityAttribute @ 0x14002BC7C
 * Callers:
 *     AuthzBasepSetSecurityAttributesToken @ 0x14002BA68 (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepReplaceSecurityAttribute @ 0x14002BB50 (AuthzBasepReplaceSecurityAttribute.c)
 * Callees:
 *     AuthzBasepAllocateSecurityAttribute @ 0x140015930 (AuthzBasepAllocateSecurityAttribute.c)
 *     AuthzBasepAddSecurityAttributeValues @ 0x14002BD14 (AuthzBasepAddSecurityAttributeValues.c)
 *     AuthzBasepAddSecurityAttributeToLists @ 0x14002C044 (AuthzBasepAddSecurityAttributeToLists.c)
 *     AuthzBasepFindSecurityAttribute @ 0x14002CCFC (AuthzBasepFindSecurityAttribute.c)
 */

__int64 __fastcall AuthzBasepAddSecurityAttribute(__int64 a1, __int64 a2)
{
  __int64 SecurityAttribute; // rax
  __int64 v5; // r9
  _WORD *v6; // r11
  _WORD *v7; // rax
  __int64 v8; // r11
  unsigned __int16 v10[4]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+28h] [rbp-10h]

  if ( !*(_DWORD *)(a2 + 24) )
    return 3221225485LL;
  v10[0] = *(_WORD *)a2;
  v10[1] = v10[0];
  v11 = *(_QWORD *)(a2 + 8);
  SecurityAttribute = AuthzBasepFindSecurityAttribute(a1, v10);
  v6 = (_WORD *)SecurityAttribute;
  if ( SecurityAttribute )
  {
    *(_DWORD *)(SecurityAttribute + 56) &= ~4u;
    goto LABEL_5;
  }
  v7 = AuthzBasepAllocateSecurityAttribute(v10);
  v6 = v7;
  if ( v7 )
  {
    *((_DWORD *)v7 + 13) = *(_DWORD *)(a2 + 20);
    v7[24] = *(_WORD *)(a2 + 16);
LABEL_5:
    LOBYTE(v5) = 1;
    AuthzBasepAddSecurityAttributeToLists(a1, v6, 0LL, v5);
    return AuthzBasepAddSecurityAttributeValues(v8, a2);
  }
  return 3221225626LL;
}
