/*
 * XREFs of SdbpCreateSearchPathPartsFromPath @ 0x1406C1804
 * Callers:
 *     SdbpInitializeSearchDBContext @ 0x1406C3824 (SdbpInitializeSearchDBContext.c)
 * Callees:
 *     wcschr @ 0x14014EF44 (wcschr.c)
 *     AslAlloc @ 0x14048554C (AslAlloc.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpCreateSearchPathPartsFromPath(const wchar_t *a1, _QWORD *a2)
{
  const wchar_t *v3; // rdi
  unsigned int v4; // r15d
  const wchar_t *v5; // rsi
  int i; // ebp
  wchar_t *v8; // rax
  __int64 v9; // rcx
  _DWORD *v10; // rax
  _DWORD *v11; // r8
  __int64 v12; // rax
  const wchar_t *j; // rdx
  wchar_t v14; // ax
  __int64 v15; // rcx

  v3 = a1;
  v4 = 0;
  v5 = 0LL;
  if ( !a1 )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbpCreateSearchPathPartsFromPath", 997, (unsigned int)"Invalid argument");
    return 0LL;
  }
  for ( i = *a1 != 0; ; ++i )
  {
    v8 = wcschr(a1, 0x3Bu);
    if ( !v8 )
      break;
    a1 = v8 + 1;
  }
  v10 = AslAlloc(v9, 48LL * (unsigned int)(i - 1) + 56);
  v11 = v10;
  if ( !v10 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpCreateSearchPathPartsFromPath",
      1026,
      (unsigned int)"Failed to allocate search path parts");
    return 0LL;
  }
  *v10 = i;
  v12 = -1LL;
  do
    ++v12;
  while ( v3[v12] );
  for ( j = &v3[v12]; j >= v3; --j )
  {
    v14 = *j;
    if ( *j == 92 && !v5 )
      v5 = j;
    if ( (v14 == 59 || v3 == j) && v5 )
    {
      if ( v14 == 59 )
        ++j;
      v15 = 6LL * v4++;
      v11[2 * v15 + 4] = v5 - j + 1;
      v5 = 0LL;
      *(_QWORD *)&v11[2 * v15 + 2] = j;
    }
  }
  *a2 = v11;
  return 1LL;
}
