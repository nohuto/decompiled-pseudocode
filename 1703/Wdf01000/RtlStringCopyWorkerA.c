/*
 * XREFs of RtlStringCopyWorkerA @ 0x1C00178B8
 * Callers:
 *     FxInitializeBugCheckDriverInfo @ 0x1C001779C (FxInitializeBugCheckDriverInfo.c)
 *     ?_InitializeDriverName@FxDriver@@SAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C001B440 (-_InitializeDriverName@FxDriver@@SAXPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCopyWorkerA(
        char *pszDest,
        unsigned __int64 pszSrc,
        unsigned __int64 *a3,
        const char *cchDest)
{
  unsigned int v4; // r8d
  __int64 v5; // rdx
  __int64 v6; // r9
  char v7; // al

  v4 = 0;
  v5 = 32LL;
  v6 = cchDest - pszDest;
  do
  {
    if ( v5 == -2147483614 )
      break;
    v7 = pszDest[v6];
    if ( !v7 )
      break;
    *pszDest++ = v7;
    --v5;
  }
  while ( v5 );
  if ( !v5 )
  {
    --pszDest;
    v4 = -2147483643;
  }
  *pszDest = 0;
  return v4;
}
