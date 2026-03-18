/*
 * XREFs of PspGetRedirectionTrustPolicy @ 0x1406BF750
 * Callers:
 *     NtSetInformationProcess @ 0x14041CF90 (NtSetInformationProcess.c)
 *     NtQueryInformationProcess @ 0x14050D9A0 (NtQueryInformationProcess.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14004E3E0 (ObFastDereferenceObject.c)
 *     SeTokenGetRedirectionTrustPolicy @ 0x14024FAC0 (SeTokenGetRedirectionTrustPolicy.c)
 *     PsReferencePrimaryToken @ 0x14050D730 (PsReferencePrimaryToken.c)
 */

__int64 __fastcall PspGetRedirectionTrustPolicy(struct _KPROCESS *a1)
{
  PACCESS_TOKEN v2; // rbx
  bool v4; // [rsp+30h] [rbp+8h] BYREF
  bool v5; // [rsp+38h] [rbp+10h] BYREF

  v2 = PsReferencePrimaryToken(a1);
  SeTokenGetRedirectionTrustPolicy((__int64)v2, &v4, &v5);
  ObFastDereferenceObject((signed __int64 *)&a1[1].Affinity.Bitmap[5], (unsigned __int64)v2);
  if ( v4 )
    return 1LL;
  else
    return v5 ? 2 : 0;
}
