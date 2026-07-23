/*
 * XREFs of LdrQueryModuleInfoLocalLoaderLock @ 0x18006E310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 LdrQueryModuleInfoLocalLoaderLock()
{
  return LdrpAcquireLoaderLock();
}
