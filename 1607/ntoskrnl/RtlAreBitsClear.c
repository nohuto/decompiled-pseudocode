/*
 * XREFs of RtlAreBitsClear @ 0x14008275C
 * Callers:
 *     HvGetHiveLogFileStatus @ 0x14047FB5C (HvGetHiveLogFileStatus.c)
 *     CmpLoadHiveThread @ 0x14054D948 (CmpLoadHiveThread.c)
 *     HvpDropPagedBins @ 0x14054E0E8 (HvpDropPagedBins.c)
 *     CmpMountPreloadedHives @ 0x14055E9A4 (CmpMountPreloadedHives.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlAreBitsClear(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG Length)
{
  char v3; // r9
  unsigned int v4; // r11d
  unsigned int *Buffer; // rcx
  unsigned int *v6; // r8
  unsigned int *v7; // r10
  unsigned int v8; // r9d
  BOOLEAN result; // al

  v3 = Length;
  v4 = Length + StartingIndex - 1;
  if ( v4 >= BitMapHeader->SizeOfBitMap )
    return 0;
  if ( Length <= 1 )
  {
    if ( Length == 1 )
      return !_bittest((const signed __int32 *)BitMapHeader->Buffer, StartingIndex);
    return 0;
  }
  Buffer = BitMapHeader->Buffer;
  v6 = &Buffer[(unsigned __int64)StartingIndex >> 5];
  v7 = &Buffer[(unsigned __int64)v4 >> 5];
  if ( v6 == v7 )
  {
    v8 = 0xFFFFFFFF >> (32 - v3) << StartingIndex;
    return (*v6 & v8) == 0;
  }
  if ( ((-1 << StartingIndex) & *v6) != 0 )
    return 0;
  if ( ++v6 == v7 )
  {
LABEL_14:
    v8 = 0xFFFFFFFF >> (-1 - v4);
    return (*v6 & v8) == 0;
  }
  result = 0;
  while ( !*v6 )
  {
    if ( ++v6 == v7 )
      goto LABEL_14;
  }
  return result;
}
