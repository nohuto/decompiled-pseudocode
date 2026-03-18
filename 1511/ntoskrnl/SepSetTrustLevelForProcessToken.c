/*
 * XREFs of SepSetTrustLevelForProcessToken @ 0x140092F38
 * Callers:
 *     SeSubProcessToken @ 0x14044C430 (SeSubProcessToken.c)
 * Callees:
 *     SepSidFromProcessProtection @ 0x140092FBC (SepSidFromProcessProtection.c)
 *     RtlEqualSid @ 0x14009DE80 (RtlEqualSid.c)
 *     SepSetTokenTrust @ 0x1404783E4 (SepSetTokenTrust.c)
 */

__int64 __fastcall SepSetTrustLevelForProcessToken(__int64 a1, __int64 a2, _BYTE *a3)
{
  void *v5; // rax
  void *v6; // rcx
  void *v7; // rbx
  __int64 result; // rax
  char v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = *(_BYTE *)(a2 + 1722);
  *a3 = 0;
  v5 = (void *)SepSidFromProcessProtection(&v9);
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
