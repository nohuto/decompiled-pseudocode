/*
 * XREFs of _dynamic_initializer_for__TileDataLayerItemWrappers::MRTCacheManagerInternal::s_MRTCacheLock__ @ 0x180001260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_initializer_for__TileDataLayerItemWrappers::MRTCacheManagerInternal::s_MRTCacheLock__()
{
  InitializeSRWLock(&TileDataLayerItemWrappers::MRTCacheManagerInternal::s_MRTCacheLock);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__TileDataLayerItemWrappers::MRTCacheManagerInternal::s_MRTCacheLock__);
}
