/*
 * XREFs of sub_140010A74 @ 0x140010A74
 * Callers:
 *     sub_140010340 @ 0x140010340 (sub_140010340.c)
 *     sub_1400107DC @ 0x1400107DC (sub_1400107DC.c)
 * Callees:
 *     __security_check_cookie @ 0x14000BFC0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_140010A74(void *a1, _QWORD *a2)
{
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-38h] BYREF
  _QWORD FileInformation[3]; // [rsp+40h] [rbp-28h] BYREF

  result = NtQueryInformationFile(a1, &IoStatusBlock, FileInformation, 0x18u, FileStandardInformation);
  if ( result >= 0 )
    *a2 = FileInformation[0];
  return result;
}
