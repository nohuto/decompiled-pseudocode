/*
 * XREFs of PopZeroHiberFile @ 0x1406B5D1C
 * Callers:
 *     NtSetSystemPowerState @ 0x1403ED18C (NtSetSystemPowerState.c)
 *     PopEnableHiberFile @ 0x1405BD654 (PopEnableHiberFile.c)
 * Callees:
 *     MmZeroPageWrite @ 0x140112288 (MmZeroPageWrite.c)
 *     DbgPrint @ 0x140131E68 (DbgPrint.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwQueryInformationFile @ 0x14017F210 (ZwQueryInformationFile.c)
 *     PopDiagTraceZeroHiberFile @ 0x140403EFC (PopDiagTraceZeroHiberFile.c)
 *     PopDiagTraceZeroHiberFileEnd @ 0x140403F08 (PopDiagTraceZeroHiberFileEnd.c)
 */

void __fastcall PopZeroHiberFile(HANDLE FileHandle, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rbx
  __int64 v8; // [rsp+30h] [rbp-40h] BYREF
  __int64 v9; // [rsp+38h] [rbp-38h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-30h] BYREF
  _QWORD FileInformation[3]; // [rsp+50h] [rbp-20h] BYREF

  PopDiagTraceZeroHiberFile();
  if ( ZwQueryInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x18u, FileStandardInformation) >= 0 )
  {
    v4 = FileInformation[0];
    v5 = 0LL;
    v8 = 0LL;
    do
    {
      v9 = v4 - v5;
      v6 = MmZeroPageWrite(a2, (__int64)&v8, &v9, 0x10000u);
      if ( v6 >= 0 )
        break;
      v8 &= 0xFFFFFFFFFFFF0000uLL;
      v7 = v8;
      if ( (PoDebug & 0x81) != 0 )
        DbgPrint("PopZeroHiberFile: Write of size %lx at offset %I64x failed %08lx\n", 0x10000, v8, v6);
      v4 = FileInformation[0];
      v5 = v7 + 0x10000;
      v8 = v5;
    }
    while ( v5 < FileInformation[0] );
  }
  PopDiagTraceZeroHiberFileEnd();
}
