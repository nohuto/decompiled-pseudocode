/*
 * XREFs of ZwLockRegistryKey @ 0x14015C1F0
 * Callers:
 *     NtLockProductActivationKeys @ 0x140567ED8 (NtLockProductActivationKeys.c)
 *     ExpObtainFastCacheKeyBody @ 0x14057AB9C (ExpObtainFastCacheKeyBody.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwLockRegistryKey(HANDLE KeyHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
