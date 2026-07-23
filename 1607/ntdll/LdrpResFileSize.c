/*
 * XREFs of LdrpResFileSize @ 0x1800DD100
 * Callers:
 *     LdrpResMapFile @ 0x1800DD1EC (LdrpResMapFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800DD580 (LdrpResSearchResourceHandle.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtQueryInformationFile @ 0x1800A6640 (NtQueryInformationFile.c)
 *     LdrpTraceLoadMUIDll @ 0x1800DC934 (LdrpTraceLoadMUIDll.c)
 */

NTSTATUS __fastcall LdrpResFileSize(char *FileHandle, _QWORD *a2)
{
  NTSTATUS result; // eax
  int v5; // ebx
  int v6; // [rsp+30h] [rbp-58h] BYREF
  const wchar_t *v7; // [rsp+38h] [rbp-50h]
  int v8; // [rsp+40h] [rbp-48h] BYREF
  const wchar_t *v9; // [rsp+48h] [rbp-40h]
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  _BYTE FileInformation[8]; // [rsp+60h] [rbp-28h] BYREF
  __int64 v12; // [rsp+68h] [rbp-20h]

  v6 = 3145774;
  v7 = L"LdrResGetRCConfig Enter";
  v8 = 3014700;
  v9 = L"LdrResGetRCConfig Exit";
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
    LdrpTraceLoadMUIDll((unsigned __int16 *)&v6, MEMORY[0x7FFE0384]);
  if ( a2 && (unsigned __int64)(FileHandle - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    result = NtQueryInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x18u, FileStandardInformation);
    v5 = result;
    if ( result < 0 )
      return result;
    *a2 = v12;
  }
  else
  {
    v5 = -1073741811;
  }
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
    LdrpTraceLoadMUIDll((unsigned __int16 *)&v8, MEMORY[0x7FFE0384]);
  return v5;
}
