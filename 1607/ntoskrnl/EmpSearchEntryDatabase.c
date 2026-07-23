/*
 * XREFs of EmpSearchEntryDatabase @ 0x14013D3A0
 * Callers:
 *     EmpProviderRegister @ 0x14055474C (EmpProviderRegister.c)
 *     EmProviderRegisterEntry @ 0x14061D118 (EmProviderRegisterEntry.c)
 *     EmpParseEntryTypes @ 0x1407A771C (EmpParseEntryTypes.c)
 *     EmpParseCallbacks @ 0x1407A7874 (EmpParseCallbacks.c)
 *     EmpParseRules @ 0x1407A8094 (EmpParseRules.c)
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
