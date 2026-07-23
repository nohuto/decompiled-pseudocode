/*
 * XREFs of SepDeleteLogonSessionClaims @ 0x1404C8000
 * Callers:
 *     SepDeReferenceLogonSession @ 0x1404C7CF8 (SepDeReferenceLogonSession.c)
 *     SepDeleteLogonSessionTrack @ 0x1405335D4 (SepDeleteLogonSessionTrack.c)
 * Callees:
 *     SepDeleteClaimAttributes @ 0x140695AE4 (SepDeleteClaimAttributes.c)
 */

__int64 __fastcall SepDeleteLogonSessionClaims(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)(a1 + 112);
  if ( v2 )
  {
    result = SepDeleteClaimAttributes(v2);
    *(_QWORD *)(a1 + 112) = 0LL;
  }
  return result;
}
