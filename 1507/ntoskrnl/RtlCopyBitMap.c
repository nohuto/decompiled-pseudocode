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

unsigned __int64 __fastcall RtlCopyBitMap(unsigned int *a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 result; // rax
  char v6; // r10
  unsigned __int64 v8; // rbx
  __int64 v9; // rcx
  int *v10; // r11
  int *v11; // r9
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rbx
  size_t v15; // rdi
  _BYTE *v16; // r9
  __int64 v17; // r8
  unsigned __int64 v18; // rsi
  unsigned int v19; // edx
  char v20; // di

  v4 = *a1;
  result = *(_DWORD *)a2 - a3;
  v6 = a3;
  v8 = (unsigned int)result;
  if ( (unsigned int)v4 <= (unsigned int)result )
    v8 = v4;
  if ( v8 )
  {
    v9 = *(_QWORD *)(a2 + 8);
    v10 = (int *)*((_QWORD *)a1 + 1);
    result = (unsigned __int64)a3 >> 5;
    v11 = (int *)(v9 + 4 * result);
    if ( v10 > v11 || (result = (unsigned __int64)&v10[(v8 - 1) >> 5], (unsigned __int64)v11 > result) )
    {
      v12 = (unsigned __int64)a3 >> 3;
      if ( (a3 & 7) != 0 )
      {
        v17 = a3 & 0x1F;
        if ( v8 >= 0x20 )
        {
          v18 = v8 >> 5;
          v8 += -32LL * (v8 >> 5);
          do
          {
            *v11 = ((((1 << (32 - v17)) - 1) & *v10) << v17) | ((1 << v17) - 1) & *v11;
            ++v11;
            v19 = (*v10++ & (unsigned int)~((1 << (32 - v17)) - 1)) >> (32 - v17);
            result = v19 | ~((1 << v17) - 1) & *v11;
            *v11 = result;
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
            result = ((*v10 & (unsigned int)(((1 << (v8 + v17 - 32)) - 1) << v20)) >> v20) | v11[1] & ~((1 << (v8 + v17 - 32)) - 1);
            v11[1] = result;
          }
          else
          {
            result = ((*v10 & ((1 << v8) - 1)) << v17) | *v11 & (unsigned int)~(((1 << v8) - 1) << v17);
            *v11 = result;
          }
        }
      }
      else
      {
        v13 = v8;
        v14 = v8 & 7;
        v15 = v13 >> 3;
        if ( v15 )
          result = (unsigned __int64)memmove((void *)(v12 + v9), *((const void **)a1 + 1), v15);
        if ( v14 )
        {
          v16 = (_BYTE *)(*(_QWORD *)(a2 + 8) + v15 + v12);
          *v16 &= ~((1 << v14) - 1);
          result = *((_QWORD *)a1 + 1);
          *v16 |= (unsigned __int8)((1 << v14) - 1) & *(_BYTE *)(v15 + result);
        }
      }
    }
    else
    {
      return RtlpCopyBitMapTailToHead(a1, a2, a3, (unsigned int)v8);
    }
  }
  return result;
}
