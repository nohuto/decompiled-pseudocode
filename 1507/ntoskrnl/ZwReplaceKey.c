/*
 * XREFs of ZwReplaceKey @ 0x140181B30
 * Callers:
 *     VfZwReplaceKey @ 0x140757C24 (VfZwReplaceKey.c)
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
