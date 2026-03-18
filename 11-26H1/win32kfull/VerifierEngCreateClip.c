/*
 * XREFs of VerifierEngCreateClip @ 0x140349720
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1403493C0 (-VerifierRandomFailure@@YAHK@Z.c)
 */

CLIPOBJ *__fastcall VerifierEngCreateClip(int a1, __int64 a2)
{
  if ( (unsigned int)VerifierRandomFailure(a1, a2) )
    return 0LL;
  else
    return EngCreateClip();
}
