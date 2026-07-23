/*
 * XREFs of SepSetTrustLevelForProcessToken @ 0x14007C264
 * Callers:
 *     SeSubProcessToken @ 0x14046D918 (SeSubProcessToken.c)
 *     SeExchangePrimaryToken @ 0x140692858 (SeExchangePrimaryToken.c)
 * Callees:
 *     SepSidFromProcessProtection @ 0x14000E5A0 (SepSidFromProcessProtection.c)
 *     RtlEqualSid @ 0x14000F0F0 (RtlEqualSid.c)
 *     SepSetTokenTrust @ 0x140412DBC (SepSetTokenTrust.c)
 */

__int64 __fastcall SepSetTrustLevelForProcessToken(__int64 a1, __int64 a2, _BYTE *a3)
{
  PSID v5; // rax
  void *v6; // rcx
  PSID v7; // rbx
  __int64 result; // rax
  char v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = *(_BYTE *)(a2 + 1738);
  *a3 = 0;
  v5 = SepSidFromProcessProtection(&v9);
  v6 = *(void **)(a1 + 1104);
  v7 = v5;
  if ( v6 )
  {
    if ( v5 && RtlEqualSid(v6, v5) )
      return 0LL;
  }
  else if ( !v5 )
  {
    return 0LL;
  }
  result = SepSetTokenTrust(a1, v7);
  if ( (int)result >= 0 )
    *a3 = 1;
  return result;
}
