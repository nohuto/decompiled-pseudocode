/*
 * XREFs of RtlCopyBitMap @ 0x1400EF940
 * Callers:
 *     HvSynchronizeAndDropTemporaryBins @ 0x140130874 (HvSynchronizeAndDropTemporaryBins.c)
 *     PopSaveHiberContext @ 0x1403F4080 (PopSaveHiberContext.c)
 *     MiSelectRelocationStartHint @ 0x14046BBA8 (MiSelectRelocationStartHint.c)
 *     HvpAddBin @ 0x1404AEB9C (HvpAddBin.c)
 *     PspQueryRateControlHistory @ 0x140506D2C (PspQueryRateControlHistory.c)
 * Callees:
 *     RtlpCopyBitMapTailToHead @ 0x1400EFA08 (RtlpCopyBitMapTailToHead.c)
 *     memmove @ 0x140195740 (memmove.c)
 */

void __cdecl RtlCopyBitMap(PRTL_BITMAP Source, PRTL_BITMAP Destination, ULONG TargetBit)
{
  unsigned __int64 SizeOfBitMap; // rcx
  unsigned int v5; // eax
  char v6; // r10
  unsigned __int64 v8; // rbx
  unsigned int *Buffer; // rcx
  unsigned int *v10; // r11
  unsigned int *v11; // r9
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rbx
  size_t v15; // rdi
  _BYTE *v16; // r9
  __int64 v17; // r8
  unsigned __int64 v18; // rsi
  unsigned int v19; // edx
  char v20; // di

  SizeOfBitMap = Source->SizeOfBitMap;
  v5 = Destination->SizeOfBitMap - TargetBit;
  v6 = TargetBit;
  v8 = v5;
  if ( (unsigned int)SizeOfBitMap <= v5 )
    v8 = SizeOfBitMap;
  if ( v8 )
  {
    Buffer = Destination->Buffer;
    v10 = Source->Buffer;
    v11 = &Buffer[(unsigned __int64)TargetBit >> 5];
    if ( v10 > v11 || v11 > &v10[(v8 - 1) >> 5] )
    {
      v12 = (unsigned __int64)TargetBit >> 3;
      if ( (TargetBit & 7) != 0 )
      {
        v17 = TargetBit & 0x1F;
        if ( v8 >= 0x20 )
        {
          v18 = v8 >> 5;
          v8 += -32LL * (v8 >> 5);
          do
          {
            *v11 = ((((1 << (32 - v17)) - 1) & *v10) << v17) | ((1 << v17) - 1) & *v11;
            ++v11;
            v19 = (*v10++ & ~((1 << (32 - v17)) - 1)) >> (32 - v17);
            *v11 = v19 | ~((1 << v17) - 1) & *v11;
            --v18;
          }
          while ( v18 );
        }
        if ( v8 )
        {
          v20 = 32 - (v6 & 0x1F);
          if ( v8 > 32 - v17 )
          {
            *v11 = ((*v10 & ((1 << v20) - 1)) << v17) | *v11 & ((1 << v17) - 1);
            v11[1] = ((*v10 & (((1 << (v8 + v17 - 32)) - 1) << v20)) >> v20) | v11[1] & ~((1 << (v8 + v17 - 32)) - 1);
          }
          else
          {
            *v11 = ((*v10 & ((1 << v8) - 1)) << v17) | *v11 & ~(((1 << v8) - 1) << v17);
          }
        }
      }
      else
      {
        v13 = v8;
        v14 = v8 & 7;
        v15 = v13 >> 3;
        if ( v15 )
          memmove((char *)Buffer + v12, Source->Buffer, v15);
        if ( v14 )
        {
          v16 = (char *)Destination->Buffer + v15 + v12;
          *v16 &= ~((1 << v14) - 1);
          *v16 |= (unsigned __int8)((1 << v14) - 1) & *((_BYTE *)Source->Buffer + v15);
        }
      }
    }
    else
    {
      RtlpCopyBitMapTailToHead(Source, Destination, TargetBit, (unsigned int)v8);
    }
  }
}
