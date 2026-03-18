/*
 * XREFs of IopSymlinkRegistryCallback @ 0x140566760
 * Callers:
 *     IopSymlinkRegistryInitCallback @ 0x140141B1C (IopSymlinkRegistryInitCallback.c)
 * Callees:
 *     IopSymlinkQueryEnabledClasses @ 0x140566788 (IopSymlinkQueryEnabledClasses.c)
 */

__int64 IopSymlinkRegistryCallback()
{
  __int64 result; // rax

  result = IopSymlinkQueryEnabledClasses(L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\Windows\\FileSystems\\NTFS");
  if ( (int)result < 0 )
    return IopSymlinkQueryEnabledClasses(L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\FileSystem");
  return result;
}
