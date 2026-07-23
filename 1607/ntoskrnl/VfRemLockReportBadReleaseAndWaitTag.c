/*
 * XREFs of VfRemLockReportBadReleaseAndWaitTag @ 0x14070DE8C
 * Callers:
 *     IoReleaseRemoveLockAndWaitEx @ 0x1401CCC38 (IoReleaseRemoveLockAndWaitEx.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x14070C318 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VfRemLockReportBadReleaseAndWaitTag(ULONG_PTR a1, ULONG_PTR a2, __int64 a3)
{
  VerifierBugCheckIfAppropriate(0xC4u, 0xD6uLL, a1, a2, a3);
  return 1LL;
}
