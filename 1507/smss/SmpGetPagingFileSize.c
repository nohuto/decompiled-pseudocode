/*
 * XREFs of SmpGetPagingFileSize @ 0x14000AD9C
 * Callers:
 *     SmpCreatePagefileOnVolume @ 0x14000ABEC (SmpCreatePagefileOnVolume.c)
 * Callees:
 *     __security_check_cookie @ 0x14000C1E0 (__security_check_cookie.c)
 */

__int64 __fastcall SmpGetPagingFileSize(void *a1, __int64 a2, _QWORD *a3)
{
  NTSTATUS v5; // r8d
  __int64 v7; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-38h] BYREF
  _QWORD FileInformation[3]; // [rsp+40h] [rbp-28h] BYREF

  v5 = NtQueryInformationFile(a1, &IoStatusBlock, FileInformation, 0x18u, FileStandardInformation);
  if ( v5 < 0 )
  {
    v7 = 2LL * (_InterlockedIncrement(&SmpPagefileLogIndex) % 32);
    *((_DWORD *)&SmpPagefileLog + 2 * v7) = 3831;
    *((_DWORD *)&SmpPagefileLog + 2 * v7 + 1) = v5;
    *((_QWORD *)&SmpPagefileLog + v7 + 1) = a2;
    return (unsigned int)v5;
  }
  else
  {
    *a3 = FileInformation[0];
    return 0LL;
  }
}
