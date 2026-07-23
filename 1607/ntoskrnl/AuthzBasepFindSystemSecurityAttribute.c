/*
 * XREFs of AuthzBasepFindSystemSecurityAttribute @ 0x1404AF514
 * Callers:
 *     AuthzBasepQuerySystemSecurityAttributeAndValues @ 0x1404AF4A8 (AuthzBasepQuerySystemSecurityAttributeAndValues.c)
 * Callees:
 *     AuthzBasepEqualUnicodeString @ 0x14009ED84 (AuthzBasepEqualUnicodeString.c)
 */

const UNICODE_STRING *__fastcall AuthzBasepFindSystemSecurityAttribute(const UNICODE_STRING *a1)
{
  __int64 v2; // rdx
  const UNICODE_STRING *v3; // rax
  const UNICODE_STRING *v4; // rbx
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0LL;
  _InterlockedExchange64(&v8, WindowsSystemAttributes);
  v2 = v8;
  if ( v8 )
  {
    v3 = (const UNICODE_STRING *)(v8 + 8);
    v4 = *(const UNICODE_STRING **)(v8 + 8);
    while ( v4 != v3 )
    {
      if ( AuthzBasepEqualUnicodeString(v4 + 2, a1) )
        return v4;
      v2 = v8;
      v4 = *(const UNICODE_STRING **)&v4->Length;
      v3 = (const UNICODE_STRING *)(v8 + 8);
    }
    v6 = (_QWORD *)(v2 + 32);
    v7 = *(_QWORD **)(v2 + 32);
    while ( v7 != v6 )
    {
      v4 = (const UNICODE_STRING *)(v7 - 2);
      if ( (v7[5] & 1) == 0 )
      {
        if ( AuthzBasepEqualUnicodeString(v4 + 2, a1) )
          return v4;
        v2 = v8;
      }
      v7 = (_QWORD *)*v7;
      v6 = (_QWORD *)(v2 + 32);
    }
  }
  return 0LL;
}
