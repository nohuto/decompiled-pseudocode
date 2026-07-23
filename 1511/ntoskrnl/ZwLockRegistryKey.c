/*
 * XREFs of ZwLockRegistryKey @ 0x1401525E0
 * Callers:
 *     NtLockProductActivationKeys @ 0x1405343A4 (NtLockProductActivationKeys.c)
 *     sub_14054598C @ 0x14054598C (sub_14054598C.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwLockRegistryKey(HANDLE KeyHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
