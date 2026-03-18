/*
 * XREFs of PspSetRedirectionTrustPolicy @ 0x14067D288
 * Callers:
 *     NtSetInformationProcess @ 0x140425A10 (NtSetInformationProcess.c)
 * Callees:
 *     SeTokenSetRedirectionTrustPolicy @ 0x14021A6C0 (SeTokenSetRedirectionTrustPolicy.c)
 *     PsReferencePrimaryToken @ 0x140418C20 (PsReferencePrimaryToken.c)
 */

signed __int64 __fastcall PspSetRedirectionTrustPolicy(struct _KPROCESS *a1, int a2)
{
  char v3; // bl
  PACCESS_TOKEN v4; // rdi

  v3 = a2 == 2;
  v4 = PsReferencePrimaryToken(a1);
  SeTokenSetRedirectionTrustPolicy((__int64)v4, v3);
  return ObFastDereferenceObject((signed __int64 *)&a1[1].Affinity.Bitmap[5], (unsigned __int64)v4);
}
