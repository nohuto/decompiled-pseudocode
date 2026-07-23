/*
 * XREFs of LdrSetDefaultDllDirectories @ 0x180077DA0
 * Callers:
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpValidPathComponentsMask @ 0x1800C9208 (LdrpValidPathComponentsMask.c)
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
