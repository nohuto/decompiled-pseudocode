/*
 * XREFs of VidSchiRundownUnorderedWaiterDevice @ 0x1C0014884
 * Callers:
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_GLOBAL@@@@YAJPEAU_VIDSCH_GLOBAL@@0W4_VIDSCH_FLUSH_STAGE@@_NP6AX0@Z@Z @ 0x1C0025D40 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_GLOBAL@@@@YAJPEAU_VIDSCH_GLOBAL@@0W4_VIDSCH_FLUSH_STAGE.c)
 *     ?VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0025FB4 (-VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 * Callees:
 *     VidSchiRundownUnorderedWaiterContext @ 0x1C001480C (VidSchiRundownUnorderedWaiterContext.c)
 */

void __fastcall VidSchiRundownUnorderedWaiterDevice(__int64 a1)
{
  _QWORD *v1; // rdi
  _QWORD *i; // rbx

  v1 = (_QWORD *)(a1 + 64);
  for ( i = *(_QWORD **)(a1 + 64); i != v1; i = (_QWORD *)*i )
    VidSchiRundownUnorderedWaiterContext((__int64)(i - 3));
}
