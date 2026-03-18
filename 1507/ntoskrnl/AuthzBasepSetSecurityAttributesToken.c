/*
 * XREFs of AuthzBasepSetSecurityAttributesToken @ 0x14002BA68
 * Callers:
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x14012A2E4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepInternalSetSecurityAttributesToken @ 0x14024F150 (SepInternalSetSecurityAttributesToken.c)
 *     SeSetSecurityAttributesTokenEx @ 0x14024FCD0 (SeSetSecurityAttributesTokenEx.c)
 *     SepSetSingletonEntry @ 0x14024FEF0 (SepSetSingletonEntry.c)
 *     SepSetProcessUniqueAttribute @ 0x14046A840 (SepSetProcessUniqueAttribute.c)
 *     NtSetInformationToken @ 0x14046BEF8 (NtSetInformationToken.c)
 *     SepCreateClaimAttributes @ 0x14046E408 (SepCreateClaimAttributes.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x140592908 (AuthzBasepInitializeSystemSecurityAttributes.c)
 * Callees:
 *     AuthzBasepFinaliseSecurityAttributesList @ 0x140015A10 (AuthzBasepFinaliseSecurityAttributesList.c)
 *     AuthzBasepReplaceSecurityAttribute @ 0x14002BB50 (AuthzBasepReplaceSecurityAttribute.c)
 *     AuthzBasepDeleteSecurityAttribute @ 0x14002BBBC (AuthzBasepDeleteSecurityAttribute.c)
 *     AuthzBasepAddSecurityAttribute @ 0x14002BC7C (AuthzBasepAddSecurityAttribute.c)
 *     AuthzBasepValidateSecurityAttributes @ 0x14002CD98 (AuthzBasepValidateSecurityAttributes.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x140109210 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepDeleteAllSecurityAttributes @ 0x140269B9C (AuthzBasepDeleteAllSecurityAttributes.c)
 */

__int64 __fastcall AuthzBasepSetSecurityAttributesToken(__int64 a1, _DWORD *a2, __int64 a3)
{
  char v6; // si
  bool v7; // bp
  int v8; // ebx
  unsigned int i; // r14d
  __int64 v10; // rdx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // eax

  v6 = 1;
  v7 = *a2 == 1;
  if ( !a3 )
  {
    if ( *a2 == 1 )
    {
      AuthzBasepFreeSecurityAttributesList();
      v8 = 0;
      goto LABEL_15;
    }
LABEL_22:
    v8 = -1073741811;
    goto LABEL_18;
  }
  v8 = AuthzBasepValidateSecurityAttributes(a3);
  if ( v8 < 0 )
  {
LABEL_18:
    v6 = 0;
    goto LABEL_15;
  }
  if ( v7 )
    AuthzBasepDeleteAllSecurityAttributes(a1);
  for ( i = 0; i < *(_DWORD *)(a3 + 4); ++i )
  {
    v10 = *(_QWORD *)(a3 + 8) + 40LL * i;
    if ( !v7 )
    {
      v11 = a2[i];
      if ( !v11 )
      {
        v8 = 0;
        goto LABEL_13;
      }
      v12 = v11 - 2;
      if ( !v12 )
      {
        v14 = AuthzBasepAddSecurityAttribute(a1, v10);
        goto LABEL_12;
      }
      v13 = v12 - 1;
      if ( !v13 )
      {
        v14 = AuthzBasepDeleteSecurityAttribute(a1, v10);
        goto LABEL_12;
      }
      if ( v13 != 1 )
        goto LABEL_22;
    }
    v14 = AuthzBasepReplaceSecurityAttribute(a1, v10);
LABEL_12:
    v8 = v14;
LABEL_13:
    if ( v8 < 0 )
      goto LABEL_18;
  }
LABEL_15:
  AuthzBasepFinaliseSecurityAttributesList(a1, v6);
  return (unsigned int)v8;
}
