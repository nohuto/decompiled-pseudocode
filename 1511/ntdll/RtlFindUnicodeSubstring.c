/*
 * XREFs of RtlFindUnicodeSubstring @ 0x1800DA540
 * Callers:
 *     <none>
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x18002F010 (RtlCompareUnicodeStrings.c)
 */

PWCHAR __cdecl RtlFindUnicodeSubstring(
        PUNICODE_STRING FullString,
        PUNICODE_STRING SearchString,
        BOOLEAN CaseInSensitive)
{
  unsigned __int16 Length; // ax
  WCHAR *v4; // rbx
  unsigned __int16 *Buffer; // rdi
  unsigned __int64 v7; // rbp
  __int64 v8; // r14
  __int64 v9; // rsi
  unsigned __int16 *v10; // r13
  SIZE_T v11; // r15

  Length = FullString->Length;
  v4 = 0LL;
  Buffer = FullString->Buffer;
  if ( FullString->Length >= SearchString->Length )
  {
    v7 = SearchString->Length;
    v8 = Length;
    if ( Length >= v7 )
    {
      v9 = 0LL;
      v10 = SearchString->Buffer;
      v11 = (unsigned __int64)SearchString->Length >> 1;
      while ( RtlCompareUnicodeStrings(Buffer, v11, v10, v11, CaseInSensitive) )
      {
        v9 += 2LL;
        ++Buffer;
        if ( v8 - v9 < v7 )
          return v4;
      }
      return Buffer;
    }
  }
  return v4;
}
