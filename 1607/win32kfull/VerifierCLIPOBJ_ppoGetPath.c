/*
 * XREFs of VerifierCLIPOBJ_ppoGetPath @ 0x1C028F430
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C028F364 (-VerifierRandomFailure@@YAHK@Z.c)
 */

struct _PATHOBJ *__fastcall VerifierCLIPOBJ_ppoGetPath(XCLIPOBJ *this)
{
  if ( (unsigned int)VerifierRandomFailure() )
    return 0LL;
  else
    return XCLIPOBJ::ppoGetPath(this);
}
