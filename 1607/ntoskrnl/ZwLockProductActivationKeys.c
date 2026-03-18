/*
 * XREFs of ZwLockProductActivationKeys @ 0x14015BC60
 * Callers:
 *     ExInitializeTimeRefresh @ 0x1407AE678 (ExInitializeTimeRefresh.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwLockProductActivationKeys(PULONG pPrivateVer, PULONG pSafeMode)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(pPrivateVer, pSafeMode, v2);
}
