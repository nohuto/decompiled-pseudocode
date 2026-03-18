/*
 * XREFs of VerifierCLIPOBJ_ppoGetPath @ 0x1403494A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ppoGetPath@XCLIPOBJ@@QEAAPEAU_PATHOBJ@@XZ @ 0x1400D86E8 (-ppoGetPath@XCLIPOBJ@@QEAAPEAU_PATHOBJ@@XZ.c)
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1403493C0 (-VerifierRandomFailure@@YAHK@Z.c)
 */

struct _PATHOBJ *__fastcall VerifierCLIPOBJ_ppoGetPath(XCLIPOBJ *this, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8

  if ( (unsigned int)VerifierRandomFailure((int)this, a2) )
    return 0LL;
  else
    return XCLIPOBJ::ppoGetPath(this, v3, v4);
}
