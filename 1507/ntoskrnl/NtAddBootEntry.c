/*
 * XREFs of NtAddBootEntry @ 0x1406F4308
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtAddBootEntry(PBOOT_ENTRY BootEntry, ULONG Id)
{
  if ( dword_1403254D0 == 2 )
    return ExpSetBootEntry(1, &BootEntry->Version, *(unsigned int **)&Id);
  else
    return -1073741822;
}
