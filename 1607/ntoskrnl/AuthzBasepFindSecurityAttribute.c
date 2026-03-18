/*
 * XREFs of AuthzBasepFindSecurityAttribute @ 0x14000E740
 * Callers:
 *     AuthzBasepCopyoutSecurityAttributes @ 0x14000D704 (AuthzBasepCopyoutSecurityAttributes.c)
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x14000E280 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     AuthzBasepAddSecurityAttribute @ 0x14007C3C0 (AuthzBasepAddSecurityAttribute.c)
 *     AuthzBasepDeleteSecurityAttribute @ 0x14007C7D4 (AuthzBasepDeleteSecurityAttribute.c)
 *     AuthzBasepSecurityAttributePresent @ 0x14023442C (AuthzBasepSecurityAttributePresent.c)
 *     AuthzBasepCompareLegacySecurityAttributesInformation @ 0x1404767E0 (AuthzBasepCompareLegacySecurityAttributesInformation.c)
 *     AuthzBasepCompareSecurityAttributesInformation @ 0x1406C9CA8 (AuthzBasepCompareSecurityAttributesInformation.c)
 * Callees:
 *     AuthzBasepEqualUnicodeString @ 0x1400A045C (AuthzBasepEqualUnicodeString.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x1400ACA60 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     RtlEqualUnicodeString @ 0x14040F720 (RtlEqualUnicodeString.c)
 */

__int64 *__fastcall AuthzBasepFindSecurityAttribute(__int64 a1, const UNICODE_STRING *a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rdi
  const UNICODE_STRING *v6; // rcx
  __int64 *v8; // rdi

  v2 = *(_QWORD **)(a1 + 8);
  v3 = (_QWORD *)(a1 + 8);
  if ( v2 == (_QWORD *)(a1 + 8) )
  {
LABEL_6:
    v8 = *(__int64 **)(a1 + 32);
    if ( v8 == (__int64 *)(a1 + 32) )
    {
      return 0LL;
    }
    else
    {
      while ( (v8[5] & 1) != 0 || !(unsigned __int8)AuthzBasepEqualUnicodeString(v8 + 2, a2) )
      {
        v8 = (__int64 *)*v8;
        if ( v8 == (__int64 *)(a1 + 32) )
          return 0LL;
      }
      return v8 - 2;
    }
  }
  else
  {
    while ( 1 )
    {
      v6 = (const UNICODE_STRING *)(v2 + 4);
      if ( KeGetCurrentIrql() >= 2u
         ? AuthzBasepEqualUnicodeStringCaseSensitive(v6, a2)
         : RtlEqualUnicodeString(v6, a2, 1u) )
      {
        return v2;
      }
      v2 = (_QWORD *)*v2;
      if ( v2 == v3 )
        goto LABEL_6;
    }
  }
}
