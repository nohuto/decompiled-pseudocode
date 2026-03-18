/*
 * XREFs of NtModifyBootEntry @ 0x1406F56E8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtModifyBootEntry(PBOOT_ENTRY BootEntry)
{
  if ( dword_1403254D0 == 2 )
    return ExpSetBootEntry(0, &BootEntry->Version, 0LL);
  else
    return -1073741822;
}
