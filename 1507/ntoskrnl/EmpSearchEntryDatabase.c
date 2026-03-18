/*
 * XREFs of EmpSearchEntryDatabase @ 0x140161A10
 * Callers:
 *     EmpProviderRegister @ 0x140597C74 (EmpProviderRegister.c)
 *     EmProviderRegisterEntry @ 0x14066BB30 (EmProviderRegisterEntry.c)
 *     EmpParseEntryTypes @ 0x1407CDB50 (EmpParseEntryTypes.c)
 *     EmpParseCallbacks @ 0x1407CDE68 (EmpParseCallbacks.c)
 *     EmpParseRules @ 0x1407CE640 (EmpParseRules.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall EmpSearchEntryDatabase(_QWORD *a1)
{
  _QWORD *i; // rdx
  _QWORD *v2; // r8
  __int64 v3; // r9

  for ( i = (_QWORD *)EmpEntryListHead; ; i = (_QWORD *)*i )
  {
    v2 = 0LL;
    if ( !i )
      break;
    v2 = i - 3;
    v3 = *(i - 3) - *a1;
    if ( !v3 )
      v3 = v2[1] - a1[1];
    if ( !v3 )
      break;
  }
  return v2;
}
