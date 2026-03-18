/*
 * XREFs of _pGetAdditionalModeEntry @ 0x1C01B2A60
 * Callers:
 *     _pGetAdditionalTiming @ 0x1C01B2A98 (_pGetAdditionalTiming.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall pGetAdditionalModeEntry(__int64 a1)
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
  for ( result = qword_1C0058230; result && v1 != result[2]; result = *(_DWORD **)result )
    ;
  return result;
}
