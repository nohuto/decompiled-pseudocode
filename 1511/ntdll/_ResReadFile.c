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
