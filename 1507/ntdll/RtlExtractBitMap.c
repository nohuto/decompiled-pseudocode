/*
 * XREFs of RtlExtractBitMap @ 0x1800D2830
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180098200 (memmove.c)
 */

void __cdecl RtlExtractBitMap(PRTL_BITMAP Source, PRTL_BITMAP Destination, ULONG TargetBit, ULONG NumberOfBits)
{
  ULONG v5; // eax
  unsigned __int64 SizeOfBitMap; // rbx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rbx
  size_t v11; // rdi
  unsigned int *v12; // r8
  unsigned int *Buffer; // r11
  unsigned __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int *v16; // rdi
  unsigned __int64 v17; // rdx
  unsigned int v18; // eax

  v5 = Source->SizeOfBitMap - TargetBit;
  SizeOfBitMap = v5;
  if ( NumberOfBits <= v5 )
    SizeOfBitMap = NumberOfBits;
  if ( SizeOfBitMap > Destination->SizeOfBitMap )
    SizeOfBitMap = Destination->SizeOfBitMap;
  if ( SizeOfBitMap )
  {
    v8 = (unsigned __int64)TargetBit >> 3;
    if ( (TargetBit & 7) != 0 )
    {
      Buffer = Destination->Buffer;
      v14 = (unsigned __int64)TargetBit >> 5;
      v15 = TargetBit & 0x1F;
      v16 = &Source->Buffer[v14];
      if ( SizeOfBitMap >= 0x20 )
      {
        v17 = SizeOfBitMap >> 5;
        SizeOfBitMap += -32LL * (SizeOfBitMap >> 5);
        do
        {
          v18 = ~((1 << v15) - 1) & *v16++;
          *Buffer = v18 >> v15;
          *Buffer++ |= (((1 << v15) - 1) & *v16) << (32 - v15);
          --v17;
        }
        while ( v17 );
      }
      if ( SizeOfBitMap )
      {
        if ( SizeOfBitMap > 32 - v15 )
          *Buffer = ((*v16 & ~((1 << v15) - 1)) >> v15) | ((v16[1] & ((1 << (SizeOfBitMap + v15 - 32)) - 1)) << (32 - v15));
        else
          *Buffer = (*v16 & (((1 << SizeOfBitMap) - 1) << v15)) >> v15;
      }
    }
    else
    {
      v9 = SizeOfBitMap;
      v10 = SizeOfBitMap & 7;
      v11 = v9 >> 3;
      if ( v11 )
        memmove(Destination->Buffer, (char *)Source->Buffer + v8, v11);
      if ( v10 )
      {
        v12 = Destination->Buffer;
        *((_BYTE *)v12 + v11) &= ~((1 << v10) - 1);
        *((_BYTE *)v12 + v11) |= (unsigned __int8)((1 << v10) - 1) & *((_BYTE *)Source->Buffer + v11 + v8);
      }
    }
  }
}
