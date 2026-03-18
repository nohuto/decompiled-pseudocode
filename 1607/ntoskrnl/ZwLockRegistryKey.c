/*
 * XREFs of ZwLockRegistryKey @ 0x14015BC80
 * Callers:
 *     NtLockProductActivationKeys @ 0x140567998 (NtLockProductActivationKeys.c)
 *     ExpObtainFastCacheKeyBody @ 0x14057A65C (ExpObtainFastCacheKeyBody.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwLockRegistryKey(HANDLE KeyHandle)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, v1, v2);
}
