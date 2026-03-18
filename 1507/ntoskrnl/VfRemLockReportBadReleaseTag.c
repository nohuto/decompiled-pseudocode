/*
 * XREFs of VfRemLockReportBadReleaseTag @ 0x14074367C
 * Callers:
 *     IoReleaseRemoveLockEx @ 0x140117C68 (IoReleaseRemoveLockEx.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VfRemLockReportBadReleaseTag(ULONG_PTR a1, ULONG_PTR a2)
{
  VerifierBugCheckIfAppropriate(0xC4u, 0xD5uLL, a1, a2, 0LL);
  return 1LL;
}
