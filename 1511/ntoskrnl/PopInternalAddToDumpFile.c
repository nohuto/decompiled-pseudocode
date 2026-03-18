/*
 * XREFs of PopInternalAddToDumpFile @ 0x1401E66D8
 * Callers:
 *     PoSetHiberRange @ 0x1401188B0 (PoSetHiberRange.c)
 *     PopSetRange @ 0x140118AC4 (PopSetRange.c)
 *     KeBugCheck2 @ 0x1401C4F98 (KeBugCheck2.c)
 *     PopIrpWatchdogBugcheck @ 0x1401E6908 (PopIrpWatchdogBugcheck.c)
 *     PopHiberReadChecksums @ 0x1403A0E54 (PopHiberReadChecksums.c)
 *     PopSaveHiberContext @ 0x1403A13B0 (PopSaveHiberContext.c)
 *     PopCreateDumpMdl @ 0x1403A1C80 (PopCreateDumpMdl.c)
 *     PopRequestWrite @ 0x1403A1D5C (PopRequestWrite.c)
 *     PopRestoreHiberContext @ 0x1403A2150 (PopRestoreHiberContext.c)
 *     PopDecompressHiberBlocks @ 0x1403A2574 (PopDecompressHiberBlocks.c)
 *     PopRequestRead @ 0x1403A2D00 (PopRequestRead.c)
 *     PopFreeHiberContext @ 0x1404F59D4 (PopFreeHiberContext.c)
 *     PopAllocateHiberContext @ 0x1404F64C8 (PopAllocateHiberContext.c)
 *     PopThermalWorker @ 0x14054C618 (PopThermalWorker.c)
 *     PoShutdownBugCheck @ 0x14063650C (PoShutdownBugCheck.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1401417B4 (IoAddTriageDumpDataBlock.c)
 *     PopInternalSaveStackToDumpFile @ 0x1401E678C (PopInternalSaveStackToDumpFile.c)
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
  if ( qword_1402DE0B8 )
    IoAddTriageDumpDataBlock(qword_1402DE0B8, 464);
  if ( qword_1402DE0C0 )
    IoAddTriageDumpDataBlock(qword_1402DE0C0, 464);
  return IoAddTriageDumpDataBlock((int)&PopCB, 424);
}
