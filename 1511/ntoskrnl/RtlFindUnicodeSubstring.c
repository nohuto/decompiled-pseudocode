/*
 * XREFs of RtlFindUnicodeSubstring @ 0x1406447B0
 * Callers:
 *     DbgkpPostModuleMessages @ 0x1405EEEF0 (DbgkpPostModuleMessages.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x1404C74D0 (RtlCompareUnicodeStrings.c)
 */

const WCHAR *__fastcall RtlFindUnicodeSubstring(__int16 *a1, __int16 *a2)
{
  unsigned __int16 v2; // r8
  __int64 v3; // rbx
  unsigned __int16 v4; // ax
  const WCHAR *v5; // rdi
  unsigned __int64 v6; // rbp
  __int64 v7; // r14
  const WCHAR *v8; // r12
  __int64 v9; // rsi
  SIZE_T v10; // r15

  v2 = *a1;
  v3 = 0LL;
  v4 = *a2;
  v5 = (const WCHAR *)*((_QWORD *)a1 + 1);
  if ( (unsigned __int16)*a1 >= (unsigned __int16)*a2 )
  {
    v6 = v4;
    v7 = v2;
    if ( v2 >= (unsigned __int64)v4 )
    {
      v8 = (const WCHAR *)*((_QWORD *)a2 + 1);
      v9 = 0LL;
      v10 = (unsigned __int64)v4 >> 1;
      while ( RtlCompareUnicodeStrings(v5, v10, v8, v10, 0) )
      {
        v9 += 2LL;
        ++v5;
        if ( v7 - v9 < v6 )
          return (const WCHAR *)v3;
      }
      return v5;
    }
  }
  return (const WCHAR *)v3;
}
