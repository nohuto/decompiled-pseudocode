/*
 * XREFs of LdrQueryModuleInfoLocalLoaderUnlock @ 0x18006E2F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrQueryModuleInfoLocalLoaderUnlock(__int64 a1)
{
  return LdrpReleaseLoaderLock(a1, 10, 0);
}
