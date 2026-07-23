/*
 * XREFs of NtAddDriverEntry @ 0x1406B35A4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtAddDriverEntry(PEFI_DRIVER_ENTRY BootEntry, ULONG Id)
{
  if ( dword_1402FD030 == 2 )
    return ExpSetDriverEntry(1, &BootEntry->Version, *(unsigned __int64 *)&Id);
  else
    return -1073741822;
}
