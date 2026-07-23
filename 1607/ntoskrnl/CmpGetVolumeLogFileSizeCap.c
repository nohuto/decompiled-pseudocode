/*
 * XREFs of CmpGetVolumeLogFileSizeCap @ 0x1404CE678
 * Callers:
 *     CmpOpenHiveFile @ 0x1403F82C0 (CmpOpenHiveFile.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwQueryVolumeInformationFile @ 0x14015AB10 (ZwQueryVolumeInformationFile.c)
 */

__int64 __fastcall CmpGetVolumeLogFileSizeCap(void *a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-38h] BYREF
  __int64 FsInformation; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v5; // [rsp+50h] [rbp-18h]
  unsigned int v6; // [rsp+54h] [rbp-14h]

  if ( ZwQueryVolumeInformationFile(a1, &IoStatusBlock, &FsInformation, 0x18u, FileFsSizeInformation) < 0 )
    return 0x2000000LL;
  result = 0x2000000LL;
  v2 = (FsInformation * v5 * (unsigned __int64)v6) >> 11;
  if ( (unsigned int)v2 < 0x2000000 )
  {
    result = (unsigned int)v2;
    if ( (unsigned int)v2 <= 0x80000 )
      return 0x80000LL;
  }
  return result;
}
