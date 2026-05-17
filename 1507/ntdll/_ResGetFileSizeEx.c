/*
 * XREFs of _ResGetFileSizeEx @ 0x1800FA87C
 * Callers:
 *     _ResCCreateMappingExclusive @ 0x1800F92CC (_ResCCreateMappingExclusive.c)
 *     _ResCLoadFixedSize @ 0x1800F965C (_ResCLoadFixedSize.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18000F090 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18000F0C0 (RtlNtStatusToDosError.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtQueryInformationFile @ 0x180093A10 (NtQueryInformationFile.c)
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
