/*
 * XREFs of ZwLockProductActivationKeys @ 0x140180F30
 * Callers:
 *     ExInitializeTimeRefresh @ 0x1407D8EFC (ExInitializeTimeRefresh.c)
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
