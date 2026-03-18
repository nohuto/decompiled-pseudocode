/*
 * XREFs of VerifierMmMapLockedPages @ 0x1406CFEE4
 * Callers:
 *     <none>
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14004B6B0 (MmMapLockedPagesSpecifyCache.c)
 *     VerifierBugCheckIfAppropriate @ 0x1406C028C (VerifierBugCheckIfAppropriate.c)
 *     ViTargetAddToCounter @ 0x1406C4294 (ViTargetAddToCounter.c)
 *     ViPoolLogStackTrace @ 0x1406C4AF8 (ViPoolLogStackTrace.c)
 *     VfFaultsIsSystemSufficientlyBooted @ 0x1406C4E84 (VfFaultsIsSystemSufficientlyBooted.c)
 *     ViMmMapLockedPagesSanityChecks @ 0x1406D06A4 (ViMmMapLockedPagesSanityChecks.c)
 */

PVOID __fastcall VerifierMmMapLockedPages(struct _MDL *a1, KPROCESSOR_MODE a2)
{
  ULONG Priority; // ecx
  PVOID v5; // rax
  PVOID v6; // rdi
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  ViMmMapLockedPagesSanityChecks((int)a1);
  if ( (a1->MdlFlags & 0x2000) == 0 && (unsigned int)VfFaultsIsSystemSufficientlyBooted() )
    VerifierBugCheckIfAppropriate(0xC4u, 0x81uLL, (ULONG_PTR)a1, a1->MdlFlags, 0LL);
  Priority = 32;
  if ( (MmVerifierData & 0x2000000) != 0 )
    Priority = 1073741856;
  v5 = pXdvMmMapLockedPagesSpecifyCache(a1, a2, MmCached, 0LL, 1u, Priority);
  v6 = v5;
  if ( VfPoolTraces )
    ViPoolLogStackTrace((__int64)v5, a1->ByteCount);
  if ( v6 && (MmVerifierData & 0x1000) != 0 )
    ViTargetAddToCounter(retaddr, 168LL, 0xB0u, a1->ByteCount);
  return v6;
}
