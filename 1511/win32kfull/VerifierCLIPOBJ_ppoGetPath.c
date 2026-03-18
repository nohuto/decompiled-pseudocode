/*
 * XREFs of VerifierCLIPOBJ_ppoGetPath @ 0x1C0290700
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C0290640 (-VerifierRandomFailure@@YAHK@Z.c)
 */

struct _PATHOBJ *__fastcall VerifierCLIPOBJ_ppoGetPath(XCLIPOBJ *this)
{
  if ( (unsigned int)VerifierRandomFailure() )
    return 0LL;
  else
    return XCLIPOBJ::ppoGetPath(this);
}
