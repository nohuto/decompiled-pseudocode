/*
 * XREFs of SeQueryTokenTrustSid @ 0x1400B2154
 * Callers:
 *     PsImpersonateClient @ 0x1404F2350 (PsImpersonateClient.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeQueryTokenTrustSid(__int64 a1)
{
  return *(_QWORD *)(a1 + 1104);
}
