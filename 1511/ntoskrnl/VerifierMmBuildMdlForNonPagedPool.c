/*
 * XREFs of VerifierMmBuildMdlForNonPagedPool @ 0x1406CFB9C
 * Callers:
 *     <none>
 * Callees:
 *     MmDeterminePoolType @ 0x1400794DC (MmDeterminePoolType.c)
 *     VerifierBugCheckIfAppropriate @ 0x1406C028C (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall VerifierMmBuildMdlForNonPagedPool(ULONG_PTR a1)
{
  __int64 v2; // r9

  if ( !KeGetCurrentIrql() && (unsigned int)MmDeterminePoolType(*(_QWORD *)(a1 + 32)) )
    VerifierBugCheckIfAppropriate(0xC4u, 0x7FuLL, 0LL, a1, v2);
  pXdvMmBuildMdlForNonPagedPool((PMDL)a1);
}
