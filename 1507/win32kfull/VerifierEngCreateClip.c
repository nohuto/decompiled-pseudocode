/*
 * XREFs of VerifierEngCreateClip @ 0x1C0290B10
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C0290828 (-VerifierRandomFailure@@YAHK@Z.c)
 */

CLIPOBJ *VerifierEngCreateClip()
{
  if ( (unsigned int)VerifierRandomFailure() )
    return 0LL;
  else
    return EngCreateClip();
}
