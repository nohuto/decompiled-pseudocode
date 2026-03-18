/*
 * XREFs of VerifierEngAllocUserMem @ 0x1C028F5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C028F364 (-VerifierRandomFailure@@YAHK@Z.c)
 */

PVOID __fastcall VerifierEngAllocUserMem(SIZE_T cjMemSize, ULONG ulTag)
{
  if ( (unsigned int)VerifierRandomFailure() )
    return 0LL;
  else
    return EngAllocUserMem(cjMemSize, ulTag);
}
