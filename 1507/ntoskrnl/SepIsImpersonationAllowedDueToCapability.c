/*
 * XREFs of SepIsImpersonationAllowedDueToCapability @ 0x14040FC40
 * Callers:
 *     SeTokenCanImpersonate @ 0x1404798B0 (SeTokenCanImpersonate.c)
 * Callees:
 *     SepSidInToken @ 0x1400078CC (SepSidInToken.c)
 *     SeTokenIsRestricted @ 0x140007C40 (SeTokenIsRestricted.c)
 *     RtlEqualSid @ 0x140014CF0 (RtlEqualSid.c)
 *     SepSidInTokenSidHash @ 0x1400CD250 (SepSidInTokenSidHash.c)
 *     SepCheckCapabilities @ 0x140408A80 (SepCheckCapabilities.c)
 */

BOOLEAN __fastcall SepIsImpersonationAllowedDueToCapability(__int64 Token, __int64 a2)
{
  bool v2; // bp
  char v5; // si
  PSID v6; // r15
  char v7; // r14
  PSID v8; // r15
  char v9; // r14
  char v10; // cl
  BOOLEAN result; // al
  __int64 v12; // r14
  char v13; // si
  char v14; // al
  __int64 v15; // r9
  bool v16; // sf
  BOOLEAN v17; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0;
  v5 = MEMORY[0xFFFFF780000002F1] & 1;
  if ( *(_DWORD *)(a2 + 120) != *(_DWORD *)(Token + 120) || (*(_DWORD *)(*(_QWORD *)(a2 + 216) + 32LL) & 0x10) != 0 )
    return 0;
  if ( !v5 )
  {
    v6 = SeDefaultAccountAliasSid;
    v7 = SepSidInToken(Token, 0LL, (__int64)SeDefaultAccountAliasSid, 0LL, 0);
    if ( v7 )
    {
      if ( SeTokenIsRestricted((PACCESS_TOKEN)Token) )
        v7 = SepSidInToken(Token, 0LL, (__int64)v6, 0LL, 1);
      v2 = v7 != 0;
    }
  }
  if ( SepAllowSessionImpersonationCap && (*(_DWORD *)(Token + 200) & 0x4000) == 0 )
  {
    v8 = SeSessionImpersonationCapabilityGroupSid;
    v9 = SepSidInToken(Token, 0LL, (__int64)SeSessionImpersonationCapabilityGroupSid, 0LL, 0);
    if ( v9 )
    {
      if ( SeTokenIsRestricted((PACCESS_TOKEN)Token) )
        v9 = SepSidInToken(Token, 0LL, (__int64)v8, 0LL, 1);
      if ( v9 )
        return 1;
    }
    v10 = v9;
    if ( v2 )
      v10 = 1;
    if ( v10 )
      return 1;
  }
  if ( v5 || (*(_DWORD *)(a2 + 200) & 0x4000) == 0 )
    return 0;
  v12 = SeConstrainedImpersonationCapabilityGroupSid;
  v13 = SepSidInToken(Token, 0LL, SeConstrainedImpersonationCapabilityGroupSid, 0LL, 0);
  if ( v13 )
  {
    if ( SeTokenIsRestricted((PACCESS_TOKEN)Token) )
      v13 = SepSidInToken(Token, 0LL, v12, 0LL, 1);
    if ( v13 )
      goto LABEL_27;
  }
  v14 = v13;
  if ( v2 )
    v14 = 1;
  if ( v14 )
  {
LABEL_27:
    if ( (*(_DWORD *)(Token + 200) & 0x4000) == 0 )
      return 1;
  }
  result = SepSidInTokenSidHash(Token + 808, 0LL, (unsigned __int8 *)SeConstrainedImpersonationCapabilitySid, 0, 1, 0);
  v17 = result;
  if ( result )
  {
    v16 = (int)SepCheckCapabilities((void *)Token, *(_DWORD *)(a2 + 800), *(_QWORD *)(a2 + 792), v15, (char *)&v17) < 0;
    result = v17;
    if ( !v16 && !v17 )
      return RtlEqualSid(*(PSID *)(Token + 784), *(PSID *)(a2 + 784));
  }
  return result;
}
