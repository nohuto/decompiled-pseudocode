/*
 * XREFs of RtlStringCchCatW @ 0x14010B540
 * Callers:
 *     ExpGetGlobalLocaleSection @ 0x1404B6830 (ExpGetGlobalLocaleSection.c)
 *     SdbpCreateSearchDBContext @ 0x140514734 (SdbpCreateSearchDBContext.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x1406C26A4 (SdbpCheckMatchingRegistryEntry.c)
 *     AslPathToSystemPath @ 0x1406C62C4 (AslPathToSystemPath.c)
 *     AslEnvResolveVars @ 0x1406C680C (AslEnvResolveVars.c)
 *     AslpFileQueryVersionString @ 0x1406C8FB4 (AslpFileQueryVersionString.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchCatW(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszSrc)
{
  NTSTATUS v4; // r9d
  NTSTRSAFE_PWSTR v6; // r11
  size_t v7; // rax
  size_t v8; // r8
  char *v9; // rcx
  size_t v10; // rdx
  __int64 v11; // r10
  signed __int64 v12; // rbx
  __int16 v13; // ax

  v4 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v4 = -1073741811;
  v6 = pszDest;
  if ( v4 >= 0 )
  {
    v7 = cchDest;
    v4 = 0;
    if ( cchDest )
    {
      do
      {
        if ( !*pszDest )
          break;
        ++pszDest;
        --v7;
      }
      while ( v7 );
      if ( v7 )
      {
        v8 = cchDest - v7;
        goto LABEL_9;
      }
    }
    v4 = -1073741811;
  }
  v8 = 0LL;
LABEL_9:
  if ( v4 >= 0 )
  {
    v9 = (char *)&v6[v8];
    v4 = 0;
    v10 = cchDest - v8;
    if ( cchDest == v8 )
      goto LABEL_20;
    v11 = 2147483646LL;
    v12 = (char *)pszSrc - v9;
    do
    {
      if ( !v11 )
        break;
      v13 = *(_WORD *)&v9[v12];
      if ( !v13 )
        break;
      *(_WORD *)v9 = v13;
      --v11;
      v9 += 2;
      --v10;
    }
    while ( v10 );
    if ( !v10 )
    {
LABEL_20:
      v9 -= 2;
      v4 = -2147483643;
    }
    *(_WORD *)v9 = 0;
  }
  return v4;
}
