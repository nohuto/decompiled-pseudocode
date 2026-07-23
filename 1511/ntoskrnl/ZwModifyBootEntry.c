/*
 * XREFs of ZwModifyBootEntry @ 0x1401526C0
 * Callers:
 *     BiModifyBootEntry @ 0x140690DC0 (BiModifyBootEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwModifyBootEntry(PBOOT_ENTRY BootEntry)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootEntry);
}
