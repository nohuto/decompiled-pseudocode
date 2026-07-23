/*
 * XREFs of ZwUnloadKeyEx @ 0x14015D890
 * Callers:
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1403F0C88 (PiDrvDbLoadNodeWorkerCallback.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnloadKeyEx(POBJECT_ATTRIBUTES TargetKey, HANDLE Event)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetKey);
}
