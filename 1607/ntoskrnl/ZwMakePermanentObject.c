/*
 * XREFs of ZwMakePermanentObject @ 0x14015C230
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
