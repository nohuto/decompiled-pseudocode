/*
 * XREFs of VerifierMmBuildMdlForNonPagedPool @ 0x140753668
 * Callers:
 *     <none>
 * Callees:
 *     MmDeterminePoolType @ 0x1400619A0 (MmDeterminePoolType.c)
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall VerifierMmBuildMdlForNonPagedPool(ULONG_PTR a1)
{
  __int64 v2; // r9

  if ( !KeGetCurrentIrql() && (unsigned int)MmDeterminePoolType(*(_QWORD *)(a1 + 32)) )
    VerifierBugCheckIfAppropriate(0xC4u, 0x7FuLL, 0LL, a1, v2);
  pXdvMmBuildMdlForNonPagedPool((PMDL)a1);
}
