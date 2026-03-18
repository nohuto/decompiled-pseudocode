/*
 * XREFs of sub_1C01890A0 @ 0x1C01890A0
 * Callers:
 *     sub_1C01890D8 @ 0x1C01890D8 (sub_1C01890D8.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall sub_1C01890A0(__int64 a1)
{
  int v1; // ebx
  __int64 v2; // rax
  _DWORD *result; // rax

  v1 = a1;
  if ( (_DWORD)a1 == -2 )
  {
    v2 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v2);
  }
  for ( result = qword_1C0048010; result && v1 != result[2]; result = *(_DWORD **)result )
    ;
  return result;
}
