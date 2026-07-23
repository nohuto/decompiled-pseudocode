/*
 * XREFs of ZwCreateTimer2 @ 0x140180690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateTimer2(
        PHANDLE TimerHandle,
        PVOID Reserved1,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG Attributes,
        ACCESS_MASK DesiredAccess)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TimerHandle);
}
