/*
 * XREFs of SepIsImpersonationAllowedDueToCapability @ 0x1405037E4
 * Callers:
 *     SeTokenCanImpersonate @ 0x14050F920 (SeTokenCanImpersonate.c)
 * Callees:
 *     RtlEqualSid @ 0x14000F570 (RtlEqualSid.c)
 *     SepSidInTokenSidHash @ 0x1400611F0 (SepSidInTokenSidHash.c)
 *     SeTokenIsRestricted @ 0x14007F740 (SeTokenIsRestricted.c)
 *     SepSidInToken @ 0x1400C45A4 (SepSidInToken.c)
 *     SepCheckCapabilities @ 0x1403E1D20 (SepCheckCapabilities.c)
 *     RtlIsMultiSessionSku @ 0x1405037BC (RtlIsMultiSessionSku.c)
 */

BOOLEAN __fastcall SepIsImpersonationAllowedDueToCapability(__int64 Token, __int64 a2)
{
  bool v4; // si
  char IsMultiSessionSku; // r14
  PSID v6; // r15
  bool v7; // bp
  PSID v8; // r15
  bool v9; // bp
  char v10; // cl
  BOOLEAN result; // al
  void *v12; // r14
  bool v13; // bp
  char v14; // al
  __int64 v15; // r9
  bool v16; // sf
  BOOLEAN v17; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0;
  IsMultiSessionSku = RtlIsMultiSessionSku();
  if ( *(_DWORD *)(a2 + 120) != *(_DWORD *)(Token + 120) || (*(_DWORD *)(*(_QWORD *)(a2 + 216) + 32LL) & 0x10) != 0 )
    return 0;
  if ( !IsMultiSessionSku )
  {
    v6 = SeDefaultAccountAliasSid;
    v7 = SepSidInToken(Token, 0LL, SeDefaultAccountAliasSid, 0, 0, 0);
    if ( v7 )
    {
      if ( SeTokenIsRestricted((PACCESS_TOKEN)Token) )
        v7 = SepSidInToken(Token, 0LL, v6, 0, 1, 0);
      v4 = v7;
    }
  }
  if ( SepAllowSessionImpersonationCap && (*(_DWORD *)(Token + 200) & 0x4000) == 0 )
  {
    v8 = SeSessionImpersonationCapabilityGroupSid;
    v9 = SepSidInToken(Token, 0LL, SeSessionImpersonationCapabilityGroupSid, 0, 0, 0);
    if ( v9 )
    {
      if ( SeTokenIsRestricted((PACCESS_TOKEN)Token) )
        v9 = SepSidInToken(Token, 0LL, v8, 0, 1, 0);
      if ( v9 )
        return 1;
    }
    v10 = v9;
    if ( v4 )
      v10 = 1;
    if ( v10 )
      return 1;
  }
  if ( IsMultiSessionSku || (*(_DWORD *)(a2 + 200) & 0x4000) == 0 )
    return 0;
  v12 = (void *)SeConstrainedImpersonationCapabilityGroupSid;
  v13 = SepSidInToken(Token, 0LL, (void *)SeConstrainedImpersonationCapabilityGroupSid, 0, 0, 0);
  if ( v13 )
  {
    if ( SeTokenIsRestricted((PACCESS_TOKEN)Token) )
      v13 = SepSidInToken(Token, 0LL, v12, 0, 1, 0);
    if ( v13 )
      goto LABEL_27;
  }
  v14 = v13;
  if ( v4 )
    v14 = 1;
  if ( v14 )
  {
LABEL_27:
    if ( (*(_DWORD *)(Token + 200) & 0x4000) == 0 )
      return 1;
  }
  result = SepSidInTokenSidHash(Token + 808, 0LL, (void *)SeConstrainedImpersonationCapabilitySid, 0, 1, 0);
  v17 = result;
  if ( result )
  {
    v16 = (int)SepCheckCapabilities((void *)Token, *(_DWORD *)(a2 + 800), *(PSID **)(a2 + 792), v15, (char *)&v17) < 0;
    result = v17;
    if ( !v16 && !v17 )
      return RtlEqualSid(*(PSID *)(Token + 784), *(PSID *)(a2 + 784));
  }
  return result;
}
