/*
 * XREFs of PopInternalAddToDumpFile @ 0x1401FEEA4
 * Callers:
 *     PoSetHiberRange @ 0x1401133D0 (PoSetHiberRange.c)
 *     PopSetRange @ 0x1401135F8 (PopSetRange.c)
 *     KeBugCheck2 @ 0x1401D3F18 (KeBugCheck2.c)
 *     PopIrpWatchdogBugcheck @ 0x1401FF0D0 (PopIrpWatchdogBugcheck.c)
 *     PopSaveHiberContext @ 0x1403CCB40 (PopSaveHiberContext.c)
 *     PopCreateDumpMdl @ 0x1403CCEFC (PopCreateDumpMdl.c)
 *     PopHiberReadChecksums @ 0x1403CD0C4 (PopHiberReadChecksums.c)
 *     PopRequestWrite @ 0x1403CD62C (PopRequestWrite.c)
 *     PopRestoreHiberContext @ 0x1403CDA38 (PopRestoreHiberContext.c)
 *     PopDecompressHiberBlocks @ 0x1403CDE5C (PopDecompressHiberBlocks.c)
 *     PopRequestRead @ 0x1403CE5E8 (PopRequestRead.c)
 *     PopFreeHiberContext @ 0x14052EF94 (PopFreeHiberContext.c)
 *     PopAllocateHiberContext @ 0x14052FB04 (PopAllocateHiberContext.c)
 *     PopThermalWorker @ 0x140574480 (PopThermalWorker.c)
 *     PoShutdownBugCheck @ 0x14066E998 (PoShutdownBugCheck.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14014B924 (IoAddTriageDumpDataBlock.c)
 *     PopInternalSaveStackToDumpFile @ 0x1401FEF58 (PopInternalSaveStackToDumpFile.c)
 */

__int64 __fastcall PopInternalAddToDumpFile(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 v4; // rdx

  if ( a1 )
  {
    if ( a2 )
      v4 = ((a1 & 0xFFF) + (unsigned __int64)a2 + 4095) >> 12;
    else
      LODWORD(v4) = 1;
    IoAddTriageDumpDataBlock(a1 & 0xFFFFF000, (_DWORD)v4 << 12);
  }
  if ( a3 )
    PopInternalSaveStackToDumpFile(a3);
  IoAddTriageDumpDataBlock((int)&PopHiberInfo, 216);
  IoAddTriageDumpDataBlock((int)&PopAction, 272);
  if ( qword_1403033D8 )
    IoAddTriageDumpDataBlock(qword_1403033D8, 464);
  if ( qword_1403033E0 )
    IoAddTriageDumpDataBlock(qword_1403033E0, 464);
  return IoAddTriageDumpDataBlock((int)&PopCB, 472);
}
