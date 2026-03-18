/*
 * XREFs of VfRemLockReportBadReleaseAndWaitTag @ 0x140743654
 * Callers:
 *     IoReleaseRemoveLockAndWaitEx @ 0x1401FA0BC (IoReleaseRemoveLockAndWaitEx.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VfRemLockReportBadReleaseAndWaitTag(ULONG_PTR a1, ULONG_PTR a2, __int64 a3)
{
  VerifierBugCheckIfAppropriate(0xC4u, 0xD6uLL, a1, a2, a3);
  return 1LL;
}
