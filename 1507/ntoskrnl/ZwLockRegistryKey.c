/*
 * XREFs of ZwLockRegistryKey @ 0x140180F50
 * Callers:
 *     NtLockProductActivationKeys @ 0x1405AD7FC (NtLockProductActivationKeys.c)
 *     sub_1405BC990 @ 0x1405BC990 (sub_1405BC990.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwLockRegistryKey(HANDLE KeyHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
