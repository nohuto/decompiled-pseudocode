/*
 * XREFs of SeQueryTokenTrustSid @ 0x1400F1240
 * Callers:
 *     PsImpersonateClient @ 0x1404264E0 (PsImpersonateClient.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeQueryTokenTrustSid(__int64 a1)
{
  return *(_QWORD *)(a1 + 1104);
}
