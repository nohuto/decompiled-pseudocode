/*
 * XREFs of HvpCountSetRangesInVector @ 0x1404A21F4
 * Callers:
 *     HvStoreModifiedData @ 0x14044D040 (HvStoreModifiedData.c)
 *     HvpGenerateLogEntry @ 0x14044D908 (HvpGenerateLogEntry.c)
 *     HvpGenerateLogMetadata @ 0x1404A2778 (HvpGenerateLogMetadata.c)
 *     HvGetHiveLogFileStatus @ 0x14052E1A4 (HvGetHiveLogFileStatus.c)
 * Callees:
 *     RtlFindNextForwardRunClear @ 0x140063958 (RtlFindNextForwardRunClear.c)
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
