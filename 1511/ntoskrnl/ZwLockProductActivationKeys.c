/*
 * XREFs of ZwLockProductActivationKeys @ 0x1401525C0
 * Callers:
 *     ExInitializeTimeRefresh @ 0x140768010 (ExInitializeTimeRefresh.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwLockProductActivationKeys(PULONG pPrivateVer, PULONG pSafeMode)
{
  _disable();
  __readeflags();
  return KiServiceInternal(pPrivateVer);
}
