/*
 * XREFs of _ResReadFile @ 0x180104D20
 * Callers:
 *     _ResCCreateMappingExclusive @ 0x180103578 (_ResCCreateMappingExclusive.c)
 *     _ResCLoadFixedSize @ 0x180103908 (_ResCLoadFixedSize.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18005A470 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18005A4E0 (RtlNtStatusToDosError.c)
 *     NtWaitForSingleObject @ 0x1800A64A0 (NtWaitForSingleObject.c)
 *     NtReadFile @ 0x1800A64E0 (NtReadFile.c)
 */

__int64 __fastcall ResReadFile(HANDLE Handle, __int64 a2, __int64 a3, _DWORD *a4)
{
  NTSTATUS File; // ecx
  ULONG v8; // eax
  NTSTATUS v9; // [rsp+50h] [rbp-18h]
  int v10; // [rsp+58h] [rbp-10h]

  if ( a4 )
    *a4 = 0;
  File = NtReadFile();
  if ( File == 259 )
  {
    File = NtWaitForSingleObject(Handle, 0, 0LL);
    if ( File < 0 )
      goto LABEL_10;
    File = v9;
  }
  if ( File >= 0 )
  {
    if ( a4 )
      *a4 = v10;
    return 1LL;
  }
LABEL_10:
  if ( File == -1073741807 )
  {
    *a4 = 0;
    return 1LL;
  }
  if ( (File & 0xC0000000) == 0x80000000 )
    *a4 = v10;
  v8 = RtlNtStatusToDosError(File);
  RtlSetLastWin32Error(v8);
  return 0LL;
}
