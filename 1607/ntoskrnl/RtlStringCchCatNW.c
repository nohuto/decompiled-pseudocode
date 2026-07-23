/*
 * XREFs of RtlStringCchCatNW @ 0x140145380
 * Callers:
 *     SepRmFetchGlobalSacl @ 0x14056BC30 (SepRmFetchGlobalSacl.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchCatNW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        STRSAFE_PCNZWCH pszSrc,
        size_t cchToAppend)
{
  NTSTATUS v5; // r10d
  NTSTRSAFE_PWSTR v7; // rdx
  size_t v8; // rax
  size_t v9; // r8
  char *v10; // rcx
  size_t v11; // rax
  size_t v12; // rdx
  signed __int64 v13; // rbx
  __int16 v14; // r8

  v5 = 0;
  v7 = pszDest;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v5 = -1073741811;
  if ( v5 >= 0 )
  {
    v8 = cchDest;
    v5 = 0;
    if ( cchDest )
    {
      do
      {
        if ( !*pszDest )
          break;
        ++pszDest;
        --v8;
      }
      while ( v8 );
      if ( v8 )
      {
        v9 = cchDest - v8;
        goto LABEL_9;
      }
    }
    v5 = -1073741811;
  }
  v9 = 0LL;
LABEL_9:
  if ( v5 >= 0 )
  {
    if ( cchToAppend > 0x7FFFFFFE )
    {
      return -1073741811;
    }
    else
    {
      v10 = (char *)&v7[v9];
      v5 = 0;
      v11 = cchDest - v9;
      if ( cchDest == v9 )
        goto LABEL_20;
      v12 = cchToAppend;
      v13 = (char *)pszSrc - v10;
      do
      {
        if ( !v12 )
          break;
        v14 = *(_WORD *)&v10[v13];
        if ( !v14 )
          break;
        *(_WORD *)v10 = v14;
        --v12;
        v10 += 2;
        --v11;
      }
      while ( v11 );
      if ( !v11 )
      {
LABEL_20:
        v10 -= 2;
        v5 = -2147483643;
      }
      *(_WORD *)v10 = 0;
    }
  }
  return v5;
}
