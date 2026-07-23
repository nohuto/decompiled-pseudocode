/*
 * XREFs of _PnpMultiSzAppend @ 0x1406E0018
 * Callers:
 *     _CmGetDeviceChildren @ 0x1406DD05C (_CmGetDeviceChildren.c)
 * Callees:
 *     RtlStringCbCopyExW @ 0x14010AC6C (RtlStringCbCopyExW.c)
 */

char __fastcall PnpMultiSzAppend(NTSTRSAFE_PWSTR pszDest, unsigned int *a2, const wchar_t *a3)
{
  wchar_t v4; // cx
  __int64 v7; // rbx
  __int64 v8; // rax
  unsigned int v9; // edi
  size_t v11; // rdx
  NTSTRSAFE_PWSTR v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rcx
  wchar_t *v15; // rax

  v4 = *pszDest;
  if ( v4 )
  {
    v11 = *a2;
    v12 = pszDest;
    if ( v11 )
    {
      do
      {
        if ( v4 )
        {
          do
            ++v12;
          while ( *v12 );
        }
        v4 = *++v12;
      }
      while ( *v12 && 2 * (unsigned __int64)(unsigned int)(v12 - pszDest) < v11 );
    }
    v13 = -1LL;
    v14 = -1LL;
    do
      ++v14;
    while ( a3[v14] );
    if ( 2 * (v12 - pszDest + v14) + 4 <= v11 && RtlStringCbCopyExW(v12, v11, a3, 0LL, 0LL, 0x900u) >= 0 )
    {
      do
        ++v13;
      while ( a3[v13] );
      v15 = &v12[v13 + 1];
      *v15 = 0;
      *a2 = 2 * (v15 - pszDest) + 2;
      return 1;
    }
    return 0;
  }
  v7 = -1LL;
  v8 = -1LL;
  do
    ++v8;
  while ( a3[v8] );
  v9 = 2 * v8 + 4;
  if ( v9 > *a2 || RtlStringCbCopyExW(pszDest, *a2, a3, 0LL, 0LL, 0x900u) < 0 )
    return 0;
  do
    ++v7;
  while ( pszDest[v7] );
  pszDest[v7 + 1] = 0;
  *a2 = v9;
  return 1;
}
