/*
 * XREFs of RtlFindUnicodeSubstring @ 0x1406447B0
 * Callers:
 *     DbgkpPostModuleMessages @ 0x1405EEEF0 (DbgkpPostModuleMessages.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x1404C74D0 (RtlCompareUnicodeStrings.c)
 */

PWCHAR __cdecl RtlFindUnicodeSubstring(
        PUNICODE_STRING FullString,
        PUNICODE_STRING SearchString,
        BOOLEAN CaseInSensitive)
{
  unsigned __int16 Length; // r8
  WCHAR *v4; // rbx
  unsigned __int16 v5; // ax
  wchar_t *Buffer; // rdi
  unsigned __int64 v7; // rbp
  __int64 v8; // r14
  wchar_t *v9; // r12
  __int64 v10; // rsi
  SIZE_T v11; // r15

  Length = FullString->Length;
  v4 = 0LL;
  v5 = SearchString->Length;
  Buffer = FullString->Buffer;
  if ( FullString->Length >= SearchString->Length )
  {
    v7 = v5;
    v8 = Length;
    if ( Length >= (unsigned __int64)v5 )
    {
      v9 = SearchString->Buffer;
      v10 = 0LL;
      v11 = (unsigned __int64)v5 >> 1;
      while ( RtlCompareUnicodeStrings(Buffer, v11, v9, v11, 0) )
      {
        v10 += 2LL;
        ++Buffer;
        if ( v8 - v10 < v7 )
          return v4;
      }
      return Buffer;
    }
  }
  return v4;
}
