/*
 * XREFs of PopValidateExistingHiberFile @ 0x14054B958
 * Callers:
 *     PopCreateHiberFile @ 0x14054BA2C (PopCreateHiberFile.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwQueryInformationFile @ 0x140150840 (ZwQueryInformationFile.c)
 *     ZwSetInformationFile @ 0x140150B00 (ZwSetInformationFile.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

NTSTATUS __fastcall PopValidateExistingHiberFile(HANDLE FileHandle, _QWORD *a2)
{
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-68h] BYREF
  __int64 v6; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v7; // [rsp+50h] [rbp-48h]
  char v8; // [rsp+55h] [rbp-43h]
  _DWORD FileInformation[10]; // [rsp+58h] [rbp-40h] BYREF

  result = ZwQueryInformationFile(FileHandle, &IoStatusBlock, &v6, 0x18u, FileStandardInformation);
  if ( result >= 0 )
  {
    if ( v8 || v6 != *a2 || v7 > 1 )
      result = -1073741823;
    if ( result >= 0 )
    {
      memset(FileInformation, 0, sizeof(FileInformation));
      FileInformation[8] = 8198;
      result = ZwSetInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation);
      if ( result >= 0 )
        return 0;
    }
  }
  return result;
}
