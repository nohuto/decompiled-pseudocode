/*
 * XREFs of PopInternalAddToDumpFile @ 0x1401FF078
 * Callers:
 *     PoSetHiberRange @ 0x140112E60 (PoSetHiberRange.c)
 *     PopSetRange @ 0x140113088 (PopSetRange.c)
 *     KeBugCheck2 @ 0x1401D40EC (KeBugCheck2.c)
 *     PopIrpWatchdogBugcheck @ 0x1401FF2A4 (PopIrpWatchdogBugcheck.c)
 *     PopSaveHiberContext @ 0x1403CCB40 (PopSaveHiberContext.c)
 *     PopCreateDumpMdl @ 0x1403CCEFC (PopCreateDumpMdl.c)
 *     PopHiberReadChecksums @ 0x1403CD0C4 (PopHiberReadChecksums.c)
 *     PopRequestWrite @ 0x1403CD62C (PopRequestWrite.c)
 *     PopRestoreHiberContext @ 0x1403CDA38 (PopRestoreHiberContext.c)
 *     PopDecompressHiberBlocks @ 0x1403CDE5C (PopDecompressHiberBlocks.c)
 *     PopRequestRead @ 0x1403CE5E8 (PopRequestRead.c)
 *     PopFreeHiberContext @ 0x14052EA54 (PopFreeHiberContext.c)
 *     PopAllocateHiberContext @ 0x14052F5C4 (PopAllocateHiberContext.c)
 *     PopThermalWorker @ 0x140573F40 (PopThermalWorker.c)
 *     PoShutdownBugCheck @ 0x14066E8B4 (PoShutdownBugCheck.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14014B3B4 (IoAddTriageDumpDataBlock.c)
 *     PopInternalSaveStackToDumpFile @ 0x1401FF12C (PopInternalSaveStackToDumpFile.c)
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
  if ( qword_140303498 )
    IoAddTriageDumpDataBlock(qword_140303498, 464);
  if ( qword_1403034A0 )
    IoAddTriageDumpDataBlock(qword_1403034A0, 464);
  return IoAddTriageDumpDataBlock((int)&PopCB, 472);
}
