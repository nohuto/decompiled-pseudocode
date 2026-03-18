/*
 * XREFs of CmpGetFileSize @ 0x1404AF9D0
 * Callers:
 *     CmpInitializeActualPrimaryFileSize @ 0x1404AF970 (CmpInitializeActualPrimaryFileSize.c)
 *     CmpLoadHiveThread @ 0x140598084 (CmpLoadHiveThread.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwQueryInformationFile @ 0x14017F210 (ZwQueryInformationFile.c)
 */

NTSTATUS __fastcall CmpGetFileSize(void *a1, _QWORD *a2)
{
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-38h] BYREF
  _BYTE FileInformation[8]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v6; // [rsp+48h] [rbp-20h]

  result = ZwQueryInformationFile(a1, &IoStatusBlock, FileInformation, 0x18u, FileStandardInformation);
  if ( result >= 0 )
  {
    *a2 = v6;
    return 0;
  }
  return result;
}
