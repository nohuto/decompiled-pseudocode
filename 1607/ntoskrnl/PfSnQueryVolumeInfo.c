/*
 * XREFs of PfSnQueryVolumeInfo @ 0x1404D8438
 * Callers:
 *     PfSnOpenVolumesForPrefetch @ 0x1404D7E18 (PfSnOpenVolumesForPrefetch.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PfpOpenHandleClose @ 0x1404ED298 (PfpOpenHandleClose.c)
 *     PfpOpenHandleCreate @ 0x1404ED318 (PfpOpenHandleCreate.c)
 *     NtQueryVolumeInformationFile @ 0x1404F4F20 (NtQueryVolumeInformationFile.c)
 */

__int64 __fastcall PfSnQueryVolumeInfo(__int64 a1, const WCHAR *a2, _OWORD *a3, _QWORD *a4, _DWORD *a5)
{
  NTSTATUS v9; // ebx
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  unsigned __int64 v12; // rax
  HANDLE FileHandle[4]; // [rsp+40h] [rbp-41h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-11h] BYREF
  __int64 FsInformation; // [rsp+80h] [rbp-1h] BYREF
  int v18; // [rsp+88h] [rbp+7h]

  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  memset(FileHandle, 0, sizeof(FileHandle));
  FileHandle[3] = (HANDLE)((unsigned __int64)FileHandle[3] | 0x200000000LL);
  RtlInitUnicodeString(&DestinationString, a2);
  v9 = PfpOpenHandleCreate((unsigned int)FileHandle, a1, (unsigned int)&DestinationString, 0, 1048960, 0, 0, 0LL);
  if ( v9 < 0
    || (v9 = NtQueryVolumeInformationFile(FileHandle[0], &IoStatusBlock, &FsInformation, 0x18u, FileFsVolumeInformation),
        (v9 & 0xC0000000) == 0xC0000000) )
  {
    v12 = (unsigned __int64)FileHandle[3];
  }
  else
  {
    v10 = *(_OWORD *)FileHandle;
    *a4 = FsInformation;
    v11 = *(_OWORD *)&FileHandle[2];
    *a5 = v18;
    *a3 = v10;
    a3[1] = v11;
    memset(FileHandle, 0, sizeof(FileHandle));
    v12 = (unsigned __int64)FileHandle[3] | 0x200000000LL;
    FileHandle[3] = (HANDLE)((unsigned __int64)FileHandle[3] | 0x200000000LL);
    v9 = 0;
  }
  if ( (v12 & 0x400000000LL) != 0 )
    PfpOpenHandleClose(FileHandle, a1);
  return (unsigned int)v9;
}
