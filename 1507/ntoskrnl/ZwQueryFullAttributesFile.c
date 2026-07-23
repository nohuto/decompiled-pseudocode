/*
 * XREFs of ZwQueryFullAttributesFile @ 0x1401815B0
 * Callers:
 *     VfZwQueryFullAttributesFile @ 0x1407571B0 (VfZwQueryFullAttributesFile.c)
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
