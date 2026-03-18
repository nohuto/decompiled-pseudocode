/*
 * XREFs of RtlComputeCrc32 @ 0x140104938
 * Callers:
 *     SmDecompressBuffer @ 0x1400F9D94 (SmDecompressBuffer.c)
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAK@Z @ 0x14010C40C (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAK@Z.c)
 *     ?StDmSinglePageCopy@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x14010F414 (-StDmSinglePageCopy@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATIO.c)
 *     FstubReadTableEFI @ 0x14012CB00 (FstubReadTableEFI.c)
 *     PopClearSleepMarker @ 0x1404F5BA8 (PopClearSleepMarker.c)
 *     PopSetSleepMarker @ 0x1404F899C (PopSetSleepMarker.c)
 *     FstubWriteHeaderEFI @ 0x14051636C (FstubWriteHeaderEFI.c)
 *     FstubWriteEntryEFI @ 0x140516634 (FstubWriteEntryEFI.c)
 *     FstubReadHeaderEFI @ 0x140516A5C (FstubReadHeaderEFI.c)
 *     IoReadDiskSignature @ 0x14053FDCC (IoReadDiskSignature.c)
 *     PoClearTransitionMarker @ 0x14054B15C (PoClearTransitionMarker.c)
 *     PopSetShutdownMarker @ 0x140632328 (PopSetShutdownMarker.c)
 *     SmKmStoreFileWriteHeader @ 0x14065BCA4 (SmKmStoreFileWriteHeader.c)
 *     sub_14076B65C @ 0x14076B65C (sub_14076B65C.c)
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
