/*
 * XREFs of LdrSetDefaultDllDirectories @ 0x18005E890
 * Callers:
 *     LdrpInitializePolicy @ 0x18005DE1C (LdrpInitializePolicy.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl LdrSetDefaultDllDirectories(ULONG DirectoryFlags)
{
  int v1; // eax

  if ( !DirectoryFlags )
    return -1073741811;
  v1 = 32512;
  if ( (LdrpPolicyBits & 4) == 0 )
    v1 = 31488;
  if ( ((~v1 | 0x100) & DirectoryFlags) != 0 )
    return -1073741811;
  LdrpDefaultDllDirectories = DirectoryFlags;
  return 0;
}
