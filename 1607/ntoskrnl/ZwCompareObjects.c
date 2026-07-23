/*
 * XREFs of ZwCompareObjects @ 0x14015B4B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCompareObjects(HANDLE FirstObjectHandle, HANDLE SecondObjectHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FirstObjectHandle);
}
