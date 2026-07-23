/*
 * XREFs of ZwMakePermanentObject @ 0x140180F90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwMakePermanentObject(HANDLE Object)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Object);
}
