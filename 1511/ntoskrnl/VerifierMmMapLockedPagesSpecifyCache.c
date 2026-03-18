/*
 * XREFs of VerifierMmMapLockedPagesSpecifyCache @ 0x1406CFFAC
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14004B6B0 (MmMapLockedPagesSpecifyCache.c)
 *     VfCheckPagePriority @ 0x1406B80EC (VfCheckPagePriority.c)
 *     VerifierBugCheckIfAppropriate @ 0x1406C028C (VerifierBugCheckIfAppropriate.c)
 *     ViTargetAddToCounter @ 0x1406C4294 (ViTargetAddToCounter.c)
 *     ViPoolLogStackTrace @ 0x1406C4AF8 (ViPoolLogStackTrace.c)
 *     VfFaultsInjectResourceFailure @ 0x1406C4D50 (VfFaultsInjectResourceFailure.c)
 *     VfFaultsIsSystemSufficientlyBooted @ 0x1406C4E84 (VfFaultsIsSystemSufficientlyBooted.c)
 *     ViMmMapLockedPagesSanityChecks @ 0x1406D06A4 (ViMmMapLockedPagesSanityChecks.c)
 */

PVOID __fastcall VerifierMmMapLockedPagesSpecifyCache(
        struct _MDL *a1,
        KPROCESSOR_MODE a2,
        MEMORY_CACHING_TYPE a3,
        void *a4,
        ULONG BugCheckOnFailure,
        ULONG Priority)
{
  PVOID v10; // rax
  PVOID v11; // rdi
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  ViMmMapLockedPagesSanityChecks((int)a1);
  VfCheckPagePriority(Priority, retaddr);
  if ( (a1->MdlFlags & 0x2000) == 0 && BugCheckOnFailure )
  {
    if ( (unsigned int)VfFaultsIsSystemSufficientlyBooted() )
      VerifierBugCheckIfAppropriate(0xC4u, 0x82uLL, (ULONG_PTR)a1, a1->MdlFlags, BugCheckOnFailure);
    goto LABEL_5;
  }
  if ( (unsigned int)VfFaultsInjectResourceFailure(0) != 1 )
  {
LABEL_5:
    v10 = MmMapLockedPagesSpecifyCache(a1, a2, a3, a4, BugCheckOnFailure, Priority);
    v11 = v10;
    if ( VfPoolTraces )
      ViPoolLogStackTrace((__int64)v10, a1->ByteCount);
    if ( v11 )
    {
      if ( (MmVerifierData & 0x1000) != 0 )
        ViTargetAddToCounter(retaddr, 168LL, 0xB0u, a1->ByteCount);
    }
    return v11;
  }
  if ( a2 )
    RtlRaiseStatus(-1073741670);
  return 0LL;
}
