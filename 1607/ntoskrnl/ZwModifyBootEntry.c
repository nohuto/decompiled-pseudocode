/*
 * XREFs of ZwModifyBootEntry @ 0x14015BD60
 * Callers:
 *     BiModifyBootEntry @ 0x1406D5588 (BiModifyBootEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwModifyBootEntry(PBOOT_ENTRY BootEntry)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(BootEntry, v1, v2);
}
