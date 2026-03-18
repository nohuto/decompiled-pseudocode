/*
 * XREFs of SdbpCreateSearchPathPartsFromPath @ 0x140536360
 * Callers:
 *     SdbpInitializeSearchDBContext @ 0x140535E24 (SdbpInitializeSearchDBContext.c)
 * Callees:
 *     wcschr @ 0x140145B68 (wcschr.c)
 *     AslAlloc @ 0x1403B8554 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x14051B0D0 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpCreateSearchPathPartsFromPath(const wchar_t *a1, _QWORD *a2)
{
  const wchar_t *v3; // rdi
  unsigned int v4; // r15d
  const wchar_t *v5; // rsi
  int i; // ebp
  wchar_t *v7; // rax
  __int64 v8; // rcx
  _DWORD *v9; // rax
  _DWORD *v10; // r8
  __int64 v11; // rax
  const wchar_t *j; // rdx
  wchar_t v13; // ax
  __int64 v15; // rcx

  v3 = a1;
  v4 = 0;
  v5 = 0LL;
  if ( !a1 )
    goto LABEL_19;
  for ( i = *a1 != 0; ; ++i )
  {
    v7 = wcschr(a1, 0x3Bu);
    if ( !v7 )
      break;
    a1 = v7 + 1;
  }
  v9 = AslAlloc(v8, 48LL * (unsigned int)(i - 1) + 56);
  v10 = v9;
  if ( v9 )
  {
    *v9 = i;
    v11 = -1LL;
    do
      ++v11;
    while ( v3[v11] );
    for ( j = &v3[v11]; j >= v3; --j )
    {
      v13 = *j;
      if ( *j == 92 && !v5 )
        v5 = j;
      if ( (v3 == j || v13 == 59) && v5 )
      {
        if ( v13 == 59 )
          ++j;
        v15 = 6LL * v4++;
        v10[2 * v15 + 4] = v5 - j + 1;
        v5 = 0LL;
        *(_QWORD *)&v10[2 * v15 + 2] = j;
      }
    }
    *a2 = v10;
    return 1LL;
  }
  else
  {
LABEL_19:
    AslLogCallPrintf(1LL);
    return 0LL;
  }
}
