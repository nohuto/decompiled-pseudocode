/*
 * XREFs of NtModifyBootEntry @ 0x140671784
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtModifyBootEntry(PBOOT_ENTRY BootEntry)
{
  if ( dword_1402D6390 == 2 )
    return ExpSetBootEntry(0, &BootEntry->Version, 0LL);
  else
    return -1073741822;
}
