/*
 * XREFs of LdrQueryModuleInfoLocalLoaderLock @ 0x18006CDE0
 * Callers:
 *     LdrQueryProcessModuleInformationEx @ 0x18006C728 (LdrQueryProcessModuleInformationEx.c)
 *     LdrQueryProcessModuleInformationEx2 @ 0x1800C93F4 (LdrQueryProcessModuleInformationEx2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 LdrQueryModuleInfoLocalLoaderLock(void)
{
  return LdrpAcquireLoaderLock();
}
