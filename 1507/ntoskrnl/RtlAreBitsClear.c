/*
 * XREFs of RtlAreBitsClear @ 0x14011717C
 * Callers:
 *     HvGetHiveLogFileStatus @ 0x14052E1A4 (HvGetHiveLogFileStatus.c)
 *     CmpLoadHiveThread @ 0x140598084 (CmpLoadHiveThread.c)
 *     HvpDropPagedBins @ 0x1405987EC (HvpDropPagedBins.c)
 *     CmpMountPreloadedHives @ 0x1405A4DC4 (CmpMountPreloadedHives.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlAreBitsClear(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG Length)
{
  char v3; // r9
  unsigned int v4; // r11d
  BOOLEAN result; // al
  unsigned int *Buffer; // rcx
  unsigned int *v7; // r8
  unsigned int *v8; // r10
  unsigned int v9; // r9d

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
  v7 = &Buffer[(unsigned __int64)StartingIndex >> 5];
  v8 = &Buffer[(unsigned __int64)v4 >> 5];
  if ( v7 == v8 )
  {
    v9 = 0xFFFFFFFF >> (32 - v3) << StartingIndex;
    return (*v7 & v9) == 0;
  }
  if ( ((-1 << StartingIndex) & *v7) != 0 )
    return 0;
  if ( ++v7 == v8 )
  {
LABEL_14:
    v9 = 0xFFFFFFFF >> (-1 - v4);
    return (*v7 & v9) == 0;
  }
  result = 0;
  while ( !*v7 )
  {
    if ( ++v7 == v8 )
      goto LABEL_14;
  }
  return result;
}
