/*
 * XREFs of sub_1C00CFDE8 @ 0x1C00CFDE8
 * Callers:
 *     RtlUnicodeStringCatString @ 0x1C00CFC94 (RtlUnicodeStringCatString.c)
 *     RtlUnicodeStringCopyString @ 0x1C00CFD00 (RtlUnicodeStringCopyString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C00CFDE8(__int64 a1, __int64 a2, _QWORD *a3, _WORD *a4)
{
  __int64 result; // rax
  __int64 v5; // r10
  __int64 v6; // r11
  __int64 v7; // rbx

  result = 0LL;
  v5 = 0x7FFFLL;
  v6 = 0LL;
  if ( !a2 )
    goto LABEL_13;
  v7 = a1 - (_QWORD)a4;
  do
  {
    if ( !v5 )
      break;
    if ( !*a4 )
      break;
    *(_WORD *)((char *)a4 + v7) = *a4;
    --v5;
    ++a4;
    ++v6;
    --a2;
  }
  while ( a2 );
  if ( !a2 && v5 )
  {
LABEL_13:
    if ( *a4 )
      result = 2147483653LL;
  }
  *a3 = v6;
  return result;
}
