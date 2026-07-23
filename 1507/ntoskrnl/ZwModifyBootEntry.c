/*
 * XREFs of ZwModifyBootEntry @ 0x140181030
 * Callers:
 *     BiModifyBootEntry @ 0x1407108D8 (BiModifyBootEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwModifyBootEntry(PBOOT_ENTRY BootEntry)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootEntry);
}
