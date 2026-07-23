/*
 * XREFs of RtlAreBitsClear @ 0x180083E10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlAreBitsClear(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG Length)
{
  char v3; // r9
  unsigned int v4; // r11d
  BOOLEAN result; // al
  unsigned int *Buffer; // rcx
  unsigned int *v7; // rdx
  unsigned int *v8; // r10
  unsigned int v9; // r8d

  v3 = StartingIndex;
  v4 = StartingIndex + Length - 1;
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
    v9 = 0xFFFFFFFF >> (32 - Length) << v3;
    return (v9 & *v7) == 0;
  }
  if ( ((-1 << v3) & *v7) != 0 )
    return 0;
  if ( ++v7 == v8 )
  {
LABEL_12:
    v9 = 0xFFFFFFFF >> (-1 - v4);
    return (v9 & *v7) == 0;
  }
  result = 0;
  while ( !*v7 )
  {
    if ( ++v7 == v8 )
      goto LABEL_12;
  }
  return result;
}
