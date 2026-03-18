/*
 * XREFs of EmpSearchCallbackDatabase @ 0x140135294
 * Callers:
 *     EmpProviderRegister @ 0x140528320 (EmpProviderRegister.c)
 *     EmpParseCallbacks @ 0x14075F5EC (EmpParseCallbacks.c)
 *     EmpParseRuleTerm @ 0x14075F808 (EmpParseRuleTerm.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall EmpSearchCallbackDatabase(_QWORD *a1)
{
  _QWORD *i; // rdx
  _QWORD *v2; // r8
  __int64 v3; // r9

  for ( i = (_QWORD *)EmpCallbackListHead; ; i = (_QWORD *)*i )
  {
    v2 = 0LL;
    if ( !i )
      break;
    v2 = i - 5;
    v3 = *(i - 5) - *a1;
    if ( !v3 )
      v3 = v2[1] - a1[1];
    if ( !v3 )
      break;
  }
  return v2;
}
