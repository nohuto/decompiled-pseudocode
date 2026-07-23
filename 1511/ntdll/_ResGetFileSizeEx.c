/*
 * XREFs of _ResGetFileSizeEx @ 0x1800FA194
 * Callers:
 *     _ResCCreateMappingExclusive @ 0x1800F8BE4 (_ResCCreateMappingExclusive.c)
 *     _ResCLoadFixedSize @ 0x1800F8F74 (_ResCLoadFixedSize.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x180048BE0 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x180048C10 (RtlNtStatusToDosError.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtQueryInformationFile @ 0x1800A52E0 (NtQueryInformationFile.c)
 */

__int64 __fastcall ResGetFileSizeEx(void *a1, _QWORD *a2)
{
  int v3; // eax
  LONG v4; // eax
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-38h] BYREF
  _BYTE FileInformation[8]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v8; // [rsp+48h] [rbp-20h]

  v3 = NtQueryInformationFile(a1, &IoStatusBlock, FileInformation, 0x18u, FileStandardInformation);
  if ( v3 >= 0 )
  {
    *a2 = v8;
    return 1LL;
  }
  else
  {
    v4 = RtlNtStatusToDosError(v3);
    RtlSetLastWin32Error(v4);
    return 0LL;
  }
}
