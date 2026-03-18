/*
 * XREFs of AuthzBasepFindSecurityAttribute @ 0x14002CCFC
 * Callers:
 *     AuthzBasepDeleteSecurityAttribute @ 0x14002BBBC (AuthzBasepDeleteSecurityAttribute.c)
 *     AuthzBasepAddSecurityAttribute @ 0x14002BC7C (AuthzBasepAddSecurityAttribute.c)
 *     AuthzBasepCopyoutSecurityAttributes @ 0x14002C308 (AuthzBasepCopyoutSecurityAttributes.c)
 *     AuthzBasepCompareLegacySecurityAttributesInformation @ 0x1404104AC (AuthzBasepCompareLegacySecurityAttributesInformation.c)
 *     AuthzBasepCompareSecurityAttributesInformation @ 0x140708600 (AuthzBasepCompareSecurityAttributesInformation.c)
 * Callees:
 *     AuthzBasepEqualUnicodeString @ 0x14002CD80 (AuthzBasepEqualUnicodeString.c)
 */

_QWORD *__fastcall AuthzBasepFindSecurityAttribute(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  _QWORD *i; // rbx
  _QWORD **v6; // rsi
  _QWORD *j; // rdi

  v2 = (_QWORD *)(a1 + 8);
  for ( i = *(_QWORD **)(a1 + 8); i != v2; i = (_QWORD *)*i )
  {
    if ( (unsigned __int8)AuthzBasepEqualUnicodeString(i + 4, a2) )
      return i;
  }
  v6 = (_QWORD **)(a1 + 32);
  for ( j = *v6; j != v6; j = (_QWORD *)*j )
  {
    i = j - 2;
    if ( (j[5] & 1) == 0 && (unsigned __int8)AuthzBasepEqualUnicodeString(i + 4, a2) )
      return i;
  }
  return 0LL;
}
