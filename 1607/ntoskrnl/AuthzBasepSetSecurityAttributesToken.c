/*
 * XREFs of AuthzBasepSetSecurityAttributesToken @ 0x14007C264
 * Callers:
 *     SepDesktopAppxSubProcessToken @ 0x14007BF38 (SepDesktopAppxSubProcessToken.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1400AC934 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepInternalSetSecurityAttributesToken @ 0x14021973C (SepInternalSetSecurityAttributesToken.c)
 *     SepVerifyDesktopAppxPackageName @ 0x140219E60 (SepVerifyDesktopAppxPackageName.c)
 *     SepSetTokenAllApplicationPackagesPolicy @ 0x14021A750 (SepSetTokenAllApplicationPackagesPolicy.c)
 *     SeSetSecurityAttributesTokenEx @ 0x14021A87C (SeSetSecurityAttributesTokenEx.c)
 *     SepSetSingletonEntry @ 0x14021AB48 (SepSetSingletonEntry.c)
 *     SepSetProcessUniqueAttribute @ 0x14046E1C8 (SepSetProcessUniqueAttribute.c)
 *     SepCreateClaimAttributes @ 0x140479608 (SepCreateClaimAttributes.c)
 *     NtSetInformationToken @ 0x1404797D0 (NtSetInformationToken.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x14056F854 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     SepAddTokenOriginClaim @ 0x140692C18 (SepAddTokenOriginClaim.c)
 * Callees:
 *     AuthzBasepFinaliseSecurityAttributesList @ 0x14000F090 (AuthzBasepFinaliseSecurityAttributesList.c)
 *     AuthzBasepReplaceSecurityAttribute @ 0x14007C354 (AuthzBasepReplaceSecurityAttribute.c)
 *     AuthzBasepAddSecurityAttribute @ 0x14007C3C0 (AuthzBasepAddSecurityAttribute.c)
 *     AuthzBasepDeleteSecurityAttribute @ 0x14007C7D4 (AuthzBasepDeleteSecurityAttribute.c)
 *     AuthzBasepValidateSecurityAttributes @ 0x14007C894 (AuthzBasepValidateSecurityAttributes.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x140088740 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepDeleteAllSecurityAttributes @ 0x140234170 (AuthzBasepDeleteAllSecurityAttributes.c)
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
