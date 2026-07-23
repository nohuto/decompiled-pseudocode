/*
 * XREFs of LdrpValidPathComponentsMask @ 0x1800D1CE8
 * Callers:
 *     LdrSetDefaultDllDirectories @ 0x180083DD0 (LdrSetDefaultDllDirectories.c)
 *     LdrSetImplicitPathOptions @ 0x1800C97D0 (LdrSetImplicitPathOptions.c)
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
