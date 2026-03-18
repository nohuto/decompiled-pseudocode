/*
 * XREFs of NtModifyDriverEntry @ 0x1406F5704
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtModifyDriverEntry(PEFI_DRIVER_ENTRY DriverEntry)
{
  if ( dword_1403254D0 == 2 )
    return ExpSetDriverEntry(0, &DriverEntry->Version, 0LL);
  else
    return -1073741822;
}
