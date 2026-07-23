/*
 * XREFs of VerifierMmBuildMdlForNonPagedPool @ 0x14071BC54
 * Callers:
 *     <none>
 * Callees:
 *     MmDeterminePoolType @ 0x1400E908C (MmDeterminePoolType.c)
 *     VerifierBugCheckIfAppropriate @ 0x14070C318 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VerifierMmBuildMdlForNonPagedPool(ULONG_PTR a1)
{
  __int64 v2; // r8

  if ( !KeGetCurrentIrql() && (unsigned int)MmDeterminePoolType(*(_QWORD *)(a1 + 32)) && (MmVerifierData & 1) != 0 )
    VerifierBugCheckIfAppropriate(0xC4u, 0x7FuLL, 0LL, a1, v2);
  return pXdvMmBuildMdlForNonPagedPool(a1);
}
