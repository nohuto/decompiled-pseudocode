/*
 * XREFs of RtlNumberOfSetBitsInRange @ 0x1800E4950
 * Callers:
 *     RtlNumberOfClearBitsInRange @ 0x1800E4770 (RtlNumberOfClearBitsInRange.c)
 *     RtlpSparseBitmapCtxCountRangeBits @ 0x180100BE8 (RtlpSparseBitmapCtxCountRangeBits.c)
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlNumberOfSetBitsInRange(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG Length)
{
  ULONG v4; // r10d
  ULONG v5; // r8d
  char *v6; // r9
  ULONG v7; // r11d
  __int64 v8; // rdi
  ULONG v9; // esi
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  char v13; // dl
  int v14; // edx
  unsigned __int8 v15; // cl
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  char v19; // cl

  if ( StartingIndex >= BitMapHeader->SizeOfBitMap )
    return -1;
  if ( BitMapHeader->SizeOfBitMap - StartingIndex < Length )
    return -1;
  v4 = 0;
  if ( !Length )
    return -1;
  v5 = StartingIndex >> 3;
  v6 = (char *)BitMapHeader->Buffer + (StartingIndex >> 3);
  v7 = (Length + StartingIndex - 1) >> 3;
  v8 = StartingIndex & 7;
  v9 = (Length + StartingIndex - 1) & 7;
  if ( StartingIndex >> 3 == v7 )
    return RtlpBitsClearTotal[(unsigned __int8)~(*v6 & byte_180119330[v8 + 16] & byte_180119330[v9 + 1])];
  if ( (((unsigned __int8)Length | (unsigned __int8)StartingIndex) & 0x3F) != 0 )
  {
    if ( (StartingIndex & 7) != 0 )
    {
      v13 = *v6++;
      ++v5;
      v4 = RtlpBitsClearTotal[(unsigned __int8)~(v13 & byte_180119330[v8 + 16])];
    }
    v14 = 8 - (v5 & 7);
    if ( (v14 & 0xFFFFFFF7) != 0 )
    {
      do
      {
        if ( v5 >= v7 )
          break;
        ++v5;
        v15 = ~*v6++;
        v4 += RtlpBitsClearTotal[v15];
        --v14;
      }
      while ( v14 );
    }
    for ( ;
          (unsigned __int64)v5 + 8 <= v7;
          v4 += (unsigned int)((0x101010101010101LL
                              * ((((v16 - ((v17 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                + (((v16 - ((v17 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                + ((((v16 - ((v17 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                  + (((v16 - ((v17 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 )
    {
      v16 = *(_QWORD *)v6;
      v5 += 8;
      v17 = *(_QWORD *)v6;
      v6 += 8;
    }
    if ( v5 < v7 )
    {
      v18 = v7 - v5;
      do
      {
        v19 = *v6++;
        v4 += RtlpBitsClearTotal[(unsigned __int8)~v19];
        --v18;
      }
      while ( v18 );
    }
    return v4 + RtlpBitsClearTotal[(unsigned __int8)~(*v6 & byte_180119330[v9 + 1])];
  }
  else
  {
    v11 = ((Length - 1) >> 6) + 1;
    do
    {
      v12 = *(_QWORD *)v6;
      v6 += 8;
      v4 += (unsigned int)((0x101010101010101LL
                          * ((((v12 - ((v12 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                            + (((v12 - ((v12 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                            + ((((v12 - ((v12 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                              + (((v12 - ((v12 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
      --v11;
    }
    while ( v11 );
    return v4;
  }
}
