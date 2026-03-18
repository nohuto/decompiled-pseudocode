/*
 * XREFs of ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VCOLORSPACEREF@@@@SAXPEAX@Z @ 0x1C00BD150
 * Callers:
 *     <none>
 * Callees:
 *     DEC_SHARE_REF_CNT @ 0x1C0029DA0 (DEC_SHARE_REF_CNT.c)
 */

__int64 __fastcall UnexpectedThreadTerminationHandler<COLORSPACEREF>::OnUnexpectedThreadTerminationStatic(__int64 a1)
{
  unsigned int *v2; // rcx
  __int64 result; // rax

  v2 = *(unsigned int **)(a1 + 32);
  if ( v2 )
  {
    result = DEC_SHARE_REF_CNT(v2);
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  return result;
}
