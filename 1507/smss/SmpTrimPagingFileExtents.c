/*
 * XREFs of SmpTrimPagingFileExtents @ 0x140009BA4
 * Callers:
 *     SmpCreateWorkingSetSwapPagingFile @ 0x14000986C (SmpCreateWorkingSetSwapPagingFile.c)
 *     SmpCreatePagefileOnVolume @ 0x14000ABEC (SmpCreatePagefileOnVolume.c)
 * Callees:
 *     __security_check_cookie @ 0x14000C1E0 (__security_check_cookie.c)
 */

__int64 __fastcall SmpTrimPagingFileExtents(void *a1, __int64 a2)
{
  NTSTATUS v3; // r8d
  __int64 v4; // rcx
  struct _IO_STATUS_BLOCK v6; // [rsp+50h] [rbp-38h] BYREF
  _DWORD v7[2]; // [rsp+60h] [rbp-28h] BYREF
  __int64 v8; // [rsp+68h] [rbp-20h]
  __int64 v9; // [rsp+70h] [rbp-18h]

  v7[0] = 0;
  v7[1] = 1;
  v8 = 0LL;
  v9 = -1LL;
  v3 = NtFsControlFile(a1, 0LL, 0LL, 0LL, &v6, 0x98208u, v7, 0x18u, 0LL, 0);
  if ( v3 < 0 )
  {
    v4 = 2LL * (_InterlockedIncrement(&SmpPagefileLogIndex) % 32);
    *((_DWORD *)&SmpPagefileLog + 2 * v4) = 3907;
    *((_DWORD *)&SmpPagefileLog + 2 * v4 + 1) = v3;
    *((_QWORD *)&SmpPagefileLog + v4 + 1) = a2;
  }
  return (unsigned int)v3;
}
