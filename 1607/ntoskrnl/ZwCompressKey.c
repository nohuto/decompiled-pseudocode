/*
 * XREFs of ZwCompressKey @ 0x14015B510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCompressKey(HANDLE Key)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Key);
}
