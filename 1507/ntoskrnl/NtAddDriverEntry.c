/*
 * XREFs of NtAddDriverEntry @ 0x1406F4328
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtAddDriverEntry(PEFI_DRIVER_ENTRY BootEntry, ULONG Id)
{
  if ( dword_1403254D0 == 2 )
    return ExpSetDriverEntry(1, &BootEntry->Version, *(unsigned int **)&Id);
  else
    return -1073741822;
}
