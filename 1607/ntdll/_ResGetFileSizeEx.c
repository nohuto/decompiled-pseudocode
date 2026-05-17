/*
 * XREFs of _ResGetFileSizeEx @ 0x180104B40
 * Callers:
 *     _ResCCreateMappingExclusive @ 0x180103578 (_ResCCreateMappingExclusive.c)
 *     _ResCLoadFixedSize @ 0x180103908 (_ResCLoadFixedSize.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18005A470 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18005A4E0 (RtlNtStatusToDosError.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtQueryInformationFile @ 0x1800A6640 (NtQueryInformationFile.c)
 */

__int64 __fastcall ResGetFileSizeEx(__int64 a1, _QWORD *a2)
{
  NTSTATUS InformationFile; // eax
  ULONG v4; // eax
  __int64 v6; // [rsp+48h] [rbp-20h]

  InformationFile = NtQueryInformationFile();
  if ( InformationFile >= 0 )
  {
    *a2 = v6;
    return 1LL;
  }
  else
  {
    v4 = RtlNtStatusToDosError(InformationFile);
    RtlSetLastWin32Error(v4);
    return 0LL;
  }
}
