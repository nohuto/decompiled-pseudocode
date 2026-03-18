/*
 * XREFs of VfRemLockReportBadReleaseTag @ 0x1406C1E08
 * Callers:
 *     IoReleaseRemoveLockEx @ 0x1400E26D0 (IoReleaseRemoveLockEx.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x1406C028C (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VfRemLockReportBadReleaseTag(ULONG_PTR a1, ULONG_PTR a2)
{
  VerifierBugCheckIfAppropriate(0xC4u, 0xD5uLL, a1, a2, 0LL);
  return 1LL;
}
