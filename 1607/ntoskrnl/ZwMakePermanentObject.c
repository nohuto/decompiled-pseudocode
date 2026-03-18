/*
 * XREFs of ZwMakePermanentObject @ 0x14015BCC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwMakePermanentObject(HANDLE Object)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(Object, v1, v2);
}
