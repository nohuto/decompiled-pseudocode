/*
 * XREFs of RtlNumberOfSetBits @ 0x1800E47A0
 * Callers:
 *     RtlNumberOfClearBits @ 0x1800E4750 (RtlNumberOfClearBits.c)
 *     RtlSparseBitmapCtxCountBitsSet @ 0x180100420 (RtlSparseBitmapCtxCountBitsSet.c)
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlNumberOfSetBits(PRTL_BITMAP BitMapHeader)
{
  unsigned int *Buffer; // r11
  unsigned int v2; // esi
  unsigned int SizeOfBitMap; // r14d
  unsigned int v4; // r8d
  ULONG v5; // ebx
  int v6; // r9d
  unsigned int v7; // edi
  unsigned int v8; // edx
  int v9; // r8d
  unsigned int v10; // r9d
  int i; // r10d
  char v12; // cl
  unsigned int v13; // eax
  __int64 v14; // r9
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  unsigned int v17; // edi
  char v18; // cl

  Buffer = BitMapHeader->Buffer;
  v2 = BitMapHeader->SizeOfBitMap & 7;
  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v4 = BitMapHeader->SizeOfBitMap >> 3;
  v5 = 0;
  v6 = (unsigned __int8)Buffer & 7;
  v7 = v4 + (v2 != 0);
  if ( 8 - (unsigned __int64)((__int64)BitMapHeader->Buffer & 7) > (unsigned __int64)BitMapHeader->SizeOfBitMap >> 3 )
  {
    v9 = 0;
    v8 = v7;
    v10 = 0;
  }
  else
  {
    v8 = 8 - v6;
    v9 = ((_BYTE)v4 - (8 - (_BYTE)v6)) & 7;
    if ( v2 )
      ++v9;
    v10 = v7 - v9 - v8;
  }
  for ( i = 0; v8; --v8 )
  {
    v12 = *(_BYTE *)Buffer;
    Buffer = (unsigned int *)((char *)Buffer + 1);
    if ( i == v7 - 1 && v2 )
      v12 &= byte_180119330[SizeOfBitMap & 7];
    ++i;
    v5 += RtlpBitsClearTotal[(unsigned __int8)~v12];
  }
  if ( v10 )
  {
    v13 = ((v10 - 1) >> 3) + 1;
    v14 = v13;
    i += 8 * v13;
    do
    {
      v15 = *(_QWORD *)Buffer;
      v16 = *(_QWORD *)Buffer;
      Buffer += 2;
      v5 += (unsigned int)((0x101010101010101LL
                          * ((((v15 - ((v16 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                            + (((v15 - ((v16 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                            + ((((v15 - ((v16 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                              + (((v15 - ((v16 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
      --v14;
    }
    while ( v14 );
  }
  if ( v9 )
  {
    v17 = v7 - 1;
    do
    {
      v18 = *(_BYTE *)Buffer;
      Buffer = (unsigned int *)((char *)Buffer + 1);
      if ( i == v17 && v2 )
        v18 &= byte_180119330[SizeOfBitMap & 7];
      ++i;
      v5 += RtlpBitsClearTotal[(unsigned __int8)~v18];
      --v9;
    }
    while ( v9 );
  }
  return v5;
}
