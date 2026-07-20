/*
 * XREFs of sub_14001277C @ 0x14001277C
 * Callers:
 *     sub_140011C1C @ 0x140011C1C (sub_140011C1C.c)
 *     sub_140011DD0 @ 0x140011DD0 (sub_140011DD0.c)
 *     sub_14001290C @ 0x14001290C (sub_14001290C.c)
 * Callees:
 *     __security_check_cookie @ 0x14000BFC0 (__security_check_cookie.c)
 *     memset @ 0x14000C48C (memset.c)
 */

NTSTATUS __fastcall sub_14001277C(HANDLE FileHandle, int a2)
{
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-48h] BYREF
  _DWORD FileInformation[10]; // [rsp+40h] [rbp-38h] BYREF

  memset(FileInformation, 0, sizeof(FileInformation));
  FileInformation[8] = a2;
  result = NtSetInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation);
  if ( result >= 0 )
    return 0;
  return result;
}
