/*
 * XREFs of ZwClearEvent @ 0x14015A440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwClearEvent(HANDLE EventHandle)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle, v1, v2);
}
