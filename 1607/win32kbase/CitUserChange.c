/*
 * XREFs of CitUserChange @ 0x1C004EC50
 * Callers:
 *     <none>
 * Callees:
 *     ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C004EE38 (-CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void __fastcall CitUserChange(__int64 a1)
{
  if ( qword_1C011E5D0 && *((_QWORD *)qword_1C011E5D0 + 52) && *((_QWORD *)qword_1C011E5D0 + 53) != a1 )
    CitpLogoff(qword_1C011E5D0);
}
