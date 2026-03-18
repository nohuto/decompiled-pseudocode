/*
 * XREFs of SepDeleteLogonSessionClaims @ 0x14049B9AC
 * Callers:
 *     SepDeReferenceLogonSession @ 0x14049B694 (SepDeReferenceLogonSession.c)
 *     SepDeleteLogonSessionTrack @ 0x1404F4570 (SepDeleteLogonSessionTrack.c)
 * Callees:
 *     SepDeleteClaimAttributes @ 0x140656090 (SepDeleteClaimAttributes.c)
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
