/*
 * XREFs of AuthzBasepSetSecurityAttributesToken @ 0x1400059B0
 * Callers:
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1400050D4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepInternalSetSecurityAttributesToken @ 0x140200254 (SepInternalSetSecurityAttributesToken.c)
 *     SeSetSecurityAttributesTokenEx @ 0x140200DEC (SeSetSecurityAttributesTokenEx.c)
 *     SepSetSingletonEntry @ 0x140201014 (SepSetSingletonEntry.c)
 *     SepCreateClaimAttributes @ 0x1403C23C0 (SepCreateClaimAttributes.c)
 *     NtSetInformationToken @ 0x1403C45C8 (NtSetInformationToken.c)
 *     SepSetProcessUniqueAttribute @ 0x1403C5684 (SepSetProcessUniqueAttribute.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x14052ED4C (AuthzBasepInitializeSystemSecurityAttributes.c)
 * Callees:
 *     AuthzBasepReplaceSecurityAttribute @ 0x140005A98 (AuthzBasepReplaceSecurityAttribute.c)
 *     AuthzBasepAddSecurityAttribute @ 0x140005B04 (AuthzBasepAddSecurityAttribute.c)
 *     AuthzBasepDeleteSecurityAttribute @ 0x140005F10 (AuthzBasepDeleteSecurityAttribute.c)
 *     AuthzBasepFinaliseSecurityAttributesList @ 0x14000694C (AuthzBasepFinaliseSecurityAttributesList.c)
 *     AuthzBasepValidateSecurityAttributes @ 0x1400069AC (AuthzBasepValidateSecurityAttributes.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x14000D930 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepDeleteAllSecurityAttributes @ 0x140219EBC (AuthzBasepDeleteAllSecurityAttributes.c)
 */

__int64 __fastcall AuthzBasepSetSecurityAttributesToken(__int64 a1, _DWORD *a2, __int64 a3)
{
  _DWORD *v4; // r12
  char v6; // si
  bool v7; // bp
  int v8; // ebx
  unsigned int i; // r14d
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // eax

  v4 = a2;
  v6 = 1;
  v7 = *a2 == 1;
  if ( !a3 )
  {
    if ( *a2 == 1 )
    {
      AuthzBasepFreeSecurityAttributesList(a1);
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
    a2 = (_DWORD *)(*(_QWORD *)(a3 + 8) + 40LL * i);
    if ( !v7 )
    {
      v10 = v4[i];
      if ( !v10 )
      {
        v8 = 0;
        goto LABEL_13;
      }
      v11 = v10 - 2;
      if ( !v11 )
      {
        v13 = AuthzBasepAddSecurityAttribute(a1, a2);
        goto LABEL_12;
      }
      v12 = v11 - 1;
      if ( !v12 )
      {
        v13 = AuthzBasepDeleteSecurityAttribute(a1, a2);
        goto LABEL_12;
      }
      if ( v12 != 1 )
        goto LABEL_22;
    }
    v13 = AuthzBasepReplaceSecurityAttribute(a1, a2);
LABEL_12:
    v8 = v13;
LABEL_13:
    if ( v8 < 0 )
      goto LABEL_18;
  }
LABEL_15:
  LOBYTE(a2) = v6;
  AuthzBasepFinaliseSecurityAttributesList(a1, a2);
  return (unsigned int)v8;
}
