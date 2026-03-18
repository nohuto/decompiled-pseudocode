/*
 * XREFs of AslpFileGetSizeAttribute @ 0x1406823A0
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x140680EBC (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwQueryInformationFile @ 0x140150840 (ZwQueryInformationFile.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     AslLogCallPrintf @ 0x14051B0D0 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileGetSizeAttribute(_DWORD *a1, void *a2)
{
  NTSTATUS v4; // ebx
  __int64 v5; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-38h] BYREF
  __int64 FileInformation; // [rsp+40h] [rbp-28h] BYREF
  __int64 v9; // [rsp+48h] [rbp-20h]
  __int64 v10; // [rsp+50h] [rbp-18h]

  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  FileInformation = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  memset(a1, 0, 0x20uLL);
  v4 = ZwQueryInformationFile(a2, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation);
  if ( v4 >= 0 )
  {
    v5 = (unsigned int)v9;
    a1[6] |= 1u;
    *((_QWORD *)a1 + 2) = v5;
    v4 = 0;
    *a1 = 2;
    *((_QWORD *)a1 + 1) = 4LL;
  }
  else
  {
    AslLogCallPrintf(1LL);
  }
  return (unsigned int)v4;
}
