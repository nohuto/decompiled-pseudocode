/*
 * XREFs of sub_1401AA8A0 @ 0x1401AA8A0
 * Callers:
 *     RtlUnicodeStringCatString @ 0x1401AA6D4 (RtlUnicodeStringCatString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1401AA8A0(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  const wchar_t *v4; // r9
  __int64 v5; // r10
  __int64 v6; // r11

  result = 0LL;
  v4 = L"\\";
  v5 = 0x7FFFLL;
  v6 = 0LL;
  if ( !a2 )
    goto LABEL_8;
  do
  {
    if ( !v5 )
      break;
    if ( !*v4 )
      break;
    *(const wchar_t *)((char *)v4 + a1 - (_QWORD)L"\\") = *v4;
    --v5;
    ++v4;
    ++v6;
    --a2;
  }
  while ( a2 );
  if ( !a2 && v5 && *v4 )
LABEL_8:
    result = 2147483653LL;
  *a3 = v6;
  return result;
}
