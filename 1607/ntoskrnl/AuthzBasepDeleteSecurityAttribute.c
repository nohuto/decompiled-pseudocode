/*
 * XREFs of AuthzBasepDeleteSecurityAttribute @ 0x14007C854
 * Callers:
 *     AuthzBasepSetSecurityAttributesToken @ 0x14007C2E4 (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepReplaceSecurityAttribute @ 0x14007C3D4 (AuthzBasepReplaceSecurityAttribute.c)
 * Callees:
 *     AuthzBasepDeleteAllSecurityAttributeValues @ 0x140001514 (AuthzBasepDeleteAllSecurityAttributeValues.c)
 *     AuthzBasepFindSecurityAttribute @ 0x14000E2C0 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepAddSecurityAttributeToLists @ 0x14007C810 (AuthzBasepAddSecurityAttributeToLists.c)
 *     AuthzBasepFreeSecurityAttributeValues @ 0x14010C9B0 (AuthzBasepFreeSecurityAttributeValues.c)
 *     AuthzBasepDeleteSecurityAttributeValues @ 0x140233FEC (AuthzBasepDeleteSecurityAttributeValues.c)
 *     AuthzBasepRemoveSecurityAttributeFromLists @ 0x140234118 (AuthzBasepRemoveSecurityAttributeFromLists.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AuthzBasepDeleteSecurityAttribute(__int64 a1, __int64 a2)
{
  int v4; // edi
  __int64 *SecurityAttribute; // rax
  __int64 *v6; // rbx
  __int64 v8; // rdx
  __int64 v9; // r9
  UNICODE_STRING v10; // [rsp+20h] [rbp-18h] BYREF
  char v11; // [rsp+48h] [rbp+10h] BYREF

  v10.Length = *(_WORD *)a2;
  v10.MaximumLength = v10.Length;
  v4 = 0;
  v10.Buffer = *(wchar_t **)(a2 + 8);
  SecurityAttribute = AuthzBasepFindSecurityAttribute(a1, &v10);
  v6 = SecurityAttribute;
  if ( !SecurityAttribute || (SecurityAttribute[7] & 4) != 0 )
  {
    return (unsigned int)-1073741275;
  }
  else
  {
    AuthzBasepAddSecurityAttributeToLists(a1, (__int64)SecurityAttribute, 0, 1);
    if ( *(_DWORD *)(a2 + 24) )
    {
      v4 = AuthzBasepDeleteSecurityAttributeValues(v6, a2, &v11);
      if ( v4 < 0 )
        return (unsigned int)v4;
      if ( v11 )
        *((_DWORD *)v6 + 14) |= 4u;
    }
    else
    {
      *((_DWORD *)v6 + 14) |= 4u;
      AuthzBasepDeleteAllSecurityAttributeValues((__int64)v6, v8);
    }
    if ( (v6[7] & 5) == 4 )
    {
      LOBYTE(v9) = 1;
      AuthzBasepRemoveSecurityAttributeFromLists(a1, v6, 0LL, v9);
      AuthzBasepFreeSecurityAttributeValues(v6, 0LL);
      ExFreePoolWithTag(v6, 0);
    }
  }
  return (unsigned int)v4;
}
