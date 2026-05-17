/*
 * XREFs of LdrpIsValidSearchOptions @ 0x1800D1CB0
 * Callers:
 *     LdrResolveDelayLoadedAPI @ 0x180031DC0 (LdrResolveDelayLoadedAPI.c)
 * Callees:
 *     <none>
 */

char __fastcall LdrpIsValidSearchOptions(int a1)
{
  char v1; // dl
  int v2; // eax

  if ( (a1 & 0xFFFFDFFF) == 8 )
    return 1;
  v1 = 0;
  v2 = 16128;
  if ( LdrpAppPackagesPath.Buffer )
    v2 = 15104;
  if ( (~v2 & a1) == 0 )
    return 1;
  return v1;
}
