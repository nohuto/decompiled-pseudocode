/*
 * XREFs of StringCchCatW @ 0x1C026C07C
 * Callers:
 *     GetNlsTablePath @ 0x1C026BF2C (GetNlsTablePath.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringCchCatW(STRSAFE_LPWSTR pszDest, size_t cchDest, STRSAFE_LPCWSTR pszSrc)
{
  __int64 v4; // rax
  STRSAFE_LPWSTR v5; // r9
  __int64 v6; // r8
  wchar_t *v7; // rax
  HRESULT v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // r8
  char *v11; // r10
  wchar_t v12; // r9

  v4 = 260LL;
  v5 = pszDest;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  if ( !v4 )
    return -2147024809;
  v6 = 260 - v4;
  v7 = &pszDest[260 - v4];
  v8 = 0;
  v9 = 260 - v6;
  if ( 260 == v6 )
    goto LABEL_11;
  v10 = 2147483646LL;
  v11 = (char *)((char *)pszSrc - (char *)v7);
  do
  {
    if ( !v10 )
      break;
    v12 = *(wchar_t *)((char *)v7 + (_QWORD)v11);
    if ( !v12 )
      break;
    *v7 = v12;
    --v10;
    ++v7;
    --v9;
  }
  while ( v9 );
  if ( !v9 )
  {
LABEL_11:
    --v7;
    v8 = -2147024774;
  }
  *v7 = 0;
  return v8;
}
