/*
 * XREFs of HvpCountSetRangesInVector @ 0x1404806C8
 * Callers:
 *     HvGetHiveLogFileStatus @ 0x14047FB5C (HvGetHiveLogFileStatus.c)
 *     HvStoreModifiedData @ 0x14047FC40 (HvStoreModifiedData.c)
 *     HvpGenerateLogEntry @ 0x140480044 (HvpGenerateLogEntry.c)
 *     HvpGenerateLogMetadata @ 0x14048060C (HvpGenerateLogMetadata.c)
 * Callees:
 *     RtlFindNextForwardRunClear @ 0x140082884 (RtlFindNextForwardRunClear.c)
 */

__int64 __fastcall HvpCountSetRangesInVector(PRTL_BITMAP BitMapHeader)
{
  ULONG v1; // edi
  unsigned int v2; // ebx
  ULONG NextForwardRunClear; // ecx
  ULONG StartingRunIndex; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v2 = 0;
  if ( BitMapHeader->SizeOfBitMap )
  {
    while ( 1 )
    {
      NextForwardRunClear = RtlFindNextForwardRunClear(BitMapHeader, v1, &StartingRunIndex);
      if ( !NextForwardRunClear )
        break;
      if ( StartingRunIndex != v1 )
        ++v2;
      v1 = StartingRunIndex + NextForwardRunClear;
      if ( StartingRunIndex + NextForwardRunClear >= BitMapHeader->SizeOfBitMap )
        return v2;
    }
    ++v2;
  }
  return v2;
}
