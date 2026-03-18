/*
 * XREFs of CitUserChange @ 0x1C0064C50
 * Callers:
 *     <none>
 * Callees:
 *     ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0064DF8 (-CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void __fastcall CitUserChange(__int64 a1)
{
  if ( qword_1C0107180 && *((_QWORD *)qword_1C0107180 + 52) && *((_QWORD *)qword_1C0107180 + 53) != a1 )
    CitpLogoff(qword_1C0107180);
}
