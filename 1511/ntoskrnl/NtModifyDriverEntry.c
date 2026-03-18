/*
 * XREFs of NtModifyDriverEntry @ 0x1406717A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtModifyDriverEntry(PEFI_DRIVER_ENTRY DriverEntry)
{
  if ( dword_1402D6390 == 2 )
    return ExpSetDriverEntry(0, &DriverEntry->Version, 0LL);
  else
    return -1073741822;
}
