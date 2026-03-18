/*
 * XREFs of SeQueryTokenTrustSid @ 0x14012FF10
 * Callers:
 *     PsImpersonateClient @ 0x1404792B0 (PsImpersonateClient.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeQueryTokenTrustSid(__int64 a1)
{
  return *(_QWORD *)(a1 + 1104);
}
