/*
 * XREFs of ?SelectFont@@YAXPEAU_SELECT_FONT@@@Z @ 0x1C023DC50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SelectFont(struct _SELECT_FONT *a1)
{
  GreSelectFont(*(_QWORD *)a1, *((_QWORD *)a1 + 1));
}
