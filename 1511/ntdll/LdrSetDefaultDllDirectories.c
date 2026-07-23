/*
 * XREFs of LdrSetDefaultDllDirectories @ 0x180083DD0
 * Callers:
 *     LdrpInitializeProcess @ 0x18008E534 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpValidPathComponentsMask @ 0x1800D1CE8 (LdrpValidPathComponentsMask.c)
 */

NTSTATUS __cdecl LdrSetDefaultDllDirectories(ULONG DirectoryFlags)
{
  int valid; // eax
  int v2; // edx

  if ( !DirectoryFlags )
    return -1073741811;
  valid = LdrpValidPathComponentsMask(DirectoryFlags, DirectoryFlags);
  if ( ((~valid | 0x100) & v2) != 0 )
    return -1073741811;
  LdrpDefaultDllDirectories = v2;
  return 0;
}
