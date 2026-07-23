/*
 * XREFs of LdrpValidPathComponentsMask @ 0x1800C9208
 * Callers:
 *     LdrSetDefaultDllDirectories @ 0x180077DA0 (LdrSetDefaultDllDirectories.c)
 *     LdrSetImplicitPathOptions @ 0x1800BCAB0 (LdrSetImplicitPathOptions.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrpValidPathComponentsMask()
{
  __int64 result; // rax

  result = 16128LL;
  if ( LdrpAppPackagesPath.Buffer )
    return 15104LL;
  return result;
}
