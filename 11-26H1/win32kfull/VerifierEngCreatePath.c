/*
 * XREFs of VerifierEngCreatePath @ 0x1403498D0
 * Callers:
 *     <none>
 * Callees:
 *     EngCreatePath @ 0x140296890 (EngCreatePath.c)
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1403493C0 (-VerifierRandomFailure@@YAHK@Z.c)
 */

PATHOBJ *__fastcall VerifierEngCreatePath(int a1, __int64 a2)
{
  if ( (unsigned int)VerifierRandomFailure(a1, a2) )
    return 0LL;
  else
    return EngCreatePath();
}
