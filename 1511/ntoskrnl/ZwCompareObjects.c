/*
 * XREFs of ZwCompareObjects @ 0x1401518C0
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
