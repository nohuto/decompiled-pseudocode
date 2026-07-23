/*
 * XREFs of VfRemLockReportBadReleaseTag @ 0x14070DEB4
 * Callers:
 *     IoReleaseRemoveLockEx @ 0x14009D57C (IoReleaseRemoveLockEx.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x14070C318 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VfRemLockReportBadReleaseTag(ULONG_PTR a1, ULONG_PTR a2)
{
  VerifierBugCheckIfAppropriate(0xC4u, 0xD5uLL, a1, a2, 0LL);
  return 1LL;
}
