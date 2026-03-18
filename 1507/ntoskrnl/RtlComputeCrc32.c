/*
 * XREFs of RtlComputeCrc32 @ 0x140134D10
 * Callers:
 *     SmDecompressBuffer @ 0x1400D7CB4 (SmDecompressBuffer.c)
 *     ?StDmSinglePageCopy@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x14014118C (-StDmSinglePageCopy@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATIO.c)
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAK@Z @ 0x140141B00 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAK@Z.c)
 *     FstubReadTableEFI @ 0x1401E498C (FstubReadTableEFI.c)
 *     PopClearSleepMarker @ 0x140564C8C (PopClearSleepMarker.c)
 *     PopSetSleepMarker @ 0x140567668 (PopSetSleepMarker.c)
 *     IoReadDiskSignature @ 0x1405B748C (IoReadDiskSignature.c)
 *     PoClearTransitionMarker @ 0x1405C2574 (PoClearTransitionMarker.c)
 *     FstubReadHeaderEFI @ 0x14066F550 (FstubReadHeaderEFI.c)
 *     FstubWriteEntryEFI @ 0x14066FCE4 (FstubWriteEntryEFI.c)
 *     FstubWriteHeaderEFI @ 0x14066FDCC (FstubWriteHeaderEFI.c)
 *     PopSetShutdownMarker @ 0x1406B0898 (PopSetShutdownMarker.c)
 *     SmKmStoreFileWriteHeader @ 0x1406DE4F8 (SmKmStoreFileWriteHeader.c)
 *     sub_1407E0198 @ 0x1407E0198 (sub_1407E0198.c)
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
