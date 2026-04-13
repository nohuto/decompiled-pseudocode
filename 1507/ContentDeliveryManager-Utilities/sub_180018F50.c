/*
 * XREFs of sub_180018F50 @ 0x180018F50
 * Callers:
 *     sub_180018E44 @ 0x180018E44 (sub_180018E44.c)
 * Callees:
 *     sub_18000AB98 @ 0x18000AB98 (sub_18000AB98.c)
 *     sub_180021180 @ 0x180021180 (sub_180021180.c)
 *     sub_180021A64 @ 0x180021A64 (sub_180021A64.c)
 *     sub_180021EDC @ 0x180021EDC (sub_180021EDC.c)
 *     __security_check_cookie @ 0x180026050 (__security_check_cookie.c)
 */

wchar_t *__fastcall sub_180018F50(__int64 a1, __int64 a2, char a3)
{
  struct lconv *v5; // r14
  _OWORD *v6; // rax
  char *grouping; // rsi
  __int64 v8; // rbx
  size_t v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  wchar_t *result; // rax
  CHAR MultiByteStr[8]; // [rsp+30h] [rbp-A8h] BYREF
  WCHAR WideCharStr; // [rsp+38h] [rbp-A0h] BYREF
  void **v15; // [rsp+40h] [rbp-98h]
  __int64 v16; // [rsp+48h] [rbp-90h]
  _BYTE v17[48]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v18[2]; // [rsp+80h] [rbp-58h] BYREF
  __int128 v19; // [rsp+90h] [rbp-48h]
  __int128 v20; // [rsp+A0h] [rbp-38h]

  v16 = -2LL;
  v15 = (void **)a1;
  v5 = localeconv();
  v6 = (_OWORD *)sub_180021180(v17);
  *(_OWORD *)v18 = *v6;
  v19 = v6[1];
  v20 = v6[2];
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  try
  {
    grouping = (char *)&unk_18002B658;
    if ( !a3 )
      grouping = v5->grouping;
    sub_180021180(v17);
    v8 = -1LL;
    do
      ++v8;
    while ( grouping[v8] );
    v9 = v8 + 1;
    v10 = sub_180021A64(v9);
    if ( v9 )
    {
      v11 = v10 - (_QWORD)grouping;
      do
      {
        grouping[v11] = *grouping;
        ++grouping;
        --v9;
      }
      while ( v9 );
    }
    *(_QWORD *)(a1 + 16) = v10;
    *(_QWORD *)(a1 + 32) = sub_18000AB98("false", 0LL, (__int64)v18);
    *(_QWORD *)(a1 + 40) = sub_18000AB98("true", 0LL, (__int64)v18);
  }
  catch ( ... )
  {
    sub_180016F00(v15);
    throw;
  }
  if ( a3 )
  {
    MultiByteStr[0] = 46;
    WideCharStr = 0;
    LODWORD(v15) = 0;
    sub_180021EDC(&WideCharStr, MultiByteStr, (__int64)v18);
    *(_WORD *)(a1 + 24) = WideCharStr;
    MultiByteStr[0] = 44;
    WideCharStr = 0;
    LODWORD(v15) = 0;
    sub_180021EDC(&WideCharStr, MultiByteStr, (__int64)v18);
    result = (wchar_t *)WideCharStr;
    *(_WORD *)(a1 + 26) = WideCharStr;
  }
  else
  {
    *(_WORD *)(a1 + 24) = *v5->_W_decimal_point;
    result = v5->_W_thousands_sep;
    *(_WORD *)(a1 + 26) = *result;
  }
  return result;
}
