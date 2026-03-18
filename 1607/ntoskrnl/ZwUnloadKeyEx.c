/*
 * XREFs of ZwUnloadKeyEx @ 0x14015D320
 * Callers:
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1403F1DC4 (PiDrvDbLoadNodeWorkerCallback.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnloadKeyEx(POBJECT_ATTRIBUTES TargetKey, HANDLE Event)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(TargetKey, Event, v2);
}
