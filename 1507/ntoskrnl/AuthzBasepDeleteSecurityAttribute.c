/*
 * XREFs of AuthzBasepDeleteSecurityAttribute @ 0x14002BBBC
 * Callers:
 *     AuthzBasepSetSecurityAttributesToken @ 0x14002BA68 (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepReplaceSecurityAttribute @ 0x14002BB50 (AuthzBasepReplaceSecurityAttribute.c)
 * Callees:
 *     AuthzBasepDeleteAllSecurityAttributeValues @ 0x140005990 (AuthzBasepDeleteAllSecurityAttributeValues.c)
 *     AuthzBasepAddSecurityAttributeToLists @ 0x14002C044 (AuthzBasepAddSecurityAttributeToLists.c)
 *     AuthzBasepFindSecurityAttribute @ 0x14002CCFC (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepFreeSecurityAttributeValues @ 0x140109290 (AuthzBasepFreeSecurityAttributeValues.c)
 *     AuthzBasepDeleteSecurityAttributeValues @ 0x140269BEC (AuthzBasepDeleteSecurityAttributeValues.c)
 *     AuthzBasepRemoveSecurityAttributeFromLists @ 0x140269D18 (AuthzBasepRemoveSecurityAttributeFromLists.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AuthzBasepDeleteSecurityAttribute(__int64 a1, __int64 a2)
{
  int v4; // edi
  __int64 SecurityAttribute; // rax
  __int64 v6; // r9
  _DWORD *v7; // rbx
  __int64 v9; // rdx
  __int64 v10; // r9
  _WORD v11[4]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+28h] [rbp-10h]
  char v13; // [rsp+48h] [rbp+10h] BYREF

  v11[0] = *(_WORD *)a2;
  v11[1] = v11[0];
  v4 = 0;
  v12 = *(_QWORD *)(a2 + 8);
  SecurityAttribute = AuthzBasepFindSecurityAttribute(a1, v11);
  v7 = (_DWORD *)SecurityAttribute;
  if ( !SecurityAttribute || (*(_DWORD *)(SecurityAttribute + 56) & 4) != 0 )
  {
    return (unsigned int)-1073741275;
  }
  else
  {
    LOBYTE(v6) = 1;
    AuthzBasepAddSecurityAttributeToLists(a1, SecurityAttribute, 0LL, v6);
    if ( *(_DWORD *)(a2 + 24) )
    {
      v4 = AuthzBasepDeleteSecurityAttributeValues(v7, a2, &v13);
      if ( v4 < 0 )
        return (unsigned int)v4;
      if ( v13 )
        v7[14] |= 4u;
    }
    else
    {
      v7[14] |= 4u;
      AuthzBasepDeleteAllSecurityAttributeValues((__int64)v7, v9);
    }
    if ( (v7[14] & 5) == 4 )
    {
      LOBYTE(v10) = 1;
      AuthzBasepRemoveSecurityAttributeFromLists(a1, v7, 0LL, v10);
      AuthzBasepFreeSecurityAttributeValues(v7, 0LL);
      ExFreePoolWithTag(v7, 0);
    }
  }
  return (unsigned int)v4;
}
