/*
 * XREFs of AuthzBasepDeleteSecurityAttribute @ 0x140005F10
 * Callers:
 *     AuthzBasepSetSecurityAttributesToken @ 0x1400059B0 (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepReplaceSecurityAttribute @ 0x140005A98 (AuthzBasepReplaceSecurityAttribute.c)
 * Callees:
 *     AuthzBasepDeleteAllSecurityAttributeValues @ 0x1400015A8 (AuthzBasepDeleteAllSecurityAttributeValues.c)
 *     AuthzBasepFreeSecurityAttributeValues @ 0x1400015F0 (AuthzBasepFreeSecurityAttributeValues.c)
 *     AuthzBasepAddSecurityAttributeToLists @ 0x140005ECC (AuthzBasepAddSecurityAttributeToLists.c)
 *     AuthzBasepFindSecurityAttribute @ 0x14009C450 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepDeleteSecurityAttributeValues @ 0x140219F0C (AuthzBasepDeleteSecurityAttributeValues.c)
 *     AuthzBasepRemoveSecurityAttributeFromLists @ 0x14021A038 (AuthzBasepRemoveSecurityAttributeFromLists.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AuthzBasepDeleteSecurityAttribute(__int64 a1, __int64 a2)
{
  int v4; // edi
  __int64 SecurityAttribute; // rax
  _DWORD *v6; // rbx
  __int64 v8; // rdx
  __int64 v9; // r9
  __int64 v10; // r8
  _WORD v11[4]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+28h] [rbp-10h]
  char v13; // [rsp+48h] [rbp+10h] BYREF

  v11[0] = *(_WORD *)a2;
  v11[1] = v11[0];
  v4 = 0;
  v12 = *(_QWORD *)(a2 + 8);
  SecurityAttribute = AuthzBasepFindSecurityAttribute(a1, v11);
  v6 = (_DWORD *)SecurityAttribute;
  if ( !SecurityAttribute || (*(_DWORD *)(SecurityAttribute + 56) & 4) != 0 )
  {
    return (unsigned int)-1073741275;
  }
  else
  {
    AuthzBasepAddSecurityAttributeToLists(a1, SecurityAttribute, 0, 1);
    if ( *(_DWORD *)(a2 + 24) )
    {
      v4 = AuthzBasepDeleteSecurityAttributeValues(v6, a2, &v13);
      if ( v4 < 0 )
        return (unsigned int)v4;
      if ( v13 )
        v6[14] |= 4u;
    }
    else
    {
      v6[14] |= 4u;
      AuthzBasepDeleteAllSecurityAttributeValues((__int64)v6, v8);
    }
    if ( (v6[14] & 5) == 4 )
    {
      LOBYTE(v9) = 1;
      AuthzBasepRemoveSecurityAttributeFromLists(a1, v6, 0LL, v9);
      AuthzBasepFreeSecurityAttributeValues((__int64)v6, 0, v10);
      ExFreePoolWithTag(v6, 0);
    }
  }
  return (unsigned int)v4;
}
