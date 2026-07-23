/*
 * XREFs of SdbpCreateSearchPathPartsFromPath @ 0x1406C193C
 * Callers:
 *     SdbpInitializeSearchDBContext @ 0x1406C395C (SdbpInitializeSearchDBContext.c)
 * Callees:
 *     wcschr @ 0x14014F504 (wcschr.c)
 *     AslAlloc @ 0x1405148D4 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpCreateSearchPathPartsFromPath(const wchar_t *a1, _QWORD *a2)
{
  const wchar_t *v3; // rdi
  unsigned int v4; // r15d
  const wchar_t *v5; // rsi
  const char *v6; // r9
  int v7; // r8d
  int i; // ebp
  wchar_t *v10; // rax
  __int64 v11; // rcx
  _DWORD *v12; // rax
  _DWORD *v13; // r8
  __int64 v14; // rax
  const wchar_t *j; // rdx
  wchar_t v16; // ax
  __int64 v17; // rcx

  v3 = a1;
  v4 = 0;
  v5 = 0LL;
  if ( !a1 )
  {
    v6 = "Invalid argument";
    v7 = 997;
LABEL_3:
    AslLogCallPrintf(1, (unsigned int)"SdbpCreateSearchPathPartsFromPath", v7, (_DWORD)v6);
    return 0LL;
  }
  for ( i = *a1 != 0; ; ++i )
  {
    v10 = wcschr(a1, 0x3Bu);
    if ( !v10 )
      break;
    a1 = v10 + 1;
  }
  v12 = AslAlloc(v11, 48LL * (unsigned int)(i - 1) + 56);
  v13 = v12;
  if ( !v12 )
  {
    v6 = "Failed to allocate search path parts";
    v7 = 1026;
    goto LABEL_3;
  }
  *v12 = i;
  v14 = -1LL;
  do
    ++v14;
  while ( v3[v14] );
  for ( j = &v3[v14]; j >= v3; --j )
  {
    v16 = *j;
    if ( *j == 92 && !v5 )
      v5 = j;
    if ( (v16 == 59 || v3 == j) && v5 )
    {
      if ( v16 == 59 )
        ++j;
      v17 = 6LL * v4++;
      v13[2 * v17 + 4] = v5 - j + 1;
      v5 = 0LL;
      *(_QWORD *)&v13[2 * v17 + 2] = j;
    }
  }
  *a2 = v13;
  return 1LL;
}
