/*
 * XREFs of LdrQueryModuleInfoLocalLoaderLock @ 0x180069840
 * Callers:
 *     LdrQueryProcessModuleInformationEx @ 0x180068EE8 (LdrQueryProcessModuleInformationEx.c)
 *     LdrQueryProcessModuleInformationEx2 @ 0x1800BC6D4 (LdrQueryProcessModuleInformationEx2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 LdrQueryModuleInfoLocalLoaderLock(void)
{
  return LdrpAcquireLoaderLock();
}
