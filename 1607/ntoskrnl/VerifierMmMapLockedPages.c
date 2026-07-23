/*
 * XREFs of VerifierMmMapLockedPages @ 0x14071BFC0
 * Callers:
 *     <none>
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x14070C318 (VerifierBugCheckIfAppropriate.c)
 *     ViTargetAddToCounter @ 0x140710380 (ViTargetAddToCounter.c)
 *     ViPoolLogStackTrace @ 0x140710BB0 (ViPoolLogStackTrace.c)
 *     VfFaultsIsSystemSufficientlyBooted @ 0x140710F24 (VfFaultsIsSystemSufficientlyBooted.c)
 *     ViMmMapLockedPagesSanityChecks @ 0x14071C834 (ViMmMapLockedPagesSanityChecks.c)
 */

__int64 __fastcall VerifierMmMapLockedPages(ULONG_PTR a1, __int64 a2)
{
  char v2; // di
  __int64 locked; // rax
  __int64 v5; // rdi
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v2 = a2;
  if ( (MmVerifierData & 1) != 0 )
    ViMmMapLockedPagesSanityChecks(a1);
  if ( (*(_WORD *)(a1 + 10) & 0x2000) == 0
    && (unsigned int)VfFaultsIsSystemSufficientlyBooted()
    && (MmVerifierData & 1) != 0 )
  {
    VerifierBugCheckIfAppropriate(0xC4u, 0x81uLL, a1, *(__int16 *)(a1 + 10), 0LL);
  }
  LOBYTE(a2) = v2;
  locked = pXdvMmMapLockedPagesSpecifyCache(a1, a2, 1LL);
  v5 = locked;
  if ( VfPoolTraces )
    ViPoolLogStackTrace(locked, *(unsigned int *)(a1 + 40));
  if ( v5 && (MmVerifierData & 0x1000) != 0 )
    ViTargetAddToCounter(retaddr, 168LL, 0xB0u, *(unsigned int *)(a1 + 40));
  return v5;
}
