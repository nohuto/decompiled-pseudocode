/*
 * XREFs of AuthzBasepSecurityAttributePresent @ 0x14004E5A0
 * Callers:
 *     ExpGetProcessInformation @ 0x140497410 (ExpGetProcessInformation.c)
 *     SeSecurityAttributePresent @ 0x14050D910 (SeSecurityAttributePresent.c)
 * Callees:
 *     AuthzBasepEqualUnicodeString @ 0x14002CD80 (AuthzBasepEqualUnicodeString.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x14026A770 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     RtlEqualUnicodeString @ 0x140491A30 (RtlEqualUnicodeString.c)
 */

bool __fastcall AuthzBasepSecurityAttributePresent(__int64 a1, const UNICODE_STRING *a2)
{
  __int64 *v2; // rbx
  __int64 *v3; // rdi
  const UNICODE_STRING *v6; // rcx
  __int64 *v8; // rdi
  __int64 *v9; // rsi

  v2 = *(__int64 **)(a1 + 8);
  v3 = (__int64 *)(a1 + 8);
  if ( v2 == (__int64 *)(a1 + 8) )
  {
LABEL_6:
    v8 = (__int64 *)(a1 + 32);
    v9 = *(__int64 **)(a1 + 32);
    if ( v9 == v8 )
      return 0;
    while ( 1 )
    {
      v2 = v9 - 2;
      if ( (v9[5] & 1) == 0 )
      {
        if ( AuthzBasepEqualUnicodeString((const UNICODE_STRING *)v2 + 2, a2) )
          break;
      }
      v9 = (__int64 *)*v9;
      if ( v9 == v8 )
        return 0;
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
        break;
      }
      v2 = (__int64 *)*v2;
      if ( v2 == v3 )
        goto LABEL_6;
    }
  }
  return v2 != 0;
}
