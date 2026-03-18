/*
 * XREFs of SdbpGetProcessHistory @ 0x14067EEA8
 * Callers:
 *     SdbpInitializeSearchDBContext @ 0x140535E24 (SdbpInitializeSearchDBContext.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     AslAlloc @ 0x1403B8554 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x14051B0D0 (AslLogCallPrintf.c)
 *     AslEnvVarQuery @ 0x140535D40 (AslEnvVarQuery.c)
 */

_WORD *__fastcall SdbpGetProcessHistory(WCHAR *a1, _WORD *a2, _WORD *a3)
{
  __int64 v5; // rsi
  __int64 v6; // rbp
  __int64 v7; // rcx
  int v8; // r15d
  SIZE_T v9; // rbx
  SIZE_T v10; // rbx
  _WORD *v11; // rdi
  _WORD *v12; // r14
  _WORD *result; // rax
  _WORD *v14; // rdi
  _WORD *v15; // rdi
  SIZE_T v17; // [rsp+88h] [rbp+20h] BYREF

  v5 = -1LL;
  v17 = 0LL;
  v6 = -1LL;
  do
    ++v6;
  while ( a2[v6] );
  do
    ++v5;
  while ( a3[v5] );
  v8 = AslEnvVarQuery(a1, L"__PROCESS_HISTORY", 0x11uLL, 0LL, 0LL, &v17);
  if ( v8 == -1073741789 )
    v9 = v17 + (unsigned int)(v5 + v6 + 2);
  else
    v9 = (unsigned int)(v5 + v6 + 1);
  v10 = 2 * v9;
  v11 = AslAlloc(v7, v10);
  v12 = v11;
  if ( v11 )
  {
    *v11 = 0;
    if ( v8 == -1073741789 )
    {
      v17 = v10;
      if ( (int)AslEnvVarQuery(a1, L"__PROCESS_HISTORY", 0x11uLL, v11, v10 >> 1, &v17) >= 0 )
      {
        v14 = &v11[v17 - 1];
        if ( *v14 != 59 )
          *++v14 = 59;
        v11 = v14 + 1;
      }
    }
    memmove(v11, a2, 2LL * (unsigned int)v6);
    v15 = &v11[(unsigned int)v6];
    memmove(v15, a3, 2LL * (unsigned int)v5);
    result = v12;
    v15[(unsigned int)v5] = 0;
  }
  else
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
  return result;
}
