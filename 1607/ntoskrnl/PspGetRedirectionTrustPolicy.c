/*
 * XREFs of PspGetRedirectionTrustPolicy @ 0x14067D22C
 * Callers:
 *     NtQueryInformationProcess @ 0x140422590 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x140425A10 (NtSetInformationProcess.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14000F690 (ObFastDereferenceObject.c)
 *     SeTokenGetRedirectionTrustPolicy @ 0x14021A648 (SeTokenGetRedirectionTrustPolicy.c)
 *     PsReferencePrimaryToken @ 0x140418C20 (PsReferencePrimaryToken.c)
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
