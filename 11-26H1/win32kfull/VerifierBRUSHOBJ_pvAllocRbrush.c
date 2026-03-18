/*
 * XREFs of VerifierBRUSHOBJ_pvAllocRbrush @ 0x140349460
 * Callers:
 *     <none>
 * Callees:
 *     BRUSHOBJ_pvAllocRbrush @ 0x140184EF0 (BRUSHOBJ_pvAllocRbrush.c)
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1403493C0 (-VerifierRandomFailure@@YAHK@Z.c)
 */

PVOID __fastcall VerifierBRUSHOBJ_pvAllocRbrush(BRUSHOBJ *pbo, __int64 cj)
{
  ULONG v2; // ebx

  v2 = cj;
  if ( (unsigned int)VerifierRandomFailure((int)pbo, cj) )
    return 0LL;
  else
    return BRUSHOBJ_pvAllocRbrush(pbo, v2);
}
