/*
 * XREFs of AuthzBasepFindSecurityAttribute @ 0x14009C450
 * Callers:
 *     AuthzBasepAddSecurityAttribute @ 0x140005B04 (AuthzBasepAddSecurityAttribute.c)
 *     AuthzBasepDeleteSecurityAttribute @ 0x140005F10 (AuthzBasepDeleteSecurityAttribute.c)
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x140006634 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     AuthzBasepSecurityAttributePresent @ 0x14009C438 (AuthzBasepSecurityAttributePresent.c)
 *     AuthzBasepCopyoutSecurityAttributes @ 0x14009C6E4 (AuthzBasepCopyoutSecurityAttributes.c)
 *     AuthzBasepCompareLegacySecurityAttributesInformation @ 0x1404C288C (AuthzBasepCompareLegacySecurityAttributesInformation.c)
 *     AuthzBasepCompareSecurityAttributesInformation @ 0x14068395C (AuthzBasepCompareSecurityAttributesInformation.c)
 * Callees:
 *     AuthzBasepEqualUnicodeString @ 0x1400067F0 (AuthzBasepEqualUnicodeString.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x14021AC1C (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     RtlEqualUnicodeString @ 0x14040F490 (RtlEqualUnicodeString.c)
 */

__int64 *__fastcall AuthzBasepFindSecurityAttribute(__int64 a1, const UNICODE_STRING *a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rdi
  const UNICODE_STRING *v6; // rcx
  const UNICODE_STRING *v8; // rdi

  v2 = *(_QWORD **)(a1 + 8);
  v3 = (_QWORD *)(a1 + 8);
  if ( v2 == (_QWORD *)(a1 + 8) )
  {
LABEL_6:
    v8 = *(const UNICODE_STRING **)(a1 + 32);
    if ( v8 == (const UNICODE_STRING *)(a1 + 32) )
    {
      return 0LL;
    }
    else
    {
      while ( ((__int64)v8[2].Buffer & 1) != 0 || !AuthzBasepEqualUnicodeString(v8 + 1, a2) )
      {
        v8 = *(const UNICODE_STRING **)&v8->Length;
        if ( v8 == (const UNICODE_STRING *)(a1 + 32) )
          return 0LL;
      }
      return (__int64 *)&v8[-1];
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
