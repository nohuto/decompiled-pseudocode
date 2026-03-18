/*
 * XREFs of HvpCountSetRangesInVector @ 0x140481974
 * Callers:
 *     HvGetHiveLogFileStatus @ 0x140480E08 (HvGetHiveLogFileStatus.c)
 *     HvStoreModifiedData @ 0x140480EEC (HvStoreModifiedData.c)
 *     HvpGenerateLogEntry @ 0x1404812F0 (HvpGenerateLogEntry.c)
 *     HvpGenerateLogMetadata @ 0x1404818B8 (HvpGenerateLogMetadata.c)
 * Callees:
 *     RtlFindNextForwardRunClear @ 0x140084724 (RtlFindNextForwardRunClear.c)
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
