/*
 * XREFs of CMFGetFileSizeEx @ 0x1406B9188
 * Callers:
 *     CMFFlushHitsFile @ 0x1406B8EA0 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1406B95A0 (CMFSystemThreadRoutine.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ZwQueryInformationFile @ 0x140159EA0 (ZwQueryInformationFile.c)
 */

NTSTATUS __fastcall CMFGetFileSizeEx(void *a1, _QWORD *a2)
{
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-38h] BYREF
  _BYTE FileInformation[8]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v6; // [rsp+48h] [rbp-20h]

  result = ZwQueryInformationFile(a1, &IoStatusBlock, FileInformation, 0x18u, FileStandardInformation);
  if ( (result & 0xC0000000) != 0xC0000000 )
  {
    *a2 = v6;
    return 0;
  }
  return result;
}
