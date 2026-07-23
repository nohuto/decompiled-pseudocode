/*
 * XREFs of _ResReadFile @ 0x1800FA374
 * Callers:
 *     _ResCCreateMappingExclusive @ 0x1800F8BE4 (_ResCCreateMappingExclusive.c)
 *     _ResCLoadFixedSize @ 0x1800F8F74 (_ResCLoadFixedSize.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x180048BE0 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x180048C10 (RtlNtStatusToDosError.c)
 *     NtWaitForSingleObject @ 0x1800A5140 (NtWaitForSingleObject.c)
 *     NtReadFile @ 0x1800A5180 (NtReadFile.c)
 */

__int64 __fastcall ResReadFile(HANDLE Handle, PVOID Buffer, ULONG Length, _DWORD *a4)
{
  int Status; // ecx
  LONG v8; // eax
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF

  if ( a4 )
    *a4 = 0;
  Status = NtReadFile(Handle, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, 0LL, 0LL);
  if ( Status == 259 )
  {
    Status = NtWaitForSingleObject(Handle, 0, 0LL);
    if ( Status < 0 )
      goto LABEL_10;
    Status = IoStatusBlock.Status;
  }
  if ( Status >= 0 )
  {
    if ( a4 )
      *a4 = IoStatusBlock.Information;
    return 1LL;
  }
LABEL_10:
  if ( Status == -1073741807 )
  {
    *a4 = 0;
    return 1LL;
  }
  if ( (Status & 0xC0000000) == 0x80000000 )
    *a4 = IoStatusBlock.Information;
  v8 = RtlNtStatusToDosError(Status);
  RtlSetLastWin32Error(v8);
  return 0LL;
}
