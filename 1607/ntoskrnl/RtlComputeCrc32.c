/*
 * XREFs of RtlComputeCrc32 @ 0x14010FFAC
 * Callers:
 *     SmDecompressBuffer @ 0x140005834 (SmDecompressBuffer.c)
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAK@Z @ 0x140118544 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAK@Z.c)
 *     ?ReadEntries@PC_GPT@@AEAAJPEAVGPT_HEADER@@PEAU_GPT_ENTRY@@@Z @ 0x14023C188 (-ReadEntries@PC_GPT@@AEAAJPEAVGPT_HEADER@@PEAU_GPT_ENTRY@@@Z.c)
 *     ?ReadHeader@PC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z @ 0x14023C208 (-ReadHeader@PC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z.c)
 *     ?VerifyPartitionTable@PC_GPT@@QEAAJE@Z @ 0x14023C60C (-VerifyPartitionTable@PC_GPT@@QEAAJE@Z.c)
 *     ?WritePartitionTable@PC_GPT@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x14023C894 (-WritePartitionTable@PC_GPT@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 *     PopClearSleepMarker @ 0x14052EC58 (PopClearSleepMarker.c)
 *     PopSetSleepMarker @ 0x140531690 (PopSetSleepMarker.c)
 *     PoClearTransitionMarker @ 0x140580424 (PoClearTransitionMarker.c)
 *     PopClearConnectedStandbyMarker @ 0x14066A310 (PopClearConnectedStandbyMarker.c)
 *     PopSetCleanShutdownMarker @ 0x14066A634 (PopSetCleanShutdownMarker.c)
 *     PopSetConnectedStandbyMarker @ 0x14066A6C4 (PopSetConnectedStandbyMarker.c)
 *     SmKmStoreFileWriteHeader @ 0x1406998CC (SmKmStoreFileWriteHeader.c)
 *     ExpSingleStringCheck @ 0x1407B5CAC (ExpSingleStringCheck.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlComputeCrc32(ULONG InitialCrc, PUCHAR Buffer, ULONG Length)
{
  ULONG v4; // r9d
  __int64 v5; // r11
  unsigned __int8 v6; // dl

  v4 = ~InitialCrc;
  if ( Length )
  {
    v5 = Length;
    do
    {
      v6 = v4 ^ *Buffer++;
      v4 = (v4 >> 8) ^ RtlCrc32Table[v6];
      --v5;
    }
    while ( v5 );
  }
  return ~v4;
}
