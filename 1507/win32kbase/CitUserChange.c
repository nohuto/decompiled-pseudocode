/*
 * XREFs of CitUserChange @ 0x1C0084810
 * Callers:
 *     <none>
 * Callees:
 *     ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00710D4 (-CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void __fastcall CitUserChange(__int64 a1)
{
  if ( qword_1C0101FE0 && *((_QWORD *)qword_1C0101FE0 + 52) && *((_QWORD *)qword_1C0101FE0 + 53) != a1 )
    CitpLogoff(qword_1C0101FE0);
}
