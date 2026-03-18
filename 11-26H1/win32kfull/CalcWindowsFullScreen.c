/*
 * XREFs of CalcWindowsFullScreen @ 0x140222DE0
 * Callers:
 *     <none>
 * Callees:
 *     CalcWindowFullScreen @ 0x140010674 (CalcWindowFullScreen.c)
 */

_QWORD *__fastcall CalcWindowsFullScreen(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax
  _QWORD **v3; // rbx

  result = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL) + 112LL);
  if ( result )
  {
    while ( 1 )
    {
      v3 = (_QWORD **)(result + 11);
      if ( !result[11] )
        break;
      CalcWindowFullScreen((struct tagWND *)result, a2);
      result = *v3;
    }
  }
  return result;
}
