/*
 * XREFs of SeQueryTokenTrustSid @ 0x1400B42D4
 * Callers:
 *     PsImpersonateClient @ 0x14050F3C0 (PsImpersonateClient.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeQueryTokenTrustSid(__int64 a1)
{
  return *(_QWORD *)(a1 + 1104);
}
