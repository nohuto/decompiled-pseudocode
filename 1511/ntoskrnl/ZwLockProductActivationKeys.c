/*
 * XREFs of ZwLockProductActivationKeys @ 0x1401525C0
 * Callers:
 *     ExInitializeTimeRefresh @ 0x140768010 (ExInitializeTimeRefresh.c)
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
