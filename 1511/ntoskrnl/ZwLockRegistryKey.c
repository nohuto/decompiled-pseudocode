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
  __int64 v1; // rdx
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, v1, v2);
}
