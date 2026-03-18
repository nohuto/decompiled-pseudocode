/*
 * XREFs of NtModifyBootEntry @ 0x1406B4478
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtModifyBootEntry(PBOOT_ENTRY BootEntry)
{
  if ( dword_1402FD0D0 == 2 )
    return ExpSetBootEntry(0, BootEntry, 0LL);
  else
    return -1073741822;
}
