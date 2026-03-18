/*
 * XREFs of CompareFileTimeType @ 0x1406E3CF0
 * Callers:
 *     PropertyEval @ 0x140502214 (PropertyEval.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CompareFileTimeType(_QWORD *a1, _QWORD *a2)
{
  if ( *a1 >= *a2 )
    return *a1 > *a2;
  else
    return 0xFFFFFFFFLL;
}
