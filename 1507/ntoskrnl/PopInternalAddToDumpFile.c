/*
 * XREFs of PopInternalAddToDumpFile @ 0x140233810
 * Callers:
 *     PopSetRange @ 0x14014D568 (PopSetRange.c)
 *     KeBugCheck2 @ 0x140201994 (KeBugCheck2.c)
 *     PopIrpWatchdogBugcheck @ 0x140233A40 (PopIrpWatchdogBugcheck.c)
 *     PopHiberReadChecksums @ 0x1403F3B20 (PopHiberReadChecksums.c)
 *     PopSaveHiberContext @ 0x1403F4080 (PopSaveHiberContext.c)
 *     PopCreateDumpMdl @ 0x1403F4A20 (PopCreateDumpMdl.c)
 *     PopRequestWrite @ 0x1403F4B2C (PopRequestWrite.c)
 *     PopRestoreHiberContext @ 0x1403F4F20 (PopRestoreHiberContext.c)
 *     PopDecompressHiberBlocks @ 0x1403F53D4 (PopDecompressHiberBlocks.c)
 *     PopRequestRead @ 0x1403F5BC4 (PopRequestRead.c)
 *     PopFreeHiberContext @ 0x140564AB8 (PopFreeHiberContext.c)
 *     PopAllocateHiberContext @ 0x14056A188 (PopAllocateHiberContext.c)
 *     PopThermalWorker @ 0x1405C3BD8 (PopThermalWorker.c)
 *     PoShutdownBugCheck @ 0x1406B5E1C (PoShutdownBugCheck.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14016F790 (IoAddTriageDumpDataBlock.c)
 *     PopInternalSaveStackToDumpFile @ 0x1402338C4 (PopInternalSaveStackToDumpFile.c)
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
  IoAddTriageDumpDataBlock((int)&PopAction, 264);
  if ( qword_14032E678 )
    IoAddTriageDumpDataBlock(qword_14032E678, 464);
  if ( qword_14032E680 )
    IoAddTriageDumpDataBlock(qword_14032E680, 464);
  return IoAddTriageDumpDataBlock((int)&PopCB, 424);
}
