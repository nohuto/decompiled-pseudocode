/*
 * XREFs of ZwQueryFullAttributesFile @ 0x140152C40
 * Callers:
 *     VfZwQueryFullAttributesFile @ 0x1406D35E8 (VfZwQueryFullAttributesFile.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryFullAttributesFile(
        POBJECT_ATTRIBUTES ObjectAttributes,
        PFILE_NETWORK_OPEN_INFORMATION FileInformation)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ObjectAttributes);
}
