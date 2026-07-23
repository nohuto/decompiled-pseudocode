/*
 * XREFs of RtlAreBitsClear @ 0x180090210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlAreBitsClear(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG Length)
{
  char v3; // r9
  unsigned int v4; // r11d
  unsigned int *Buffer; // rcx
  unsigned int *v6; // rdx
  unsigned int *v7; // r10
  BOOLEAN result; // al
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
  v6 = &Buffer[(unsigned __int64)StartingIndex >> 5];
  v7 = &Buffer[(unsigned __int64)v4 >> 5];
  if ( v6 == v7 )
  {
    v9 = 0xFFFFFFFF >> (32 - Length) << v3;
    return (v9 & *v6) == 0;
  }
  if ( ((-1 << v3) & *v6) != 0 )
    return 0;
  if ( ++v6 == v7 )
  {
LABEL_9:
    v9 = 0xFFFFFFFF >> (-1 - v4);
    return (v9 & *v6) == 0;
  }
  result = 0;
  while ( !*v6 )
  {
    if ( ++v6 == v7 )
      goto LABEL_9;
  }
  return result;
}
