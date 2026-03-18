/*
 * XREFs of RtlAreBitsClear @ 0x14001B1AC
 * Callers:
 *     HvGetHiveLogFileStatus @ 0x1403D4408 (HvGetHiveLogFileStatus.c)
 *     CmpMountPreloadedHives @ 0x14051EACC (CmpMountPreloadedHives.c)
 *     CmpLoadHiveThread @ 0x140520FE4 (CmpLoadHiveThread.c)
 *     HvpDropPagedBins @ 0x140521774 (HvpDropPagedBins.c)
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
  BOOLEAN result; // al
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
  v6 = &Buffer[(unsigned __int64)StartingIndex >> 5];
  v7 = &Buffer[(unsigned __int64)v4 >> 5];
  if ( v6 == v7 )
  {
    v9 = 0xFFFFFFFF >> (32 - v3) << StartingIndex;
    return (*v6 & v9) == 0;
  }
  if ( ((-1 << StartingIndex) & *v6) != 0 )
    return 0;
  if ( ++v6 == v7 )
  {
LABEL_9:
    v9 = 0xFFFFFFFF >> (-1 - v4);
    return (*v6 & v9) == 0;
  }
  result = 0;
  while ( !*v6 )
  {
    if ( ++v6 == v7 )
      goto LABEL_9;
  }
  return result;
}
