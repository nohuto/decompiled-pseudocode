/*
 * XREFs of sub_18000AB98 @ 0x18000AB98
 * Callers:
 *     sub_180018F50 @ 0x180018F50 (sub_180018F50.c)
 * Callees:
 *     sub_180021A64 @ 0x180021A64 (sub_180021A64.c)
 *     sub_180021EDC @ 0x180021EDC (sub_180021EDC.c)
 */

__int64 __fastcall sub_18000AB98(LPCCH lpMultiByteStr, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  const CHAR *v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rbp
  const CHAR *v8; // r14
  int v9; // eax
  unsigned __int64 v10; // rdi
  __int64 v11; // rbp
  WCHAR *i; // r14
  int v13; // eax
  __int64 result; // rax
  WCHAR WideCharStr; // [rsp+80h] [rbp+8h] BYREF
  int v16; // [rsp+98h] [rbp+20h]

  v16 = 0;
  v4 = -1LL;
  v5 = lpMultiByteStr;
  do
    ++v4;
  while ( lpMultiByteStr[v4] );
  v6 = 0LL;
  v7 = v4 + 1;
  v8 = lpMultiByteStr;
  if ( v4 != -1 )
  {
    do
    {
      v9 = sub_180021EDC(&WideCharStr, v8, a3);
      if ( v9 <= 0 )
        break;
      ++v6;
      v8 += v9;
      v7 -= v9;
    }
    while ( v7 );
  }
  v10 = v6 + 1;
  v11 = sub_180021A64(saturated_mul(v10, 2uLL));
  for ( i = (WCHAR *)v11; v10; --v10 )
  {
    v13 = sub_180021EDC(i, v5, a3);
    if ( v13 <= 0 )
      break;
    ++i;
    v5 += v13;
  }
  result = v11;
  *i = 0;
  return result;
}
