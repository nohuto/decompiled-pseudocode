/*
 * XREFs of ZwModifyBootEntry @ 0x14015C2D0
 * Callers:
 *     BiModifyBootEntry @ 0x1406D56C0 (BiModifyBootEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwModifyBootEntry(PBOOT_ENTRY BootEntry)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootEntry);
}
