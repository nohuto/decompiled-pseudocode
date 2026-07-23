/*
 * XREFs of DbgkpWerWriteTriageDump @ 0x14061C7B0
 * Callers:
 *     DbgkpWerCaptureLiveTriageDump @ 0x14061BF68 (DbgkpWerCaptureLiveTriageDump.c)
 * Callees:
 *     WerLiveKernelOpenDumpFile_0 @ 0x140001328 (WerLiveKernelOpenDumpFile_0.c)
 *     DbgPrintEx @ 0x140084C90 (DbgPrintEx.c)
 *     ZwWriteFile @ 0x14015A2F0 (ZwWriteFile.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     DbgkpWerUpdateTriageDumpHeader @ 0x14061C5D4 (DbgkpWerUpdateTriageDumpHeader.c)
 *     DbgkpWerWriteSecondaryData @ 0x14061C660 (DbgkpWerWriteSecondaryData.c)
 */

__int64 __fastcall DbgkpWerWriteTriageDump(__int64 a1)
{
  int v2; // eax
  int updated; // ebx
  NTSTATUS v4; // eax
  NTSTATUS v5; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF

  v2 = WerLiveKernelOpenDumpFile_0();
  updated = v2;
  if ( v2 >= 0 )
  {
    updated = DbgkpWerUpdateTriageDumpHeader(a1);
    if ( updated >= 0 )
    {
      v4 = ZwWriteFile(0LL, 0LL, 0LL, 0LL, &IoStatusBlock, *(PVOID *)(a1 + 144), *(_DWORD *)(a1 + 152), 0LL, 0LL);
      updated = v4;
      if ( v4 >= 0 )
      {
        v5 = DbgkpWerWriteSecondaryData(a1, 0LL);
        updated = v5;
        if ( v5 < 0 )
          DbgPrintEx(5u, 0, "DBGK: Writing secondary data failed with Status 0x%X\n", (unsigned int)v5);
      }
      else
      {
        DbgPrintEx(5u, 0, "DBGK: Triage dump write failed with Status 0x%X\n", (unsigned int)v4);
      }
    }
  }
  else
  {
    DbgPrintEx(5u, 0, "DBGK: DbgkWerWriteTriageDump: WerLiveKernelOpenDumpFile failed, status 0x%X\n", (unsigned int)v2);
  }
  return (unsigned int)updated;
}
