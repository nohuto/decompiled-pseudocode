/*
 * XREFs of VerifierEngCreatePath @ 0x1C0290C60
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C0290828 (-VerifierRandomFailure@@YAHK@Z.c)
 */

PATHOBJ *VerifierEngCreatePath()
{
  if ( (unsigned int)VerifierRandomFailure() )
    return 0LL;
  else
    return EngCreatePath();
}
