/*
 * XREFs of ZwCreateKeyedEvent @ 0x140180470
 * Callers:
 *     ExpKeyedEventInitialization @ 0x1407E4030 (ExpKeyedEventInitialization.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwCreateKeyedEvent(
        PHANDLE OutHandle,
        ACCESS_MASK AccessMask,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(OutHandle, *(_QWORD *)&AccessMask, ObjectAttributes);
}
