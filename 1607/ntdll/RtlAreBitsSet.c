/*
 * XREFs of RtlAreBitsSet @ 0x180070380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlAreBitsSet(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG Length)
{
  char v3; // r9
  unsigned int v4; // r11d
  unsigned int *Buffer; // rcx
  unsigned int *v6; // r8
  unsigned int *v7; // r10
  unsigned int v8; // eax
  unsigned int v9; // r9d

  v3 = Length;
  v4 = Length + StartingIndex - 1;
  if ( v4 < BitMapHeader->SizeOfBitMap )
  {
    if ( Length <= 1 )
    {
      if ( Length == 1 )
        return _bittest((const signed __int32 *)BitMapHeader->Buffer, StartingIndex);
    }
    else
    {
      Buffer = BitMapHeader->Buffer;
      v6 = &Buffer[(unsigned __int64)StartingIndex >> 5];
      v7 = &Buffer[(unsigned __int64)v4 >> 5];
      v8 = *v6;
      if ( v6 == v7 )
      {
        v9 = 0xFFFFFFFF >> (32 - v3) << StartingIndex;
        return (v9 & v8) == v9;
      }
      if ( ((-1 << StartingIndex) & v8) == -1 << StartingIndex )
      {
        while ( ++v6 != v7 )
        {
          if ( *v6 != -1 )
            return 0;
        }
        v8 = *v6;
        v9 = 0xFFFFFFFF >> (-1 - v4);
        return (v9 & v8) == v9;
      }
    }
  }
  return 0;
}
