/*
 * XREFs of VidSchiRundownUnorderedWaiterDevice @ 0x1C0007FE8
 * Callers:
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_GLOBAL@@@@YAJPEAU_VIDSCH_GLOBAL@@0W4_VIDSCH_FLUSH_STAGE@@_NP6AX0@Z@Z @ 0x1C001B6DC (--$VidSchRundownUnorderedWaiter@U_VIDSCH_GLOBAL@@@@YAJPEAU_VIDSCH_GLOBAL@@0W4_VIDSCH_FLUSH_STAGE.c)
 *     ?VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C001B9C4 (-VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 * Callees:
 *     VidSchiRundownUnorderedWaiterContext @ 0x1C0007F70 (VidSchiRundownUnorderedWaiterContext.c)
 */

void __fastcall VidSchiRundownUnorderedWaiterDevice(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  _QWORD *i; // rbx

  v2 = (_QWORD *)(a1 + 72);
  for ( i = *(_QWORD **)(a1 + 72); i != v2; i = (_QWORD *)*i )
    VidSchiRundownUnorderedWaiterContext((__int64)(i - 3), a2);
}
