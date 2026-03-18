/*
 * XREFs of VidSchiRundownUnorderedWaiterDevice @ 0x1C00166F8
 * Callers:
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_GLOBAL@@@@YAJPEAU_VIDSCH_GLOBAL@@0W4_VIDSCH_FLUSH_STAGE@@_NP6AX0@Z@Z @ 0x1C0021EE0 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_GLOBAL@@@@YAJPEAU_VIDSCH_GLOBAL@@0W4_VIDSCH_FLUSH_STAGE.c)
 *     ?VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0022098 (-VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 * Callees:
 *     VidSchiRundownUnorderedWaiterContext @ 0x1C0016680 (VidSchiRundownUnorderedWaiterContext.c)
 */

void __fastcall VidSchiRundownUnorderedWaiterDevice(__int64 a1)
{
  _QWORD *v1; // rdi
  _QWORD *i; // rbx

  v1 = (_QWORD *)(a1 + 72);
  for ( i = *(_QWORD **)(a1 + 72); i != v1; i = (_QWORD *)*i )
    VidSchiRundownUnorderedWaiterContext((__int64)(i - 3));
}
