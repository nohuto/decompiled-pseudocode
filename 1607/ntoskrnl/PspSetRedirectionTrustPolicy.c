/*
 * XREFs of PspSetRedirectionTrustPolicy @ 0x14067D36C
 * Callers:
 *     NtSetInformationProcess @ 0x1404248E0 (NtSetInformationProcess.c)
 * Callees:
 *     SeTokenSetRedirectionTrustPolicy @ 0x14021A4EC (SeTokenSetRedirectionTrustPolicy.c)
 *     PsReferencePrimaryToken @ 0x140417AE0 (PsReferencePrimaryToken.c)
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
