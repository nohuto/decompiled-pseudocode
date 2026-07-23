/*
 * XREFs of ZwReplaceKey @ 0x14015CE10
 * Callers:
 *     <none>
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
