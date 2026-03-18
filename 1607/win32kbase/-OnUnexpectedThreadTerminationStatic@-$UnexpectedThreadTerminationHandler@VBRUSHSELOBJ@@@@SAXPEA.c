/*
 * XREFs of ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@SAXPEAX@Z @ 0x1C00BD100
 * Callers:
 *     ??$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00CC8E4 (--$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     DEC_SHARE_REF_CNT @ 0x1C0029DA0 (DEC_SHARE_REF_CNT.c)
 */

__int64 __fastcall UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::OnUnexpectedThreadTerminationStatic(
        unsigned int **a1)
{
  unsigned int *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return DEC_SHARE_REF_CNT(v1);
  return result;
}
