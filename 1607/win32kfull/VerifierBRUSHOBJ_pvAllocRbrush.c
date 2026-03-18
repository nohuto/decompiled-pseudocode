/*
 * XREFs of VerifierBRUSHOBJ_pvAllocRbrush @ 0x1C028F3F0
 * Callers:
 *     <none>
 * Callees:
 *     BRUSHOBJ_pvAllocRbrush @ 0x1C0257F70 (BRUSHOBJ_pvAllocRbrush.c)
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C028F364 (-VerifierRandomFailure@@YAHK@Z.c)
 */

PVOID __fastcall VerifierBRUSHOBJ_pvAllocRbrush(BRUSHOBJ *pbo, ULONG cj)
{
  if ( (unsigned int)VerifierRandomFailure() )
    return 0LL;
  else
    return BRUSHOBJ_pvAllocRbrush(pbo, cj);
}
