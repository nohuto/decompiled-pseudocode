/*
 * XREFs of ?ResetWindowMove@CWindowNode@@UEAA_NXZ @ 0x180106580
 * Callers:
 *     <none>
 * Callees:
 *     ?ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ @ 0x180105CE0 (-ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ.c)
 */

char __fastcall CWindowNode::ResetWindowMove(CWindowNode *this)
{
  char *v1; // rdi
  _QWORD *i; // rbx

  v1 = (char *)this + 312;
  for ( i = (_QWORD *)*((_QWORD *)this + 39); i != (_QWORD *)v1; i = (_QWORD *)*i )
    CMoveRenderPassInfo::ClearVisibleRegion((CMoveRenderPassInfo *)(i - 11));
  return 1;
}
