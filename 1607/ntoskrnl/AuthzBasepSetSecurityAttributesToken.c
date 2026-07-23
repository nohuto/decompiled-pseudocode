/*
 * XREFs of AuthzBasepSetSecurityAttributesToken @ 0x14007C2E4
 * Callers:
 *     SepDesktopAppxSubProcessToken @ 0x14007BFB8 (SepDesktopAppxSubProcessToken.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1400AAE9C (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepInternalSetSecurityAttributesToken @ 0x140219568 (SepInternalSetSecurityAttributesToken.c)
 *     SepVerifyDesktopAppxPackageName @ 0x140219C8C (SepVerifyDesktopAppxPackageName.c)
 *     SepSetTokenAllApplicationPackagesPolicy @ 0x14021A57C (SepSetTokenAllApplicationPackagesPolicy.c)
 *     SeSetSecurityAttributesTokenEx @ 0x14021A6A8 (SeSetSecurityAttributesTokenEx.c)
 *     SepSetSingletonEntry @ 0x14021A974 (SepSetSingletonEntry.c)
 *     SepSetProcessUniqueAttribute @ 0x14046D098 (SepSetProcessUniqueAttribute.c)
 *     SepCreateClaimAttributes @ 0x1404784D8 (SepCreateClaimAttributes.c)
 *     NtSetInformationToken @ 0x1404786A0 (NtSetInformationToken.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x14056FD94 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     SepAddTokenOriginClaim @ 0x140692CFC (SepAddTokenOriginClaim.c)
 * Callees:
 *     AuthzBasepFinaliseSecurityAttributesList @ 0x14000EC10 (AuthzBasepFinaliseSecurityAttributesList.c)
 *     AuthzBasepReplaceSecurityAttribute @ 0x14007C3D4 (AuthzBasepReplaceSecurityAttribute.c)
 *     AuthzBasepAddSecurityAttribute @ 0x14007C440 (AuthzBasepAddSecurityAttribute.c)
 *     AuthzBasepDeleteSecurityAttribute @ 0x14007C854 (AuthzBasepDeleteSecurityAttribute.c)
 *     AuthzBasepValidateSecurityAttributes @ 0x14007C914 (AuthzBasepValidateSecurityAttributes.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x14010C930 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepDeleteAllSecurityAttributes @ 0x140233F9C (AuthzBasepDeleteAllSecurityAttributes.c)
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
      AuthzBasepFreeSecurityAttributesList(a1);
      v8 = 0;
      goto LABEL_15;
    }
LABEL_19:
    v8 = -1073741811;
    goto LABEL_20;
  }
  v8 = AuthzBasepValidateSecurityAttributes(a3);
  if ( v8 < 0 )
  {
LABEL_20:
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
        goto LABEL_19;
    }
    v14 = AuthzBasepReplaceSecurityAttribute(a1, v10);
LABEL_12:
    v8 = v14;
LABEL_13:
    if ( v8 < 0 )
      goto LABEL_20;
  }
LABEL_15:
  AuthzBasepFinaliseSecurityAttributesList(a1, v6);
  return (unsigned int)v8;
}
