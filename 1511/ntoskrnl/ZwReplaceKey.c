/*
 * XREFs of ZwReplaceKey @ 0x1401531C0
 * Callers:
 *     VfZwReplaceKey @ 0x1406D405C (VfZwReplaceKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwReplaceKey(
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE Key,
        POBJECT_ATTRIBUTES ReplacedObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ObjectAttributes);
}
