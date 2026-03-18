/*
 * XREFs of AuthzBasepQuerySecurityAttributeAndValues @ 0x140015C80
 * Callers:
 *     SepGetProcUniqueLuidAndIndexFromAttributeInfo @ 0x140015BD0 (SepGetProcUniqueLuidAndIndexFromAttributeInfo.c)
 *     AuthzBasepEvaluateAceCondition @ 0x14011C690 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepGetNextValue @ 0x14026ACFC (AuthzBasepGetNextValue.c)
 *     AuthzBasepRestartOperandValueEnumeration @ 0x14026B068 (AuthzBasepRestartOperandValueEnumeration.c)
 * Callees:
 *     AuthzBasepEqualUnicodeString @ 0x14002CD80 (AuthzBasepEqualUnicodeString.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x14026A770 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     RtlEqualUnicodeString @ 0x140491A30 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall AuthzBasepQuerySecurityAttributeAndValues(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v3; // rbp
  __int64 *v4; // rdi
  const UNICODE_STRING *v5; // rcx
  const UNICODE_STRING *v6; // rdx
  __int64 *v8; // rsi
  __int64 *v9; // rbp
  __int64 v11; // rcx

  v1 = a1[6];
  if ( !v1 )
  {
    v3 = *a1;
    if ( *a1 )
    {
      v4 = *(__int64 **)(v3 + 8);
      if ( v4 == (__int64 *)(v3 + 8) )
      {
LABEL_8:
        v8 = *(__int64 **)(v3 + 32);
        v9 = (__int64 *)(v3 + 32);
        if ( v8 == v9 )
          return 3221226021LL;
        while ( 1 )
        {
          v4 = v8 - 2;
          if ( (v8[5] & 1) == 0 )
          {
            if ( (unsigned __int8)AuthzBasepEqualUnicodeString(v4 + 4, a1 + 1) )
              break;
          }
          v8 = (__int64 *)*v8;
          if ( v8 == v9 )
            return 3221226021LL;
        }
      }
      else
      {
        while ( 1 )
        {
          v5 = (const UNICODE_STRING *)(v4 + 4);
          v6 = (const UNICODE_STRING *)(a1 + 1);
          if ( KeGetCurrentIrql() >= 2u
             ? AuthzBasepEqualUnicodeStringCaseSensitive(v5, v6)
             : RtlEqualUnicodeString(v5, v6, 1u) )
          {
            break;
          }
          v4 = (__int64 *)*v4;
          if ( v4 == (__int64 *)(v3 + 8) )
            goto LABEL_8;
        }
      }
      if ( v4 )
      {
        v11 = v4[9];
        *((_DWORD *)a1 + 8) = *((_DWORD *)v4 + 15);
        *((_WORD *)a1 + 12) = *((_WORD *)v4 + 24);
        *((_DWORD *)a1 + 7) = *((_DWORD *)v4 + 13);
        a1[6] = (__int64)v4;
LABEL_12:
        a1[7] = v11;
        a1[5] = v11 + 40;
        return 0LL;
      }
    }
    return 3221226021LL;
  }
  v11 = *(_QWORD *)a1[7];
  if ( v11 != v1 + 72 )
    goto LABEL_12;
  return 2147483674LL;
}
